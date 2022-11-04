#include<stdio.h>
#include <locale.h>
#include<conio.h>
#include<Windows.h>
#include <stdlib.h>
#include<time.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4
#define R 5

extern int 호감도2, 배고픔2, 목마름2;
extern char 벌레이름[30];
int 나어때진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           음 음음 음음음음 음음?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 오늘 껍질이 좀더 반질반질 하네~");
	gotoxy(x, y + 2);
	printf("바다 같이 갔다 올까?");
	gotoxy(x, y + 4);
	printf("뭐라는 거야..");

	while (1)
	{
		n = 키보드();
		switch (n) {
		case UP:
		{
			if (y > 19) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y -= 2);
				printf(YELLOW">");
			}
			break;
		}
		case DOWN:
		{
			if (y < 23) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y += 2);
				printf(YELLOW">");
			}
			break;
		}

		case SUBMIT:
		{
			system("cls");
			return 나어때진2선택(y - 19);
		}
		}
	}
}
int 나어때진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"음 음음음!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 15;

			벌레진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음음음.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}

	}
}
int 여행진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           음 음음 음음 음음 음음음음!\n\n                                          %s에게 어떤 말을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 산으로 놀러 갈까?");
	gotoxy(x, y + 2);
	printf("몸 좀 닦아줄까?");
	gotoxy(x, y + 4);
	printf("뭐라는 거야..");
	while (1)
	{
		n = 키보드();
		switch (n) {
		case UP:
		{
			if (y > 19) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y -= 2);
				printf(YELLOW">");
			}
			break;
		}
		case DOWN:
		{
			if (y < 23) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y += 2);
				printf(YELLOW">");
			}
			break;
		}

		case SUBMIT:
		{
			system("cls");
			return 여행진2선택(y - 19);
		}
		}
	}
}
int 여행진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"음!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;
			배고픔2 -= 3;
			목마름2 -= 3;
			벌레진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음..?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;
	

			벌레진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"음..");
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}

	}
}

int 옆집고양이진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          음 음음음음 음음음?\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 멋있어!");
	gotoxy(x, y + 2);
	printf("귀여워!");
	gotoxy(x, y + 4);
	printf("뭐라는 거야..");

	while (1)
	{
		n = 키보드();
		switch (n) {
		case UP:
		{
			if (y > 19) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y -= 2);
				printf(YELLOW">");
			}
			break;
		}
		case DOWN:
		{
			if (y < 23) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y += 2);
				printf(YELLOW">");
			}
			break;
		}

		case SUBMIT:
		{
			system("cls");
			return 옆집고양이진2선택(y - 19);
		}
		}
	}
}
int 옆집고양이진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"음음!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;

			벌레진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음..음.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}

	}
}
int 빗질진2() {
	int x = 42, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         음 음음 음음음 음음음음?\n\n                                        %s에 어떤 행동을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 단데기를 긁어 준다");
	gotoxy(x, y + 2);
	printf("단데기를 씻겨 준다");
	gotoxy(x, y + 4);
	printf("뭐라는 거야..");

	while (1)
	{
		n = 키보드();
		switch (n) {
		case UP:
		{
			if (y > 19) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y -= 2);
				printf(YELLOW">");
			}
			break;
		}
		case DOWN:
		{
			if (y < 23) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y += 2);
				printf(YELLOW">");
			}
			break;
		}

		case SUBMIT:
		{
			system("cls");
			return 빗질진2선택(y - 19);
		}
		}
	}
}
int 빗질진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음!?!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 8;

			벌레진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"음음"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 12;

			벌레진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음,,"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}

	}
}
int 영화진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         음음 음음음음 음음!\n\n                                        %s와 어떤 행동을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 영화를 함께 보러간다");
	gotoxy(x, y + 2);
	printf("시원한 물을 뿌려준다");
	gotoxy(x, y + 4);
	printf("뭐라는 거야..");

	while (1)
	{
		n = 키보드();
		switch (n) {
		case UP:
		{
			if (y > 19) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y -= 2);
				printf(YELLOW">");
			}
			break;
		}
		case DOWN:
		{
			if (y < 23) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y += 2);
				printf(YELLOW">");
			}
			break;
		}

		case SUBMIT:
		{
			system("cls");
			return 영화진2선택(y - 19);
		}
		}
	}
}
int 영화진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"음음!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;

			벌레진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음??"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 12;

			벌레진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화1();

		}

	}
}
void 이벤트진2(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		나어때진2();
		break;
	case 1:
		여행진2();
		break;
	case 2:
		빗질진2();
		break;
	case 3:
		옆집고양이진2();
		break;
	case 4:
		영화진2();
		break;

	}
}