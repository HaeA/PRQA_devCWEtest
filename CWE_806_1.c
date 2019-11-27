//c 806_1

...
char source[21] = "the character string";
char dest[12];
strncpy(dest, source, sizeof(source)-1);
...
/* 이렇게 수정할 것
...
char source[21] = "the character string";
char dest[12];
strncpy(dest, source, sizeof(dest)-1);
...
*/