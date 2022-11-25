//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//double myatof(char* str)
//{
//	double db = 0.0;
//
//	char* istr = str;
//	if ((*istr > '9' || *istr < '0') && *istr != '.' && *istr != '-' && *istr != '+')  //处理不为数字，'.' , '-' , '+'的字符 
//	{
//		return db;
//	}
//
//	double fb = 1.0;
//	if (*istr == '-')   //处理负数
//	{
//		fb *= -1;
//		istr++;
//	}
//
//	
//	//123  0*10+1   1*10+2    12*10+3
//	while (*istr != '.') //处理实数
//	{
//		db *= 10;
//		db += *istr - '0';   //获得整数
//		istr++;
//	}
//	istr++;  //跳过小数点
//	
//
//	double xiaoshu = 1.0;
//	while (*istr != '\0')   //处理小数
//	{
//		xiaoshu /= 10;       //1.0/10   0.1+3 =0.3  .... 
//		db += xiaoshu * (*istr - '0');
//
//		istr++;
//	}
//	
//	db *= fb;
//	return db;
//}
//
//
//int isit(void* p)
//{
//	char* str = (char*)p;
//	int length = strlen(str);
//
//	for (int i = 0;i < length;i++)
//	{
//		if (str[i] != str[length - i - 1])
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//
//
//void main()
//{
//	/*char str[32] = "-1231234569.456";
//	double db = myatof(str);
//	printf("%f", db);*/
//
//	char arr[20] = "abc12345654321cba";
//	
//	
//	/*srand((unsigned int)time(NULL));
//	int arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = rand() % 100;
//	}*/
//
//	////插入排序
//	//for (int i = 1;i < 10;i++)
//	//{
//	//	for (int j = i;j > 0;j--)
//	//	{
//	//		if (arr[j] < arr[j - 1])
//	//		{
//	//			int temp = arr[j];
//	//			arr[j] = arr[j - 1];
//	//			arr[j - 1] = temp;
//	//		}
//	//	}
//	//}
//
//	//冒泡
//	/*for (int i = 10-1;i >= 0 ;i--)
//	{
//		for (int j = i + 1;j < 10;j++)
//		{
//			if (arr[j] < arr[j -1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//	}*/
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	system("pause");
//}