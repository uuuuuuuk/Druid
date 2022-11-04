#include<stdio.h>
#include <locale.h>
#include<conio.h>
#include<Windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include<string.h>
#pragma comment(lib,"winmm.lib")
//색깔 필요시 복붙하면됨
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"

extern char say[30];
 int x2 = 32, y2 = 2;

void 동물그림1() {
    gotoxy(x2, y2);
    printf("        ,LaSHa5;                                \n");
    gotoxy(x2, y2 + 1);
    printf("       r:      ,;                               \n");
    gotoxy(x2, y2 + 2);
    printf("     ;H          iL                             \n");
    gotoxy(x2, y2 + 3);
    printf("     G          Zi7;                            \n");
    gotoxy(x2, y2 + 4);
    printf("    DB         gQB;5                            \n");
    gotoxy(x2, y2 + 5);
    printf("    1BB        BJ ;D,                           \n");
    gotoxy(x2, y2 + 6);
    printf("    R.Q        Q. 77c                           \n");
    gotoxy(x2, y2 + 7);
    printf("   :2,.         ..  a              .7           \n");
    gotoxy(x2, y2 + 8);
    printf("   Ji,;       ,:vB;.1              rwJ          \n");
    gotoxy(x2, y2 + 9);
    printf("    LcMBL7::::.rQL X             P5g s          \n");
    gotoxy(x2, y2 + 10);
    printf("     .:;LBL.  :a, g:            :c : :r         \n");
    gotoxy(x2, y2 + 11);
    printf("       ,cG: r1:   :rvsi,        ::    .,        \n");
    gotoxy(x2, y2 + 12);
    printf("  rrrcv:   ;;.;w:     ,;Li;Gv   s     r;        \n");
    gotoxy(x2, y2 + 13);
    printf(" EB      ,P     2L       ,  B7 5       r        \n");
    gotoxy(x2, y2 + 14);
    printf("  X;..,..D       sL.r;, :BB;2  ,r:    :         \n");
    gotoxy(x2, y2 + 15);
    printf("  .c::::67        Ur ;Q;.        i,2::r         \n");
    gotoxy(x2, y2 + 16);
    printf("        c.         D   X          .QP           \n");
    gotoxy(x2, y2 + 17);
    printf("        H;         ;J   G,       .rcR           \n");
    gotoxy(x2, y2 + 18);
    printf("      .s1p         :Q    D     .cr B,           \n");
    gotoxy(x2, y2 + 19);
    printf("     :p  sL        G      Br;77;  B2            \n");
    gotoxy(x2, y2 + 20);
    printf("     O    s2.     r7      cr    sB7             \n");
    gotoxy(x2, y2 + 21);
    printf("     S      rsr,   R       G.7PBH               \n");
    gotoxy(x2, y2 + 22);
    printf("     g.     sLp1ri;1p:     Q2L:                 \n");
    gotoxy(x2, y2 + 23);
    printf("   cBB57.::Ds        2v    g.                   \n");
    gotoxy(x2, y2 + 24);
    printf("   RBZBJ7:,           pvESQZBJ                  \n");
    gotoxy(x2, y2 + 25);
    printf("                         .c             \n");
    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if(strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if(strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");

}
void 동물그림2() {
    gotoxy(x2, y2);
    printf("                    ,c22                             \n");
    gotoxy(x2, y2+1);
    printf("                   ,,  c                             \n");
    gotoxy(x2, y2+2);
    printf("              .:rci   s,                             \n");
    gotoxy(x2, y2+3);
    printf("           Lr;::    ,K                               \n");
    gotoxy(x2, y2+4);
    printf("         :2.         ;r                              \n");
    gotoxy(x2, y2+5);
    printf("        :r        ;   c;                             \n");
    gotoxy(x2, y2+6);
    printf("         c   r  SL::   J.                            \n");
    gotoxy(x2, y2+7);
    printf("         B    ,BB;,;   ;i                            \n");
    gotoxy(x2, y2+8);
    printf("        r,             2                             \n");
    gotoxy(x2, y2+9);
    printf("       c.             S.          .                  \n");
    gotoxy(x2, y2+10);
    printf("        L,:r:.,..::  c.           L:                 \n");
    gotoxy(x2, y2+11);
    printf("         ,,r;,,;L    J             ;:a.              \n");
    gotoxy(x2, y2+12);
    printf("              .7.    ;J             , .H             \n");
    gotoxy(x2, y2+13);
    printf("            ::.:,.    c;7:         .i :i .           \n");
    gotoxy(x2, y2+14);
    printf("       ,7:,:, c,,:s      ,rr:.     7s::: :K7         \n");
    gotoxy(x2, y2+15);
    printf("     :;,  ;;:g    .s   .7;...rJ:    ,   ;Jr.         \n");
    gotoxy(x2, y2+16);
    printf("   .s:  .L, 7.     ;;   .X.;:  s:   7.i :UJr:        \n");
    gotoxy(x2, y2+17);
    printf("  ;7    a  ,;       w    ;: X   H.  ::.  r w.        \n");
    gotoxy(x2, y2+18);
    printf(" .;  :7L   s        c.    s U    K   L.  .:r         \n");
    gotoxy(x2, y2+19);
    printf("rc.rUr7    s        .7    :L:    ;i   ,  .L.         \n");
    gotoxy(x2, y2+20);
    printf("B7:L,      J         1     Qp   :.K    .rB:          \n");
    gotoxy(x2, y2+21);
    printf("  Lr     .rs         P      Lrrr a7.   :7Q           \n");
    gotoxy(x2, y2+22);
    printf("        r7  c        L       g;vrc. .:::R            \n");
    gotoxy(x2, y2+23);
    printf("       2:   .1.     ::       ,2;:..:..:g,            \n");
    gotoxy(x2, y2+24);
    printf("      J       L;.   :,       r,     ,La.             \n");
    gotoxy(x2, y2+25);
    printf("      s        r2v::cL       7:..;rc7:               \n");
    gotoxy(x2, y2+26);
    printf("      rr      L.    .L, .    rr,:::.                 \n");
    gotoxy(x2, y2+27);
    printf("      .7     .L       :L .   ,L                      \n");
    gotoxy(x2, y2+28);
    printf("    :iS;.  ,;r:       .w      L                      \n");
    gotoxy(x2, y2+29);
    printf("   ,g1r;2rr;.        .LJ::i.::P.                     \n");
    gotoxy(x2, y2+30);
    printf("                     .  : , .:                         \n");
    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");

}
void 동물그림3() {
    int x2 = 17, y2 = 5;
    gotoxy(x2, y2);
    printf("                    .:S;r:    .:7.                    .PUv                         \n");
    gotoxy(x2, y2+1);
    printf("                  ,cL; :7    av,i:,:QBJ:               s ;:7                       \n");
    gotoxy(x2, y2+2);
    printf("             .,:saXc:.::L    pr rs: vBv.v             7.;,;;U,                     \n");
    gotoxy(x2, y2+3);
    printf("           :7:727,     Jr.    E   ,:,,   77;         L,r   :c2r:                   \n");
    gotoxy(x2, y2+4);
    printf("          77rw;        :7J     ;SB;     X:rOr       s.c    ..rwJvi:                \n");
    gotoxy(x2, y2+5);
    printf("        :Lrv7        ,  1:2      .77.:;,L          :;,:   ;;  .rrr;X               \n");
    gotoxy(x2, y2+6);
    printf("      .rsL:          7  X L,        X   .S         S s    c      ,725              \n");
    gotoxy(x2, y2+7);
    printf("     ,c7c            r  ;Q 7r:.     a.   M       .s.,:   ;,:       :7H             \n");
    gotoxy(x2, y2+8);
    printf("     p;r            ;    ,:;cLLr7.  s;   72    ,;:,.s     L         ;6L            \n");
    gotoxy(x2, y2+9);
    printf("    ,Ss             w        .:rLv:,s;    K ,:;r::::     ::          LX:           \n");
    gotoxy(x2, y2+10);
    printf("    1g       .,.    L     .     ,7, B:    HQ  r.         v           .Sp           \n");
    gotoxy(x2, y2+11);
    printf("   :B,   ,iL7r:r5,   .     ,.,..,srr:      ,Qr7,.. .    :. .;ri,      raL          \n");
    gotoxy(x2, y2+12);
    printf("   U2  7J;,      a:    .. Kr.,,.             s  ..:,rr. : ;;  BHc7i   .7L          \n");
    gotoxy(x2, y2+13);
    printf("   B, J:          6: rv:rg   r:::B:     .:,.  E:L1r:  irr7   7;., .2   r5.         \n");
    gotoxy(x2, y2+14);
    printf("  ;grc             v5;,,;   6s;.B:    rr:,:rJ: K.,v;O   :;:. v  6R  p  LX          \n");
    gotoxy(x2, y2+15);
    printf("  ,BE               ,:     BX  r;   :L       :2S  ,r P.   sB; 1:7G:  5 p;          \n");
    gotoxy(x2, y2+16);
    printf("   p.               vUB ,,,s   2   75          BM    :;7grgD r  L s; .Bg           \n");
    gotoxy(x2, y2+17);
    printf("                     .SaQBZ.  U,  :E            Br    .HLs  :L 5   B  B;           \n");
    gotoxy(x2, y2+18);
    printf("                    :,.:,::;Oi    ;;            1iJr        :; c  1U  :            \n");
    gotoxy(x2, y2+19);
    printf("                  .si;:   :Q.      1            L  ;Us       .1Bir,                \n");
    gotoxy(x2, y2+20);
    printf("                 7s       X        a           J:    .B     .1Bv                   \n");
    gotoxy(x2, y2 +21);
    printf("                s;       7,       ,S          7:       B,:;1Bg.                    \n");
    gotoxy(x2, y2 + 22);
    printf("                Lr    .,ig       :R,      ..7p,       ,R:L6E:                      \n");
    gotoxy(x2, y2 + 23);
    printf("                 rB1:::. M     ;GJ.7aMJr;ra5;i1Qr    2p.:.                         \n");
    gotoxy(x2, y2 + 24);
    printf("                   ;r:,,Pi     B. .           w;   :;r;.                           \n");
    gotoxy(x2, y2 + 25);
    printf("                        HX;s:s5;               ;;:, ,JQBG                          \n");
    gotoxy(x2, y2 + 26);
    printf("                        :.Hi;;U                     ,:s.                   \n");
    gotoxy(0, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(0, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(0, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(0, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(0, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(0, y2 + 13);
    printf("         .Br        B ");
    gotoxy(0, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(0, y2 + 15);
    printf("                 gB B  ");
    gotoxy(0, y2 + 16);
    printf("                  .p,   ");

}
void 식물그림1() {
    gotoxy(x2, y2);
    printf("             ,7sJLssL:                       \n");
    gotoxy(x2, y2 + 1);
    printf("            ,.       .,                      \n");
    gotoxy(x2, y2 + 2);
    printf("           s.         ,L                     \n");
    gotoxy(x2, y2 + 3);
    printf("          :            :;                    \n");
    gotoxy(x2, y2 + 4);
    printf("         ,B     L       L                    \n");
    gotoxy(x2, y2 + 5);
    printf("         15    iB:     r,                    \n");
    gotoxy(x2, y2 + 6);
    printf("        s             :r                     \n");
    gotoxy(x2, y2 + 7);
    printf("     .;,;,,        ,:;B                      \n");
    gotoxy(x2, y2 + 8);
    printf("     ;..;.:::   :;;, :E                      \n");
    gotoxy(x2, y2 + 9);
    printf("      L ,::,:;;;.    G,                      \n");
    gotoxy(x2, y2 + 10);
    printf("    ,:ir:,:r p;:    7;  ,:;;;:;::.           \n");
    gotoxy(x2, y2 + 11);
    printf("  .sr:  .::::, .r  :c7;7;:,... .:rr:         \n");
    gotoxy(x2, y2 + 12);
    printf(" .w,           . S;:s.             ;:        \n");
    gotoxy(x2, y2 + 13);
    printf(":c,             :::,              .::        \n");
    gotoxy(x2, y2 + 14);
    printf("  .,;;:.      :cJ Z,            :r:          \n");
    gotoxy(x2, y2 + 15);
    printf("      .;;;:;;; 7 r ,r:        :7:            \n");
    gotoxy(x2, y2 + 16);
    printf("               r c   :r;:,::;;,              \n");
    gotoxy(x2, y2 + 17);
    printf("              :: 7       .                   \n");
    gotoxy(x2, y2 + 18);
    printf("              .: r                           \n");
    gotoxy(x2, y2 + 19);
    printf("        :7LssssU L            :2             \n");
    gotoxy(x2, y2 + 20);
    printf("     ,aU7:,   ,::.;          7B:7J1          \n");
    gotoxy(x2, y2 + 21);
    printf("   .:H.         .;Lr        rBBL:            \n");
    gotoxy(x2, y2 + 22);
    printf("  HBP,            .r5UJ77v5Kr..,7Q7          \n");
    gotoxy(x2, y2 + 23);
    printf("OL,X:S                .,,,                   \n");
    gotoxy(x2, y2 + 24);
    printf(".  g rQ.                                    \n");
    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");
}
void 식물그림2() {
    gotoxy(x2, y2);
    printf("                                         :vccLcL:                   \n");
    gotoxy(x2, y2+1);
    printf("                                       ,,        :                  \n");
    gotoxy(x2, y2+2);
    printf("   .,,,,.                      .,7U7;,LL   :;::::r;                 \n");
    gotoxy(x2, y2+3);
    printf(";:::,,.,,;;r;:             .:;::.,.,:;..:J:.     UX                 \n");
    gotoxy(x2, y2+4);
    printf("1;.         .:rr:        :rsK7        :i 7                          \n");
    gotoxy(x2, y2+5);
    printf("  ri            :v;     7; .;.          ;J,    .,::;:;;;::,         \n");
    gotoxy(x2, y2+6);
    printf("   ir             :c  .1.     ::7.       g  .;r;,         ;L        \n");
    gotoxy(x2, y2+7);
    printf("    c,              r:g6.     s;r        :ci:.          :r,         \n");
    gotoxy(x2, y2+8);
    printf("     2              :J .                :r;            L:           \n");
    gotoxy(x2, y2+9);
    printf("     r:           :. r     :.  ,;:     L:             1             \n");
    gotoxy(x2, y2+10);
    printf("      1          ;5B7;    r ,;:  r;  :S              s.             \n");
    gotoxy(x2, y2+11);
    printf("      7,        :,BBU    .:1BBQO  s :c              ,c              \n");
    gotoxy(x2, y2+12);
    printf("      .J        r;P7      rUBQB: ,i J               J               \n");
    gotoxy(x2, y2+13);
    printf("       :7.   ,:cs;.        ,:7: :i s               :7               \n");
    gotoxy(x2, y2+14);
    printf("         :;Sr:.    ,;r;            s               w                \n");
    gotoxy(x2, y2+15);
    printf("          r:          ,7;          2             .J                 \n");
    gotoxy(x2, y2+16);
    printf("         :;    ...      :s.        :7           ;L                  \n");
    gotoxy(x2, y2+17);
    printf("         r,  :;  .:7:     J.        :v.      .:7:                   \n");
    gotoxy(x2, y2+18);
    printf("         .J   .:  ,: ir    1          7w::;;r;,                     \n");
    gotoxy(x2, y2+19);
    printf("          :7   ,: .c  :1   :r        .7                             \n");
    gotoxy(x2, y2+21);
    printf("           ;r   7  5.  .X   J       iv                              \n");
    gotoxy(x2, y2+22);
    printf("            r;  ;,  H   ,1  L      s:                               \n");
    gotoxy(x2, y2+23);
    printf("             J  ,r  .s:  a  s    ;c                                 \n");
    gotoxy(x2, y2+24);
    printf("             r.  U     .:w  7  :7:                                  \n");
    gotoxy(x2, y2+25);
    printf("             r:  rv    ,5  ri:7:                                    \n");
    gotoxy(x2, y2+26);
    printf("              1   ,r;;;:  ;S:.                                      \n");
    gotoxy(x2, y2+27);
    printf("               ::       ,:                                            \n");

    gotoxy(x2 - 32, y2 + 5);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 6);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 7);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 8);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 9);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 11);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 12);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("                  .p,   ");
}
void 식물그림3() {
    gotoxy(x2, y2);
    printf("                    Xpw5Z7.                                      \n");
    gotoxy(x2, y2+1);
    printf("                   i  .:7c.,::::,.                               \n");
    gotoxy(x2, y2+2);
    printf("              .,:cs.L7,          ,r7i                            \n");
    gotoxy(x2, y2+3);
    printf("           ;sw7:.B5J          7;r..:sBH                          \n");
    gotoxy(x2, y2+4);
    printf("         72;.    .1          :BJEJ,   :                          \n");
    gotoxy(x2, y2+5);
    printf("       ;a: .     r:         ,B  :JL:                             \n");
    gotoxy(x2, y2+6);
    printf("      Sr  E      rJ       ;aB:;7 .JS1                            \n");
    gotoxy(x2, y2+7);
    printf("     5:.r5B           .rs2;  X ,U  7w2:                          \n");
    gotoxy(x2, y2+8);
    printf("    UQ7r  :1vr;,    .XJ:      D O   ;1s7                         \n");
    gotoxy(x2, y2+9);
    printf("    77        ,B;B;7P.        O S    ,wrs                        \n");
    gotoxy(x2, y2+10);
    printf("              :; v :      ,  :U B     :J;s                       \n");
    gotoxy(x2, y2+11);
    printf("              J :r       iG;JU rG5     ;rr;      .....           \n");
    gotoxy(x2, y2+12);
    printf("     ,rr77sJcrB JOZ       grr wv ;p     v,g;i77;rirr;,i6R        \n");
    gotoxy(x2, y2+13);
    printf("    2J;      .5, rZ,...:;;:,v:B   rs   .rR;:   ,:,   :L;         \n");
    gotoxy(x2, y2+14);
    printf("   a7 rB2     ;P:;77::i7r7gss.K    Qp:1c.   ;7r,    Xc           \n");
    gotoxy(x2, y2+15);
    printf("   sJ;  g,     ir  ,BDHM   ,,;    ,5BK   ;Lr.      Xr            \n");
    gotoxy(x2, y2+16);
    printf("        :S      J7  r1.         .  ;7  ;2:        ,G             \n");
    gotoxy(x2, y2+17);
    printf("        :a       g, :;         BB: D  H7          P:             \n");
    gotoxy(x2, y2+18);
    printf("        rs        B Dp          .  L5P.           M              \n");
    gotoxy(x2, y2+19);
    printf("Rp      c7        ;BrP     :v2     :B             O              \n");
    gotoxy(x2, y2+20);
    printf("B K;    ;2        ;QP:     B 7S    D             Ur              \n");
    gotoxy(x2, y2+21);
    printf("B  7wL:  R        O        712.   ;2            :Q               \n");
    gotoxy(x2, y2+22);
    printf(":c   .7H  D.     5:     r;        Lr           ;g                \n");
    gotoxy(x2, y2+23);
    printf(" ;J    .J  2L:   g     B:GL        Z         .25                 \n");
    gotoxy(x2, y2+24);
    printf("  LX:..rB,   :r;;B     :L:         1Bc, ..:r2J,                  \n");
    gotoxy(x2, y2+25);
    printf("    ;r::7RBOv,   Jr ;        7     sBB:rrr;:                     \n");
    gotoxy(x2, y2+26);
    printf("           :1PG66SBgB       MB.   :s7                            \n");
    gotoxy(x2, y2+27);
    printf("                     ::...::::::.:;.                      \n");

    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");
}
void 벌레그림1() {
    gotoxy(x2, y2);
    printf("                  ,;;;::;:r;:                   \n");
    gotoxy(x2, y2+1);
    printf("               .r7:   :;r,  ,7L;                \n");
    gotoxy(x2, y2+2);
    printf("              sw7;;:,,H .rJ:   :J:,r71;         \n");
    gotoxy(x2, y2+3);
    printf("             pv:   ss,U;:. .;;  ;S.  J1         \n");
    gotoxy(x2, y2+4);
    printf("            p,;1B.:BB v .:;:  .   :Jr,          \n");
    gotoxy(x2, y2+5);
    printf("           ,E s;BBBBM 5     2   7: g            \n");
    gotoxy(x2, y2+6);
    printf("          ;pS  i;LJr,7      ,L:7   g            \n");
    gotoxy(x2, y2+7);
    printf("         ;2 O            ,;r:rc:: r7            \n");
    gotoxy(x2, y2+8);
    printf("         M  p:         :s;       Oc             \n");
    gotoxy(x2, y2+9);
    printf("         R   Z:      :S;   i;:;i  2             \n");
    gotoxy(x2, y2+10);
    printf("         E    c7riisv,w  :S     ;HL             \n");
    gotoxy(x2, y2+11);
    printf("         :K   .    :L,7H:ac     LB              \n");
    gotoxy(x2, y2+12);
    printf("  ;:;;    72  .   .Q7   .:2LU7rr:               \n");
    gotoxy(x2, y2+13);
    printf("  E  U:    ;J:   :Bi :,    .sJ                  \n");
    gotoxy(x2, y2+14);
    printf("  E  .S      ;5;:Z,   a   r  5                  \n");
    gotoxy(x2, y2+15);
    printf("  :p  s       J,  7  ,r   v.:7                  \n");
    gotoxy(x2, y2+16);
    printf("   ;i:,      :Z  .7 rs::::O;.                   \n");
    gotoxy(x2, y2+17);
    printf("    :H7... :7;.;.J:,      S                     \n");
    gotoxy(x2, y2+18);
    printf("     5.:s:;i.   g   J   .;s;                    \n");
    gotoxy(x2, y2+19);
    printf("     :75. .J..r,,: .s:,UL:7,                    \n");
    gotoxy(x2, y2+20);
    printf("      ,KX,.P: .:  ,;cv  ..                      \n");
    gotoxy(x2, y2+21);
    printf("         ,,rr:,rJ7:,                            \n");

    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");
  
}
void 벌레그림2() {
    gotoxy(x2, y2);
    printf("        css                                  \n");
    gotoxy(x2, y2);
    printf("       :   :                                 \n");
    gotoxy(x2, y2);
    printf("      s    7.                                \n");
    gotoxy(x2, y2);
    printf("     r.    .7                                \n");
    gotoxy(x2, y2);
    printf("    ,r      :;                               \n");
    gotoxy(x2, y2);
    printf("    c        ;:                              \n");
    gotoxy(x2, y2);
    printf("   r       :, r7                             \n");
    gotoxy(x2, y2);
    printf("  2r      .r;B;1r,                           \n");
    gotoxy(x2, y2);
    printf("  7:.     1  QBr..r,                         \n");
    gotoxy(x2, y2);
    printf(" :  s.  :; ;   :   :;;.                      \n");
    gotoxy(x2, y2);
    printf(" L :;::s:   .,.       :;:.                   \n");
    gotoxy(x2, y2);
    printf("s,,   ;i::               ,v.                 \n");
    gotoxy(x2, y2);
    printf("B.   ,;  .i:             .r                  \n");
    gotoxy(x2, y2);
    printf("O,   c     .;:          :r                   \n");
    gotoxy(x2, y2);
    printf("v:  .:       s         ,r                    \n");
    gotoxy(x2, y2);
    printf(" ,5,;;      7.        ;w                     \n");
    gotoxy(x2, y2);
    printf("  rX  ::.  ;:          ;:                    \n");
    gotoxy(x2, y2);
    printf("    :P::Lrc,            ,r.                  \n");
    gotoxy(x2, y2);
    printf("     .P.  ::              r,                 \n");
    gotoxy(x2, y2);
    printf("       KL  :;              H:                \n");
    gotoxy(x2, y2);
    printf("        rr. ,;            .: :;              \n");
    gotoxy(x2, y2);
    printf("          :; ,;:.         a   r7:            \n");
    gotoxy(x2, y2);
    printf("            ,,:;7rr;:   ,,.:..L  rr.         \n");
    gotoxy(x2, y2);
    printf("                 ..:5aiJ;   :r:..L .,        \n");
    gotoxy(x2, y2);
    printf("                        .,s::  .r    \n");

    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");
}
void 벌레그림3() {
    gotoxy(x2, y2);
    printf("           rB                                         \n");
    gotoxy(x2, y2+1);
    printf("           ;7                              .              \n");
    gotoxy(x2, y2+2);
    printf("          .Lc          .rvO          :77r:.rS,;v.         \n");
    gotoxy(x2, y2+3);
    printf("  .7aG;.  .Q.         ;2i7        :77:     .Dv .s         \n");
    gotoxy(x2, y2+4);
    printf(" .LL, .7c  B         2Q:.       r7:    .72HJ;::7.;        \n");
    gotoxy(x2, y2+5);
    printf(" :r;     rcB        6D        ;;    .c5w7:      1         \n");
    gotoxy(x2, y2+6);
    printf("ZL,       ;B       6O       ;r:iSKSc::H.       :c         \n");
    gotoxy(x2, y2+7);
    printf("B7   c722i BJ     UB      ,v;r7r.   7  G.:i7r;:5:         \n");
    gotoxy(x2, y2+8);
    printf("B7i,.Hs  :;RB.   :B      ri:7       ,r;J:.      7.        \n");
    gotoxy(x2, y2+9);
    printf("ZE  ,GM    JQ:   B.     s,;r       :Zr         L:;        \n");
    gotoxy(x2, y2+10);
    printf(" J7.  2r    Brw OB     L,7:      :rr   .,,::r:7,:.        \n");
    gotoxy(x2, y2+11);
    printf(" :B ,:,KD:  5B:.E, 7r,r:r.   .7XXs;::;:::,..rp  H         \n");
    gotoxy(x2, y2+12);
    printf("  B      :;X.     ;7X7a1   :XDJ,             1 7:         \n");
    gotoxy(x2, y2+13);
    printf("  ;B      UL;s   7; r Ds,ir,                 J.2          \n");
    gotoxy(x2, y2+14);
    printf("   HB:r;::B .B    BU .c2J      ...... .     :r1           \n");
    gotoxy(x2, y2+15);
    printf("    H    ;B:.B.,,,:1L;.p7::;;::::::;:;;rirra::r           \n");
    gotoxy(x2, y2+16);
    printf("    ,s    s;::7P,cg   L:                   J c            \n");
    gotoxy(x2, y2+17);
    printf("     1,    7D: ; ..   :27:::,.              Sv            \n");
    gotoxy(x2, y2+18);
    printf("      D: ,;::,:s    :r: J. .:;rrr:.        rp,            \n");
    gotoxy(x2, y2+19);
    printf("      .BB     rK,   D:,7 E,      ,;7ri::.;r:J             \n");
    gotoxy(x2, y2+20);
    printf("        g:    :7B   .r:  6.;7:         M. .s.             \n");
    gotoxy(x2, y2+21);
    printf("         :r7:7:SQ:      7Br  ,rrr.    ;; r7               \n");
    gotoxy(x2, y2+22);
    printf("             B:   ;Q:rQQ  p7:   :BLA:7:                 \n");
    gotoxy(x2, y2+23);
    printf("             s:S; :B  pD  ,r E::7, :5 r.                  \n");
    gotoxy(x2, y2+24);
    printf("             s R,2 .:  R,  Z:,; 5   K a                   \n");
    gotoxy(x2, y2+26);
    printf("             .L.,L: H  5J  .BsZ  H,r,J.                   \n");
    gotoxy(x2, y2+27);
    printf("               ..::.s; r i  , :r:::..             \n");

    gotoxy(x2 - 32, y2 + 8);
    printf("           sQBBDgBB5 ");
    gotoxy(x2 - 32, y2 + 9);
    printf("          sBZ:      BB    ");
    gotoxy(x2 - 32, y2 + 10);
    printf("         SB          Br    ");
    gotoxy(x2 - 32, y2 + 11);
    if (strlen(say) == 0)
        printf("         Q           RB \n");
    else if (strlen(say) == 5)
        printf("         Q  %s    RB ", say);
    else if (strlen(say) == 6)
        printf("         Q  %s   RB ", say);
    else if (strlen(say) == 7)
        printf("         Q  %s  RB ", say);
    else
        printf("         Q  %s     RB ", say);
    gotoxy(x2 - 32, y2 + 12);
    printf("         B;         ,B  ");
    gotoxy(x2 - 32, y2 + 13);
    printf("         .Br        B ");
    gotoxy(x2 - 32, y2 + 14);
    printf("           BBOZBBg  Bn");
    gotoxy(x2 - 32, y2 + 15);
    printf("                 gB B  ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                  .p,   ");
}
void 메시지() {
    gotoxy(x2 - 32, y2 + 8);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 9);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 10);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 11);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 12);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 13);
    printf("                                 ");
    gotoxy(x2 - 32, y2 + 14);
    printf("                                ");
    gotoxy(x2 - 32, y2 + 15);
    printf("                                 ");
    gotoxy(x2 - 32, y2 + 16);
    printf("                               ");
}
void 동물엔딩() {
    int y2;
    y2 = 14;
    gotoxy(x2, y2);
    printf("                         :rir;.                       \n");
    gotoxy(x2, y2+1);
    printf("                      ,1GDGEs16E.                             \n");
    gotoxy(x2, y2+2);
    printf("                     rXDGp6X7 sQBL                            \n");
    gotoxy(x2, y2+3);
    printf("                    Jw;rr7i  ri7JRH                           \n");
    gotoxy(x2, y2+4);
    printf("                   Uwrr7r   iirr7LOZ                          \n");
    gotoxy(x2, y2+5);
    printf("                  HSirpEs     i7r71BE                         \n");
    gotoxy(x2, y2+6);
    printf("                 LXrri7   rL2s7rr5DgB2                        \n");
    gotoxy(x2, y2+7);
    printf("                .prrrr    J1UOJ;sDPZgB,                       \n");
    gotoxy(x2, y2+8);
    printf("                MGJi      rLJJr;X6pPGBB                       \n");
    gotoxy(x2, y2+9);
    printf("               7QEPP7         ir2GP6ZRQ;                      \n");
    gotoxy(x2, y2+10);
    printf("               QQHXKpr  r7Lrr 7rv6EpGDBQ                      \n");
    gotoxy(x2, y2+11);
    printf("               BEKaX6L: KXSKpJrv7JZgEgBB                      \n");
    gotoxy(x2, y2+12);
    printf("              ;BEXHXZscZX5Sa6ZvvsvsHgRBB:                     \n");
    gotoxy(x2, y2+13);
    printf("              7BEpHK6Lr666K6GX7sLsvLJpgB:                     \n");
    gotoxy(x2, y2+14);
    printf("              ;BgpZZp77cXHpX27sLs2Pp65PB,                     \n");
    gotoxy(x2, y2+15);
    printf("               BBRDOsssL7LccvJswZMRQQBgB                      \n");
    gotoxy(x2, y2+16);
    printf("               5BR6J112JJJ11Uw2GQgRRBBB7                      \n");
    gotoxy(x2, y2+17);
    printf("                RBXXaaUap52aUXUgBBQBQBg                       \n");
    gotoxy(x2, y2+18);
    printf("                 BBgEpKXK5aaHXKPgRMQBg                        \n");
    gotoxy(x2, y2+19);
    printf("                  LBBBgDZEp6KEZOOQBQr                         \n");
    gotoxy(x2, y2+20);
    printf("                    rKBBBBBBBQBBBH;                           \n");
    gotoxy(x2, y2+21);
    printf("                       .:7sJsr:                               \n");


}
void 벌레엔딩() {
    int y2 = 14;
    gotoxy(x2, y2);
    printf("                        .                                 \n");
    gotoxy(x2, y2+1);
    printf("                 iKBBBG6ZMBBRs.                           \n");
    gotoxy(x2, y2+2);
    printf(".             ,MBOr  :      :2BBJ                         \n");
    gotoxy(x2, y2+3);
    printf("             BBr     L  :,:     ZB7                       \n");
    gotoxy(x2, y2+4);
    printf("           :Bv       L  J 1  :    BB                      \n");
    gotoxy(x2, y2+5);
    printf("          :B   ;: .  J  L  s .L.   RQ                     \n");
    gotoxy(x2, y2+6);
    printf("          B r  L  J  s  s  ;;  s,   BH                    \n");
    gotoxy(x2, y2+7);
    printf("         RG i  s  7  s  s   J   s,   B                    \n");
    gotoxy(x2, y2+8);
    printf("         B :,  L ,r  s  s   :;   J   B7                   \n");
    gotoxy(x2, y2+9);
    printf("         B :,  s ,i  L  L    s    J  Qp                   \n");
    gotoxy(x2, y2+10);
    printf(".        B .;  s .7  r. c    s    :: Qc                   \n");
    gotoxy(x2, y2+11);
    printf("         BH ;  :  J  ;; i,   J     7 B                    \n");
    gotoxy(x2, y2+12);
    printf("          B :     J   1 ::   s      BK                    \n");
    gotoxy(x2, y2+13);
    printf("          ;B      s   L .r   J     HB                     \n");
    gotoxy(x2, y2+14);
    printf("           ;B;    1   7 .r   J    BB                      \n");
    gotoxy(x2, y2+15);
    printf("             BB;  ,.    ,;      HBw                       \n");
    gotoxy(x2, y2+16);
    printf("              ;BBX:         .vBBX                         \n");
    gotoxy(x2, y2+17);
    printf("                 7OBBQEKXgBBQK,                           \n");
    gotoxy(x2, y2+18);
    printf(".                     ...                                 \n");

}
void 식물엔딩() {
    int y2 = 14;
    gotoxy(x2, y2);
    printf("                           ..,                       \n");
    gotoxy(x2, y2+1);
    printf("                      sZgDGr7wgQ1                    \n");
    gotoxy(x2, y2+2);
    printf("                    cBs    B,   LBQ                 \n");
    gotoxy(x2, y2+3);
    printf("                   2B   B  BL     OQ                 \n");
    gotoxy(x2, y2+4);
    printf("                   B   BB,         B:                \n");
    gotoxy(x2, y2+5);
    printf("              :7KHBs  .B.          sM                \n");
    gotoxy(x2, y2+6);
    printf("           ;EBPc:.                 7Q                \n");
    gotoxy(x2, y2+7);
    printf("         rBD;                      rQ                \n");
    gotoxy(x2, y2+8);
    printf("        BQ                         rB                \n");
    gotoxy(x2, y2+9);
    printf("       QK                          OX                \n");
    gotoxy(x2, y2+10);
    printf("       B                          ,B                 \n");
    gotoxy(x2, y2+11);
    printf("       B                          B                  \n");
    gotoxy(x2, y2+12);
    printf("       B                         B                   \n");
    gotoxy(x2, y2+13);
    printf(".      rB                      7B,                   \n");
    gotoxy(x2, y2+14);
    printf("        EB                    BQ                     \n");
    gotoxy(x2, y2+15);
    printf("         HB                 7Qr                      \n");
    gotoxy(x2, y2+16);
    printf("          cBr            iPBp                        \n");
    gotoxy(x2, y2+17);
    printf("            MQp5aSHSXHggg5:                          \n");
}

