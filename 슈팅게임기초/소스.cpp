#include <stdio.h>
#include <Windows.h>

//미사일의 구조체를 만들어준다.
struct BULLET
{
	int x;
	int y;
	bool fire; // true  false  0  1
};

BULLET pBullet;
char bg[25][80];

//내용을 지우는 함수
void ClearScreen()
{
	//콘솔내용지우기
	system("cls");

	for (int y = 0; y < 25; y++)
	{
		for (int x = 0; x < 80; x++)
		{
			bg[y][x] = ' ';
		}
	}
}

//움직임을 담당
void GameMove()
{
	if (pBullet.fire == true)
	{
		bg[pBullet.y][pBullet.x] = '>';
		pBullet.x++;
	}
	if (pBullet.x > 78)
	{
		pBullet.fire = false;
	}
}

//그려주는 함수
void PrintScreen()
{
	bg[24][79] = '\0'; //배열 끝에 널문자를 넣어줘서 문자열로 만든다.
	printf("%s", bg);
}
void main()
{
	pBullet.x = 12;
	pBullet.y = 12;
	pBullet.fire = true; //미사일 발사중

	int dwTime = GetTickCount(); // 현재 초단위 시간 함수 1/1000초 단위를 셈.


	while (true) // 게임 무한 루프
	{
		//0.05초 지연
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
		}
		//지워준다.
		ClearScreen();
		//움직임처리
		GameMove();
		//그려준다.
		PrintScreen();
	}
}