#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


void* myftoa(double db, char* str)
{
	char* istr = str;
	if (db < 0)   //������
	{
		*str = '-';
		db *= -1;  //ת������
		str++;
	}
	int num = (int)db;  //��ȡʵ��
	
	int wei = 0;    //��ȡ����λ��
	int num2 = num;
	while (num2 )
	{

		wei++;
		
		num2 /= 10;
		
	}

	//12345 %10  5
	int num3 = num;
	for (int i = wei-1; i >= 0; i--,num3/=10)
	{
		
		

		str[i] = num3%10 + '0';


	}
	str += wei; //��������λ
	
	*(str) = '.';   //����С����

	double xiaoshu = (db - num);  //0.12313 *10 1  0.2313
	int xiaoshuwei = 0;
	
	/*for(double ixiaoshu=xiaoshu ;ixiaoshu!=0;ixiaoshu *=10)
	{
		
		
		ixiaoshu -= (int)ixiaoshu;
		printf("\n%f", ixiaoshu);


		xiaoshuwei++;
		
	}*/
	double ixiaoshu = xiaoshu;
	while ((int)ixiaoshu >0)
	{
		(int)ixiaoshu -= (int)ixiaoshu;
		printf("\n%f", ixiaoshu);

		xiaoshuwei++;
		ixiaoshu *= 10;
	}







	return istr;

}



void main()
{
	double db = -13456.12412;
	char str[100]={0};
	//sprintf(str, "%f", db);
	myftoa(db, str);
	printf("%s", str);





	system("pause");
}