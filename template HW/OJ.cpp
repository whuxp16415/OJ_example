#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "OJ.h"
using namespace std;
//Compare �����ķ���ֵ
//����
//< 0
//	elem1��������elem2ǰ��
//	0
//	elem1 ���� elem2
//> 0
//elem1 ��������elem2����
// > ���� 1   ��С������������
int cmp_func(const void *a, const void *b)
{
	char buffer1[32] = { 0 };
	char buffer2[32] = { 0 };
	int cmp = 0;

	//����ֵ ��ʽ���ַ�����
	sprintf_s(buffer1, sizeof(buffer1), "%d%d", *(int*)a, *(int*)b);
	sprintf_s(buffer2, sizeof(buffer2), "%d%d", *(int*)a, *(int*)b);

	cmp = strcmp(buffer1, buffer2);
	if (cmp <= 0)//��� ������ź���
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

//������������ų���С����
//���� ����  ���鳤��  ��������
//�ɹ�����0 �쳣����-1
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




