#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "OJ.h"
using namespace std;
//Compare 函数的返回值
//描述
//< 0
//	elem1将被排在elem2前面
//	0
//	elem1 等于 elem2
//> 0
//elem1 将被排在elem2后面
// > 返回 1   从小到大排序的入参
int cmp_func(const void *a, const void *b)
{
	char buffer1[32] = { 0 };
	char buffer2[32] = { 0 };
	int cmp = 0;

	//返回值 格式化字符数量
	sprintf_s(buffer1, sizeof(buffer1), "%d%d", *(int*)a, *(int*)b);
	sprintf_s(buffer2, sizeof(buffer2), "%d%d", *(int*)a, *(int*)b);

	cmp = strcmp(buffer1, buffer2);
	if (cmp <= 0)//相等 后出现排后面
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

//将输入的数组排成最小的数
//输入 数组  数组长度  返回数组
//成功返回0 异常返回-1
int smallestDigit(int a[], int nCount, char* strRst)
{
	int i = 0;
	if (a == NULL || nCount <= 0 || strRst == NULL)
	{
		return -1;
	}
	qsort(a, nCount, sizeof(int), cmp_func);
//	qsort_s(a, nCount, sizeof(int), cmp_func_s, context);
	for (int i = 0; i < nCount; i++)
	{
		sprintf(strRst + strlen(strRst), "%d", a[i]);
	}

	return 0;
}




