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
int 나어때2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 오늘 빗질이 잘 먹었네~");
	gotoxy(x, y + 2);
	printf("앞머리 잘랐네~");
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
			return 나어때선택2(y - 19);
		}
		}
	}
}
int 나어때선택2(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 앞머리 잘랐잖아.. 누구랑 헷갈린거야???"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 오늘 빗질했잖아.. 누구랑 헷갈린거야????"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 15;

			벌레놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"헐 대박 역시 너밖에 없어~!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 10;

			벌레놀사물();

		}

	}
}
int 여행2() {
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
			return 여행선택2(y - 19);
		}
		}
	}
}
int 여행선택2(int a) {

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
			벌레놀사물();

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

			벌레놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레놀사물();

		}

	}
}

int 옆집풍뎅이2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집 친구 멋있지 않아?\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 너도 멋있어");
	gotoxy(x, y + 2);
	printf("음..별로");
	gotoxy(x, y + 4);
	printf("글쎄 안봐서 모르겠네..?");

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
			return 옆집풍뎅이선택2(y - 19);
		}
		}
	}
}
int 옆집풍뎅이선택2(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"흐흐 알고 있어"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;

			벌레놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"그래.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 5;

			벌레놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"그때 본거 알고 있는데 왜 거짓말해?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레놀사물();

		}

	}
}
int 가려워2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 너무 더워 부채질 좀 해줘!\n\n                                        %s에 어떻게 하시겠습니까?", 벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 세게 부채질한다");
	gotoxy(x, y + 2);
	printf("약하게 부채질한다");
	gotoxy(x, y + 4);
	printf("싫은데?");

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
			return 가려워선택2(y - 19);
		}
		}
	}
}
int 가려워선택2(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으윽 이러다 날라가겠어!"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 8;

			벌레놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"선선하니 좋구만"RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 12;

			벌레놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"더운데.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레놀사물();

		}

	}
}
int 영화2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         으윽 나 감기 걸렸나봐..\n\n                                        %s에게 어떤걸 하시겠습니까?",벌레이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 간호해준다");
	gotoxy(x, y + 2);
	printf("약을 사준다");
	gotoxy(x, y + 4);
	printf("감기는 기다리면 사라져.");

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
			return 영화선택2(y - 19);
		}
		}
	}
}
int 영화선택2(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"고마워.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 += 8;

			벌레놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으윽 배탈났어.."RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 8;

			벌레놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"어떻게 이럴수가 있어?"RESET);
			Sleep(1001);
			system("cls");
			호감도2 -= 10;

			벌레놀사물();

		}

	}
}
void 이벤트2(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		나어때2();
		break;
	case 1:
		여행2();
		break;
	case 2:
		가려워2();
		break;
	case 3:
		옆집풍뎅이2();
		break;
	case 4:
		영화2();
		break;

	}
}