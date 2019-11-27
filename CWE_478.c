//c 478

#define FAILED 0
#define PASSED 1
int result;
...
result = security_check(data);
switch (result) {
case FAILED:
printf("Security check failed!\n");
exit(-1);
//Break never reached because of exit() 
break;

case PASSED:
printf("Security check passed.\n");
break;
}
// program execution continues... 
...

/* 이렇게 수정할 것
#define FAILED 0
#define PASSED 1
int result;
...
result = security_check(data);
switch (result) {
case FAILED:
printf("Security check failed!\n");
exit(-1);
//Break never reached because of exit() 
break;

case PASSED:
printf("Security check passed.\n");
break;

default:
printf("Unknown error (%d), exiting...\n",result);
exit(-1);
}
*/