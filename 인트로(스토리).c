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

//�ٸ� �ڵ忡 �ִ°� �Ȱ��������� �־��(��ǥ�̵��ڵ�)
void gotoxy2(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

//�տ� ���ϸ��̼�?������ ���� ����
int ��Ʈ��() {
	int x = 20, y = 13;
	char �̸�[][15] = {0,};
	system("cls");

	gotoxy(40,16);
	printf(RESET"�̸�:");
	scanf_s("%s", �̸�,sizeof(�̸�));

	���ϸ��̼�(�̸�);

	system("cls");
	printf("\n\n\n");
	printf(RESET"                        ������ ���� �θ��� ���� �Ҹ��� �鸰��.���� ���� �����ұ�?\n\n");
	printf("	                          ���� ���ðڽ��ϱ�?(Ű���� A,D�� ����) \n\n\n\n");

	printf("                                               [ ���� ]\n\n\n");

	gotoxy2(x-13, y  + 8);
	printf("-���� ��߰� ���̴� �ʿ�");
	gotoxy2(x,y);
	printf(YELLOW"��"RESET"");
	gotoxy2(x+20, y + 8);
	printf("-���Ⱑ ������ ������");
	gotoxy2(x+30, y);
	printf("��");
	gotoxy2(x + 53, y + 8);
	printf("-������ ����� ��");
	gotoxy2(x+60, y);
	printf("��");
	printf("\n\n");
	
	while (1)
	{
		int n = Ű����();
		switch (n) {
			case LEFT:
			{
				if (x > 20) {
					gotoxy2(x, y);
					printf("��");
					gotoxy2(x-=30, y);
					printf(YELLOW"��"RESET);
				}
				break;
			}
			case RIGHT:
			{
				if (x < 80) {
					gotoxy2(x, y);
					printf("��");
					gotoxy2(x+=30, y);
					printf(YELLOW"��"RESET);
				}
				break;
			}

			case SUBMIT:
			{
				return ��������(x - 20);
			}
		}
	}

	
}

//�÷��� �� ���� ����
int ��������(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {
		
			
			if (���ÿϷ� == 0)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
				��������();

			}
			else if (���ÿϷ� == 30)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
				��������();

			}
			else if (���ÿϷ� == 60)
			{

				system("cls");
				�Ĺ�����();
				
				
			}
			

	}
}
