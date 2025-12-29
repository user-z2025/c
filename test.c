#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>
struct peo
{
	char name[20];
	int age;
	char tele[20];
};
struct stu
{
	struct peo p;
	int num;
	float f;
};
void print1(struct peo* p)
{
	printf("%s %d %s\n", p->name, p->age, p->tele);
}
void print2(struct stu* s1)
{
	printf("%s %d %s %d %.2f\n", (*s1).p.name, (*s1).p.age, (*s1).p.tele, s1->num, s1->f);
}
int main()
{
	struct peo p1 = { "张三",22,"155" };
	struct stu s = { {"李四",22,"157"},50,85.5f };
	printf("%s %d %s %d %.2f\n", s.p.name, s.p.age, s.p.tele, s.num, s.f);
	print1(&p1);
	print2(&s);
	return 0;
}