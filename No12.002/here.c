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
//		printf("请输入行驶的公里路程：");
//		while (scanf("%lf", &kilo) != 1)
//		{
//
//			while (getchar() != '\n')
//				continue;
//			printf("输入错误请重新输入!:");
//
//		}
//		printf("请输入行驶所消耗的油升量：");
//		while (scanf("%lf", &oil) != 1)
//		{
//			printf("输入错误请重新输入:");
//			while (getchar() != '\n')
//				continue;
//
//		}
//	}
//	if (modee == 1)
//	{
//		printf("请输入行驶的英里路程：");
//		while (scanf("%lf", &kilo) != 1)
//		{
//			printf("输入错误请重新输入:");
//			while (getchar() != '\n')
//				continue;
//
//		}
//		printf("请输入行驶所消耗的加仑量：");
//		while (scanf("%lf", &oil) != 1)
//		{
//			printf("输入错误请重新输入:");
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
//		printf("油耗%.2lf升每一百公里\n", (oil / kilo) * 100);
//	if (modee == 1)
//		printf("油耗%.1lf加仑每英里\n", kilo / oil);
//
//}
//void set_mode(int mode)
//{
//	int modee;
//	if (mode == 1)
//	{
//		printf("接下来程序将运行美制\n");
//		modee = 1;
//		get_info(modee);
//	}
//	if (mode == 0)
//	{
//		printf("接下来程序将运行公制\n");
//		modee = 0;
//		get_info(modee);
//	}
//
//	if (mode != 1 && mode != 0)
//	{
//		printf("没有%d这种模式，接下来按照模式1（美制）进行\n", mode);
//		modee = 1;
//	}
//}
//int main()
//{
//	int mode;
//	printf("输入 0 公制运算， 输入 1 美制运算: ");
//	scanf("%d", &mode);
//	while (mode >= 0)
//	{
//		set_mode(mode);
//		printf("输入 0 公制运算， 输入 1 美制运算");
//		printf("(输入 -1来退出): ");
//		scanf("%d", &mode);
//	}
//	printf("结束.\n");
//	return 0;
//}


//4.在一个循环中编写并测试一个函数，该函数返还它被调用的次数
//#include <stdio.h>
//int count = 0;
//int sum = 0;
//int jia(int x, int y);
//int main()
//{
//	int x, y;
//	printf("请输入两个数，程序会计算总和:\n");
//	scanf("%d %d", &x, &y);
//	int all=jia(x,y);
//	printf("计算了%d次最后结果为%d\n", all, sum);
//}
//int jia(int x, int y)
//{
//	
//	printf("起始值%d加%d+%d=%d\n", sum, x, y,sum+x+y);
//	sum += x + y;
//	count++;
//	printf("还要继续吗?\n");
//	printf("继续请输入1或者输入0退出\n");
//	int panbie;
//	scanf("%d", &panbie);
//	if (panbie != 0&&panbie==1)
//	{
//		printf("请输入两个数，程序会继续计算总和:\n");
//		scanf("%d %d", &x, &y);
//		while (getchar() != '\n')
//			continue;
//		jia(x, y);
//	}
//	return count;
//}

//5.编写一个程序，生成100个1到10的范围内的随机数，并以降序排列

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
	printf("按照降序排列的100个随机数为：\n");
	for (i = 0;i < 100;i++)
	{
		printf("%d ", roll[i]);
		if ((i+1) % 10 == 0&&i!=0)
			printf("\n");

	}
}