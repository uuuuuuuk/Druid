#include<stdio.h>
#include<windows.h>
#include<string.h>
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

extern int ȣ����2, �����2, �񸶸�2, n2, c2;

extern char �����̸�[30],say[30];

int ������ȭ2() {

	int x = 12, y = 35, ran;
	n2++;
	c2++;

	if (n2 == 2) {
		system("cls");
		gotoxy(40, 16);
		printf(RESET"������ �̸��� �����ּ���\n");
		gotoxy(45, 18);
		scanf_s("%s", �����̸�, 30);
		system("cls");
	}


	if (�����2 <= 0)
	{
		ȣ����2 = 10;
		�����2 = 30;
		�񸶸�2 = 30;
		n2 = 1;
		system("cls");

		printf("                                                      \n");
		printf("                       .BBBBBQ:                               \n");
		printf("                        Rg6OQB.                               \n");
		printf("                        BDgERB                                \n");
		printf("                 JaLvcrLQE6GZRLrrLL1s                         \n");
		printf("                 QBQBBBZ6HPXGPQBBQBBB                         \n");
		printf("                 QBBBMDgZE66ZGEgEgOBO                         \n");
		printf("                 BBBMBBQR66PEHQRQBBQB                         \n");
		printf("                        QgKppB.                               \n");
		printf("                        BOHXEQ                                \n");
		printf("                        BgDDDB                                \n");
		printf("                        BRZpQB                                \n");
		printf("                        BR6DDB                            \n");
		printf("                        BRDHRB                                \n");
		printf("          wwsJLsLJssssLsQRZGOBJLL1JJ1wJw1U2X.����� ������ ���̰� �ƻ�� ������ ����� �������ϴ� \n");
		printf("         1BBBBBBBBBBBBBBDOREEPBQBBBBBQBBBBBBZ  \n");
		printf("         7BBgRgMRDOQGRGOEgZgDGDRQROD6RgDPDQBs  Ȥ�� Ű���带 �� ������ �־��ٰų� �׷��� �ƴ���?? \n");
		printf("         :BBQDRGZPgGZKZODZPHgQMOZGDPHPp6ZEBB7  \n");
		printf("         :BBGOGgOGDgDMZKpZpEPpP6P6pDappPXHRBi                 \n");
		printf("         ,BBMDggD6gEgGEPZGRGKSPXZXXHGpDKPZRQ;  \n");
		printf("         .BBgOODPOZDEZOGEDG6PMDGK6EEppH6gRQB:                 \n");
		printf("          BQDEGZGEOZ66ZPGpgZGPpODEMOZKpHOZBQ,   \n");
		printf("          BBRgpZPPZOZDPO6KXEPZpGUEZpXXKXSQBB.                 \n");
		printf("          BBRgEZOEDZEGOXKEOZEZZ5ZGDZE6RggMBB.                 \n");
		printf("          BBREaGggZOH6EOZgDgZEZDMD6RgRODOgBB                  \n");
		printf("          BBOOOGgDgEZPGZgOgZGRBDDOMREZgEpZBB                  \n");
		printf("          BBgRgRZRRRDMOgggDGgQQQRQREDRQgRBQB                  \n");
		printf("          BBRgRgRD6DDDOGOOgDEGDgRDDEQQQGDBBB                  \n");
		printf("          GBgD66KOZgggGROOEEPDgOXHagGPEGZMBg                  \n");
		printf("       ;:.gBQpOERggMBgRRgEZDOZgGggOXEHQQgRBgrrv               \n");
		printf("      gBBBOBQDRQRDPZHPGZapHZpgZgDZKOEpPDDRMRMBBE              \n");
		printf("     7BDZaRBBBBBBQRMgRgMBQMMRDMBBQMBBMRRBBBRSUaBs             \n");
		printf("    ,BEZ6HOBMQQMRBQBRBBBBQRBgBRgOOgOEgGRQBDBgQZHQ;            \n");
		printf("    BRGZPUwHKKX1JJJLLv1w1J5J2aHXPUXSUss12JUppKpaXQ,           \n");
		printf("   BBRMBRBMRBQRBRgZgDGDgQQgBRgZDDRQBBBQBBBQBQBQBBBB,       \n");
		printf("  .BBRBBBQBgBgEBBDQBBMQMBQgMBRMBRGBRRDO6pPZ6ZPEpPOB:          'R'�� ���� �ٽ��ϱ�    \n");
		while (1)
		{
			if (Ű����() == R)
			{
				return main();
			}
		}
	}
	else if (�񸶸�2 <= 0)
	{
		ȣ����2 = 10;
		�����2 = 30;
		�񸶸�2 = 30;
		n2 = 1;
		system("cls");
		printf("\n");
		printf("                                                      \n");
		printf("                       .BBBBBQ:                               \n");
		printf("                        Rg6OQB.                               \n");
		printf("                        BDgERB                                \n");
		printf("                 JaLvcrLQE6GZRLrrLL1s                         \n");
		printf("                 QBQBBBZ6HPXGPQBBQBBB                         \n");
		printf("                 QBBBMDgZE66ZGEgEgOBO                         \n");
		printf("                 BBBMBBQR66PEHQRQBBQB                         \n");
		printf("                        QgKppB.                               \n");
		printf("                        BOHXEQ                                \n");
		printf("                        BgDDDB                                \n");
		printf("                        BRZpQB                                \n");
		printf("                        BR6DDB                            \n");
		printf("                        BRDHRB                                \n");
		printf("          wwsJLsLJssssLsQRZGOBJLL1JJ1wJw1U2X.����� ������  ���̰� Ż���� ������ ����� �������ϴ�\n");
		printf("         1BBBBBBBBBBBBBBDOREEPBQBBBBBQBBBBBBZ                 \n");
		printf("         7BBgRgMRDOQGRGOEgZgDGDRQROD6RgDPDQBs  Ȥ�� Ű���带 �� ������ �־��ٰų� �׷��� �ƴ���??\n");
		printf("         :BBQDRGZPgGZKZODZPHgQMOZGDPHPp6ZEBB7                 \n");
		printf("         :BBGOGgOGDgDMZKpZpEPpP6P6pDappPXHRBi                 \n");
		printf("         ,BBMDggD6gEgGEPZGRGKSPXZXXHGpDKPZRQ;                 \n");
		printf("         .BBgOODPOZDEZOGEDG6PMDGK6EEppH6gRQB:                 \n");
		printf("          BQDEGZGEOZ66ZPGpgZGPpODEMOZKpHOZBQ,                 \n");
		printf("          BBRgpZPPZOZDPO6KXEPZpGUEZpXXKXSQBB.                 \n");
		printf("          BBRgEZOEDZEGOXKEOZEZZ5ZGDZE6RggMBB.                 \n");
		printf("          BBREaGggZOH6EOZgDgZEZDMD6RgRODOgBB                  \n");
		printf("          BBOOOGgDgEZPGZgOgZGRBDDOMREZgEpZBB                  \n");
		printf("          BBgRgRZRRRDMOgggDGgQQQRQREDRQgRBQB                  \n");
		printf("          BBRgRgRD6DDDOGOOgDEGDgRDDEQQQGDBBB                  \n");
		printf("          GBgD66KOZgggGROOEEPDgOXHagGPEGZMBg                  \n");
		printf("       ;:.gBQpOERggMBgRRgEZDOZgGggOXEHQQgRBgrrv               \n");
		printf("      gBBBOBQDRQRDPZHPGZapHZpgZgDZKOEpPDDRMRMBBE              \n");
		printf("     7BDZaRBBBBBBQRMgRgMBQMMRDMBBQMBBMRRBBBRSUaBs             \n");
		printf("    ,BEZ6HOBMQQMRBQBRBBBBQRBgBRgOOgOEgGRQBDBgQZHQ;            \n");
		printf("    BRGZPUwHKKX1JJJLLv1w1J5J2aHXPUXSUss12JUppKpaXQ,           \n");
		printf("   BBRMBRBMRBQRBRgZgDGDgQQgBRgZDDRQBBBQBBBQBQBQBBBB,          \n");
		printf("  .BBRBBBQBgBgEBBDQBBMQMBQgMBRMBRGBRRDO6pPZ6ZPEpPOB:        'R'�� ���� �ٽ��ϱ�   \n");
		while (1)
		{
			if (Ű����() == R)
			{
				return main();
			}
		}
	}
	else if (ȣ����2 <= -1)
	{
		ȣ����2 = 10;
		�����2 = 30;
		�񸶸�2 = 30;
		n2 = 1;
		system("cls");
		printf("                                       S                        \n");
		printf("                                      XB.:BQ                        \n");
		printf("                                 ,   r6cOBBX                        \n");
		printf("                             rgDGgGgXZR1BQ.                         \n");
		printf("                             :rEOORMr6PUBc                          \n");
		printf("                                ,:  OB7risGgP7:                     \n");
		printf("                                   BBBasS77.sOZEKr                  \n");
		printf("                                 :BQK p;pr5:rsUJ5sUX,               \n");
		printf("                                7BBH :wvX7r5X1iLJ17aM6,             \n");
		printf("                               pBB7  c7paL77rsG7;7J7rwB5            \n");
		printf("                              BBB, .Z:J25LL7 .sDcvr77irQB           \n");
		printf("                            :BBB  7M11Er1r7vr77sav  rrr;gB          \n");
		printf("                           JBBD  7gvcaL7rrrv7Lrrr7rr7JJBsKB         \n");
		printf("                          OBB5   Qsrs  iLrcrrvr7rL2GDB17, p;        \n");
		printf("                         BBBc   wgLJv7rLLsc  J77sSLr. .,:rXE        \n");
		printf("                        BBB;    aE;:sswLJJL7vLLsp..,;rr;: ;L        \n");
		printf("                      :BBB,     rB  ;srLJSw1ssrLEr,::;;rrrR;        \n");
		printf("                    6BBg         UOc7svJ: 7sJc;saH.::;;irBi    ����� ���̰� ��� �ʹٰ� ������   \n");
		printf("                  .MBBX           ROJ7L1pUv75  ,aRr....:J:          \n");
		printf("                 :BBBs             5QpJi ;LLs5s2sEwrJRBH   ������ �׷� ���̸�  ���� �Ͽ����ϴ�..  \n");
		printf("                2BBB:               .UBX.r2L21SaKQavJr              \n");
		printf("              .RBBg                    cZMEMDgRgPJ;                \n");
		printf("             7BQBU                                     .\n");
		printf("            XBRBr                                                   \n");
		printf("          :DQQE                              \n");
		printf("         JRRML                                                     ���̴� ���ο� ģ���� ã�� �������ϴ�. \n");
		printf("       .6gRG:                                                       \n");
		printf("      7DZRL                                               ��¼�� �ູ�� ���� ���� �ְڱ���...   \n");
		printf("    ,XOZZ:                                                          \n");
		printf("   7pK6s                                                 \n");
		printf("  PPpa:                                                             \n");
		printf(" :RE7                                                    'R'�� ���� �ٽ��ϱ� \n");
		while (1)
		{
			if (Ű����() == R)
			{
				return main();
			}
		}
	}
	else if (ȣ����2 >= 300)
	{
		����(2);
	}
	srand(time(NULL));
	if (c2 >= 5 && c2 % 5 == 0)
	{
		ran = rand() % 3;
		if (ran == 0)
			�̺�Ʈ����2();
	}
	//�����̸� 
	gotoxy(1, 1);
	printf("%s", �����̸�);
	// ��ġ
	gotoxy(78, 3);
	printf(RED"ȣ����"RESET " %03d", ȣ����2);
	gotoxy(78, 5);
	printf(YELLOW"�����"RESET" %03d", �����2);
	gotoxy(78, 7);
	printf(BLUE"�񸶸�"RESET " %03d", �񸶸�2);

	// ���� 
	gotoxy(x, y);
	printf(YELLOW"��"RESET RED" ����ֱ�"RESET);
	gotoxy(x + 30, y);
	printf("��"YELLOW " ���ĸ� �ֱ�"RESET);
	gotoxy(x + 60, y);
	printf(RESET"��" BLUE " �� �ֱ�"RESET);
	printf("\n\n");

	while (1)
	{
		int n = Ű����();
		switch (n) {
		case LEFT:
		{
			if (x > 12) {
				gotoxy2(x, y);
				printf("��");
				gotoxy2(x -= 30, y);
				printf(YELLOW"��"RESET);
			}
			break;
		}
		case RIGHT:
		{
			if (x < 72) {
				gotoxy2(x, y);
				printf("��");
				gotoxy2(x += 30, y);
				printf(YELLOW"��"RESET);
			}
			break;
		}

		case SUBMIT:
		{
			return ������ȭ2����(x - 12);
		}
		}
	}

}


