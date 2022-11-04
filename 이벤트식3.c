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
int 나어때진진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 어디 달라진거 없어?\n\n                                         %s에게 어떤 말을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 머리에 이파리가 커졌는데~");
	gotoxy(x, y + 2);
	printf("이빨이 더 뾰족해졌다~");
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
			return 나어때선택진진3(y - 19);
		}
		}
	}
}
int 나어때선택진진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 이빨 갈아온거 안보여?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"맞아 오늘 이빨을 좀더 갈아왔어"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;

			식물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나 이빨 갈아온거 안보여?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화2();

		}

	}
}
int 여행진진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           나 여행 가고 싶어 놀러가자!\n\n                                          %s와 함께 어디로 놀러 가시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 숲으로!");
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
			return 여행선택진진3(y - 19);
		}
		}
	}
}
int 여행선택진진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"여긴 햇빛이 너무 안들어와..."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;
			배고픔3 -= 3;
			목마름3 -= 3;
			식물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"햇빛이 잘 들어와서 좋아"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;
			배고픔3 -= 3;
			목마름3 -= 3;

			식물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화2();

		}

	}
}

int 옆집감나무진진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집에 나무는 여전히 크구나..\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 나무까진 아니지만 너도 충분히 커");
	gotoxy(x, y + 2);
	printf("하지만 옆집나무는 말하지 못하지");
	gotoxy(x, y + 4);
	printf("넌 나무랑 달라 나무랑 비교하려 하지마");

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
			return 옆집감나무선택진진3(y - 19);
		}
		}
	}
}
int 옆집감나무선택진진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"결국 나무보단 작다는 거잖아.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"하하 그것도 그렇네"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 15;

			식물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"나랑 같은 식물인데 얼마나 다르다고.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화2();

		}

	}
}
int 가려워진진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 너무 가려워 이파리 좀 긁어줘!\n\n                                    %s에 이파리를 무엇으로 긁으시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 손");
	gotoxy(x, y + 2);
	printf("빗");
	gotoxy(x, y + 4);
	printf("나뭇가지");

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
			return 가려워선택진진3(y - 19);
		}
		}
	}
}
int 가려워선택진진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"아직도 가려워.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"이제야 좀 낫네"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 12;

			식물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"지금 뭐로 긁는 거야!!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화2();

		}

	}
}
int 영화진진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 너무 심심해 놀아줘!!\n\n                                        %s에게 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 그럼 숨바꼭질 하면서 놀까?");
	gotoxy(x, y + 2);
	printf("영화 같이 볼래?");
	gotoxy(x, y + 4);
	printf("컴퓨터 게임 같이 하자! ");

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
			return 영화선택진진3(y - 19);
		}
		}
	}
}
int 영화선택진진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"이 덩치로 여기서 어떻게 숨어!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화2();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"영화..좋은데?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 12;

			식물진화2();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"게임 하기에는 내 손이 없어.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화2();

		}

	}
}
void 이벤트진진3(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		나어때진진3();
		break;
	case 1:
		여행진진3();
		break;
	case 2:
		가려워진진3();
		break;
	case 3:
		옆집감나무진진3();
		break;
	case 4:
		영화진진3();
		break;
	
	}
}