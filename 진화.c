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



int ��ȭ��Ű��(int a) {
    int x2 = 32, y2 = 6;
	PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
	if (a == 1)
	{
		for (int i = 0; i <= 10; i++)
		{
			system("cls");
			Sleep(501);
			�����׸�1();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�����׸�2();
			�޽���();
			Sleep(501);
		}
				
		
    
    }
else if (a == 2)
    {
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			�����׸�1();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�����׸�2();
			�޽���();
			Sleep(501);
		}
    }
else if (a == 3)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			�Ĺ��׸�1();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�Ĺ��׸�2();
			�޽���();
			Sleep(501);
		}
	}
else if (a == 4)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			�����׸�2();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�������׸�3();
			
			Sleep(501);
		}
	}
else if (a == 5)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			�����׸�2();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�����׸�3();
			�޽���();
			Sleep(501);
		}
	}
else if (a == 6)
	{
		for (int i = 0; i <= 10; i++)
		{
			PlaySound(TEXT("��ȭ.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Sleep(501);
			�Ĺ��׸�2();
			�޽���();
			Sleep(501);
			system("cls");
			Sleep(501);
			�Ĺ��׸�3();
			�޽���();
			Sleep(501);
		}
	}

	switch (a) {

	case 1:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		������ȭ1();
		break;
	case 2:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		������ȭ1();
		break;
	case 3:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		�Ĺ���ȭ1();
		break;
	case 4:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		������ȭ2();
		break;
	case 5:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		������ȭ2();
		break;
	case 6:
		PlaySound(TEXT("���ϸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		�Ĺ���ȭ2();
		break;
	default:
		break;
	}

}