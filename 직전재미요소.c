#include<stdio.h>
#include<windows.h>

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

int 벌레직전() {
	int x = 20, y = 35;
	int x2 = 11, y2 = 1;
	gotoxy2(1, 26);
	printf("                            습기가 가득한 늪지대로 간 당신은 놀랍게도..!!\n\n\n");
	printf("                              그곳에 꿈틀거리는 한 애벌레를 발견했습니다!");

	gotoxy(x2, y2);
	printf("       r6E        ,   R.Q      ,O;B,           :          5S           B,               \n");
	gotoxy(x2, y2+1);
	printf("  .BZ  R ;w      BQ  L: K,    ::  P.   ;PO     BS   7;   .Gg      .,  sp1               \n");
	gotoxy(x2, y2+2);
	printf("  B B  6  Q     .Q:  Q  p.    B;       Q D    7:X  .P7L  U.U      BR  G D               \n");
	gotoxy(x2, y2+3);
	printf("  L :  B  O:    ;B  ,P  G    ,B,    B .5 K    s.2  Ji B  g R     ;Sw  O O               \n");
	gotoxy(x2, y2+4);
	printf("       B:  .    UB  2;  R    :Ds   rB ,r:r    2 K  g. r .5 H     6,S  g Lr              \n");
	gotoxy(x2, y2+5);
	printf("      wi2       QH  D   g    ,HE.  2B :;r:    J.r;      5..1     Z p  E  E              \n");
	gotoxy(x2, y2+6);
	printf("      D G    ,; Br  B   B     ,,7  UP ;:s. iE c; g      M iL    77 p  si B              \n");
	gotoxy(x2, y2+7);
	printf("  LQ  D 7r   RB,    ,   a          wJ 7:r; EZ .P g     :Z is    Z  E  .E :              \n");
	gotoxy(x2, y2+8);
	printf("  G;7 Z  P  :H r  .:;77;r7svr:    ,JS s  P 7w. s .M    :: rs    Q .P   B. .BL           \n");
	gotoxy(x2, y2+9);
	printf("  .   ;6 B  ::  r7;;.      .:71U. .s7  ; .;L.     s,,B    :w   7c .6   .. ;77J          \n");
	gotoxy(x2, y2+10);
	printf("     ; c ;   ,U:,;riG aBr      .R,    :B7 ;v   ;    pa:   rs   6. .K      :2 r          \n");
	gotoxy(x2, y2+11);
	printf("    pR:    .Pc rK:  B ,p7        Q    H:i     7BH  g ;7   s7   Q, .6       :            \n");
	gotoxy(x2, y2+12);
	printf("   ,5 P   .g.  5w:L2.            M   s,:r    ,O D  : :H   sr   .7  Z     :              \n");
	gotoxy(x2, y2+13);
	printf("   r7 6  .B                      B   O L;    5: K.   ,Z     :H     O     BP.            \n");
	gotoxy(x2, y2+14);
	printf("   ;7 E  B.                     O.   D X.    2; 2:         L;r7   .Z     H p,           \n");
	gotoxy(x2, y2+15);
	printf("   7r O  rJ                  ,7w:    D g     ;s 1:  sr     B ;7   .O     :1 R.          \n");
	gotoxy(x2, y2+16);
	printf("   :6 K   :Jwcr;;;r;;:::rrss2c, Qa  :X g      R 1: :Qg    a: rv   ,P      R  g.         \n");
	gotoxy(x2, y2+17);
	printf("    D   ,B,  .,:::....BH       S X     D      6 ir B Z    M  w;   .p      .R  Q         \n");
	gotoxy(x2, y2+18);
	printf("        U:p          iSs       g r7   ,X      :,7r , Xr  ;p  si   .6 iS    2r  :        \n");
	gotoxy(x2, y2+19);
	printf("        6 6          D Z       K ;J   ;p        71    .  ;:  Jr    D GD:    M           \n");
	gotoxy(x2, y2+20);
	printf("        R J7         E D         :p    .                     7J             .Q          \n");
	gotoxy(x2, y2+21);
	printf("        ;  :           :          :                           ,                 \n");



	gotoxy2(x , y);
	printf(YELLOW"■"RESET " 데려간다");
	gotoxy2(x + 40, y);
	printf(YELLOW"□"RESET" 데려가지 않는다");
	while (1)
	{
		int n = 키보드();

		switch (n) {
		case LEFT:
		{
			if (x > 20) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x -= 40, y);
				printf(YELLOW"■"RESET " 데려간다");
			}
			break;
		}
		case RIGHT:
		{
			if (x < 60) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x += 40, y);
				printf(YELLOW"■"RESET" 데려가지 않는다");
			}
			break;
		}

		case SUBMIT:
		{
			return 벌레직전선택(x - 20);
		}
		}
	}

}
int 벌레직전선택(int a) {

	int x = 15, y = 15;
	int 선택완료;
	선택완료 = a;

	while (1) {

		if (선택완료 == 0)
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n");
			벌레놀사물();

		}
		else if (선택완료 == 40)
		{
			system("cls");
			gotoxy2(x , y);
			printf("그래요.뭐.어쩔 수 없죠.당신은 종족의 운명을 거부하고 오래오래 살았답니다.");
			Sleep(2500);
			system("cls");
			exit(0);

		}

	}
}

