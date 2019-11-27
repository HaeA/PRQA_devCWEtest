//c 558

void main() {
pwd = getpwnam(getlogin());
if (isTrustedGroup(pwd->pw_gid)) {
allow();
} else {
deny();
}
}