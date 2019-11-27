//headertest
#include "./headertest.h"
#include <stdio.h>

char *username = "admin";
char *pass = "password";

int AuthenticateUser(char *inUser, char *inPass) {
if (strncmp(username, inUser, strlen(inUser))) {
logEvent("Auth failure of username using strlen of inUser");
return(AUTH_FAIL);
}
if (! strncmp(pass, inPass, strlen(inPass))) {
logEvent("Auth success of password using strlen of inUser");
return(AUTH_SUCCESS);
}
else {
logEvent("Auth fail of password using sizeof");
return(AUTH_FAIL);
}
}

int main (int argc, char **argv) {
int authResult;
if (argc < 3) {
ExitError("Usage: Provide a username and password");
}
authResult = AuthenticateUser(argv[1], argv[2]);
if (authResult == AUTH_SUCCESS) {
DoAuthenticatedTask(argv[1]);
}
else {
ExitError("Authentication failed");
}
a = 3;
	print("%c", a);
}