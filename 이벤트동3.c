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
int 나어때진진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 오늘 손톱 다듬었네~");
	gotoxy(x, y + 2);
	printf("불이 커졌는데?");
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
			return 나어때진진1선택(y - 19);
		}
		}
	}
}
int 나어때진진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이렇게 손톱이 긴데 다듬었다고?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 15;

			동물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"어떻게 알았어?"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 15;

			동물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"쯧"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화2();

		}

	}
}
int 여행진진1() {
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
			return 여행진진1선택(y - 19);
		}
		}
	}
}
int 여행진진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"산은 언제나 좋지!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;
			배고픔 -= 3;
			목마름 -= 3;
			동물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"돌았냐?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;
			배고픔 -= 3;
			목마름 -= 3;

			동물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화2();

		}

	}
}

int 옆집고양이진진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          내가 세상에서 제일 멋있어!\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 뭐래..ㅋ");
	gotoxy(x, y + 2);
	printf("제발 정신 좀 차려!");
	gotoxy(x, y + 4);
	printf("너가? 멋있다고?? 말도 안돼!");

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
			return 옆집고양이진진1선택(y - 19);
		}
		}
	}
}
int 옆집고양이진진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"질투하는 너도 멋있는 나라면 이해할 수 있지!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"흥!"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이것봐라?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화2();

		}

	}
}
int 빗질진진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나랑 놀자!\n\n                                        %s에 어떻게 노시겠습니까?", 동물이름);


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
			return 빗질진진1선택(y - 19);
		}
		}
	}
}
int 빗질진진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"킬킬 이제 날 못이기는 군"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이게 말이 된다고 생각해?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 12;

			동물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이게 노는거냐?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화2();

		}

	}
}
int 영화진진1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 간식사줘!\n\n                                        %s에게 무슨 간식을 주시겠습니까?", 동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 육포");
	gotoxy(x, y + 2);
	printf("감자칩");
	gotoxy(x, y + 4);
	printf("아이스크림");

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
			return 영화진진1선택(y - 19);
		}
		}
	}
}
int 영화진진1선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"고기가 짱이지"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"감자는 좀.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 12;

			동물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"차가운거 싫어.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물진화2();

		}

	}
}
void 이벤트진진1(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		나어때진진1();
		break;
	case 1:
		여행진진1();
		break;
	case 2:
		빗질진진1();
		break;
	case 3:
		옆집고양이진진1();
		break;
	case 4:
		영화진진1();
		break;
	
	}
}