#include<stdio.h>
#include<windows.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
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
#define R 5
void ������();
void ����();
void gotoxy(int, int);
int Ű����();

;//��ǥ �̵���Ű�� �ڵ�
void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
//���� �𸣰ڴµ� ����?�� �־ Ȥ�� ���� �־��
void ����() {
	system("mode con cols=56 lines = 20 | title �� �� �� ��");
}
//������ ���� ȭ��ǥ �����̴� �ڵ�
void ������() {
	int x = 44,y = 19,n;

	gotoxy(x-2, y);
	printf(YELLOW">"RESET" ���� ����");
	gotoxy(x, y+2);
	printf("���� ����");
	gotoxy(x,y+4);
	printf("  ����");
	while (1)
	{
		n = Ű����();
		switch (n) {
			case UP:
			{
				if (y > 19) {
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, y -=2);
					printf(YELLOW">");
				}
				break;
			}
			case DOWN:
			{
				if (y < 23) {
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, y +=2);
					printf(YELLOW">");
				}
				break;
			}

			case SUBMIT:
			{
				return y - 19;
			}
		}
	}
}

//w a s d�� �����ϰ� �ϴ� �ڵ�
int Ű����() {
	char temp = getch();
	if (temp == 72 || temp == 224 || temp == 'w' || temp == 'W')
		return UP;
	else if (temp == 80 || temp == 224 || temp == 's' || temp == 'S')
		return DOWN;
	else if (temp == 75 || temp == 224 || temp == 'a' || temp == 'A')
		return LEFT;
	else if (temp == 77 || temp == 224 || temp == 'd' || temp == "D")
		return RIGHT;
	else if (temp == ' ')
		return SUBMIT;
	else if (temp == 'r' || temp == 'R')
		return R;
}
