#include<stdio.h>
#include<windows.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"

extern char �����̸�[30], �Ĺ��̸�[30], �����̸�[30];
int ����(int a) {
	system("cls");
	Sleep(500);
	printf("���� ����ϳ׿�. ���� �۵� �۴� �� ������ �̷��Ա��� Ű�� �� �˾Ұھ��??\n\n");
	Sleep(1500);
	printf("����� �������� ������ ���� ���ڳ׿�..\n\n\n");
	Sleep(1500);
	printf("���? ����� ����ü�� �� ���� �ִ� �� ��������??");
	Sleep(1500);
	if (a == 1)
	{
		Sleep(1500);
		printf("%s�� ��ſ��� �� ���� �ٷ�..!!\n\n", �����̸�);
		Sleep(2001);
		printf("���̳׿�! � ���ϱ��?..??Ȥ�� �ڽ���..?? ");
		��������();
		exit(0);
	}
	else if (a == 2) {
		printf("%s�� ��ſ��� �� ���� �ٷ�..!!\n\n", �����̸�);
		Sleep(1001);
		printf("���̳׿�! � ���ϱ��?..?? Ȥ�� �ڽ���..?? ");
		��������();
		exit(0);
	}
	else if (a == 3) {
		printf("%s�� ��ſ��� �� ���� �ٷ�..!!\n\n", �Ĺ��̸�);
		Sleep(1001);
		printf("�����̳׿�! � �����ϱ��?..?? Ȥ�� �ڽ���..?? ");
		�Ĺ�����();
		exit(0);
	}
}

// ������ ������ ��������