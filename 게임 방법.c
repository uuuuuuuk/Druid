
#include<stdio.h>
#include<windows.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define SUBMIT 4

void ���ӹ��() {

	system("cls");

	printf(RESET"\n\n\n\n\n\n");
	printf("                                              ���۹�\n\n");
	printf("                                      �޴��̵� =  W  A  S  D(+ ����Ű) \n\n");
	printf("	                                   ���� = SPACE\n\n");
	printf("	                                �̸����ϱ� = ENTER\n\n\n\n");
	printf("                                               ����\n\n");
	printf(YELLOW"                             ����ֱ�, " BLUE"�� �ֱ�, " RED"����ֱ�"RESET "�� �����Ͽ�\n\n");
	printf(YELLOW"                                �����,"BLUE"�񸶸�,"RED"ȣ����"RESET"�� �� �����ؼ� \n\n");
	printf("                                   ������ �ٸ��� �����Ű����!\n\n\n\n");
	printf("                                               ����\n\n");
	printf(YELLOW"                                           ��Ʈ�� ��Ʈ��\n\n");
	printf(RESET"                             1215 �ֹο� = ���� �ڵ� �� ���丮 �� ������\n\n");
	printf("                             1217 �㿩�� =  �������� ��� �ڵ� ");
	while (1) 
	{
		if (Ű����() == SUBMIT)
		{
			break;
		}
	}
}