#include <stdio.h> //���Ĵٵ� ��ǲ�ƿ�ǲ
#include <conio.h> //Ű�� ���õ� ��Ŭ���

void main()
{
	/*
	char c;

	c = _getch(); //������ getch()�� ������, ���ȹ����� _�� ����

	printf("Ű: %d \n", c); //Ű���忡 �ִ� Ű�� ���ڷ� ��ȯ�ؼ� �˷���
	
	�ǽð����� ���� ���ϰ� ���α׷��� �����
	*/

	//while (1) // ���ѷ���
	//{
	//	//Ű������ ������ �����Ͽ� �������� 0�̿��� ���� �ش�.
	//	if (_kbhit())
	//	{
	//		printf("Ű���� �Է� ����");
	//		break;
	//	}
	//	printf("�Է� ����� \n");
	//}

	//�ּ� �޶� �巡�� �� Ctrl + k + c�ϸ� ��ü �ּ��� �޸�
	
	while (true)
	{
		char pressKey;
		//Ű�� �ԷµǸ� ����ش�.
		if (_kbhit)
		{
			//Ű�� �Է� �޴´�.
			pressKey = _getch();

			switch (pressKey)
			{
			case 72:
				printf("ȭ��ǥ ����Ű \n");
				break;
			case 75:
				printf("ȭ��ǥ ����Ű \n");
				break;
			case 77:
				printf("ȭ��ǥ ������Ű \n");
				break;
			case 80:
				printf("ȭ��ǥ �Ʒ���Ű \n");
				break;
			}
		}
	}
}

