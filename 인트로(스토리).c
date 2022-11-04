#include<stdio.h>
#include<windows.h>

#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

//다른 코드에 있는게 안가져와져서 넣어놈(좌표이동코드)
void gotoxy2(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

//앞에 에니메이션?같은거 넣을 예정
int 인트로() {
	int x = 20, y = 13;
	char 이름[][15] = {0,};
	system("cls");

	gotoxy(40,16);
	printf(RESET"이름:");
	scanf_s("%s", 이름,sizeof(이름));

	에니메이션(이름);

	system("cls");
	printf("\n\n\n");
	printf(RESET"                        정말로 나를 부르는 듯한 소리가 들린다.나는 어디로 가야할까?\n\n");
	printf("	                          어디로 가시겠습니까?(키보드 A,D로 선택) \n\n\n\n");

	printf("                                               [ 선택 ]\n\n\n");

	gotoxy2(x-13, y  + 8);
	printf("-넓은 평야가 보이는 초원");
	gotoxy2(x,y);
	printf(YELLOW"■"RESET"");
	gotoxy2(x+20, y + 8);
	printf("-습기가 가득한 늪지대");
	gotoxy2(x+30, y);
	printf("□");
	gotoxy2(x + 53, y + 8);
	printf("-나무가 우거진 숲");
	gotoxy2(x+60, y);
	printf("□");
	printf("\n\n");
	
	while (1)
	{
		int n = 키보드();
		switch (n) {
			case LEFT:
			{
				if (x > 20) {
					gotoxy2(x, y);
					printf("□");
					gotoxy2(x-=30, y);
					printf(YELLOW"■"RESET);
				}
				break;
			}
			case RIGHT:
			{
				if (x < 80) {
					gotoxy2(x, y);
					printf("□");
					gotoxy2(x+=30, y);
					printf(YELLOW"■"RESET);
				}
				break;
			}

			case SUBMIT:
			{
				return 종류선택(x - 20);
			}
		}
	}

	
}

//플레이 할 동물 선택
int 종류선택(int a) {

	int 선택완료;
	선택완료 = a;

	while (1) {
		
			
			if (선택완료 == 0)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
				동물직전();

			}
			else if (선택완료 == 30)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
				벌레직전();

			}
			else if (선택완료 == 60)
			{

				system("cls");
				식물직전();
				
				
			}
			

	}
}
