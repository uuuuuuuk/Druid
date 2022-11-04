#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define HBLUE    "\x1b[36m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4
#define R 5

extern int n,c, 호감도, 배고픔, 목마름;
extern char 동물이름[30],say[30];
int 동물진화1() {
	int x = 12, y = 35, ran;
	srand(time(NULL));
	n++;
	c++;

	if (배고픔 <= 0)
	{
		호감도 = 10;
		배고픔 = 30;
		목마름 = 30;
		n = 1;
		c = 0;
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
		printf("          wwsJLsLJssssLsQRZGOBJLL1JJ1wJw1U2X.당신의 소중한  아이가 아사로 무지개 나라로 떠났습니다 \n");
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
	else if (목마름 <= 0)
	{
		호감도 = 10;
		배고픔 = 30;
		목마름 = 30;
		n = 1;
		c = 0;
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
	else if (호감도 <= -1)
	{
		호감도 = 10;
		배고픔 = 30;
		목마름 = 30;
		n = 1;
		c = 0;
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
		printf("                    6BBg         UOc7svJ: 7sJc;saH.::;;irBi     아이는 당신과 함께 놀고 싶어했지만  \n");
		printf("                  .MBBX           ROJ7L1pUv75  ,aRr....:J:          \n");
		printf("                 :BBBs             5QpJi ;LLs5s2sEwrJRBH   당신은  아이를 무시하였습니다..  \n");
		printf("                2BBB:               .UBX.r2L21SaKQavJr              \n");
		printf("              .RBBg                    cZMEMDgRgPJ;                \n");
		printf("             7BQBU                                     .\n");
		printf("            XBRBr                                                   \n");
		printf("          :DQQE                              \n");
		printf("         JRRML                                                 아이는 새로운 친구를 찾아 떠났습니다.\n");
		printf("       .6gRG:                                                       \n");
		printf("      7DZRL                                              어쩌면 행복한 길일 수도 있겠군요... \n");
		printf("    ,XOZZ:                                                          \n");
		printf("   7pK6s                                                 \n");
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
	else if (호감도 >= 200)
	{
		호감도 = 10;
		진화시키기(4);
	}
	else if (c >= 5 && c % 5 == 0)
	{
		ran = rand() % 3;
		if (ran == 0)
			이벤트진1();
	}
	//동물이름 
	gotoxy(1, 1);
	printf("%s", 동물이름);
	동물그림2();

	// 수치
	gotoxy(78, 3);
	printf(RED"호감도"RESET " %03d", 호감도);
	gotoxy(78, 5);
	printf(YELLOW"배고픔"RESET" %03d", 배고픔);
	gotoxy(78, 7);
	printf(BLUE"목마름"RESET " %03d", 목마름);

	// 선택 
	gotoxy(x, y);
	printf(YELLOW"●"RESET RED" 놀아주기"RESET);
	gotoxy(x + 30, y);
	printf("○"YELLOW " 사료 주기"RESET);
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
			return 동물진화1선택(x - 12);
		}
		}
	}

}


int 동물진화1선택(int a) {

	int 선택완료;
	int r, d;
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
				strcpy_s(say, 10, "더놀자!");
			else if (da == 1)
				strcpy_s(say, 10, "신난다!");
			else if (da == 2)
				strcpy_s(say, 10, "히히");
			호감도 += r + 2;
			배고픔 -= r + 1;
			목마름 -= d - 1;

			동물진화1(1);
		}
		else if (선택완료 == 30)
		{
			gotoxy(84, 5);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "야미!");
			else if (da == 1)
				strcpy_s(say, 10, "더내놔");
			else if (da == 2)
				strcpy_s(say, 10, "우웩");
			if (배고픔 >= 95)
			{
				배고픔 = 99;
				호감도 -= 10;
				목마름 -= 10;
			}
			else
			{
				배고픔 += r;
				목마름 -= d;
				호감도 -= r - 4;

			}

			동물진화1();

		}
		else if (선택완료 == 60)
		{

			gotoxy(84, 7);
			printf("     ");
			gotoxy(12, 13);
			printf("             ");
			gotoxy(12, 13);
			if (da == 0)
				strcpy_s(say, 10, "꿀꺽!");
			else if (da == 1)
				strcpy_s(say, 10, "물 싫어");
			else if (da == 2)
				strcpy_s(say, 10, "우웩");
			if (목마름 >= 95)
			{
				목마름 = 99;
				호감도 -= 10;
			}
			else
			{

				목마름 += r + 1;
				호감도 -= r - 2;
				배고픔 -= d;
			}

			동물진화1();

		}
	}

}