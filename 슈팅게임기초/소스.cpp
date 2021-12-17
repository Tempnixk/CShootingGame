#include <stdio.h>
#include <Windows.h>

//�̻����� ����ü�� ������ش�.
struct BULLET
{
	int x;
	int y;
	bool fire; // true  false  0  1
};

BULLET pBullet;
char bg[25][80];

//������ ����� �Լ�
void ClearScreen()
{
	//�ֳܼ��������
	system("cls");

	for (int y = 0; y < 25; y++)
	{
		for (int x = 0; x < 80; x++)
		{
			bg[y][x] = ' ';
		}
	}
}

//�������� ���
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

//�׷��ִ� �Լ�
void PrintScreen()
{
	bg[24][79] = '\0'; //�迭 ���� �ι��ڸ� �־��༭ ���ڿ��� �����.
	printf("%s", bg);
}
void main()
{
	pBullet.x = 12;
	pBullet.y = 12;
	pBullet.fire = true; //�̻��� �߻���

	int dwTime = GetTickCount(); // ���� �ʴ��� �ð� �Լ� 1/1000�� ������ ��.


	while (true) // ���� ���� ����
	{
		//0.05�� ����
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
		}
		//�����ش�.
		ClearScreen();
		//������ó��
		GameMove();
		//�׷��ش�.
		PrintScreen();
	}
}