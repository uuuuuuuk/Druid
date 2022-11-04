
#include<stdio.h>
#include<windows.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define SUBMIT 4

void 게임방법() {

	system("cls");

	printf(RESET"\n\n\n\n\n\n");
	printf("                                              조작법\n\n");
	printf("                                      메뉴이동 =  W  A  S  D(+ 방향키) \n\n");
	printf("	                                   선택 = SPACE\n\n");
	printf("	                                이름정하기 = ENTER\n\n\n\n");
	printf("                                               설명\n\n");
	printf(YELLOW"                             사료주기, " BLUE"물 주기, " RED"놀아주기"RESET "를 선택하여\n\n");
	printf(YELLOW"                                배고픔,"BLUE"목마름,"RED"호감도"RESET"를 잘 관리해서 \n\n");
	printf("                                   동물을 바르게 성장시키세요!\n\n\n\n");
	printf("                                               제작\n\n");
	printf(YELLOW"                                           패트와 매트팀\n\n");
	printf(RESET"                             1215 최민욱 = 사운드 코딩 과 스토리 및 디자인\n\n");
	printf("                             1217 허여준 =  전반적인 기술 코딩 ");
	while (1) 
	{
		if (키보드() == SUBMIT)
		{
			break;
		}
	}
}