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

extern int 호감도3, 배고픔3, 목마름3;
extern char 식물이름[30];
int 나어때3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 오늘 입술이 예뻐졌네~");
	gotoxy(x, y + 2);
	printf("오늘 잎이 좀더 생기있는데~");
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
			return 나어때선택3(y - 19);
		}
		}
	}
}
int 나어때선택3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 잎에 물기가 생겼잖아.. 누구랑 헷갈린거야???"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 입술이 더 커졌잖아.. 누구랑 헷갈린거야????"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"헐 대박 역시 너밖에 없어~!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;

			식물놀사물();

		}

	}
}
int 여행3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 여행 가고 싶어 놀러가자!\n\n                                          %s와 함께 어디로 놀러 가시겠습니까?", 식물이름);


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
			return 여행선택3(y - 19);
		}
		}
	}
}
int 여행선택3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"오 내 친구들이 많아!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 5;
			배고픔3 -= 3;
			목마름3 -= 3;
			식물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"시원해!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 8;
			배고픔3 -= 3;
			목마름3 -= 3;

			식물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물놀사물();

		}

	}
}

int 옆집감나무3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집 나무 정말 멋있는 것 같아.\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 너도 멋있어");
	gotoxy(x, y + 2);
	printf("너도 미래에 저렇게 큰 나무가 될 수 있을거야");
	gotoxy(x, y + 4);
	printf("옆집 나무가? 멋있다고?? 다 죽어가던데?");

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
			return 옆집감나무선택3(y - 19);
		}
		}
	}
}
int 옆집감나무선택3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"굳이 억지로 칭찬하지 않아도 돼."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그래..? 고마워.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 15;

			식물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"혹시..옆집 나무 싫어해?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물놀사물();

		}

	}
}
int 가려워3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 저기 사과가 먹고 싶어 좀 도와줘!\n\n                                        %s에 어떻게 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 좀 힘들긴한데 따줄게.");
	gotoxy(x, y + 2);
	printf("그냥 내가 새로 사줄게 가자");
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
			return 가려워선택3(y - 19);
		}
		}
	}
}
int 가려워선택3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"히히 맛있다"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 8;

			식물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"됐어 그냥 안먹을래."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 12;

			식물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"좀 도와주지.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물놀사물();

		}

	}
}
int 영화3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 식물원 가보고 싶어!\n\n                                        %s애개 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 식물원은 좀..");
	gotoxy(x, y + 2);
	printf("식물원보다 여기 주변 식물이 더 많은데?");
	gotoxy(x, y + 4);
	printf("음..다음에 같이가자..");

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
			return 영화선택3(y - 19);
		}
		}
	}
}
int 영화선택3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"너 식물 싫어해..?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"식물원 궁금한데.. 좀 가주지"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 12;

			식물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그래!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;

			식물놀사물();

		}

	}
}
void 이벤트3(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		나어때3();
		break;
	case 1:
		여행3();
		break;
	case 2:
		가려워3();
		break;
	case 3:
		옆집감나무3();
		break;
	case 4:
		영화3();
		break;

	}
}