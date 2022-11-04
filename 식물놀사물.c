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

int 호감도3 = 10; 배고픔3 = 30; 목마름3 = 30, n3 = 1,c3=-1;
char 식물이름[30] = { 0 },say[30];

int 식물놀사물() {

	int x = 12, y = 35;
	n3++;
	c3++;

	if (n3 == 2) {
		system("cls");
		gotoxy(40, 16);
		printf(RESET"식물의 이름을 지어주세요\n");
		gotoxy(45, 18);
		scanf_s("%s", 식물이름,sizeof(식물이름));
		system("cls");
	}

	printf("%s", 식물이름);
	
	if (배고픔3 <= 0)
	{
		호감도3 = 10;
		배고픔3 = 30;
		목마름3 = 30;
		n3 = 1;
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
		printf("          wwsJLsLJssssLsQRZGOBJLL1JJ1wJw1U2X.당신의 소중한 아이가 아사로 무지개 나라로 떠났습니다 \n");
		printf("         1BBBBBBBBBBBBBBDOREEPBQBBBBBQBBBBBBZ  \n");
		printf("         7BBgRgMRDOQGRGOEgZgDGDRQROD6RgDPDQBs  혹시 키보드를 꾹 누르고 있었다거나 그런건 아니죠?? \n");
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
		printf("  .BBRBBBQBgBgEBBDQBBMQMBQgMBRMBRGBRRDO6pPZ6ZPEpPOB:          'R'을 눌러 다시하기    \n");
		while (1)
		{
			if (키보드() == R)
			{
				return main();
			}
		}
	}
	else if (목마름3 <= 0)
	{
		호감도3 = 10;
		배고픔3 = 30;
		목마름3 = 30;
		n3 = 1;
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
		printf("          wwsJLsLJssssLsQRZGOBJLL1JJ1wJw1U2X.당신의 소중한  아이가 탈수로 무지개 나라로 떠났습니다\n");
		printf("         1BBBBBBBBBBBBBBDOREEPBQBBBBBQBBBBBBZ                 \n");
		printf("         7BBgRgMRDOQGRGOEgZgDGDRQROD6RgDPDQBs  혹시 키보드를 꾹 누르고 있었다거나 그런건 아니죠??\n");
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
		printf("  .BBRBBBQBgBgEBBDQBBMQMBQgMBRMBRGBRRDO6pPZ6ZPEpPOB:        'R'을 눌러 다시하기   \n");
		while (1)
		{
			if (키보드() == R)
			{
				return main();
			}
		}
	}
	else if (호감도3 <= -1)
	{
		호감도3 = 10;
		배고픔3 = 30;
		목마름3 = 30;
		n3 = 1;
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
		printf("                    6BBg         UOc7svJ: 7sJc;saH.::;;irBi    당신은 아이를 챙겨 주었지만  \n");
		printf("                  .MBBX           ROJ7L1pUv75  ,aRr....:J:          \n");
		printf("                 :BBBs             5QpJi ;LLs5s2sEwrJRBH 아이는 당신이 마음에 들지 않았습니다..  \n");
		printf("                2BBB:               .UBX.r2L21SaKQavJr              \n");
		printf("              .RBBg                    cZMEMDgRgPJ;                \n");
		printf("             7BQBU                                     .\n");
		printf("            XBRBr                                                   \n");
		printf("          :DQQE                              \n");
		printf("         JRRML                                                     \n");
		printf("       .6gRG:                                                       \n");
		printf("      7DZRL                                              아이는 새로운 친구를 찾아 떠났습니다. \n");
		printf("    ,XOZZ:                                                          \n");
		printf("   7pK6s                                                 어쩌면 행복한 길일 수도 있겠군요...\n");
		printf("  PPpa:                                                             \n");
		printf(" :RE7                                                    'R'을 눌러 다시하기 \n");
		while (1)
		{
			if (키보드() == R)
			{
				return main();
			}
		}
	}
	else if (호감도3 >= 100)
	{
		호감도3 = 10;
		진화시키기(3);
	}
	gotoxy(1, 1);
	printf("%s", 식물이름);
	식물그림1();

	// 수치
	gotoxy(78, 3);
	printf(RED"호감도"RESET " %03d", 호감도3);
	gotoxy(78, 5);
	printf(YELLOW"배고픔"RESET" %03d", 배고픔3);
	gotoxy(78, 7);
	printf(BLUE"목마름"RESET " %03d", 목마름3);

	// 선택 
	gotoxy(x, y);
	printf(YELLOW"●"RESET RED" 칭찬 하기"RESET);
	gotoxy(x + 30, y);
	printf("○"YELLOW " 비료 주기"RESET);
	gotoxy(x + 60, y);
	printf(RESET"○" BLUE " 물 주기"RESET);
	printf("\n\n");

	while (1)
	{
		int n = 키보드();
		switch (n) {
		case LEFT:
		{
			if (x > 12) {
				gotoxy2(x, y);
				printf("○");
				gotoxy2(x -= 30, y);
				printf(YELLOW"●"RESET);
			}
			break;
		}
		case RIGHT:
		{
			if (x < 72) {
				gotoxy2(x, y);
				printf("○");
				gotoxy2(x += 30, y);
				printf(YELLOW"●"RESET);
			}
			break;
		}

		case SUBMIT:
		{
			return 놀사물3(x - 12);
		}
		}
	}

}


int 놀사물3(int a) {

	int 선택완료;
	int r,d;
	int da;
	선택완료 = a;
	srand(time(NULL));
	
	while (1) {
		r = rand() % 4 + 3;
		d = rand() % 4 + 1;
		da = rand() % 3;
		if (선택완료 == 0)
		{
			gotoxy(84, 3);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "그래..?");
			else if (da == 1)
				strcpy_s(say, 10, "정말..?");
			else if (da == 2)
				strcpy_s(say, 10, "히히");
			호감도3 += r + 2;
			배고픔3 -= d + 1;
			목마름3 -= r + 2;

			식물놀사물();
		}
		else if (선택완료 == 30)
		{
			gotoxy(84, 5);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "힘들어");
			else if (da == 1)
				strcpy_s(say, 10, "좋구만");
			else if (da == 2)
				strcpy_s(say, 10, "물내놔");
			if (배고픔3 >= 95)
			{
				배고픔3 = 99;
				호감도3 -= 10;
				목마름3 -= 10;
			}
			else
			{
				배고픔3 += r + 1;
				목마름3 -= r; 
				호감도3 -= d + 3;

			}

			식물놀사물();

		}
		else if (선택완료 == 60)
		{
				목마름3 += r+2;
				호감도3 -= r + 1;
				배고픔3 -= d;

			gotoxy(84, 7);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (목마름3 >= 95)
			{
				목마름3 = 99;
				호감도3 -= 10;
				strcpy_s(say, 10, "그만..");
			}
			else if (da == 0)
				strcpy_s(say, 10, "꺼억");
			else if (da == 1)
				strcpy_s(say, 10, "시원해!");
			else if (da == 2)
				strcpy_s(say, 10, "더줘.");

			

			식물놀사물();

		}
	}

}