int ������ȭ2����(int a) {

	int ���ÿϷ�;
	int r, d;
	int da;
	���ÿϷ� = a;
	srand(time(NULL));

	while (1) {
		r = rand() % 4 + 3;
		d = rand() % 4 + 1;
		da = rand() % 3;
		if (���ÿϷ� == 0)
		{
			gotoxy(84, 3);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "������");
			else if (da == 1)
				strcpy_s(say, 10, "�޷�!");
			else if (da == 2)
				strcpy_s(say, 10, "������");
			ȣ����2 += r + 1;
			�����2 -= d + 2;
			�񸶸�2 -= r + 1;

			������ȭ2();
		}
		else if (���ÿϷ� == 30)
		{
			gotoxy(84, 5);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "�ȳ�");
			else if (da == 1)
				strcpy_s(say, 10, "���־�!");
			else if (da == 2)
				strcpy_s(say, 10, "��~~");
			if (�����2 >= 95)
			{
				�����2 = 99;
				ȣ����2 -= 10;
				�񸶸�2 -= 10;
			}
			else
			{
				�����2 += r + 2;
				�񸶸�2 -= r - 1;
				ȣ����2 += d - 2;

			}

			������ȭ2();

		}
		else if (���ÿϷ� == 60)
		{

			gotoxy(84, 7);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "����!");
			else if (da == 1)
				strcpy_s(say, 10, "�Ⱦ�!");
			else if (da == 2)
				strcpy_s(say, 10, "������!");
			if (�񸶸�2 >= 95)
			{
				�񸶸�2 = 99;
				ȣ����2 -= 10;
			}
			else
			{

				�񸶸�2 += r;
				ȣ����2 -= r - 3;
				�����2 -= d - 1;
			}

			������ȭ2();

		}
	}

}
