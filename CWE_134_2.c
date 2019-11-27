//CWE-134_2
int main(int argc, char **argv){
char buf[128];
...
snprintf(buf,128,argv[1]);
}