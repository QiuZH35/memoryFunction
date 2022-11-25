
#include <memory.h>
#include<stdio.h>
#include <stdlib.h>


void* mymemmove(void* _Dst, void const* _Src, size_t _Size)
{
	if (_Dst == NULL || _Src == NULL)
	{
		return NULL;
	}
	void* prsc = malloc(_Size);
	memcpy(prsc, _Src, _Size);
	memcpy(_Dst, prsc, _Size);

	free(prsc);

	return _Dst;



 }


void main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0 };
	mymemmove(b, a, 12);
	for (int i = 0; i < 5; i++)
	{
		printf("%d,%d\n", a[i], b[i]);
	}
	char str1[32] = "abcdefghijklmn";
	char str2[32] = "**************";
	mymemmove(str2, str1, 6);
	printf("%s,%s", str1, str2);

	mymemmove(str1 + 2, str1, 4);
	printf("\n%s,%s", str1, str2);


	system("pause");
}