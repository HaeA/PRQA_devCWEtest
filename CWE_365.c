//c 365

#include <sys/types.h>
#include <sys/stat.h>
int main(argc,argv){
struct stat *sb;
time_t timer;
lstat("bar.sh",sb);
printf("%d\n",sb->st_ctime);
switch(sb->st_ctime % 2){
case 0: printf("One option\n");
break;
case 1: printf("another option\n");
break;
default: printf("huh\n");
break;
}
return 0;
}