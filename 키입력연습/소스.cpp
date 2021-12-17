#include <stdio.h> //스탠다드 인풋아웃풋
#include <conio.h> //키와 관련된 인클루드

void main()
{
	/*
	char c;

	c = _getch(); //원래는 getch()를 썼으나, 보안문제로 _를 적용

	printf("키: %d \n", c); //키보드에 있는 키를 숫자로 변환해서 알려줌
	
	실시간으로 받지 못하고 프로그램이 종료됨
	*/

	//while (1) // 무한루프
	//{
	//	//키보드의 눌림을 감지하여 눌렀을때 0이외의 값을 준다.
	//	if (_kbhit())
	//	{
	//		printf("키보드 입력 감지");
	//		break;
	//	}
	//	printf("입력 대기중 \n");
	//}

	//주석 달때 드래그 후 Ctrl + k + c하면 전체 주석이 달림
	
	while (true)
	{
		char pressKey;
		//키가 입력되면 잡아준다.
		if (_kbhit)
		{
			//키를 입력 받는다.
			pressKey = _getch();

			switch (pressKey)
			{
			case 72:
				printf("화살표 위쪽키 \n");
				break;
			case 75:
				printf("화살표 왼쪽키 \n");
				break;
			case 77:
				printf("화살표 오른쪽키 \n");
				break;
			case 80:
				printf("화살표 아래쪽키 \n");
				break;
			}
		}
	}
}

