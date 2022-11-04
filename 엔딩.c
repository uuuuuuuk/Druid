#include<stdio.h>
#include<windows.h>
#define GREEN    "\x1b[32m"
#define RESET    "\x1b[0m"
#define YELLOW    "\x1b[33m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"

extern char 동물이름[30], 식물이름[30], 벌레이름[30];
int 엔딩(int a) {
	system("cls");
	Sleep(500);
	printf("정말 대단하네요. 누가 작디 작던 한 생명을 이렇게까지 키울 줄 알았겠어요??\n\n");
	Sleep(1500);
	printf("당신의 애정에는 누구든 고개를 젓겠네요..\n\n\n");
	Sleep(1500);
	printf("어라? 당신의 생명체가 줄 것이 있는 것 같은데요??");
	Sleep(1500);
	if (a == 1)
	{
		Sleep(1500);
		printf("%s이 당신에게 줄 것은 바로..!!\n\n", 동물이름);
		Sleep(2001);
		printf("알이네요! 어떤 알일까요?..??혹시 자신의..?? ");
		동물엔딩();
		exit(0);
	}
	else if (a == 2) {
		printf("%s이 당신에게 줄 것은 바로..!!\n\n", 벌레이름);
		Sleep(1001);
		printf("알이네요! 어떤 알일까요?..?? 혹시 자신의..?? ");
		벌레엔딩();
		exit(0);
	}
	else if (a == 3) {
		printf("%s이 당신에게 줄 것은 바로..!!\n\n", 식물이름);
		Sleep(1001);
		printf("씨앗이네요! 어떤 씨앗일까요?..?? 혹시 자신의..?? ");
		식물엔딩();
		exit(0);
	}
}

// 봉인중 언젠간 열리길기원