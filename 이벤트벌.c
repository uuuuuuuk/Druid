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
int ���2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("           �� ��� �޶����� ����?\n\n                                         %s���� � ���� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� ������ �� �Ծ���~");
	gotoxy(x, y + 2);
	printf("�ոӸ� �߶���~");
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
			return �������2(y - 19);
		}
		}
	}
}
int �������2(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� �ոӸ� �߶��ݾ�.. ������ �򰥸��ž�???"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 15;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�� ���� �������ݾ�.. ������ �򰥸��ž�????"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 15;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�� ��� ���� �ʹۿ� ����~!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 10;

			������繰();

		}

	}
}
int ����2() {
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
			return ���༱��2(y - 19);
		}
		}
	}
}
int ���༱��2(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��..���� ¥����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 5;
			�����2 -= 3;
			�񸶸�2 -= 3;
			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�ÿ���!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 10;
			�����2 -= 3;
			�񸶸�2 -= 3;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RESET"��.");
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������繰();

		}

	}
}

int ����ǳ����2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("          ���� ģ�� ������ �ʾ�?\n\n                                       %s���� � ����� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" �ʵ� ���־�");
	gotoxy(x, y + 2);
	printf("��..����");
	gotoxy(x, y + 4);
	printf("�۽� �Ⱥ��� �𸣰ڳ�..?");

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
			return ����ǳ���̼���2(y - 19);
		}
		}
	}
}
int ����ǳ���̼���2(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"���� �˰� �־�"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�׷�.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 5;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"�׶� ���� �˰� �ִµ� �� ��������?"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������繰();

		}

	}
}
int ������2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         �� �ʹ� ���� ��ä�� �� ����!\n\n                                        %s�� ��� �Ͻðڽ��ϱ�?", �����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ���� ��ä���Ѵ�");
	gotoxy(x, y + 2);
	printf("���ϰ� ��ä���Ѵ�");
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
			return ����������2(y - 19);
		}
		}
	}
}
int ����������2(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���� �̷��� ���󰡰ھ�!"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"�����ϴ� ������"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 12;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������繰();

		}

	}
}
int ��ȭ2() {
	int x = 36, y = 19, n;
	system("cls");
	gotoxy(x - 10, y - 8);
	printf("         ���� �� ���� �ɷȳ���..\n\n                                        %s���� ��� �Ͻðڽ��ϱ�?",�����̸�);


	gotoxy(x - 2, y);
	printf(YELLOW">"RESET" ��ȣ���ش�");
	gotoxy(x, y + 2);
	printf("���� ���ش�");
	gotoxy(x, y + 4);
	printf("����� ��ٸ��� �����.");

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
			return ��ȭ����2(y - 19);
		}
		}
	}
}
int ��ȭ����2(int a) {

	int ���ÿϷ�;
	���ÿϷ� = a;

	while (1) {


		if (���ÿϷ� == 0)
		{
			system("cls");
			gotoxy(44, 19);
			printf(YELLOW"����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 += 8;

			������繰();

		}
		else if (���ÿϷ� == 2)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"���� ��Ż����.."RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 8;

			������繰();

		}
		else if (���ÿϷ� == 4)
		{
			system("cls");
			gotoxy(44, 19);
			printf(RED"��� �̷����� �־�?"RESET);
			Sleep(1001);
			system("cls");
			ȣ����2 -= 10;

			������繰();

		}

	}
}
void �̺�Ʈ2(char a[]) {
	int randomI;
	srand(time(NULL));
	randomI = rand() % 5;

	switch (randomI)
	{
	case 0:
		���2();
		break;
	case 1:
		����2();
		break;
	case 2:
		������2();
		break;
	case 3:
		����ǳ����2();
		break;
	case 4:
		��ȭ2();
		break;

	}
}