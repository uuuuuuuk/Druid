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
int �������1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ��� �޶����� ����?\n\n                                         %s���� � ���� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� ���� �ٵ����~");
	gotoxy(x, y + 2);
	printf("���� Ŀ���µ�?");
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
			return �������1����(y - 19);
		}
		}
	}
}
int �������1����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�̷��� ������ �䵥 �ٵ���ٰ�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 15;

			������ȭ2();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"��� �˾Ҿ�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 15;

			������ȭ2();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������ȭ2();

		}

	}
}
int ��������1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ���� ���� �;� �����!\n\n                                          %s�� �Բ� ���� � ���ðڽ��ϱ�?", �����̸�);


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
			return ��������1����(y - 19);
		}
		}
	}
}
int ��������1����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� ������ ����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 8;
			����� -= 3;
			�񸶸� -= 3;
			������ȭ2();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���ҳ�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;
			����� -= 3;
			�񸶸� -= 3;

			������ȭ2();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"��.");
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������ȭ2();

		}

	}
}

int �������������1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          ���� ���󿡼� ���� ���־�!\n\n                                       %s���� � ����� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ����..��");
	gotoxy(x, y + 2);
	printf("���� ���� �� ����!");
	gotoxy(x, y + 4);
	printf("�ʰ�? ���ִٰ�?? ���� �ȵ�!");

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
			return �������������1����(y - 19);
		}
		}
	}
}
int �������������1����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�����ϴ� �ʵ� ���ִ� ����� ������ �� ����!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 8;

			������ȭ2();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��!"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 8;

			������ȭ2();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�̰ͺ���?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������ȭ2();

		}

	}
}
int ��������1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         ���� ����!\n\n                                        %s�� ��� ��ðڽ��ϱ�?", �����̸�);


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
			return ��������1����(y - 19);
		}
		}
	}
}
int ��������1����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"ųų ���� �� ���̱�� ��"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 8;

			������ȭ2();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�̰� ���� �ȴٰ� ������?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 12;

			������ȭ2();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�̰� ��°ų�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������ȭ2();

		}

	}
}
int ��ȭ����1() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �� ���Ļ���!\n\n                                        %s���� ���� ������ �ֽðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ����");
	gotoxy(x, y + 2);
	printf("����Ĩ");
	gotoxy(x, y + 4);
	printf("���̽�ũ��");

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
			return ��ȭ����1����(y - 19);
		}
		}
	}
}
int ��ȭ����1����(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"��Ⱑ ¯����"RESET);
			Sleep(1001);
			system("cls");
			ȣ���� += 8;

			������ȭ2();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���ڴ� ��.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 12;

			������ȭ2();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"������� �Ⱦ�.."RESET);
			Sleep(1001);
			system("cls");
			ȣ���� -= 10;

			������ȭ2();

		}

	}
}
void �̺�Ʈ����1(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		�������1();
		break;
	case 1:
		��������1();
		break;
	case 2:
		��������1();
		break;
	case 3:
		�������������1();
		break;
	case 4:
		��ȭ����1();
		break;
	
	}
}