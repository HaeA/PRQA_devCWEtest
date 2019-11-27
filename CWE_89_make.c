//89 make
void main() {
	int * res;
	mysql_init(&mysql);
    mysql_real_connect(&mysql, NULL, user, passwd , NULL, NULL ,0 );

    mysql_query(&mysql,"use test");

    mysql_query(&mysql,"SELECT * FROM table"); 

	}