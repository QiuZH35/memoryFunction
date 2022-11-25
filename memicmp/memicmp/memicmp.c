
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
//memicmp 内存对比


int mymemicmp(void const* _Buf1, void const* _Buf2, size_t   _Size)
{
	if (_Buf1 == NULL || _Buf2 == NULL)
	{
		return NULL;
	}
	if (_Size == 0)
	{
		return 0;
	}
	char* str1 = _Buf1;
	char* str2 = _Buf2;
	int i = 0;
	while ((*(str1) == *(str2)) && i < _Size)
	{
		str1++;
		str2++;
		i++;
	}
	if (i == _Size)
	{
		return 0;
	}
	else
	{
		if (*str1 > *str2)
		{
			return ((int) * (str1))-((int) * (str2));
		}
		else
		{
			return -1;
		}

	}


}


void main1()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,6 };
	int i = _memicmp(a, b, 5);
	printf("%d", i);
	char str1[32] = "qiuzhengui";
	char str2[32] = "qiuzhenbao";
	int j = mymemicmp(str1, str2, 9);    //不仅可以对比大小，还可以计算差值
	printf("%2d", j);
	system("pause");
}


void* mymemchr( void* start, char str, size_t length)
{
	char* p = NULL;
	for (int i = 0; i < length; i++)
	{
		if (((char*)start)[i] == str)
		{
			p = (char *)start+i;
			break;
		}
	}
	return p;
}

void *mymemchraddr(void* start, char ch, size_t length)
{
	char* p = NULL;
	for (char* ps = (char *)start; ps < (char*)start + length; ps++)
	{
		if (*ps == ch)
		{
			p = ps;
			break;
		}


	}
	return p;


}



void main()
{
	char str1[32] = "qiuzhengui";
	void* p = mymemchraddr(str1, 'z', 32);
	printf("%p,%s", (char *)p, (char *) p);





}