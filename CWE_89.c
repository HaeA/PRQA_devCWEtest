 #include<mysql.h>
 #include<stdio.h>
 #include<stdlib.h>


int main()
{
    MYSQL mysql;
    MYSQL_RES *res;
	MYSQL_ROW row;
    int fields;
    int i;

    mysql_init(&mysql);
    mysql_real_connect(&mysql, NULL, user, passwd , NULL, NULL ,0 );

    mysql_query(&mysql,"use test");

    mysql_query(&mysql,"SELECT * FROM table"); 

    res=mysql_store_result(&mysql); 

    fields = mysql_num_fields(res);

    while(row = mysql_fetch_row(res)) 
    {                                             
       for(i = 0; i< fields ; i++) 
            printf("%s",row[i]);
       }
    }
	
    mysql_free_result(res);
    mysql_close(&mysql);
}
