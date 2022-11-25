
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


void* mymemccpy(void* Dst, const void* Src, char ch, int length)
{
	if (Dst == NULL || Src == NULL)
	{
		return NULL;
	}
	char* str1 = Dst;
	char *str2 = Src;
	for (int i = 0; i < length; i++)
	{
		;
		if (( * (str1++) = *(str2++)) == ch)
		{
			break;
		}


	}
	return Dst;

}


void* mymemccpyaddr(void* Dst, const void* Src,char ch,int length)
{
	if (Dst == NULL || Src == NULL)
	{
		return NULL;
	}
	char* str1 = Dst;
	char* str2 = Src;
	int i = 0;
	while (i < length)
	{

		if ((*(str1++) = *(str2++)) == ch)
		{
			break;
		}



		i++;
	}
	return Dst;


}

void main()
{
	char str1[100] = "i am qiuzhenhui ,many girls love me ";
	char* str2 = (char[128]){ 0 }; //栈区开辟内存
	
	mymemccpyaddr(str2, str1, 'l', 30);  //内存拷贝30个字节，遇到指定的字符停止

	printf("%s", str2);

	system("pause");
}