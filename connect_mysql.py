#!/usr/bin/python

# Date: 2018-04-27
#
# Prerequisit: sudo apt-get install python2.7-mysqldb
#
# Description: Demo program to connect with MySQL, executing query and parsing
# query.

import MySQLdb
import datetime

def print_log(log_str):
  print str(datetime.datetime.now()) + ' - ' + log_str

ctr = 0
print_log('Connecting MySQL...')
db = MySQLdb.connect('35.185.247.248', 'root', 'abc123', 'nickfury_dev')

cursor = db.cursor()

print_log('Executing query...')
cursor.execute("SELECT Users.Id, Users.PersonType, Users.Name, "
                  "Users.BuildingCode, Users.StartDate, Users.ReportingManager, "
                  "Users.Tier, Users.VendorCompany, Users.UserName, Users.Site, "
                  "Users.TrainingRole, Users.VendorTeamLead, "
                  "Users.VendorChannel, Users.VendorBillable, "
                  "Users.SupportedRegion "
                  "FROM Users WHERE Users.IsActive = 1")

print_log('Parsing result...')
for u in cursor.fetchall():
  # print u[0], u[1], u[2], ...
  ctr += 1
print_log('Total number of records: ' + str(ctr))

cursor.close()
db.close()


# Sample output: It takes less 2 seconds to fetch all 7689 records from
# database.

# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:02.658969 - Connecting MySQL...
# 2018-04-25 15:30:03.586444 - Executing query...
# 2018-04-25 15:30:05.202192 - Parsing result...
# 2018-04-25 15:30:05.203024 - Total number of records: 7689
# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:08.886860 - Connecting MySQL...
# 2018-04-25 15:30:09.821874 - Executing query...
# 2018-04-25 15:30:11.457682 - Parsing result...
# 2018-04-25 15:30:11.458619 - Total number of records: 7689
# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:12.590674 - Connecting MySQL...
# 2018-04-25 15:30:13.536987 - Executing query...
# 2018-04-25 15:30:15.176142 - Parsing result...
# 2018-04-25 15:30:15.176704 - Total number of records: 7689
# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:17.638755 - Connecting MySQL...
# 2018-04-25 15:30:18.580657 - Executing query...
# 2018-04-25 15:30:20.223432 - Parsing result...
# 2018-04-25 15:30:20.224486 - Total number of records: 7689
# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:21.016207 - Connecting MySQL...
# 2018-04-25 15:30:21.937611 - Executing query...
# 2018-04-25 15:30:23.544153 - Parsing result...
# 2018-04-25 15:30:23.544598 - Total number of records: 7689
# hansrajd@hansrajd-linux:~/sample-programs$ python connect_mysql.py
# 2018-04-25 15:30:24.230144 - Connecting MySQL...
# 2018-04-25 15:30:25.169027 - Executing query...
# 2018-04-25 15:30:26.802720 - Parsing result...
# 2018-04-25 15:30:26.803314 - Total number of records: 7689

