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

extern int ȣ����2, �����2, �񸶸�2;
extern char �����̸�[30];
int �����2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ���� �������� ����?\n\n                                         %s���� � ���� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� ������ ���� �������� �ϳ�~");
	gotoxy(x, y + 2);
	printf("�ٴ� ���� ���� �ñ�?");
	gotoxy(x, y + 4);
	printf("����� �ž�..");

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
			return �����2����(y - 19);
		}
		}
	}
}
int �����2����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�� ������!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 15;

			������ȭ1();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"������.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 15;

			������ȭ1();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}

	}
}
int ������2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ���� ���� ���� ��������!\n\n                                          %s���� � ���� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ������ � ����?");
	gotoxy(x, y + 2);
	printf("�� �� �۾��ٱ�?");
	gotoxy(x, y + 4);
	printf("����� �ž�..");
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
			return ������2����(y - 19);
		}
		}
	}
}
int ������2����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"��!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 8;
			�����2 -= 3;
			�񸶸�2 -= 3;
			������ȭ1();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��..?"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;
	

			������ȭ1();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"��..");
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}

	}
}

int �����������2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          �� �������� ������?\n\n                                       %s���� � ����� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���־�!");
	gotoxy(x, y + 2);
	printf("�Ϳ���!");
	gotoxy(x, y + 4);
	printf("����� �ž�..");

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
			return �����������2����(y - 19);
		}
		}
	}
}
int �����������2����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 8;

			������ȭ1();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��..��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}

	}
}
int ������2() {
	int x = 42, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �� ���� ������ ��������?\n\n                                        %s�� � �ൿ�� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �ܵ��⸦ �ܾ� �ش�");
	gotoxy(x, y + 2);
	printf("�ܵ��⸦ �İ� �ش�");
	gotoxy(x, y + 4);
	printf("����� �ž�..");

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
			return ������2����(y - 19);
		}
		}
	}
}
int ������2����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��!?!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 8;

			������ȭ1();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"����"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 12;

			������ȭ1();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��,,"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}

	}
}
int ��ȭ��2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         ���� �������� ����!\n\n                                        %s�� � �ൿ�� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ��ȭ�� �Բ� ��������");
	gotoxy(x, y + 2);
	printf("�ÿ��� ���� �ѷ��ش�");
	gotoxy(x, y + 4);
	printf("����� �ž�..");

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
			return ��ȭ��2����(y - 19);
		}
		}
	}
}
int ��ȭ��2����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 8;

			������ȭ1();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��??"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 12;

			������ȭ1();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������ȭ1();

		}

	}
}
void �̺�Ʈ��2(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 10;

	switch (randomI)
	{
	case 0:
		�����2();
		break;
	case 1:
		������2();
		break;
	case 2:
		������2();
		break;
	case 3:
		�����������2();
		break;
	case 4:
		��ȭ��2();
		break;

	}
}