int 동물직전() {
	int x = 20, y = 35;
	int x2 = 14,y2 = 1;
	gotoxy(1, 26);
	printf("                          넓은 평야가 보이는 초원으로 간 당신은 놀랍게도..!!\n\n\n");
	printf("                              그곳에 앉아있는 한 생명체를 발견했습니다!");

	gotoxy(x2, y2);
	printf(":                                                                                       \n");
	gotoxy(x2, y2 + 1);
	printf("r:r77L7;.                                                      ..,.,,:,:.,..            \n");
	gotoxy(x2, y2 + 2);
	printf("       :Lsr                                         ..::rr77crr;;:::::::::;        \n");
	gotoxy(x2, y2 + 3);
	printf("L,   i    :sc:                               ,:;r777;:..                                \n");
	gotoxy(x2, y2 + 4);
	printf("      : ..   rJr.                      .:icc7;:.       .;;:              ,r         \n");
	gotoxy(x2, y2 + 5);
	printf("  :  ,r  s.    :LJ,               .:rL7r,.     .   .BB1:  rH  ::          O             \n");
	gotoxy(x2, y2 + 6);
	printf("  .  :.    7  .  .Lw:         .:7L7:.   ,   .  LL:GBZ      :1cr     ;.    P             \n");
	gotoxy(x2, y2 + 7);
	printf("L           .,.     2L     :rL7:       ;r   ,.    .                 7    s;             \n");
	gotoxy(x2, y2 + 8);
	printf("B;Lri:.   :icG:::    :2:;LL;.      Q                                    .P              \n");
	gotoxy(x2, y2 + 9);
	printf("   ..:rcL;    :,;   ,;SK.       rr         ..,,.        r.       .    .Qs               \n");
	gotoxy(x2, y2 + 10);
	printf("         ,7c;    .Lci.    .               Bi::;:       ,O        wi    .                \n");
	gotoxy(x2, y2 + 11);
	printf("            .Lrrw;       r,        :     .g          :L;                                \n");
	gotoxy(x2, y2 + 12);
	printf("  ;:   rp7  ,  7S:       ;:L     .Xr                                                    \n");
	gotoxy(x2, y2 + 13);
	printf("  rJ    .,  ,    ,LL.     .;;,   ;.     .r      ,,i                   :;                \n");
	gotoxy(x2, y2 + 14);
	printf("   rU              .sL.   D XL          J;     ;s,R.            :1   ,w.2               \n");
	gotoxy(x2, y2 + 15);
	printf("    ,   .::    .     .Ls. ;; .        ,           .P     .:      Lc  w: K,              \n");
	gotoxy(x2, y2 + 16);
	printf("        ;:,    ;7rr    .LL  :;.       M            r1..;1r:H      rc71  .c              \n");
	gotoxy(x2, y2 + 17);
	printf("                          r7:         7             .r;:   :2       ,                   \n");
	gotoxy(x2, y2 + 18);
	printf("                      .,    :Jr           .,                RL                          \n");
	gotoxy(x2, y2 + 19);
	printf("  ,s     :;    ;       M      :H,         QB:          7.    . ,s7    :,.a:             \n");
	gotoxy(x2, y2 + 20);
	printf("        ,;:           .R,       2w:       i .    rs        ;.  ,.                       \n");
	gotoxy2(x, y);
	printf(YELLOW"■"RESET " 데려간다");
	gotoxy2(x + 40, y);
	printf(YELLOW"□"RESET" 데려가지 않는다");
	while (1)
	{
		int n = 키보드();

		switch (n) {
		case LEFT:
		{
			if (x > 20) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x -= 40, y);
				printf(YELLOW"■"RESET " 데려간다");
			}
			break;
		}
		case RIGHT:
		{
			if (x < 60) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x += 40, y);
				printf(YELLOW"■"RESET" 데려가지 않는다");
			}
			break;
		}

		case SUBMIT:
		{
			return 동물직전선택(x - 20);
		}
		}
	}

}
int 동물직전선택(int a) {

	int x = 15, y = 15;
	int 선택완료;
	선택완료 = a;

	while (1) {

		if (선택완료 == 0)
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n");
			동물놀사물();

		}
		else if (선택완료 == 40)
		{
			system("cls");
			gotoxy2(x, y);
			printf("그래요.뭐.어쩔 수 없죠.당신은 종족의 운명을 거부하고 오래오래 살았답니다.");
			Sleep(2500);
			system("cls");
			exit(0);

		}

	}
}

