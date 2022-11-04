#include<stdio.h>
#include<windows.h>
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



int 진화시키기(int a) {
    int x2 = 32, y2 = 6;
	PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
	if (a == 1)
	{
		for (int i = 0; i <= 10; i++)
		{
			system("cls");
			Sleep(501);
			동물그림1();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			동물그림2();
			메시지();
			Sleep(501);
		}
				
		
    
    }
else if (a == 2)
    {
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			벌레그림1();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			벌레그림2();
			메시지();
			Sleep(501);
		}
    }
else if (a == 3)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			식물그림1();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			식물그림2();
			메시지();
			Sleep(501);
		}
	}
else if (a == 4)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			동물그림2();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			가동물그림3();
			
			Sleep(501);
		}
	}
else if (a == 5)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			벌레그림2();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			벌레그림3();
			메시지();
			Sleep(501);
		}
	}
else if (a == 6)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("진화.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			식물그림2();
			메시지();
			Sleep(501);
			system("cls");
			Sleep(501);
			식물그림3();
			메시지();
			Sleep(501);
		}
	}

	switch (a) {

	case 1:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		동물진화1();
		break;
	case 2:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		벌레진화1();
		break;
	case 3:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		식물진화1();
		break;
	case 4:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		동물진화2();
		break;
	case 5:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		벌레진화2();
		break;
	case 6:
		PlaySound(TEXT("포켓몬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		식물진화2();
		break;
	default:
		break;
	}

}