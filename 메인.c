#include<stdio.h>
#include <locale.h>
#include<conio.h>
#include<Windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
//색깔 필요시 복붙하면됨
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"



int main() {

	int 선택완료;
	선택완료 = 0;
	//원래 출력 못하는 문자도 출력 해주게 하는 코드 혹시 몰라 넣어놈
	 CursorView();
	setlocale(LC_ALL, "ko_KR");
	//화면 맟추는 코드
	system("mode con: cols=100 lines=40");


	PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		시작화면();
		선택완료 = 선택지();
		
		if (선택완료 == 0)
		{

			인트로();
		}
		else if (선택완료 == 2)
		{
			system("cls");
			게임방법();
		}
		else if (선택완료 == 4)
		{
			printf(RESET);
			system("cls");
			exit(0);
			//종료
		}
		system("cls");
	}
		while (1);
		
}