int 식물직전() {
	int x = 20, y = 35;
	int x2 = 10, y2 = 1;
	gotoxy2(1,26);
	printf("                          나무가 우거진 숲 습지로 간 당신은 놀랍게도..!!\n\n\n");
	printf("                           그곳에 덩그러니 있는 한 씨앗을 발견했습니다!");

	gotoxy(x2, y2);
	printf("                    ;J1L.                                LBQ     BBJ                    \n");
	printf("                   .    ..                              .           ,                   \n");
	gotoxy(x2, y2+1);
	printf("  :PR27:,..,;cpPGQr      ,EQ;                         UB,            cBr                \n");
	gotoxy(x2, y2+2);
	printf(";:g:            7BJ.        Bs          :J1Ssr       LB                B.               \n");
	gotoxy(x2, y2+3);
	printf("B                 ,RX  s     B:       ,QH:. :sDK:    B   SB:   r7      7g               \n");
	gotoxy(x2, y2+4);
	printf("                    P7 Bg    .B      rQ.       :5Q: .B   B B  B5R      :M               \n");
	gotoxy(x2, y2+5);
	printf("     ,BR   :w        RR B     Rr    :Q            B: B   B  Hr:S       Q7               \n");
	gotoxy(x2, y2+6);
	printf("     B..Q rZQ  ,     BZ aG:Br :R    B        Q2    B B.  ,B OBcBcLcB  rB    .6Os        \n");
	gotoxy(x2, y2+7);
	printf("     Q. .QB BQX;B,  BQH  B:B, :M   51 sBE. JHB     B  B:  s6 : ,  R: KB    7B;          \n");
	gotoxy(x2, y2+8);
	printf("      D  ,2  . :B  gU     ,B  B,   B  rp MRa2B;S5  B   DD, cL   QS :BJ    :B            \n");
	gotoxy(x2, y2+9);
	printf("  :BBwHQ.     ;Q  DQvJB.   ;BRJ    B   Rr 7 7.:Qr iQ    ,pZGO   B gg      B             \n");
	gotoxy(x2, y2+10);
	printf("Z   :ERg    cUB  Bs   ,B    B.     cQ   Da   ig   B        B.   BB.       B.D           \n");
	gotoxy(x2, y2+11);
	printf("g;:    ;G2  BH :B:     Q    B       pE   ;B ,B  .B:       UP    E.        ZsBZ          \n");
	gotoxy(x2, y2+12);
	printf("  gOw;  O;  B;55       B    B        rB;  Q  B 5M        Sg     :B        .BE7P.        \n");
	gotoxy(x2, y2+13);
	printf("    :rJXB   B1         B    M7         X5DJ  BB;        gR       Q         :B 1D        \n");
	gotoxy(x2, y2+14);
	printf("       Kr    B        Rc     Br          B   Br        .1        sD         .B          \n");
	gotoxy(x2, y2+15);
	printf("      XR      B      wQ      .B.        w5    B                   B           B         \n");
	gotoxy(x2, y2+16);
	printf("      w       Qr    ;B                  B     XD                              B         \n");
	gotoxy(x2, y2+17);
	printf("              :.                       B7      OS                             B         \n");
	gotoxy(x2, y2+18);
	printf("                                      7R                                     sB         \n");
	gotoxy(x2, y2+19);
	printf("                                                       .::i;;,.              :          \n");
	gotoxy(x2, y2+20);
	printf("                                                   ;UGD61v;r7wPRRr                      \n");
	gotoxy(x2, y2+21);
	printf("                                                :DBa:           .BB                     \n");
	gotoxy(x2, y2+22);
	printf("                                               :,                 ,.            \n");
	gotoxy2(x, y);
	printf(YELLOW"■"RESET " 가져간다");
	gotoxy2(x + 40, y);
	printf(YELLOW"□"RESET" 가져가지 않는다");
	while (1)
	{
		int n = 키보드();

		switch (n) {
		case LEFT:
		{
			if (x > 20) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x -= 40, y);
				printf(YELLOW"■"RESET " 가져간다");
			}
			break;
		}
		case RIGHT:
		{
			if (x < 60) {
				gotoxy2(x, y);
				printf("□");
				gotoxy2(x += 40, y);
				printf(YELLOW"■"RESET" 가져가지 않는다");
			}
			break;
		}

		case SUBMIT:
		{
			return 식물직전선택(x - 20);
		}
		}
	}

}
int 식물직전선택(int a) {

	int x = 15, y = 15;
	int 선택완료;
	선택완료 = a;

	while (1) {

		if (선택완료 == 0)
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n");
			식물놀사물();

		}
		else if (선택완료 == 40)
		{
			system("cls");
			gotoxy2(x, y);
			printf("그래요.뭐.어쩔 수 없죠.당신은 종족의 운명을 거부하고 오래오래 살았답니다.");
			Sleep(2500);
			system("cls");
			exit(0);

		}

	}
}
