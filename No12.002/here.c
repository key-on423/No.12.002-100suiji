//#include <stdio.h>
//void set_mode(int mode);
//void show_info(int modee, double oil, double kilo);
//void get_info(int modee);
//void get_info(int modee)
//{
//	double kilo;
//	double oil;
//	if (modee == 0)
//	{
//		printf("��������ʻ�Ĺ���·�̣�");
//		while (scanf("%lf", &kilo) != 1)
//		{
//
//			while (getchar() != '\n')
//				continue;
//			printf("�����������������!:");
//
//		}
//		printf("��������ʻ�����ĵ���������");
//		while (scanf("%lf", &oil) != 1)
//		{
//			printf("�����������������:");
//			while (getchar() != '\n')
//				continue;
//
//		}
//	}
//	if (modee == 1)
//	{
//		printf("��������ʻ��Ӣ��·�̣�");
//		while (scanf("%lf", &kilo) != 1)
//		{
//			printf("�����������������:");
//			while (getchar() != '\n')
//				continue;
//
//		}
//		printf("��������ʻ�����ĵļ�������");
//		while (scanf("%lf", &oil) != 1)
//		{
//			printf("�����������������:");
//			while (getchar() != '\n')
//				continue;
//
//		}
//	}
//	show_info(modee, oil, kilo);
//}
//void show_info(int modee,double oil,double kilo)
//{
//	if (modee == 0)
//		printf("�ͺ�%.2lf��ÿһ�ٹ���\n", (oil / kilo) * 100);
//	if (modee == 1)
//		printf("�ͺ�%.1lf����ÿӢ��\n", kilo / oil);
//
//}
//void set_mode(int mode)
//{
//	int modee;
//	if (mode == 1)
//	{
//		printf("������������������\n");
//		modee = 1;
//		get_info(modee);
//	}
//	if (mode == 0)
//	{
//		printf("�������������й���\n");
//		modee = 0;
//		get_info(modee);
//	}
//
//	if (mode != 1 && mode != 0)
//	{
//		printf("û��%d����ģʽ������������ģʽ1�����ƣ�����\n", mode);
//		modee = 1;
//	}
//}
//int main()
//{
//	int mode;
//	printf("���� 0 �������㣬 ���� 1 ��������: ");
//	scanf("%d", &mode);
//	while (mode >= 0)
//	{
//		set_mode(mode);
//		printf("���� 0 �������㣬 ���� 1 ��������");
//		printf("(���� -1���˳�): ");
//		scanf("%d", &mode);
//	}
//	printf("����.\n");
//	return 0;
//}


//4.��һ��ѭ���б�д������һ���������ú��������������õĴ���
//#include <stdio.h>
//int count = 0;
//int sum = 0;
//int jia(int x, int y);
//int main()
//{
//	int x, y;
//	printf("�����������������������ܺ�:\n");
//	scanf("%d %d", &x, &y);
//	int all=jia(x,y);
//	printf("������%d�������Ϊ%d\n", all, sum);
//}
//int jia(int x, int y)
//{
//	
//	printf("��ʼֵ%d��%d+%d=%d\n", sum, x, y,sum+x+y);
//	sum += x + y;
//	count++;
//	printf("��Ҫ������?\n");
//	printf("����������1��������0�˳�\n");
//	int panbie;
//	scanf("%d", &panbie);
//	if (panbie != 0&&panbie==1)
//	{
//		printf("���������������������������ܺ�:\n");
//		scanf("%d %d", &x, &y);
//		while (getchar() != '\n')
//			continue;
//		jia(x, y);
//	}
//	return count;
//}

//5.��дһ����������100��1��10�ķ�Χ�ڵ�����������Խ�������

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(0));
	int roll[100];
	int i = 0;
	while (i < 100)
	{
		roll[i] = rand() % 101;
		i++;
	}
	int w;
	for (i = 0;i < 100;i++)
	{
		for (w = 0;w < 100 - i;w++)
		{
			int k = roll[w];
			if (roll[w] < roll[w + 1])
			{
				roll[w] = roll[w + 1];
				roll[w + 1] = k;
			}
		}
	}
	printf("���ս������е�100�������Ϊ��\n");
	for (i = 0;i < 100;i++)
	{
		printf("%d ", roll[i]);
		if ((i+1) % 10 == 0&&i!=0)
			printf("\n");

	}
}