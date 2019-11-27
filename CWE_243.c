//c 243

int main() {
chroot("/var/ftproot");

//char name = "filetest"
char name = "../filetest";
fgets(filename, sizeof(filename), network);

//localfile = fopen(name, "r");
localfile = fopen("../filetest", "r");

mysql_query();
while ((len = fread(buf, 1, sizeof(buf), localfile)) != EOF) {
fwrite(buf, 1, sizeof(buf), network);
}
fclose(localfile);
}