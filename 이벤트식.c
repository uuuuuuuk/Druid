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

extern int ȣ����3, �����3, �񸶸�3;
extern char �Ĺ��̸�[30];
int ���3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ��� �޶����� ����?\n\n                                         %s���� � ���� �Ͻðڽ��ϱ�?", �Ĺ��̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� �Լ��� ��������~");
	gotoxy(x, y + 2);
	printf("���� ���� ���� �����ִµ�~");
	gotoxy(x, y + 4);
	printf("�޶����� �־�..?");

	while (1)
	{
		n = Ű����();
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
			return �������3(y - 19);
		}
		}
	}
}
int �������3(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �ٿ� ���Ⱑ �����ݾ�.. ������ �򰥸��ž�???"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 15;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �Լ��� �� Ŀ���ݾ�.. ������ �򰥸��ž�????"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 15;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�� ��� ���� �ʹۿ� ����~!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 10;

			�Ĺ���繰();

		}

	}
}
int ����3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ���� ���� �;� �����!\n\n                                          %s�� �Բ� ���� � ���ðڽ��ϱ�?", �Ĺ��̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ������!");
	gotoxy(x, y + 2);
	printf("�ٴٷ�!");
	gotoxy(x, y + 4);
	printf("�� �ǰ��ѵ� ���߿�����..");
	while (1)
	{
		n = Ű����();
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
			return ���༱��3(y - 19);
		}
		}
	}
}
int ���༱��3(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�� �� ģ������ ����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 5;
			�����3 -= 3;
			�񸶸�3 -= 3;
			�Ĺ���繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�ÿ���!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 8;
			�����3 -= 3;
			�񸶸�3 -= 3;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"��.");
			Sleep(1001);
			system("cls");
			ȣ����3 -= 10;

			�Ĺ���繰();

		}

	}
}

int ����������3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          ���� ���� ���� ���ִ� �� ����.\n\n                                       %s���� � ����� �Ͻðڽ��ϱ�?", �Ĺ��̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �ʵ� ���־�");
	gotoxy(x, y + 2);
	printf("�ʵ� �̷��� ������ ū ������ �� �� �����ž�");
	gotoxy(x, y + 4);
	printf("���� ������? ���ִٰ�?? �� �׾����?");

	while (1)
	{
		n = Ű����();
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
			return ��������������3(y - 19);
		}
		}
	}
}
int ��������������3(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���� ������ Ī������ �ʾƵ� ��."RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 8;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�׷�..? ����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 15;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"Ȥ��..���� ���� �Ⱦ���?"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 10;

			�Ĺ���繰();

		}

	}
}
int ������3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �� ���� ����� �԰� �;� �� ������!\n\n                                        %s�� ��� �Ͻðڽ��ϱ�?", �Ĺ��̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �� ������ѵ� ���ٰ�.");
	gotoxy(x, y + 2);
	printf("�׳� ���� ���� ���ٰ� ����");
	gotoxy(x, y + 4);
	printf("������?");

	while (1)
	{
		n = Ű����();
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
			return ����������3(y - 19);
		}
		}
	}
}
int ����������3(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� ���ִ�"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 8;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�ƾ� �׳� �ȸ�����."RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 12;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� ��������.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 10;

			�Ĺ���繰();

		}

	}
}
int ��ȭ3() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �� �Ĺ��� ������ �;�!\n\n                                        %s�ְ� � ����� �Ͻðڽ��ϱ�?", �Ĺ��̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �Ĺ����� ��..");
	gotoxy(x, y + 2);
	printf("�Ĺ������� ���� �ֺ� �Ĺ��� �� ������?");
	gotoxy(x, y + 4);
	printf("��..������ ���̰���..");

	while (1)
	{
		n = Ű����();
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
			return ��ȭ����3(y - 19);
		}
		}
	}
}
int ��ȭ����3(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �Ĺ� �Ⱦ���..?"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 8;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�Ĺ��� �ñ��ѵ�.. �� ������"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 -= 12;

			�Ĺ���繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�׷�!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����3 += 10;

			�Ĺ���繰();

		}

	}
}
void �̺�Ʈ3(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		���3();
		break;
	case 1:
		����3();
		break;
	case 2:
		������3();
		break;
	case 3:
		����������3();
		break;
	case 4:
		��ȭ3();
		break;

	}
}