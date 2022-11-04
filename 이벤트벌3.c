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
int 나어때진진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 날개 무늬가 달라졌네~");
	gotoxy(x, y + 2);
	printf("눈이 더 예뻐졌네~");
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
			return 나어때진진2선택(y - 19);
		}
		}
	}
}
int 나어때진진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"눈이 달라 졌잖아.. 누구랑 헷갈린거야???"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 오늘 무늬바꿨잖아.. 누구랑 헷갈린거야????"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"헐 대박 역시 너밖에 없어~!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 10;

			벌레진화2();

		}

	}
}
int 여행진진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 여행 가고 싶어 놀러가자!\n\n                                          %s와 함께 어디로 놀러 가시겠습니까?", 벌레이름);


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
			return 여행진진2선택(y - 19);
		}
		}
	}
}
int 여행진진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으..더워 짜증나.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 5;
			배고픔2 -= 3;
			목마름2 -= 3;
			벌레진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"시원해!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 10;
			배고픔2 -= 3;
			목마름2 -= 3;

			벌레진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화2();

		}

	}
}

int 옆집고양이진진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆에 꽃이 정말 예쁘게 폈어!!\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 나중에 같이 꽃 보러 가자!");
	gotoxy(x, y + 2);
	printf("그래 정말 좋았겠다.");
	gotoxy(x, y + 4);
	printf("응.");

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
			return 옆집고양이진진2선택(y - 19);
		}
		}
	}
}
int 옆집고양이진진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그래!!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;

			벌레진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"응..좋았어.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나랑 대화하기 싫어?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레진화2();

		}

	}
}
int 빗질진진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나랑 같이 놀자!!\n\n                                        %s에 어떤 놀이를 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 숲 속에서 하는 숨바꼭질");
	gotoxy(x, y + 2);
	printf("초원에서 같이 춤추기");
	gotoxy(x, y + 4);
	printf("너랑 어떻게 놀아..?");

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
			return 빗질진진2선택(y - 19);
		}
		}
	}
}
int 빗질진진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"숲 속에서 하면 평생 못찾을 것 같은데?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 8;

			벌레진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"정말 좋아!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 12;

			벌레진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"그럼 나랑 놀기 싫어..?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화2();

		}

	}
}
int 영화진진2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          나 배고픈데 혹시 먹을거 있어?\n\n                                        %s에게 무엇을 주시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 달달한 젤리");
	gotoxy(x, y + 2);
	printf("짭짤한 닭꼬치");
	gotoxy(x, y + 4);
	printf("없어.");

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
			return 영화진진2선택(y - 19);
		}
		}
	}
}
int 영화진진2선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"와 젤리다!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;
			배고픔2 += 4;
			벌레진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으악 못먹겠어.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 12;
			배고픔2 += 5;
			벌레진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"배고픈데.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레진화2();

		}

	}
}
void 이벤트진진2(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		나어때진진2();
		break;
	case 1:
		여행진진2();
		break;
	case 2:
		빗질진진2();
		break;
	case 3:
		옆집고양이진진2();
		break;
	case 4:
		영화진진2();
		break;
	
	}
}
