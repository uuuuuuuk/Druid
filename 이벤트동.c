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
int 나어때() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?",동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 불이 더 커졌네~");
	gotoxy(x, y + 2);
	printf("오늘 좀 깔끔해 보이는거 보니 씻었어?");
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
			return 나어때선택(y - 19);
		}
		}
	}
}
int 나어때선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"불 그대론데?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 15;
		
			동물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 매일 씻거든?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 15;

			동물놀사물();

		}else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"헐 대박 역시 너밖에 없어~!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 10;

			동물놀사물();

		}

	}
}
int 여행() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 여행 가고 싶어 놀러가자!\n\n                                          %s와 함께 어디로 놀러 가시겠습니까?",동물이름);


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
			return 여행선택(y - 19);
		}
		}
	}
}
int 여행선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"히히 너무 신나!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 10;
			배고픔 -= 3;
			목마름 -= 3;
			동물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"놀 수 있는 곳이 없어.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 7;
			배고픔 -= 3;
			목마름 -= 3;

			동물놀사물();

		}else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"응."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물놀사물();

		}

	}
}

int 옆집고양이() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집에 내 친구 귀엽지 않아?\n\n                                       %s에게 어떤 대답을 하시겠습니까?",동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 너도 귀여워");
	gotoxy(x, y + 2);
	printf("네가 더 귀여워");
	gotoxy(x, y + 4);
	printf("걔가? 귀엽다고?? 말도 안돼!");

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
			return 옆집고양이선택(y - 19);
		}
		}
	}
}
int 옆집고양이선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"너도? 그럼 내 친구도 귀엽다는거야?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그래..? 고마워.."RESET);
			Sleep(1001);
			system("cls");
			호감도 += 15;

			동물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"그냥 물어본건데 왤케 오바해 혹시 찔렸어?"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물놀사물();

		}

	}
}
int 놀이() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나랑 놀자!!\n\n                                        %s과 어떻게 노시겠습니까?",동물이름);


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
			return 놀이선택(y - 19);
		}
		}
	}
}
int 놀이선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으윽 아파 그만해!"RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"하하 나 잡아봐라~"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 12;

			동물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이건 노는게 아니야.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 10;

			동물놀사물();

		}

	}
}
int 영화() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         우리 영화보러 갈래?!\n\n                                        %s와 함께 무슨 영화를 보러 가시겠습니까?",동물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 무서워 보이는 영화");
	gotoxy(x, y + 2);
	printf("유명 영화에 후속작");
	gotoxy(x, y + 4);
	printf("안돼.돈 없어.");

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
			return 영화선택(y - 19);
		}
		}
	}
}
int 영화선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"정말 재밌는 히어로 영화였어!"RESET);
			Sleep(1001);
			system("cls");
			호감도 += 8;

			동물놀사물();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"별로 재미없어.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 8;

			동물놀사물();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"응.."RESET);
			Sleep(1001);
			system("cls");
			호감도 -= 12;

			동물놀사물();

		}

	}
}
void 이벤트(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		나어때();
		break;
	case 1:
		여행();
		break;
	case 2:
		놀이();
		break;
	case 3:
		옆집고양이();
		break;
	case 4:
		영화();
		break;
	}
}