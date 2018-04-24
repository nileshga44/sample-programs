 #include <mysql/mysql.h>
 #include <stdio.h>

/*
 * Date: 2018-04-24
 * 
 * Description: Sample program to connect MySQL database, execute some query and
 *              parse result. Column values are as per select statement like
 *              row[0] corresponds to value of first column selected, row[1] is
 *              value of second column in select statement.
 *
 * Compile this with mysqlclient library as:
 *      gcc -g connect_mysql.c -lmysqlclient
 */
int main() {
  MYSQL *conn;
  MYSQL_RES *res;
  MYSQL_ROW row;
  char *server = "localhost";
  char *user = "root";
  char *password = "abc123"; /* set me first */
  char *database = "test";
  conn = mysql_init(NULL);
  /* Connect to database */
  if (!mysql_real_connect(conn, server,
        user, password, database, 0, NULL, 0)) {
    fprintf(stderr, "%s\n", mysql_error(conn));
    exit(1);
  }

  /* send SQL query */
  if (mysql_query(conn, "show status")) {
    fprintf(stderr, "%s\n", mysql_error(conn));
    exit(1);
  }
  res = mysql_use_result(conn);

  /* Sample output of show status command.
  mysql> show status;
  +-----------------------------------------------+---------------------------+
  Variable_name                                   | Value                     |
  +-----------------------------------------------+---------------------------+
  | Aborted_clients                               | 8                         |
  | Aborted_connects                              | 1                         |
  | Binlog_cache_disk_use                         | 0                         |
  +-----------------------------------------------+---------------------------+
  *
  * This query gives me 2 columns so we are reading first column value
  * (Variable names) on 0th index and Value from 1st index.
  */
  
  /* Query output */
  printf("MySQL status variables:\n");
  while ((row = mysql_fetch_row(res)) != NULL)
    printf("Variable name: %s\t\t\t\tStatus: %s\n", row[0], row[1]);

  /* close connection */
  mysql_free_result(res);
  mysql_close(conn);
}
