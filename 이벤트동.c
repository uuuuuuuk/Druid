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

extern int ȣ����, �����, �񸶸�;
extern char �����̸�[30];
int ���() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ��� �޶����� ����?\n\n                                         %s���� � ���� �Ͻðڽ��ϱ�?",�����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� �� Ŀ����~");
	gotoxy(x, y + 2);
	printf("���� �� ����� ���̴°� ���� �ľ���?");
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
			return �������(y - 19);
		}
		}
	}
}
int �������(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �״�е�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 15;
		
			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� ���� �İŵ�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 15;

			������繰();

		}else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�� ��� ���� �ʹۿ� ����~!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 10;

			������繰();

		}

	}
}
int ����() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ���� ���� �;� �����!\n\n                                          %s�� �Բ� ���� � ���ðڽ��ϱ�?",�����̸�);


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
			return ���༱��(y - 19);
		}
		}
	}
}
int ���༱��(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� �ʹ� �ų�!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 10;
			����� -= 3;
			�񸶸� -= 3;
			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �� �ִ� ���� ����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 7;
			����� -= 3;
			�񸶸� -= 3;

			������繰();

		}else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������繰();

		}

	}
}

int ���������() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          ������ �� ģ�� �Ϳ��� �ʾ�?\n\n                                       %s���� � ����� �Ͻðڽ��ϱ�?",�����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �ʵ� �Ϳ���");
	gotoxy(x, y + 2);
	printf("�װ� �� �Ϳ���");
	gotoxy(x, y + 4);
	printf("�°�? �Ϳ��ٰ�?? ���� �ȵ�!");

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
			return ��������̼���(y - 19);
		}
		}
	}
}
int ��������̼���(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�ʵ�? �׷� �� ģ���� �Ϳ��ٴ°ž�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�׷�..? ����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 15;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�׳� ����ǵ� ���� ������ Ȥ�� ��Ⱦ�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������繰();

		}

	}
}
int ����() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         ���� ����!!\n\n                                        %s�� ��� ��ðڽ��ϱ�?",�����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���������� �̿��� Į�ο�");
	gotoxy(x, y + 2);
	printf("�������");
	gotoxy(x, y + 4);
	printf("�������� �̿��� �������");

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
			return ���̼���(y - 19);
		}
		}
	}
}
int ���̼���(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���� ���� �׸���!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� �� ��ƺ���~"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 12;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�̰� ��°� �ƴϾ�.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������繰();

		}

	}
}
int ��ȭ() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �츮 ��ȭ���� ����?!\n\n                                        %s�� �Բ� ���� ��ȭ�� ���� ���ðڽ��ϱ�?",�����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ������ ���̴� ��ȭ");
	gotoxy(x, y + 2);
	printf("���� ��ȭ�� �ļ���");
	gotoxy(x, y + 4);
	printf("�ȵ�.�� ����.");

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
			return ��ȭ����(y - 19);
		}
		}
	}
}
int ��ȭ����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� ��մ� ����� ��ȭ����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���� ��̾���.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 8;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 12;

			������繰();

		}

	}
}
void �̺�Ʈ(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		���();
		break;
	case 1:
		����();
		break;
	case 2:
		����();
		break;
	case 3:
		���������();
		break;
	case 4:
		��ȭ();
		break;
	}
}