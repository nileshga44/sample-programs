# Checks for sqlite database integrity using table count. If is expected then
# crates a backup copy of that database otherwise copies from last backup.

echo $(($(date +'%s * 1000 + %-N / 1000000')))
DB_SCHEMA_PATH=/opt/ems/utils/
DB_PATH=/var/EMS/
DB_BACKUP_PATH=/var/
DB_BACKUP_FILE=ems_db_backup.tgz
NODE_ID_RANGE=[0-255]
ALL_NODE_DB_TABLE_COUNT=8
PGW_NODE_DB_TABLE_COUNT=59
SGW_NODE_DB_TABLE_COUNT=52
MME_NODE_DB_TABLE_COUNT=94
HSS_NODE_DB_TABLE_COUNT=30
PCRF_NODE_DB_TABLE_COUNT=33
TEMP_TABLE_COUNT=-1
DB_INTEGRITY_FLAG=1
DB_EXT_TYPE=*.db
DATABASE_NAME=database.db
NODE_NAMES=( "pgw" "sgw" "mme" "hss" "pcrf" )

count_tables_in_db()
{
	tmp_tables=`sqlite3 -line $1 ".table"`
	count=0
	for table in $tmp_tables
	do
		count=`expr $count + 1`
	done
	TEMP_TABLE_COUNT=$count
	#echo "Database path : "$1
	#echo "Table count : "$count
}

compare_table_count()
{
	echo "hello"
}
set_table_count()
{
	case $1 in 
		"pgw" )
			TEMP_TABLE_COUNT=$PGW_NODE_DB_TABLE_COUNT
			;;
		"sgw" )
			TEMP_TABLE_COUNT=$SGW_NODE_DB_TABLE_COUNT
			;;
		"mme" )
			TEMP_TABLE_COUNT=$MME_NODE_DB_TABLE_COUNT
			;;
		"hss" )
			TEMP_TABLE_COUNT=$HSS_NODE_DB_TABLE_COUNT
			;;
		"pcrf" )
			TEMP_TABLE_COUNT=$PCRF_NODE_DB_TABLE_COUNT
			;;
	esac
}
check_node_db_integrity()
{
	node_database=`find ${DB_PATH}${1}/ -name $DATABASE_NAME`
	#echo "node_database : "$node_database
	for current_db in $node_database
	do
		#echo "current_db is : "$current_db
		count_tables_in_db $current_db
		#compare_table_count $1
		#echo "----------------------"
		#echo $1
		#echo $TEMP_TABLE_COUNT
		#echo "----------------------"
		if [ "pgw" == $1 ] && [ $TEMP_TABLE_COUNT -ne $PGW_NODE_DB_TABLE_COUNT ]
		then
			DB_INTEGRITY_FLAG=0
			return 1
		elif [ "sgw" == $1 ] && [ $TEMP_TABLE_COUNT -ne $SGW_NODE_DB_TABLE_COUNT ]
		then
			DB_INTEGRITY_FLAG=0
			return 1
		elif [ "mme" == $1 ] && [ $TEMP_TABLE_COUNT -ne $MME_NODE_DB_TABLE_COUNT ]
		then
			DB_INTEGRITY_FLAG=0
			return 1
		elif [ "hss" == $1 ] && [ $TEMP_TABLE_COUNT -ne $HSS_NODE_DB_TABLE_COUNT ]
		then
			DB_INTEGRITY_FLAG=0
			return 1
		elif [ "pcrf" == $1 ] && [ $TEMP_TABLE_COUNT -ne $PCRF_NODE_DB_TABLE_COUNT ]
		then
			DB_INTEGRITY_FLAG=0
		else
			#echo "DB is not corrupted : " $current_db
			DB_INTEGRITY_FLAG=1
		fi
	done


}
db_table_count_init()
{
	count_tables_in_db ${DB_SCHEMA_PATH}"all_node_db.db"
	ALL_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
	count_tables_in_db ${DB_SCHEMA_PATH}"pgw/"${DATABASE_NAME}
	PGW_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
	count_tables_in_db ${DB_SCHEMA_PATH}"sgw/"${DATABASE_NAME}
	SGW_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
	count_tables_in_db ${DB_SCHEMA_PATH}"mme/"${DATABASE_NAME}
	MME_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
	count_tables_in_db ${DB_SCHEMA_PATH}"hss/"${DATABASE_NAME}
	HSS_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
	count_tables_in_db ${DB_SCHEMA_PATH}"pcrf/"${DATABASE_NAME}
	PCRF_NODE_DB_TABLE_COUNT=$TEMP_TABLE_COUNT
}
check_db_integrity()
{
	count_tables_in_db ${DB_PATH}"all_node_db.db"
	if [ $TEMP_TABLE_COUNT -lt $ALL_NODE_DB_TABLE_COUNT ]
	then
		DB_INTEGRITY_FLAG=0
		return 1
	fi
	for node in "${NODE_NAMES[@]}"
	do
		check_node_db_integrity $node
		if [ 0 -eq $DB_INTEGRITY_FLAG ]
		then
			return 1
		fi
	done
}

#Intialize count variables
db_table_count_init

#check count for all tables is as expected or not
check_db_integrity

if [ 0 -eq $DB_INTEGRITY_FLAG ]
then
	echo "EMS DB corrupted, copying from backup..."
	if [ -f ${DB_BACKUP_PATH}${DB_BACKUP_FILE} ]
	then
		tar -xPvzf ${DB_BACKUP_PATH}${DB_BACKUP_FILE} > /dev/null 2>&1
	else
		echo "No Backup DB Found !!"
	fi
	DB_INTEGRITY_FLAG=0
else
	#echo "Creating EMS DB backup..."
	current_data_base=`find $DB_PATH -name $DB_EXT_TYPE`
	tar -cPvzf ${DB_BACKUP_PATH}${DB_BACKUP_FILE} $current_data_base > /dev/null 2>&1 
fi
echo $(($(date +'%s * 1000 + %-N / 1000000')))
