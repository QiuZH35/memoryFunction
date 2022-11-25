
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

//内存清零 memset

void* mymemset(void* _Dst, int _val, size_t _Size)
{
	if (_Dst == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < _Size; i++)
	{
		((char*)_Dst)[i] = _val;
	}

	return _Dst;

	

}
void* mymemsetaddr(void* _Dst, int _val, size_t _Size)
{
	if (_Dst == NULL)
	{
		return NULL;
	}
	for (char* p =((char *)_Dst); p < ((char*)_Dst) + _Size; p++)
	{
		*p = _val;
	}




	return _Dst;
}

void main()
{
	int a[5] = { 1,2,3,4,5 };
	double db[5] = { 1.02,1.03,11.2,13.5,14.6 };
	char str[1024] = "hello world";

	mymemsetaddr(a, 0, 20);
	memset(db, 0, 40);   //整数清零


	//memset(str, 0, 1024);
	mymemsetaddr(str, 'a', 20);   //字符串填充

	for (int i = 0; i < 5; i++)
	{
		printf("\n%d,%lf,%s", a[i], db[i], str);
	}



	system("pause");
}