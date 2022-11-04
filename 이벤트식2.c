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
int 나어때진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           난.. 너무 못생긴거 같아..\n\n                                         %s에게 어떤 말을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 아냐 너 잘생겼어 무슨 소리야!");
	gotoxy(x, y + 2);
	printf("괜찮아 넌 특별하니까~");
	gotoxy(x, y + 4);
	printf("내가 너보다 못생겼어..");

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
			return 나어때선택진3(y - 19);
		}
		}
	}
}
int 나어때선택진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"아니야 거짓말 하지 않아도돼"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"특별하면 뭐해 못생겼는데"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"미..미안"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;

			식물진화1();

		}

	}
}
int 여행진3() {
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
			return 여행선택진3(y - 19);
		}
		}
	}
}
int 여행선택진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"여긴 정말 편한느낌이 들어!"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 5;
			배고픔3 -= 3;
			목마름3 -= 3;
			식물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"여긴 이제 별로야.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 5;
			배고픔3 -= 3;
			목마름3 -= 3;

			식물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"응.");
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화1();

		}

	}
}

int 옆집감나무진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          옆집 나무는 갈수록 커지네..\n\n                                       %s에게 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 너도 꾸준히 커지고 있어");
	gotoxy(x, y + 2);
	printf("크다고 다 좋은게 아니야");
	gotoxy(x, y + 4);
	printf("나무니까.. 당연한거지..?");

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
			return 옆집감나무선택진3(y - 19);
		}
		}
	}
}
int 옆집감나무선택진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"난 쟤만큼 커지지 못하잖아.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그런가..?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 10;

			식물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"내가 그걸 몰라서 물어봐?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화1();

		}

	}
}
int 가려워진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         나 너무 심심해 놀아줘!!\n\n                                        %s에 무엇을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 무궁화꽃이 피었습니다");
	gotoxy(x, y + 2);
	printf("숨바꼭질");
	gotoxy(x, y + 4);
	printf("너랑 놀시간 없어 저기가서 혼자 놀아 !");

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
			return 가려워선택진3(y - 19);
		}
		}
	}
}
int 가려워선택진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"난 다리가 없어서 뛰지 못하는데..?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"흐흐 재밌다"RESET);
			Sleep(1001);
			system("cls");
			호감도3 += 12;

			식물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"으..응.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 15;

			식물진화1();

		}

	}
}
int 영화진3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         난 왜 걸을 수 없을까..?\n\n                                        %s에게 어떤 대답을 하시겠습니까?", 식물이름);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" 그야 넌 식물이니까 당연하지!");
	gotoxy(x, y + 2);
	printf("너도 언젠간 걸을 수 있을거야");
	gotoxy(x, y + 4);
	printf("글쎄다..?");

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
			return 영화선택진3(y - 19);
		}
		}
	}
}
int 영화선택진3(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {


		if (선택완료 == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"난 왜 식물로 태어났을까.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 8;

			식물진화1();

		}
		else if (선택완료 == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"그래..? 정말..?"RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 12;

			식물진화1();

		}
		else if (선택완료 == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"너도 잘 모르는구나.."RESET);
			Sleep(1001);
			system("cls");
			호감도3 -= 10;

			식물진화1();

		}

	}
}
void 이벤트진3(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		나어때진3();
		break;
	case 1:
		여행진3();
		break;
	case 2:
		가려워진3();
		break;
	case 3:
		옆집감나무진3();
		break;
	case 4:
		영화진3();
		break;

	}
}