void 가동물그림3() {
    int x2 = 17, y2 = 5;
    gotoxy(x2, y2);
    printf("                    .:S;r:    .:7.                    .PUv                         \n");
    gotoxy(x2, y2 + 1);
    printf("                  ,cL; :7    av,i:,:QBJ:               s ;:7                       \n");
    gotoxy(x2, y2 + 2);
    printf("             .,:saXc:.::L    pr rs: vBv.v             7.;,;;U,                     \n");
    gotoxy(x2, y2 + 3);
    printf("           :7:727,     Jr.    E   ,:,,   77;         L,r   :c2r:                   \n");
    gotoxy(x2, y2 + 4);
    printf("          77rw;        :7J     ;SB;     X:rOr       s.c    ..rwJvi:                \n");
    gotoxy(x2, y2 + 5);
    printf("        :Lrv7        ,  1:2      .77.:;,L          :;,:   ;;  .rrr;X               \n");
    gotoxy(x2, y2 + 6);
    printf("      .rsL:          7  X L,        X   .S         S s    c      ,725              \n");
    gotoxy(x2, y2 + 7);
    printf("     ,c7c            r  ;Q 7r:.     a.   M       .s.,:   ;,:       :7H             \n");
    gotoxy(x2, y2 + 8);
    printf("     p;r            ;    ,:;cLLr7.  s;   72    ,;:,.s     L         ;6L            \n");
    gotoxy(x2, y2 + 9);
    printf("    ,Ss             w        .:rLv:,s;    K ,:;r::::     ::          LX:           \n");
    gotoxy(x2, y2 + 10);
    printf("    1g       .,.    L     .     ,7, B:    HQ  r.         v           .Sp           \n");
    gotoxy(x2, y2 + 11);
    printf("   :B,   ,iL7r:r5,   .     ,.,..,srr:      ,Qr7,.. .    :. .;ri,      raL          \n");
    gotoxy(x2, y2 + 12);
    printf("   U2  7J;,      a:    .. Kr.,,.             s  ..:,rr. : ;;  BHc7i   .7L          \n");
    gotoxy(x2, y2 + 13);
    printf("   B, J:          6: rv:rg   r:::B:     .:,.  E:L1r:  irr7   7;., .2   r5.         \n");
    gotoxy(x2, y2 + 14);
    printf("  ;grc             v5;,,;   6s;.B:    rr:,:rJ: K.,v;O   :;:. v  6R  p  LX          \n");
    gotoxy(x2, y2 + 15);
    printf("  ,BE               ,:     BX  r;   :L       :2S  ,r P.   sB; 1:7G:  5 p;          \n");
    gotoxy(x2, y2 + 16);
    printf("   p.               vUB ,,,s   2   75          BM    :;7grgD r  L s; .Bg           \n");
    gotoxy(x2, y2 + 17);
    printf("                     .SaQBZ.  U,  :E            Br    .HLs  :L 5   B  B;           \n");
    gotoxy(x2, y2 + 18);
    printf("                    :,.:,::;Oi    ;;            1iJr        :; c  1U  :            \n");
    gotoxy(x2, y2 + 19);
    printf("                  .si;:   :Q.      1            L  ;Us       .1Bir,                \n");
    gotoxy(x2, y2 + 20);
    printf("                 7s       X        a           J:    .B     .1Bv                   \n");
    gotoxy(x2, y2 + 21);
    printf("                s;       7,       ,S          7:       B,:;1Bg.                    \n");
    gotoxy(x2, y2 + 22);
    printf("                Lr    .,ig       :R,      ..7p,       ,R:L6E:                      \n");
    gotoxy(x2, y2 + 23);
    printf("                 rB1:::. M     ;GJ.7aMJr;ra5;i1Qr    2p.:.                         \n");
    gotoxy(x2, y2 + 24);
    printf("                   ;r:,,Pi     B. .           w;   :;r;.                           \n");
    gotoxy(x2, y2 + 25);
    printf("                        HX;s:s5;               ;;:, ,JQBG                          \n");
    gotoxy(x2, y2 + 26);
    printf("                        :.Hi;;U                     ,:s.                   \n");
    gotoxy(0, y2 + 8);
  
}