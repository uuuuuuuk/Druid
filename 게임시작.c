#include<stdio.h>
#include<Windows.h>

#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define SUBMIT 4

void 에니메이션(int a){
	system("cls");


    printf("                                                                                      .:;ir7c7r\n");
    Sleep(100);
    printf("                                                                                 ,:r7sJJc7rrir,\n");
    Sleep(100);
    printf("                                                                            ,:7L5wJLcri::,,,,,.\n");
    Sleep(100);
    printf("     L;sss7rr7i:,,,:,,...,,,,::;:.                                    .:;7LU22JJL7ri::,,,:::::.\n");
    Sleep(100);
    printf("     RORgH2sw5p6ZPPXXSX5S1211J17JSUw1sLvLr;,...             ::;:;;r7wSpXSsv7rirrr;:,,,::r7vr7r:\n");
    Sleep(100);
    printf("     1r7i;;rrvvLs2UX2S5XXH22JsLsr7rrsXUXXK5aPRgR6X: rw7ssSXHKH1Jcc7c7r;:::,::;;;:,,,:;:,.. .,::\n");
    Sleep(100);
    printf("     :.:;;;:;;;:;rLs1sU1USH517rr7r77;,:;:::::;rr7i. .rcrr;:::::,,.;77rr:,7a7r;;::,;rr.         \n");
    Sleep(100);
    printf("     r:77Lvc7r::;rirrr7LsJ12ssrrr7rcr.                           .;,;2pBgBgLr;:::rr:           \n");
    Sleep(100);
    printf("     w7JJccL5HUJvri;;:;;;;i;7s1LriL77s7                         ,sr:vKBBBRsr;:rr;.             \n");
    Sleep(100);
    printf("     :..     ,LKUSXSwJsJsv:,:r7HSi:rrrcS                        7GsLXBBgsi;rrr,                \n");
    Sleep(100);
    printf("                  .,::;iriL7;,:i1ar:rr7:                         .7LZpL7;;i,.                  \n");
    Sleep(100);
    printf("                          HBBJ:::Lsr7L:                             v7sw7:                     \n");
    Sleep(100);
    printf("                           sBBSLJsa1s.                              :w7,                       \n");
    Sleep(100);
    printf("                             ,...,,,                                                           \n\n\n\n");
    Sleep(500);
    printf("아아, 제 목소리 잘 들리시나요??\n\n\n");
    Sleep(1000);
    printf("옛날 옛날에 드루이드라는 종족이 있었어요. \n\n그리고 당신은 그 드루이드고요.\n\n\n");
    Sleep(1000);
    printf("당신의 종족 특징은 생명체들에게 사랑받는다는 거에요.\n\n예를 들면 동물이나 식물, 벌레같은 생명체까지도요.\n\n\n");
    Sleep(1000);
    printf("갑작스러워도 어쩔 수 없죠. 종특인데요 뭐.\n\n\n");
    Sleep(1000);
    printf("벌써 당신을 부르는 것 같은 소리가 들리지 않나요.. ?    ('space'를 눌러 다음으로 넘어가기..)");
 
    while (1)
    {
        if (키보드() == SUBMIT);
        {
            break;
        }
    }
}