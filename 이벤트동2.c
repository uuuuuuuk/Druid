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

extern int 호감도, 배고픔, 목마름;
extern char 동물이름[30];
int 나어때진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 발톱 다듬었어?");
	gotoxy(x, y + 2);
	printf("불이 더 커졌는데?");
	gotoxy(x, y + 4);
	printf("달라진게 있어..?");

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
			return 나어때진1선택(y - 19);
		}
		}
	}
}
int 나어때진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"이걸 알다니??"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 10;

			동물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"음..모르면 모른다고해"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 15;

			동물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"역시 못 알아 보네.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 5;

			동물진화1();

		}

	}
}
int 여행진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 여행 가고 싶어 놀러가자!\n\n                                          %s와 함께 어디로 놀러 가시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 산으로!");
	gotoxy(x, y + 2);
	printf("바다로!");
	gotoxy(x, y + 4);
	printf("나 피곤한데 나중에가자..");
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
			return 여행진1선택(y - 19);
		}
		}
	}
}
int 여행진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"여긴 언제와도 기분이 좋아져"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 10;
			배고픔 -= 3;
			목마름 -= 3;
			동물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"어째서 여길 온거야?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;
			배고픔 -= 3;
			목마름 -= 3;

			동물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화1();

		}

	}
}

int 옆집고양이진1() {
	int x = 42, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집 친구 정말 멋있는 것 같아.\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 너도 그 친구처럼 멋있어!");
	gotoxy(x, y + 2);
	printf("네가 더 멋있어.");
	gotoxy(x, y + 4);
	printf("걔가? 멋있다고?? 말도 안돼!");

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
			return 옆집고양이진1선택(y - 19);
		}
		}
	}
}
int 옆집고양이진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"히히 고마워"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"꼭 그렇게 비교 해야해?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 15;

			동물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"내 친구 욕하지마! "RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화1();

		}

	}
}
int 빗질진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("                 나랑 놀자!!\n\n                                  %s과 어떻게 노시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 나뭇가지를 이용한 칼싸움");
	gotoxy(x, y + 2);
	printf("술래잡기");
	gotoxy(x, y + 4);
	printf("나뭇잎을 이용한 퀴즈놀이");

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
			return 빗질진1선택(y - 19);
		}
		}
	}
}
int 빗질진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"내가 너를 어떻게 이겨!"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"너 너무 느려.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"내가 성장한 기분이들어!!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 10;

			동물진화1();

		}

	}
}
int 영화진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나랑 게임 할래?!\n\n                                        %s와 어떤 개임을 하시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 총게임");
	gotoxy(x, y + 2);
	printf("아케이드게임");
	gotoxy(x, y + 4);
	printf("게임은 무슨 게임 공부나해!");

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
			return 영화진1선택(y - 19);
		}
		}
	}
}
int 영화진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이거 너무 어려워.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"히히 내가 이겼다!!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물진화1();
			
		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"잔소리 좀 그만해!"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 18;

			동물진화1();

		}

	}
}
void 이벤트진1(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		나어때진1();
		break;
	case 1:
		여행진1();
		break;
	case 2:
		빗질진1();
		break;
	case 3:
		옆집고양이진1();
		break;
	case 4:
		영화진1();
		break;

	}
}