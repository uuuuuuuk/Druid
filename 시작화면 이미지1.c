
#include<stdio.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"

//시작화면 그림
void 시작화면() {
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf(
		GREEN"\t\t\t\t\t┏━━━┓   *   ┏┓\n"
		"\t\t\t\t\t┗┓┏┓┃       ┃┃\n"
		"\t\t\t\t\t*┃┃┃┣━┳┓┏┳┳━┛┃\n"
		"\t\t\t\t\t ┃┃┃┃┏┫┃┃┣┫┏┓┃ \n"
		"\t\t\t\t\t┏┛┗┛┃┃┃┗┛┃┃┗┛┃\n"
		"\t\t\t\t\t┗━━━┻┛┗━━┻┻━━┛\n"RESET
	);
}