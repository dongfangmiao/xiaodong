#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
#include<stddef.h>
#include<limits.h>
#include<stdbool.h>
#include<stddef.h>
#define DEBUG_CONTEXT

//typedef unsigned char uint8;

//struct stu s{
// 	int w[6];
// 	int w1[6];
// 	int w2[6];
// 	int w3[6];
// 	int w4[6];
// }; 
//   int b=30;
//   int* c=&b;  //ָ���������ַ��
// *c=2199;  //���ò����� ָ���ַ�Ķ���

//printf("%d\n",*c);

// int main()
// {

//	for(int i=1;i<=100;i++)
//	{
//		if(i%2==1)
//		{
//			printf("%d\n",i);
//		}
//		//TODO
//	}


//  int i = 1;
//  while(i<=100)
//  {
//  	 i++;
//  	 	if(i%2==0)
//  	 	{
//  	 		printf("%d\n",i);
//  	 	}
//
//  }

//  int day=0;
//  scanf("%d",&day);
//  switch (day) {
//  	case 1:
//  	case 2:
//    case 3:
//	case 4: printf("�����¶һ��ʶ��ȴʤ�˼�����"); break;
//	case 5:
//  	case 6: printf("�����ڳ���ĺĺ");break;
//
//  	default: printf("�μ���");break;	//TODO
//
//  }

//    int ch = 0;
//
//    while((ch=getchar())!=EOF)
//	{
//    	putchar(ch);
//		//TODO
//	}

//	char ch = '\0';
//	while((ch = getchar())!=EOF)
//    {
//		if(ch < '0'||ch >'9')
//		continue;
//		putchar(ch);
//
//
//	}

//   char password[20] = {0};
//
//   printf("����������:");
//
//   gets(password);



//   int ch = 0;
////   while((ch = getchar())!='\n')
////   {
////   	;
////
////   }

//   printf("��ȷ������(Y/N):");
//
//   int ret = getchar();
//
//   if('Y' == ret)
//   {
//   	printf("Yes\n");
//   }
//   else
//   {
//   	printf("No\n");
//   }
//
//   printf("%s",password);

//    int arr[]={73,32,99,97,110,32,100,111,32,105,116,33};
//    int i = 0;
//    int count=sizeof(arr)/sizeof(arr[0]);
//
//    while(i<count)
//	{
//		printf("%c",arr[i]);
//		i++;
//	}

//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%4d%2d%2d",&year,&month,&day);
//
//    printf("year=%d\n",year);
//    printf("month=%02d\n",month);
//    printf("date=%02d\n",day);

//     int id = 0;
//	 float c = 0.0f;
//	 float math = 0.0f;
//	 float eng = 0.0f;
//
//	 scanf("%d;%f,%f,%f",&id,&c,&math,&eng);
//
//	 printf("The each subjet score of No. %d is %.2f,%.2f,%.2f.",id,c,math,eng);

//    int n = printf("Hello,world!");
//    printf("\n%d\n",n);

//	printf("printf(\"Hello world!'\\n\");\n");
//	printf("count<<\"Hello world\"<<endl;\n");

//	int i = 0,k = 0;
//	for(i=1;i<=10;i++)
//  	{
//	  	if(i==5)
//	  		continue;
//
//	  	printf("%d",i);
//	}
//	printf("\n");
//	while(k<=10)
//	{
//			  	if(k==5)
//			  		continue;
//
//			  	printf("%d",k);
//		       k++;
//	}

//	int i = 0;
//	int j = 0;
//	for(;i<3;i++)
//	{
//	   for(j=0;j<3;j++)
//	   {
//	   	printf("wcao\n");
//
//	   }
//		//TODO
//	}

//����׳�
//int main()
//{	int i = 1;
//	int sum = 0;
//	int ret = 1;
//
//
//	for(i=1;i<=10;i++)
//	{
//		ret=ret*i;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//}
//����Ԫ������
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//    int i=0;
//    int check=0;
//    int count = 0;
//    count = sizeof(arr)/sizeof(arr[0]);
//    scanf("%d",&check);
//    for(i=0;i<count;i++)
//    {
//		if(check==arr[i])
//		{
//			printf("%d",i);
//		}
//
//
//	}

//   int k=7;
//   int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int count = sizeof(arr)/sizeof(arr[0]);
//   int left = 0;
//   int right = count - 1;
//
//   while(left<=right)
//   {
////   	int mid =(left+right)/2;  ���ݿ��ܻ����
//    int mid = left+(right-left)/2;
//    if(arr[mid]<k)
//    {
//		left = mid + 1;
//	}
//	else if (arr[mid]>k)
//	{
//		right = mid - 1;
//	}
//    else
//    {
//    	printf("%d",mid);
//    	break;
//	}
//   }
//   if(left>right)
//   {
//   	printf("�Ҳ���");
//   }

//	char arr1[] = "Welcome to hell";
//	char arr2[] = "***************";
//	int left = 0;
//	int right = strlen(arr2)-1;
//
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s",arr2);





//	int i = 0;
//	char password[20] = {0};
//
//	for(i=0;i<3;i++)


//	{
//		printf("����������:");
//		scanf("%s",password);
//		if(strcmp(password,"dongxing")==0)  //�Ƚ������ַ��������� == ���ÿ⺯��strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if(i==3)
//	{printf("��¼ʧ��");
//	}

//�´�С rand���  srand�������


//void menu()
//{
//	printf("*****************************\n");
//	printf("********  1. play  **********\n");
//	printf("********  0. exit  **********\n");
//	printf("*****************************\n");
//}
////	RAND_MAX
//void game()
//{   int guest = 0;
//	int ret = rand()%100+1;
//
//	while(1)
//{	printf("�������\n");
//	scanf("%d",&guest);
//
//	if(guest<ret) {printf("��С��\n");}
//
//	else if(guest>ret) printf("�´���\n");
//
//	else {printf("�¶���\n" );break;}
//
//
//}
////	if(ret>=0&&ret<=327)
////	{
//////		printf("%d\n",ret);
////	printf("һ�Ƚ�\n");		//TODO
////	}
////	else if(ret>=328&&ret<=3603)
////	{
////		printf("���Ƚ�\n");
////		//TODO
////	}
////	else if(ret>=3604&&ret<=10753)
////	{
////		printf("���Ƚ�\n");
////		//TODO
////	}
////	else
////	{
////		printf("лл�ݹ�\n");
////		//TODO
////	}
//
//
//}
//int main()
//{
//	int  input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	  menu();
//	  printf("��ѡ��");
//	  scanf("%d",&input);
//	  switch(input)
//	  {
//	  	case 1 :
//	  		game();
//	  		break;
//	  	case 0 :
//	  		printf("�˳���Ϸ");
//	  		break;
//	  	default :
//	  		printf("ѡ����� ����ѡ��\n");
//	  		break;
//
//	  }
//	}while(input);
//
//    return 0;
//
// }

//�ػ����� goto
//int main()
//{
//
//	char input[20]={0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ĵ��Խ���60s�ڹػ������� ������ ������ȡ��\n");
//	scanf("%s",input);
//
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//
//	}
//	return 0;
//
//}


//�ػ����� while
//int main()
//{
//
//	char input[20]={0};
//	system("shutdown -s -t 60");
//
//while(1)
//{
//
//	printf("��ĵ��Խ���60s�ڹػ������� ������ ������ȡ��\n");
//	scanf("%s",input);
//
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//}
//	return 0;
//
//}



//�ػ�����

//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");
//	int count = 60;
//while(1)
//{	//TODO
//
//	if(count--)
//{	printf("��ĵ��Խ���%ds�ڹػ������� ������ ������ȡ��\n",count);
//Sleep(1000);
//system("cls");
//}
//	if(kbhit())
//	{
//		scanf("%s",input);
//			if(strcmp(input,"������")==0)
//			{
//				system("shutdown -a");//TODO
//				count=0;
//				break;
//			}
//	}
//
//
//}
//return 0;
//
//}

//memset���������þ������滻ָ��λ�õ�ֵ
//strcpy ��������
//int main()
//{
//	char arr1[]={0};
//	char arr2[]={"��ͩ��Ժ������"};
//
//	strcpy(arr1,arr2);
//	printf("%s",arr1);


//
//	char arr[]={"xxxxxxxx"};
//
//	memset(arr,'y',1);
//
//	printf("%s",arr);

//	return 0;
//}


//�Ƚϴ�С
//int max1(int a,int b)
//{
//	int max=0;
//
//	max=a>b?a:b;
//
//	return max;
//}
//
//int main()
//{
//	   int a=8,b=6;
//	   scanf("%d %d",&a,&b);
//	   int k=max1(a,b);
//	   printf("%d",k);
//
//	 	return 0;
//
//}

//��ֵ���� ���βε��޸Ĳ���Ӱ��ʵ��
//void swap(int x,int y)
//{
//	int z=0;
//	z=x;
//	x=y;
//	y=z;
//
//}
//int main()
//{
//	int x=1,y=0;
//	scanf("%d %d",&x,&y);
//	printf("����ǰ %d %d",x,y);
//	swap(x,y);
//	printf("������ %d %d",x,y);
//
//	return 0;
//
//}

//��ַ���� ����ֱ�Ӳ��������ⲿ����
//void swap(int *x,int *y)
//{
//	int z=*x;
//	*x=*y;
//	*y=z;
//
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	scanf("%d %d",&a,&b);
//	printf("����ǰ %d %d\n",a,b);
//	swap(&a,&b);
//	printf("������ %d %d\n",a,b);
//
//	return 0;
//
//
//}

//�ж�100-200�ǲ�������
//int main()
//{
//	int i = 0;
//	int count =0;
//	for(i=101;i<=200;i+=2)
//	{
//	  int j=0;
//	  int flag = 1;
//
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{   flag=0;
//
//				break;
//			}
//
//
//		}
//		if(flag==1)
//		{  count ++;
//			printf("%d\n",i);
//		}
//
//	}
//	printf("%d",count);
//
//
//	return 0;
//}


//�ж�����
//int su(int n)
//{
//		  int j=0;
//
//			for(j=2;j<=sqrt(n);j++)
//			{
//				if(n%j==0)
//				{
//
//				 return 0;
//				}
//
//			}
//
//			 return 1;
//
//}
//int main()
//{
//    int a=0;
//	while(1)
//	{
//		scanf("%d",&a);
//		if(su(a)==1)
//		{
//			printf("Y\n");
//		}
//		else
//		{
//			printf("N\n");
//		}
//		//TODO
//	}
//
//	return 0;
//
//
//
//
//}



//�ж�һ�����ǲ���2���ݴη�
//int main()
//{
//	int a;
//
//
//	while(1)
//	{
//		scanf("%d",&a);
//		if((a&(a-1))==0)
//		{
//			printf("Y\n");
//		}
//		else
//		{
//			printf("N\n");
//		}
//		//TODO
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//
//	int year =0;
//	for(year=1000;year<=2000;year++)
//	{
//		if((year%4==0))
//		{
//			if(year%100!=0)
//			{
//				printf("%d ",year);
//				//TODO
//			}
//		}
//		if(year%400==0)
//		{
//
//			printf("%d ",year);
//			//TODO
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int year =0;
//
//	for(year=1000;year<=2000;year++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ",year);
//		}
//
//	}
//	return 0;
//}

//int lead_year(int year)
//{
//			if(((year%4==0)&&(year%100!=0))||(year%400==0))return 1;
//			else return 0;
//
//}
//int main()
//{
//		int year =0;
//
//		for(year=1000;year<=2000;year++)
//		{
//		  if(lead_year(year)==1)
//		  {printf("%d ",year);
//		  }
//		}
//
//	return 0;
//}


//int binary_search(int arr[],int k,int sz)
//{
//	 int left = 0;
//	 int right = sz-1;
//
//	 while(left<=right)
//	 {
//	 	int mid = left+(right-left)/2;
//
//	 	if(arr[mid]<k)
//	 	{
//		  left=mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid -1;
//		}
//		else
//		{
//			return mid;
//		}
//	 }
//	 return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 9;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr,k,sz);
//
//	if(ret==-1)
//	{
//		printf("�Ҳ���");
//		//TODO
//	}
//	else
//	{
//		printf("�ҵ������� %d",ret);
//	}
//
//}

//���鴫��ʵ���ϴ���������Ԫ�ص��׵�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//����ʾ��
//int binary_search(int arr[],int k)//��ʽ��arr���������飬������ָ�����
//{
//   	int sz =sizeof(arr)/sizeof(arr[0]);
//	 int left = 0;
//	 int right = sz-1;
//
//	 while(left<=right)
//	 {
//	 	int mid = left+(right-left)/2;
//
//	 	if(arr[mid]<k)
//	 	{
//		  left=mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid -1;
//		}
//		else
//		{
//			return mid;
//		}
//	 }
//	 return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 9;
//
//	int ret = binary_search(arr,k);
//
//	if(ret==-1)
//	{
//		printf("�Ҳ���");
//		//TODO
//	}
//	else
//	{
//		printf("�ҵ������� %d",ret);
//	}
//}


//ÿ����һ�κ��� ��numֵ��һ
//int add(int* p)
//{
//	(*p)++;
//
//}
//
//int main()
//{
//  int num = 0;
//  add(&num);
//  printf("%d\n",num);
//  add(&num);
//  printf("%d\n",num);
//  add(&num);
//  printf("%d\n",num);
//
//
//	return 0;
//}

//Ƕ�׵��� ����Ƕ�׶���

//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//��ʽ����

//int main()
//{
////	printf("%d\n",strlen("adceef"));
//
//	printf("%d",printf("%d",printf("%d",4321)));  //printf�����ķ���ֵ ���ص����ַ������ַ��ĸ����� �����4321 Ȼ������ַ��������4 ����ٸ����ַ��������1
//   return 0;
//}

//����1234 ���1 2 3 4
//���»�С
//�����ĵݹ� ���ú�������
//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//
//}
//print(1234)       4
//print(123) 4      3
//print(12) 3 4     2
//print(1) 2 3 4    1
// 1 2 3 4
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//����ʱ�������ַ�����
//int my_strlen(char* str )
//{
//	int count = 0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//
//}

//��д��������������ʱ���� ���ַ�����
//�����ݹ�
//int my_strlen(char* str )
//{
//	if(*str!='\0')
//	{
//		return 1+my_strlen(str+1);
//		//TODO
//	}
//	else return 0;
//
//}
//
//int main()
//{
//	char arr[]= "abc";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}

//�ݹ�ʵ��
//int fac(int n)
//{
//	if(n<=1)
//	return 1;
//
//	else
//	return n*fac(n-1);
//}

//������ʽ
//int fac(int n)
//{
//	int i ;
//	int ret = 1;
//	for(i=0;i<=n;i++)
//	{
//		ret = ret*i;//TODO
//	}
//	return ret;
//
//}
//
//int main()
//{
//
//	int n = 0,k=0;
//	scanf("%d",&n);
//	k=fac(n);
//	printf("%d\n",k);
//	return 0;
//
//}

//�����n��쳲���������
//�ݹ��㷨 ����� �ظ�������ʱ�䳤
//int  count = 0;
//int Fib(int n)
//{
//	if(n==3)
//	{
//	   count++;   	//TODO
//	}
//
//	if(n<=2)
//	return 1;
//	else
//	return Fib(n-1)+Fib(n-2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	printf("%d\n",count);
//
//	return 0;
//}

//�ǵݹ��㷨 ȥ��������ظ�����
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>=3)
//	{
//	 	c=a+b;
//		a=b;
//		b=c;
//		n--;	//TODO
//	}
//	return c;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//
// 	return 0;
//}

//int main()
//{
// 	char* pc = NULL;
// 	short* ps = NULL;
// 	int* pi = NULL;
// 	double* pd =NULL;
//
//	printf("%u\n",sizeof(pc));
//	printf("%u\n",sizeof(ps));
//	printf("%u\n",sizeof(pi));
//	printf("%u\n",sizeof(pd));
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pc = &a;
//	*pc = 0;
//
////	char* pc = (char*)&a;
////	*pc = 0;
//
//// ����
////ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
////�����int*ָ�� �����÷���4���ֽ�
////  �����char*ָ�룬�����÷���1���ֽ�
//// �ƹ㵽��������
//
//
//
//
//	return 0;
//}
//int main()
//{
////  short int  a[1];
////  int count;
////  a[1]=2500;
////  count = sizeof(a)/sizeof(a[0]);
////  printf("%d",count);
//   double a,b;
//   scanf("%lf\n%lf",&a,&b);
//   printf("%f\n",a+b);
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int* p;
//	//pû�г�ʼ��������ζ��û����ȷ�ķ���
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ 0xCCCCCCCC
//	*p=10;  //�Ƿ������ڴ��ˣ������p����Ұָ��
//
//	return 0;
//
//
//}

//int main()
//{
//	int len = strlen("abcdef");  //�����ַ�����
//	printf("%d\n",len);
//
//	return 0;
//
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')  //ȡ�ַ���ַ ����Ԫ�ظ���
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n",len);
//
//	return 0;
//}


/*ָ��-ָ��*/

//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str != '\0')  //ȡ�ַ���ַ ����Ԫ�ظ���
//	{
//		str++;
//	}
//
//	return (str-start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n",len);
//
//	return 0;
//}

///*����ָ��*/
//int main()
//{
//	int a = 20;
//	int* pa = &a;       // *pa��ָ�� int˵�� paָ��Ķ�����int����
//	int** ppa = &pa;   //*˵��ppa��ָ��
//	                   //int* ˵�� ppaָ��Ķ�����int*����
//	**ppa=80;
//
//	printf("%d",a);       //����ָ��������������һ��ָ������ĵ�ַ��
//
//}

/*ָ������*/

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10]={&a,&b,&c};
//
//	for (int i = 0; i<3;i++)
//	{
//		printf("%d ",*(parr[i]));
//	}
//
//	return 0;
//
//}

//int main()
//{
//int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
//int i = 0;
//int j = 0;
//
//for(i=0;i<3;i++)
//{
//
//	for(j=0;j<4;j++)
//	{
//		printf("%d ",arr[i][j]);
//	}
//	printf("\n");
//
//}
//
//return 0;
//}



//int main()
//{
//	int arr1[4] = {1,3,3,4};
//	int arr2[4] = {5,6,7,8};
//	int arr3[4] = {9,10,11,12};
//
//	int* parr[3] = {arr1,arr2,arr3};
//
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			printf("%d ",parr[i][j]); //��ͬ�� *(parr[i]+j)������i����������׵�ַ ������ÿ��������׵�ַ�Դ����У�  arr[i] = *(arr+i)  �൱�ڽ�����
//			/* *(parr+i)[j] �����ǵ��� parr[0] [1] [2]  ���ǲ��е�   */
//		}
//		printf("\n");
//
//
//	}
//
//
//	return 0;
//}

//struct peo//�ṹ������
//{
//	char name[20];
//	char sex[5];
//	char number[20];
//	int num;
//
//};//�ṹ�����
//
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n",p.name,p.sex,p.number,p.num);//�ṹ�����.��Ա����
//
//}
//
//
//
//void print2(struct peo* sp)
//{
//
//	printf("%s %s %s %d\n",sp->name,sp->sex,sp->number,sp->num);//�ṹ��ָ��->��Ա����
//
//}//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ ��Ȼ�˷�ʱ��Ϳռ���Դ
//
//
//
//
//
//int main()
//{
//	struct peo p1 ={"��","��","8777555",170};
//
//	printf("%s %s %s %d\n",p1.name,p1.sex,p1.number,p1.num);
//
//	print2(&p1);
//	print1(p1);
//	return 0;
//}


//int main()
//{
//	int a=2,b=10,c=100,d=0;
//
//	d=++c,++a,++c,++c,++b;
//
//	printf("%d",d);
//
//	return 0;
//
//}

/*дһ���������ز�����������1�ĸ���*/
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n/=2;
//	}
//
//	return count ;
//
//
//}

//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	for(int i=0;i<32;i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//		 count++;
//		}
//	}
//
//	return count ;
//}


//int count_num_of_1( int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count ;
//
//
//
//
//
//}
//
//int main()
//{
//	int num = 0;
//
//	scanf("%d",&num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n",n);
//
//
//
//	return 0;
//}

//int main()
//{
//    int a,b;
//    while(~scanf("%d%d", &a, &b))printf("%d\n",a+b);
//    return 0;
//}

///*�ж�һ�����ǲ���2��n�η�*/
//
//int main()
//{
//	int n;
//
//	while(~scanf("%d",&n))
//    {
//		if((n & (n-1))==0){printf("Yes\n");}
//		else{printf("No\n");}
//
//	}
//	return 0;
//
//}

/*����int(32λ)����m��n�Ķ������У��ж��ٸ�λ(bit)��ͬ*/

//int count_diff_bit(int m,int n)
//{
//	int count=0;
//
//	for (int i = 0 ;i<32;i++)
//	{
//		if(((m>>i)&1)!=((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_diff_bit(int m,int n)
//{
//	int count = 0;
//	//��������
//	//��ͬΪ0������Ϊ1
//	int ret = m^n;
//	//ͳ��һ��ret�ж�����λ�м���1
//	while(ret)
//    {
//		ret = ret & (ret-1);
//		count ++;
//	}
//
//	return count ;
//
//}
//
//int main()
//{
//	int m=0;
//	int n=0;
//
//	while(~(scanf("%d %d",&m,&n)))
//    {
//		int ret = count_diff_bit(m,n);
//		printf("%d\n",ret);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//
//	while(~(scanf("%d",&num)))
//   {
//   	/*��ȡ����λ������*/
//   	 for(i=30;i>=0;i-=2)
//   	{
//	 printf("%d ",(num>>i)&1);
//	}
//	printf("\n");
//	/*��ȡż��λ������*/
//   	 for(i=31;i>=1;i-=2)
//   	{
//	 printf("%d ",(num>>i)&1);
//	}
//	printf("\n");
//
//   }
//   return 0;
//
//}


//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ
//

//int i;
//int main()
//{
//	i--;
//	if(i>sizeof(i))  //���з������ͺ��޷������ͽ��бȽ�ʱ -1�����޷������ͣ����ɺܴ����
//    {
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//int  main()
//{
//
//	int n = 0;
//
//    while(~scanf("%d",&n))
//    {
//		int i = 0;
//		int j = 0;
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<n;j++)
//			{
//				if(i==j||i+j==n-1)
//				{
//				 printf("*");
//				}
//				else
//				{
//				 printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//
//
//
//	return 0;
//
//
//}

//int is_leap_year(int y)
//{
//	return (((y%4==0)&&(y%100!=0))||(y%400==0));
//}
//
//
//
//int main()
//{
//	int y=0;
//	int m=0;
//	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//
//	while(~scanf("%d%d",&y,&m))
//	{
//		int d=days[m];
//		if(is_leap_year(y)==1&&m==2)
//		{
//			d++;
//		}
//		printf("%d\n",d);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while(~scanf("%d",&n))	//TODO
//   {
//	int i = 0;
//	int ret = 1;
//	int sum=0;
//	for (i = 1;i<=n;i++)
//	{
//		ret*=i;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//   }
//	return 0;
//
//}

/*ջ���ڴ��ʹ��ϰ������ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�*/
/*���������±��������ַ���õ͵��߱仯��*/
/*���i��arr֮�����ʵ��Ŀռ䣬���������Խ������Ϳ��ܻḲ�ǵ�i���Ϳ��ܻᵼ����ѭ�����ֵ�*/


//int main()
//{
//	int i = 0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for( i=0;i<=12;i++)
//	{
//		arr[i]=0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//void my_strcpy(char* dest,char* src)
//{
//	while(*src!='\0')
//	{
//		*dest =*src;
//		dest++;
//		src++;
//		//TODO
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while(*src!='\0')
//	{
//		*dest++ =*src++;
//		//TODO
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest,const char* src)
//{
//
//	//����  �ж�ָ���Ƿ�Ϊ��ָ�� �����˳����Է�Խ��
//	assert(src != NULL);
//  assert(dest != NULL);
//
//	while(*dest++ = *src++) //'\0'��ASCII��Ϊ0��whileѭ����ĸ�ֵ���ʽ �ȸ�ֵ���ж� ������ı���Ϊ0 ��while�ж����Ϊ�ٲ�ִ��
//	{
//
//		;//TODO
//	}
//
//}
//
//
//
//
//int main()
//{
//	char arr1[20]= "XXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
////	char* p =NULL;
//
//	//strcpy�ڿ����ַ�����ʱ�� ���ԭ�ַ��е�\0Ҳ������ȥ
////	my_strcpy(arr1,p);
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//
//	return 0;
//
//}

//int main()
//{
//
////	int num = 10;
////	num = 20;
////	printf("%d",num);
//
//	const int num = 10;
////	num = 20;
////	int* p = &num;   //�ƻ��� const ������
////	*p = 20;
//
//	//����д����һ��
//	//pָ��Ķ��� ����ͨ��p���ı��ˣ�����p���������ֵ�ǿ��Ըı��
////	int const* p = &num;
////	const int* p = &num;
//
////  pָ��Ķ����ǿ���ͨ��p���ı��
//
////  int* const p =&num;
////  int n = 100;
////   *p=0 //ok
////   p=&n //err
////
////
////	int** a=&p;         //�ƻ��� const ������
////	**a = 30;
//
////	int n = 100;
////	p=&n;
//
//	printf("%d",num);
//
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src) {
//
//	char* ret = dest;
//	//����  �ж�ָ���Ƿ�Ϊ��ָ�� �����˳����Է�Խ��
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++) { //'\0'��ASCII��Ϊ0��whileѭ����ĸ�ֵ���ʽ �ȸ�ֵ���ж� ������ı���Ϊ0 ��while�ж����Ϊ�ٲ�ִ��
//
//		;//TODO
//	}
//	return ret;
//}
//
//
//
//
//int main() {
//	char arr1[20] = "XXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
////	char* p =NULL;
//
//	//strcpy�ڿ����ַ�����ʱ�� ���ԭ�ַ��е�\0Ҳ������ȥ
////	my_strcpy(arr1,p);
//
////��ʽ����       
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while(*str!='\0')
//	{
//		printf("%s\n",str);
//		
//		count++;
//		str++;
//		
//	}
//	return count;
//	
//	
//}
//int main()
//{
//	char arr[]= "hello";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	
//	return 0;
//}


//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	
//	while(scanf("%d %d %d",&a,&b,&c))
//	{
//		if(a+b>c&&a+c>b&&b+c>a)
//		{
//			if(a==b&&b==c)
//			{
//				printf("dengbian\n");
//			}
//			else if(a==b||b==c||a==c)
//			{
//				printf("dengyao\n");
//			}
//			else
//			{
//				printf("putong\n");
//			}
//		}
//		else
//		{
//			printf("doubushi\n");
//		}
//	}
//	
//	
//	
//	return 0;
//}

//int main()
//{
//	  //�ڴ� �洢��ַ �� �� ��  �� �洢�ֽ�˳��
// // 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00	
//	int arr[]={1,2,3,4,5};
//	short* p =(short*)arr; //short* ���������ֽ�
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		*(p+i) = 0;
//	}	
//	for(i=0;i<5;i++)
//	{
//		printf("%d",arr[i]);
//		//TODO
//	}
//	return 0;
//}

//int main()
//{
//	//��  -- --  ��
//	//44 33 22 11  �ڴ浹�Ŵ�
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n",a);
//	
//	
//
//	
//	//�κ�һ������/���ʽ������2������
//	//ֵ����
//	//��������
//	
//
//}




//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//void print(int* p,int a)
//{
//	int i=0;
//	for(i=0;i<a;i++)
//	{
//		printf("%d",*(p+i));
//	}
//	
//}
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=0;
//	sz = sizeof(arr)/sizeof(arr[0]);
//    
//    print(arr,sz);
//    
//    return 0;
//
//}

//��һ���ַ���str�����ݵߵ������������

//int main()
//{
//	char arr[10001]={0};
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr)-1;
//	char tmp = 0;
//	while(left<right)
//	{
//		tmp = arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		
//		left++;
//		right--;
//		//TODO
//	}
//	printf("%s",arr);
//	return 0;
//}

//��Sn= a+aa+aaa+aaaa+aaaaa��ǰ5��֮������a��һ�����֣�
//���� 2+22+222+2222+22222

//int main()
//{
//	int a=0;
//	int n=0;
//	scanf("%d %d",&a,&n);
//	int sum = 0;
//	int k = 0;
//	for(int i=0;i<n;i++)
//	{
//		k=k*10+a;
//		sum+=k;
//	}
//	printf("%d",sum);
//	
//	return 0;
//}


//���0-100000֮�������"ˮ�ɻ���"�����
//"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������磺153 = 1 ^ 3+5 ^ 3+3 ^ 3,��153��һ��"ˮ�ɻ���".
//int main()
//{
//	int  i = 0;
//	for(i=0;i<=100000;i++)
//	{
//
//		//�ж�i�Ƿ�Ϊ"ˮ�ɻ���"
//		//1234
//		//����i�Ǽ�λ�� ->n
//		int n = 1; //�κ�һ����������һλ��
//		int tmp = i;
//		int sum = 0;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//
//		}
//		tmp = i;
//		while(tmp)
//		{   
//		   
//		    
//		    sum+=pow(tmp%10,n);  //���������� 5��3�η���124 ʵ����153���ˮ�ɻ���	   
//			tmp/=10;
//			//TODO
//		}
//		if(sum==i)
//		{
//			printf("%d ",i);
//		}
//	}
//	
//	return 0;
//}
//int is_narcissistic_nuber(int i)
//{
//		//�ж�i�Ƿ�Ϊ"ˮ�ɻ���"
//		//1234
//		//����i�Ǽ�λ�� ->n
//		int n = 1; //�κ�һ����������һλ��
//		int tmp = i;
//		int sum = 0;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//
//		}
//		tmp = i;
//		while(tmp)
//		{   
//
//		    
// 		    sum+=pow(tmp%10,n);  //���������� 5��3�η���124 ʵ����153���ˮ�ɻ���	   
// 			tmp/=10;
//			//TODO
//		}
////		if(sum==i)
////		{
////			return 1;
////		}	
////		else
////		{
////			return 0;
////		}
//       return (sum==i);
//}
//
//int main()
//{
//	int  i = 0;
//	for(i=0;i<=100000;i++)
//	{
//       		if(is_narcissistic_nuber(i))
//	   		{
//	   			printf("%d ",i);			
//	   		}
//
//	}
//	
//	return 0;
//}

//��ӡ����

//int main()
//{
//	int line = 0 ;
//	scanf("%d",&line);
//	int i = 0;
//	for(i=0;i<line;i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for(j=0;j<line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=0;i<line-1;i++)
//	{
//		int j = 0;
//		//��ӡһ��
//		//�ո�
//		for(j=0;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//����a��b����С������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
////	int m = (a>b?a:b);
////	while(1)
////	{
////		if(m%a==0&&m%b==0)
////		{
////			break;
////		}
////		m++;
////	}
//// printf("%d",m);
//	int i = 1;
//	while(a*i%b)
//	{
//		i++;
//
//	}
//
//printf("%d",a*i);
//	return 0;
//	
//}



//����ˮ��1ƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ,��20Ԫ,���Ժȶ�����ˮ(���ʵ��)

//int main()
//{
//	int money = 0;
//	scanf("%d",&money);
//	
////	int total = money;
////	int empty = money;
////    while (empty>=2)
////	{
////		total+=empty/2;
////		empty=empty/2+empty%2;
////	}	
////	printf("%d\n",total);
//   
//    if(money>0)
//     {
//	 	printf("%d",2*money-1);
//     }
//    else
//	{
//		printf("%d\n",0);
//	} 
//	return 0;
//	
//	
//	
//	
//}

//�����ַ���   ��һ�仰�ĵ��ʽ��е��ã���㲻���� ���� I like beijing �����������Ϊ beijing. like I

//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//	
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;	
//	}
//	
//	
//}
//
//
//
//
//
//int main()
//{
//	char arr[101]={0};
//
// 	while(gets(arr))
//{
//	int len = strlen(arr);
//	
//	reverse(arr,arr+len-1);
//	
//	char* start = arr;
//	
//	while(*start)
//	{
//		char* end = start;
//		while(*end!=' '&&*end!='\0')
//		{
//			end++;
//		}
//		reverse(start,end-1);
//		if(*end!='\0')
//		{
//			
//			end++;
//	
//			
//		}
//		start=end;
//	}
//	printf("%s\n",arr);
//}
//	return 0;
//}


//�жϵ�ǰ�����Ǵ��������С������

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	
//}
//
//
//int main()
//{
////	int a = 1;
////	if(*(char*)&a==1)
////	{
////		printf("С������\n");
////	}
////	else
////	{
////		printf("�������\n");
////	}
//	
//	int ret = check_sys();
//	if(ret==1)
//	{
//		printf("С������\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	
//	return 0;
//}

//  ���ݻ����Բ������ʽ�洢  char����%u��ʾ ��������  %d ����ʾԭ��
//��������  ������ ���ǿ�%u %d  �з��ŵĻ� �����1�Ͳ�1 0�Ͳ�0  �޷��žͲ�0
//int main()
//{
//	char a = 128;  // char ��Χ-128-127
//	char b = -128; //
//	printf("%d\n",a);	 
//	printf("%u\n",a);  
//	printf("%d\n",b);	
//	printf("%u\n",b);	
//	
//	
//	return 0;
//	
//	
//}


//int main()
//{
//	
//	
//	char a [1000];
//	
//	for(int i=0;i<1000;i++)
//	{
//		a[i]= -1-i;
//	}
//	
//	// arr[i] -> char -128~127
//	// -1 -2 -3 -4 ...-1000
//	//-1 -2 ...-128 127 126 125..3 2 1 0 -1 ...
//	//128+127=255
//	
//	// -1 ����  1111 1111 
//	//-128 ���� 1000 0000 
//	// char ��   ��� 10111 1111 �ض� 0111 1111 127   
//	// -1        ����  1111 1111
//	// 129       ���� 10111 1111 
//	// char ��   ��� 10111 1110 �ض� 0111 1110 126 
//	printf("%d\n",strlen(a));
//	printf("%d\n",a[254]);
//	//strlen �����ַ����ĳ���,��ע�����ַ�����'\0'������0��֮ǰ���ֶ����ַ�
//	return 0;
//}


//
//
//int main()
//{
//	unsigned char i = 0; 
//	for( i=0;i<=255;i++)
//	{
//		printf("hello world\n"); //255��unsigned char�ͷ�Χ���� �����ϼ� ���ִ�0��ʼ
//	}
//	
//	
//}

// int my_strlen(const char* str)
//{
//	 int count = 0;
//	assert(str);
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//		
//	}
//	return count;
//	
//	
//}
//
//
//
//int main()
//{
//	//��Ϊ strlen ����ֵ�����޷����� ���� �޷���-�޷��� ����>=0
//	//my_strlen ����ֵ���з��� ���Ը��������ֵ�����ж��ĸ����ĸ�С
////	if(my_strlen("abc")-my_strlen("abcdef")>=0)
//  if(strlen("abc")-strlen("abcdef")>=0)   //���� ֱ�� strlen("abc")>strlen("abcdef")
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	
//	
//	return 0;
//}

//int main()
//{
//	float  f = 5.5;
//	//IEEE 754�涨��
//	//����32λ�ĸ���������ߵ�1λ�Ƿ���λs ���ŵ�8λ��ָ��E��ʣ�µ�23λΪ��Ч����M
//	//S(1bit)  E(8bit)  M(23bit)
//    //����64λ�ĸ���������ߵ�1λ�Ƿ���λs ���ŵ�11λ��ָ��E��ʣ�µ�52λΪ��Ч����M
//	//	
//	// 5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2  Ϊ�����������͸��� 8λE �����м�ֵ127  11λ��E ���м�ֵ1023
//	// 0 10000001(e+127=129)   (ǰ�ᣨE��ȫΪ0��E��ȫΪ1��ǰ�������1����д ����λ��) 01100000000000000000000
//	// 0100 0000 1011 0000 0000 0000 0000 0000 ʮ������
//	//  4    0    b    0    0    0    0    0
//	
//	// E���ڴ�ȡ����  ���������
//	// E��ȫΪ0��ȫΪ1 �����м�ֵ��ȥ�㷨
//	// EȫΪ0 ˵����������޽ӽ���0 ����ʱ��������ָ��E����1-127(����1-1023)��Ϊ��ʵֵ ��Ч���ֲ��ټ��ϵ�һλ��1 ���ǻ�ԭΪ0.xxxxxx��С��
//	// EȫΪ1 ˵������������
//	
//}




//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	//0(�����0Ϊ�� 1Ϊ��) 00000000 00000000000000000001001  
//	//E=-126
//	//M=0.00000000000000000001001
//	//+ 0.00000000000000000001001* 2^-126
//
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ%d\n",n);
//	printf("*pFloat��ֵΪ: %f\n",*pFloat); //��Ϊ�Ǹ����͵ķ�ʽ�洢 ������������޽ӽ���0 
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//0 10000010(E+127) 00100000000000000000000
//	printf("num��ֵΪ:%d\n",n); //����������ʽ��������ܴ�
//    printf("*pFloat��ֵΪ:%f\n",*pFloat);
//	 
//	
//	return 0;
//	
//	
//}

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//

//void move_odd_oven(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left<right)
//	{
//	
//	
//	
//	while((left<right)&&(arr[left]%2==1))
//	{
//		left++;
//	}
//	while((left<right)&&(arr[right]%2==0))
//	{
//		right--;
//	}
//	if(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//  }
//	
//	
//	
//}
//
//int main()
//{
//	int arr[10] = {0};
//	
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		scanf("%d",&arr[i]);// ����arr+i
//	}
//	
//	move_odd_oven(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//	 	printf("%d ",arr[i]);
//	}
//	
//	return 0;
//}

//�������кϲ�

//��һ������ ������������һ�����ִ����һ���������еĸ��� �ڶ������ִ���ڶ����������еĸ��� 
//�ڶ���������������
//������������������

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int arr1[n];
//	int arr2[m];
////	int arr3[m+n];  //�����������
//	int i = 0;
//	
//	for(i=0;i<n;i++)
//	{
//    	scanf("%d",&arr1[i]);
//	}
//	for( i=0;i<m;i++)
//	{
//    	scanf("%d",&arr2[i]);
//	}
//	
//	int j = 0;
//	int k = 0;
////	int r = 0;
//	while(j<n&&k<m)
//	{
//		if(arr1[j]<arr2[k])  //   ����ͬ���һ�� ��if(arr1[j]<=arr2[k])
//		{
//			
//			printf("%d ",arr1[j]);
//			j++;
////			arr3[r++]=arr1[j++];
//			
//		}
//		else
//		{
//		/*����ͬ���һ��	
////	      if(arr1[j-1]==arr2[k])
////	     {
////		 	k++;
////		 }
////	     else
////	     {
////			printf("%d ",arr2[k]);
////			k++;
////	     }*/
//			printf("%d ",arr2[k]);
//			k++;
////           arr3[r++]=arr2[k++];
//		}
//	}
//	if(j<n)
//	{
//		for(;j<n;j++)
//{ 
//		printf("%d ",arr1[j]);
//    //    arr3[r++]=arr1[j];
//}
//	}
//  else
//	{
//		for(;k<m;k++)
//		{
//  		printf("%d ",arr2[k]);
// //      arr3[r++]=arr2[k];
// 
// /*����ͬ���һ��
// 	      if(arr1[j-1]==arr2[k])
// 	     {
// 	     	
// 		 }
// 	     else
// 	     {
// 			printf("%d ",arr2[k]);
// 	     }*/
// 	     
//		}
//	}
////	for(i=0;i<m+n;i++)
////	{
////		printf("%d ",arr3[i]);
////	}
//	return 0;
//}

//int main()
//{
////	char c = 'w';
////	char *pc = &c;
////	*pc = 'k';
////	
////	printf("%c",c);
////	
////	char* p = "abcdef"; //���ַ������ַ�a�ĵ�ַ����ֵ����p �������Ǹ������ַ������ܱ���
////
////// *p="w";           //������ʽ 
//////			       "abcdef" ��һ���ַ���������p��ȷָ�����ַ��
//////			       ���õ�ַ�������ڽ��̵� text �Σ�text �γ��˱��泣���������ִ�д��룬
//////			       ����ǲ������дȨ�޵ģ�����ֻ����ɶ�����ִ��Ȩ�ޡ�
////	
////	
////	printf("%s\n",p);
//	
//	
//	return 0;
//}


//int main()
//{
//	const char *p1 = "abcdef";  //�����ַ��� �ڴ涼ָ��һ��
//	const char *p2 = "abcdef";  //ָ���ŵ�ַ û�����ڴ�����ռ�
//	
//	char arr1[] = "abcedf";  //����ռ䲻һ��
//	char arr2[] = "abcedf";	 //��������Ŀռ�  �����׵�ַ�϶���һ��
//	
//	if(p1==p2)
//	   printf("p1==p2\n");
//	else
//	   printf("p1!=p2\n");
//	if(arr1==arr2)
//	{
//	 	printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	  
//	
//	
//	
//	return 0;
//}


//ָ������ - �����飬���������ָ�������
//int* arr[6] �������ָ�������  ÿ��Ԫ�ض���ָ��  int*  int*  int* int* int* int*
//char* arr[5] ����ַ�ָ�������  ÿ��Ԫ�ض���ָ�� char*  char* char* char* char*
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	
//	int* parr[3] = {arr1,arr2,arr3};
//	
//	
//	for(int i=0;i<3;i++)
//	{
//	   
//	   for(int j =0;j<5;j++)
//	   {
//	   	//*(p+j) ->p[j] ���� +j �����滻��[j]  
//	   	//  printf("%d ",*(parr[i]+j)); ������Ƕ�ά���� ��ά������ڴ���������ŵ� �������������ڴ治һ������
//			printf("%d ",parr[i][j]); 	   	
//	   }
//	   printf("\n");
//	}
//	
//	return 0;
//}

//C����ʵ�ּ����ݽṹ
//ָ��+�ṹ��+��̬�ڴ洦��


//����ָ�� -ָ�� ָ�������ָ��
 
//����ָ�� - ָ�����͵�ָ��
//int*
//�ַ�ָ�� - ָ���ַ���ָ��
//char*



//int *p1[10];  p1��ָ������
//int (*p2)[10];  p2�� ����ָ�� p2���Բ�һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����int����
//���ͣ�p�Ⱥ�*��� ˵��p��һ��ָ�������Ȼ��ָ�����һ����СΪ10�����͵����飬����p��һ��ָ�룬ָ��һ�����飬������ָ��
//����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա������()����֤p�Ⱥ�*���



//int main()
//{
//	
//	int arr[10]={0};
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//	
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]+1);
//	
//	printf("%p\n",arr);
//	printf("%p\n",&arr+1);	
//	
//	
//	int sz = sizeof(arr);
//	printf("%d\n",sz);
//	
//	return 0;
//}

//������ ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//�������������⣻
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С
//2. &���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ

//����ָ�� -ָ�� ָ�������ָ��
 
//����ָ�� - ָ�����͵�ָ��
//int*
//�ַ�ָ�� - ָ���ַ���ָ��
//char*

//int main()
//{
//	int arr[10] = {0};
//	
////	int*p = &arr; �о����
//	
//	int* p =arr;  //int* 4���ֽ�  ����Ԫ��  ����ָ�׵�ַ
//	
//	
//	int(*p2)[10]=&arr;  //����ָ�� ��������
//	
//	//p2��������int(*)[10];
//
////	int arr[5];    arr����������
////  int *parr1[10];    parr1������ָ������
////  int (*parr2)[10];  parr2������ָ��
////  int (*parr3[10])[5]; parr3�Ǵ������ָ�������
////  arr1 {1,2,3,4,5}
////  arr2 {2,3,4,5,6}
////  arr3 {1,2,3,4,5}
//// int(*parr3[10][5])={&arr1,&arr2,&arr3};	
//	return 0;
//}

//������� ָ�����

//һά���鴫��
//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int *arr){}
//void test2(int *arr[20]){}
//void test2(int **arr){}


/*
int main()

{
 int arr[10] = {0};	
 int *arr2[20] = {0};	
 test(arr);
 test2(arr2);	
}


*/


//��ά���鴫�� �п���ʡ�� �в���ʡ��

// void test(int arr[3][5]){}
// void test(int arr[][]) ����
// void test(int arr[][5]) 

//��ά����������� ��ʾ��Ԫ�صĵ�ַ ��ʵ�ǵ�һ�еĵ�ַ

//��һ�д������һ��һά���� �����ǵ���Ԫ��

/*
int main()
{
	int arr[3][5]={0};
	test(arr);
}


*/
//����ָ�� һ��ָ������ָ���Ǻ���ָ��

//int Add(int x,int y)
//{
//		return x+y;
//}
//
//int main()
//{
////	int arr[5] = {0};
////	//&������ - ȡ��������ĵ�ַ
////	int (*p)[5] = &arr;//����ָ��
////	
////	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
////	printf("%p\n",&Add);
////	printf("%p\n",Add);
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//	
////	int (*pf)(int,int)=&Add;
//    int (*pf)(int,int)=Add;
//	//int ret = (*pf)(2,3); 
//	int ret = pf(2,3);
//	
//	printf("%d\n",ret);
//	
//	return 0;
//}


//int Add(int x,int y)
//{
//	return x+y;
//}
//void calc(int(*pf)(int ,int))
//{
//	int a = 3;
//	int b = 2;
//	
//	int ret = pf(a,b);
//	printf("%d\n",ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}

//int main()
//{
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	int** p =arr;
//	
//	//����ָ��
//	int arr2[5];
//	int (*pa)[5]=&arr2;
//	
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//	
//	return 0;
//}

//int test(const char * str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//
//int main()
//{
//	//����ָ�� - Ҳ��һ��ָ�룬��ָ������ָ��  
//	//	printf("%p\n",test);
//	//	printf("%p\n",&test);
//	int (*pf)(const char*)= test;
//	(*pf)("abc");
//    test("abc");
//	pf("abc");
//	
//		
//	return 0;
//}

//typedef unsigned int uint;

//typedef void(* pf_t)(int); //��void(*)(int)����������Ϊ pf_t
//
//
//
//int main()
//{
//	
////	(*(void(*)())0)();
////   (void(*)())0   ��0�ĵ�ַΪǿ��ת���� ����ָ������ 
// ���ϴ�����һ�κ������ã����õ���0��Ϊ��ַ���ĺ���
// ��0ǿ������ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ
//// ����0��ַ�����������
//
//	
//	void(*signal(int ,void(*)(int)))(int);
//	//signal �Ǻ�����  ���ϴ�����һ�κ�������
//	//������signal�����ĵ�һ��������������int,�ڶ������������Ǻ���ָ�롣
//	//�ú���ָ��ָ��ĺ���������int������������void��signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int���������int��������������void���������void��
//	
//	pf_t signal(int,pf_t);
//	
//	return 0;
//}


//����ָ�����;


//дһ��������
//�ӷ����������˷�������

//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//
//�ص�����
//void calc(int (*pf) (int,int))
//{	
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//		
//	printf("������2��������:");   //̫������
//	scanf("%d %d",&x,&y);		
//	ret = pf(x,y);
//	printf("%d\n",ret);
//		
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub   ****\n");
//	printf("****   3. mul   4. div   ****\n");
//	printf("****   0. exit           ****\n");
//    printf("*****************************\n");
//}
//int main()
//{
//	int input = 0;
////	int x = 0;
////	int y = 0;
////	int ret = 0;
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//
//		switch(input)
//		{
//			case 1:
////				printf("������2��������:");   //̫������
////				scanf("%d %d",&x,&y);		
////				ret = Add(x,y);
////				printf("%d\n",ret);
//				calc(Add);
//				break;
//			case 2:
////				printf("������2��������:");   //̫������
////				scanf("%d %d",&x,&y);
////				ret = Sub(x,y);
////				printf("%d\n",ret);
//				calc(Sub);
//				break;
//			case 3:
////				printf("������2��������:");    //̫������
////				scanf("%d %d",&x,&y);
////				ret = Mul(x,y);
////				printf("%d\n",ret);
//				calc(Mul);
//				break;
//			case 4:
////				printf("������2��������:");    //̫������
////				scanf("%d %d",&x,&y);
////				ret = Div(x,y);
////				printf("%d\n",ret);
//                calc(Div);
//				break;
//			case 0:
//				printf("�˳�������");
//				break;
//			default:
//				printf("ѡ�����");
//				break;
//							
//		}
//		
//	}while(input);
//	
//	
//	return 0;
//}


//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	
//	int ret=0;
//	
//	int (*pf)(int,int)=Add; //pf�Ǻ���ָ��
//	int (*arr[4])(int,int)={Add,Sub,Mul,Div}; arrΪ����ָ�������
//	
//	ret=arr[3](5,6);
//	printf("%d",ret);
//	
//}

//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub   ****\n");
//	printf("****   3. mul   4. div   ****\n");
//	printf("****   0. exit           ****\n");
//    printf("*****************************\n");
//}
//
//
//int main()
//{
//	int input = 0;
//	int x=0;
//	int y=0;
//	int ret=0;
//	
//	//����ָ������
//	int (*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};
//	
//////	//ָ��[����ָ������]��ָ��
//////	int (*(*pffar)[5])(int,int)=&pfArr;
//	 
//	 
//	
//	do{
//			menu();
//			printf("��ѡ��:>");
//			scanf("%d",&input);	
//		if(input==0)
//		{
//			printf("�˳�������\n");
//		}
//		else if(input>=1&&input<=4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d",&x,&y);
//			ret = pfArr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}		
//	}while(input);
//	
//	
//	
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	//����
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1; //�����������ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//					
//		
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp =arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag = 0;
//			}
//		}



//		if(flag == 1)
//		{
//			
//			break;
//		}
//	}
//	
//}
//
//
////qsort(void *, //��Ҫ��������ݵ���ʼλ�� 
////     size_t,  //�����������Ԫ�صĸ���
////	   size_t,  //�����������Ԫ�صĴ�С ����λ���ֽڣ�
////	   int (*)(const void *, const void *)) //����ָ�� �ȽϺ���
//
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	//�������ų�����
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	
//	for(int i = 0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	
//	int a = 10;
//	//char* pa = &a
//	void* pv = &a;//void* ���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void* ���޾������͵�ָ�룬���Բ����ý����ò�����Ҳ����++����
//	
//	return 0;
//}

//int cmp_int(const void* e1,const void* e2)
//{
//    if(*(int*)e1 > *(int*)e2)
//      return 1;     // e1>e2  �趨���� 1  ���� e1<e2 �趨����-1 ��������
//                    // e1>e2 �趨����-1  ���� e1<e2  �趨���� 1 ���ǽ���
//    else if(*(int*)e1 == *(int*)e2)
//      return 0;
//    else
//      return -1;
//
//
//////	return (*(int*)e1-*(int*)e2); //����
//////	return (*(int*)e2-*(int*)e1); //����  ���� >0 =0 <0
//}

////�ص���������һ��ͨ���ú���ָ����õĺ����������Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã�
////�������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ
//
//
//
//
//
//int main()
//{
////	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	//�������ų�����
//	int sz = sizeof(arr)/sizeof(arr[0]);
//    qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	
//	for(int i = 0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}





//struct STU
//{
//	char name[15];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//	//strcmp -> ����ֵ >0 = 0 <0 �����ǱȽ�һ��һ����ASCII�� 
//	return strcmp(((struct STU*)e1)->name,((struct STU*)e2)->name); //����
//}
//int cmp_stu_by_age(const void *e1,const void* e2)
//{
//	return((struct STU*)e1)->age-((struct STU*)e2)->age; //����
//	
//}
//
//int cmp_int(const void* e1,const void* e2)
//{
//    if(*(int*)e1 > *(int*)e2)
//      return 1;     // e1>e2  �趨���� 1  ���� e1<e2 �趨����-1 ��������
//                    // e1>e2 �趨����-1  ���� e1<e2  �趨���� 1 ���ǽ���
//    else if(*(int*)e1 == *(int*)e2)
//      return 0;
//    else
//      return -1;
//
//
//////	return (*(int*)e1-*(int*)e2); //����
//////	return (*(int*)e2-*(int*)e1); //����  ���� >0 =0 <0
//}
//
//
//void Swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for(i=0;i<width;i++)
//	{
//	char tmp = *buf1;
//	*buf1 = *buf2;
//	*buf2 = tmp;
//	buf1++;
//	buf2++;
//	}
//}
//
//
//
//void bubble_sort(void*base, int sz,int width,int(*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	//����
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1; //�����������ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//					
//		
//		for(j=0;j<sz-1-i;j++)
//		{
//		 if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//		 {
//		 	Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//		 	flag=0;
//		 }	
//		 
//			
//			
//
//		}
//
//
//
//		if(flag == 1)
//		{
//			
//			break;
//		}
//	}
//	
//}
//void test1()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
////	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	//�������ų�����
//	int sz = sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	
//	for(int i = 0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}	
//}
//void test3()
//{
//	struct STU s[] = {{"zhangsan",15},{"lisi",30},{"wangwu",25}}; 
//	int sz = sizeof(s) /sizeof(s[0]);
////	printf("%d",sizeof(s[0]));
////	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);	
//}
//
//int main()
//{
////	test1();
//	test3();
//	return 0;
//}


//void test2()
//{
//	struct STU s[] = {{"zhangsan",15},{"lisi",30},{"wangwu",25}}; 
//	int sz = sizeof(s) /sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	
//}
//int main()
//{
//	
//	test2();
//	return 0;
//	
//	
//	
//}

//int add(int x,int y)
//{
//	return x+y;
//}
//
//
//int main()
//{
//	
////	printf("%p",&add);	
//
//int (*pf)(int ,int)=add;
//
//int sum = pf(2,8);	
//	
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int a[]={1,2,3,4};
//	
//	printf("%d\n",sizeof(a));  //16
//	//sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%d\n",sizeof(a+0)); //4
//	//a���ǵ�������sizeof�ڲ���Ҳû��ȡ��ַ������a������Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ 
//	//�ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n",sizeof(*a)); //4  
//	// a<===>&a[0] a+0<===>&a[0]+0  *&a����a[0]
//	//*a�е�a��������Ԫ�صĵ�ַ��*a���Ƕ���Ԫ�صĵ�ַ�����ã��ҵ��ľ�����Ԫ��
//	//��Ԫ�صĴ�С����4���ֽ�
//	printf("%d\n",sizeof(a+1));//4
//	//�����a��������Ԫ�صĵ�ַ
//	//a+1�ǵڶ���Ԫ�صĵ�ַ
//	//sizeof(a+1)���ǵ�ַ�Ĵ�С
//	printf("%d\n",sizeof(a[1]));//4
//	//������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n",sizeof(&a));//4/8
//	//&aȡ��������ĵ�ַ������ĵ�ַ��Ҳ�Ǹ���ַ
//	printf("%d\n",sizeof(*&a));//16
//	//&a---->int(*)[4]
//	//&a�õ������������ĵ�ַ��������int(*)[4]����һ������ָ��
//	//����ָ��������ҵ���������
//	//*&a ---> a
//	//&��*������ �൱��a
//	printf("%d\n",sizeof(&a+1));//4/8
//	//&aȡ����������ĵ�ַ
//	//&a--> int(*)[4]
//	//&a+1 �Ǵ�����a�ĵ�ַ���������4������Ԫ�ص������С
//	//&a+1���ǵ�ַ���ǵ�ַ����4/8�ֽ�
//	
//	printf("%d\n",sizeof(&a[0]));//4/8
//	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ
//	//������ǵ�ַ�Ĵ�С
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	//������ǵ�ַ�Ĵ�С	
//	return 0;
//}


//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));//6
//	//sizeof(������)
//	printf("%d\n",sizeof(arr+0));// 4/8
//	//arr + 0 ��������Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*arr));//
//	//*arr�����������Ԫ�أ���С��1�ֽ�
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n",sizeof(arr[1]));// 1
//	//�ڶ���Ԫ�� 
//	printf("%d\n",sizeof(&arr));//4/8
//	//&arr������ĵ�ַ���ǵ�ַ���� 4 / 8���ֽ�
//	printf("%d\n",sizeof(&arr+1));//4
//	//&arr+1�������ĵ�ַ
//	//
//	printf("%d\n",sizeof(&arr[0]+1));//4
//	//&arr[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(arr[0]+1));
//	
//	
//	return 0;
//}

//sizeof ���ص����ֽڴ�С
//strlen ���ص����ַ������������������Ŀ��ַ�����������֮ǰͣ��


//int main()
//{
//	char arr[]={'a','b','c','d','e','f'}; //û�н����� �������

//	//size_t strlen ( const char * str ); ������ָ��

//	printf("%d\n",strlen(arr));//���ֵ
//	printf("%d\n",strlen(arr+0));//���ֵ
//	
////	printf("%d\n",strlen(*arr));// --> strlen('a');-->strlen(97);//Ұָ�� �Ƿ�����
////	printf("%d\n",strlen(arr[1]));//--> strlen('b');-->strlen(98);//Ұָ�� �Ƿ�����
//	printf("%d\n",strlen(&arr));//���ֵ
//	printf("%d\n",strlen(&arr+1));//���ֵ-6 ����һ������ 
//	printf("%d\n",strlen(&arr[0]+1));//���ֵ-1
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));//7
//	printf("%d\n",sizeof(arr+0));//4/8
//	printf("%d\n",sizeof(*arr));//1
//	printf("%d\n",sizeof(arr[1]));//1
//	printf("%d\n",sizeof(&arr));//4/8
//	printf("%d\n",sizeof(&arr+1));//4/8
//	printf("%d\n",sizeof(&arr[0]+1));//4/8		
//	
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";    
//	//strlen�����ַ������ȵģ���ע�����ַ����е�\0���������\0֮ǰ���ֵ��ַ��ĸ���
//	//strlen�ǿ⺯����ֻ����ַ���
//	//sizeofֻ��עռ���ڴ�ռ�Ĵ�С�����ں��ڴ��зŵ���ʲô
//	//sizeof�ǲ�����
//	             
//	printf("%d\n",strlen(arr));//6      
//	printf("%d\n",strlen(arr+0));//6
////	printf("%d\n",strlen(*arr));//err   
////	printf("%d\n",strlen(arr[1]));//err    
//	printf("%d\n",strlen(&arr));//6   
//	printf("%d\n",strlen(&arr+1));//���ֵ   
//	printf("%d\n",strlen(&arr[0]+1));//5
//	
//	return 0;
//}
 
//int main()
//{
//	char* p = "abcdef"; 
//	printf("%d\n",sizeof(p));//4/8
//	printf("%d\n",sizeof(p+1));//4/8
//	printf("%d\n",sizeof(*p));//1
//	printf("%d\n",sizeof(p[0]));//1
//	printf("%d\n",sizeof(&p));//4/8
//	printf("%d\n",sizeof(&p+1));//4/8
//	printf("%d\n",sizeof(&p[0]+1));//4/8
//	
//	printf("%d\n",strlen(p));//6
//	printf("%d\n",strlen(p+1));//5
////	printf("%d\n",strlen(*p));//err
////	printf("%d\n",strlen(p[0]));//err
//	printf("%d\n",strlen(&p));//���ֵ
//	printf("%d\n",strlen(&p+1));//���ֵ
//	printf("%d\n",strlen(&p[0]+1));	//5
//	
//	return 0;
//} 

//int main()
//{
//	int a[3][4]= {{2,2,3,4},{5,6,7,8},{9,10,11,12}};
//	
//
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	//a[0]�ǵ�һ�����һά���������������������sizeof�ڲ���a[0]��ʾ��һ���������һά����
//	//sizeof(a[0])����ľ��ǵ�һ�еĴ�С
//	printf("%d\n",sizeof(a[0]+1));//4/8
//	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
//	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	//a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//*(a[0]+1)���ǵ�һ�еڶ���Ԫ��
//	printf("%d\n",sizeof(a+1));//4/8
//	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
//	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
//	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(a+1)));//16
//	//*(a+1)�ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
//	//*(a+1)-->a[1]
//	//sizeof(*(a+1))-->sizeof(a[1])
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	//&a[0] - �Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
//	//&a[0]+1 �õ����ǵڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
//	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
//	
//	printf("%d\n",sizeof(a[3]));//16 
//	//Խ�絫�ǲ�����ʵ����� �����Ѿ��̶��� 
//	
//	//sizeof(������)���������������ʾ�������飬���������������Ĵ�С
//	//&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//	//����֮�����е�����������ʾ��Ԫ�صĵ�ַ
//	return 0;
//}




//int main()
//{
//	
//
//	
//	
//	int a[5]={1,2,3,4,5};
//	int *ptr = (int*)(&a+1); //����ָ������ǿ��ת��������ָ�� &a+1��������һ������
//	
//	printf("%d %d",*(a+1),*(ptr-1));//��һ��û��sizeof û��& ���ʾ��Ԫ�صĵ�ַ����ʾ�ڶ���Ԫ��
//	//�ڶ�������ָ�� -1�� ��ȥһ�������ֽ� ��Ϊ 5 
//	
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate; 
//	char cha[2];
//	short sBa[4];
//} *p=(struct Test*)0x100000;
////����p��ֵΪ0x100000,���±���ʽ��ֵ�ֱ��Ƕ��٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
////x86
//
//int main()
//{
//	printf("%p\n",p+0x1);
//	//0x100000+1 --> 0x100014 ����һ���ṹ��
//	printf("%p\n",(unsigned long)p + 0x1);
//	// (unsigned long)p ת��Ϊ�޷������� 1048576+1 -->1048577
//	// 0x100001
//	printf("%p\n",(unsigned int*)p + 0x1);
//	//0x100000+4 --> 0x100004
//	return 0;
//}

//int main()
//{
//	int a[4]= {1,2,3,4};
//	int* ptr1 = (int*)(&a+1);
//	//����һ���ṹ��
//	int* ptr2 = (int*)((int)a+1);
//	// ���a= 0x0012ff40
//	// a+1 -> 0x0012ff44
//	// (int)a+1 -> 0x0012ff41
//	// С�˴洢 01 00 00 00 02 00 00 00    �͵�ַ-->�ߵ�ַ
//	//             �������￪ʼ 4���ֽ� �ڴ��ַ 00 00 00 02 �� -�� ���� *ptr = 02 00 00 00
//	printf("%x,%x",ptr1[-1],*ptr2);
//	 
//	
//	
//	return 0;
//}

//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)}; // �����Ǹ����� ���������� ���ű��ʽ���ص������������һ�����ʽ��ֵ
//	//����ʵ�� a[3][2] = {{1,3},{5,0},{0,0}}
//	int *p;
//	p = a[0];
//	printf("%d",p[0]);
//	
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int (*p)[4];  // ָ����4��Ԫ�ص�ָ��
//	p = a;
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
// //   1 2 3 4 5  6 7 8 9 10 1112131415 1617181920 2122232425	  
// //   ���������� ���������� ���������� ���������� ���������� 	
// //	  p      ��       ��       ��       ��  ��1 2  3 4��      23-19=4��Ԫ�� ��Ϊ�ǵ��ż� ������-4    ��������ڴ�
// //                                      ��  �� ��
// //                                     p40 p41 p42 17�Ѿ���p[4][0]ע�⣡  P
//	return 0;                  
//}

//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);//����������ά����
//	int* ptr2 = (int*)(*(aa+1));//����һ�е����� �õ��ڶ��еĵ�ַ (aa+1)-->aa[1]
//	
//	printf("%d,%d",*(ptr1 - 1),*(ptr2 -1)); 
//	
//	
//	return 0;
//}

//int main()
//{
//	char* a[] = {"workl","at","alibaba"};
//	char** pa = a; 
//	pa++; //char �Ƶ���һ������ ������at
//	printf("%s\n",*pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//	char** cp[] = {c+3,c+2,c+1,c};
//	char*** cpp = cp;
//	
//	printf("%s\n",**++cpp);  //++cpp cpp��ֵ�ѱ� cpp�Ѿ�ָ��ڶ���Ԫ�صĵ�ַ
//	printf("%s\n",*-- *++cpp+3); //��++cpp  cpp�Ѿ�ָ�������Ԫ�صĵ�ַ   ����Ԫ��c+1Ȼ���1 c+1-1 =c  Ȼ�� ������ +3  ER             
//	printf("%s\n",*cpp[-2]+3);
//	//��ʱcpp��ָ�������Ԫ�صĵ�ַ  *cpp[-2]-->* *(cpp-2)+3  cpp-2 ��ָ�� ��һ��Ԫ�صĵ�ַ
//	//������Ϊc+3�ĵ�ַ  Ȼ���ٽ����� Ϊ FIRST ��+3  ��ָ��ST
//	printf("%s\n",cpp[-1][-1]+1);
//	//��ʱcpp��ָ�������Ԫ�صĵ�ַ cpp[-1][-1] -->*(*(cpp-1)-1)  +1
//	//��cpp-1����ָ��ڶ���Ԫ�صĵ�ַ Ȼ������-1  ���� c+2-1=c+1 ������� c+1 NEW ��+1 ��ָ�� EW
//}

//int main()
//{
//	
//////	char arr[] = "abcdef"; //abcdef\0
////	char arr[] = {'b','i'}; // strlen(arr)  ���  �޷�ȷ�������ĸ�Ԫ��Ϊ \0
////	int len = strlen(arr);
////	//strlen ���ص����޷�������
////	printf("%d\n",len);
//	
////	if(strlen("abc")-strlen("abcdef")>0)  //����д��������� �õ����Ǹ�������ת�����޷���������
//    if(strlen("abc")>strlen("abcdef"))
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	
//	
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count ;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n",n);
//	
//	
//	return 0;
//}

//int main()
//{
//	char name[]={0};
//	
////	strcpy(name,"zhangsan");
////	name = "zhansan";//err,name�������ǵ�ַ����ַ��һ������ֵ�����ܱ���ֵ
//    char arr[] = {'b','i','t','k'};//err ��֪��ʲôʱ������\0,�޷��ж�ʲôʱ��ֹͣ����
//    strcpy(name,arr);
//	printf("%s\n",name);
//	
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef"; //p��ָ�� �ǳ��������޸� ���p[]��ŵ����ַ����� ���޸�
//	char arr[] = "bit";
//	strcpy(p,arr); //Ŀ�����򲻿ɸ���
//	printf("%s",p);//err
//	
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src )
//{
//	assert(dest&&src);
//	char* ret = dest; 
//	while(*dest++ = *src++);  //���Ǹ�ֵ���ʽ ���� ��ȱ��ʽ *dest = 0ֹͣ��
//
//	
//	return  ret;
//	
//	
//}

//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while(*dest!='\0')
//	{
//      dest++;
//	} 
//	while(*dest++ = *src++);
// 
//	return ret;
//	
//	
//} 
//
//
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1,"world");
//	printf("%s\n",arr1);
//	
////	char arr1[] = "abcdef";
////    char arr2[20] = {0};	
////	my_strcpy(arr2,arr1);
////	printf("%s\n",arr2);
//	return 0;
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//		{
//			return 0; //���
//		}
//		str1++;
//		str2++;
//	}	
//	return (*str1 - *str2);
////	if(*str1 > *str2 )
////		return 1;
////	else
////		return -1;
//}


//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanb";
//	
//	//�����ַ����Ƚϣ�Ӧ��ʹ��strcmp��
//	int ret = my_strcmp(arr1,arr2);
//	
//	if(ret<0)
//	{
//		printf("<\n");
//	}
//	else if(ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//		printf(">\n");
////	//�Ƚ�һ�������ַ����Ƿ����
////	//arr1������������������������Ԫ�صĵ�ַ
////	//arr2������������������������Ԫ�صĵ�ַ
////	if(arr1 == arr2)  //�Ƚϵ��ǵ�ַ ��ַ�϶���һ�� ���ǱȽ������ַ���
////	{
////		printf("==\n");
////	}
////	else
////	{
////		printf("!=\n");
////	}
//	
//}

//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	
//	strncpy(arr1,arr2,5);  //��\0
//	
//	printf("%s\n",arr1);
//}

//int main()
//{
//	char arr1[20] = "hello, ";
//	char arr2[] = "world!";
//	strncat(arr1,arr2,5	);  //��ȥ�Զ�����\0
//	printf("%s",arr1);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strncmp(arr1,arr2,4);  //��ͬ�ı��������ص�ֵ�᲻һ�� �᷵�� >0 ==0 <0 ����һ��ֵ
//	printf("%d\n",ret);
////	if(ret == 0)
////		printf("==\n");
////	else if(ret < 0)
////		printf("<\n");
////	else
////		printf(">\n");
//}
//KMP�㷨
//����㷨Ҳ������ʵ����һ���ַ����в������ַ�����
//Ч�ʸߣ�����ʵ���Ѷȴ�



//char* my_strstr(const char*str1,const char* str2)
//{
//	assert(str1&&str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p =str1;
//	
//	while(*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while(*s1!='\0'&& *s2!='\0'&& *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return (char*) p;
//		}
//		p++;
//		
//	}  
//	
//	return 0;
//} 
//
//
//
//int main()
//{
////	char email[] = "zpw@bitejiuyeke.com";
////	char substr[] = "bitejiuyeke";
////	
////	char  *ret = my_strstr(email,substr);  //�������ַ���  ���ݵڶ����ַ������ҵ����ڵ�һ���ַ������ֵ��ַ�(��ȫƥ��)��������
//	char arr1[] = "abbbcdef";	
//	char arr2[] = "bbcq";
//	char* ret = strstr(arr1,arr2);
//	if(ret == NULL)
//	{
//		printf("�ַ���������\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}



//strtok
//�и��ַ���
//
//zhangpengwei@bitejiuyeke.com
//
// char* strtok(char* str ,const char* sep);
//sep�����Ǹ��ַ���,�����������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı��
//strtok�����ҵ���str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣(ע��strtok����
//��ı�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�)
//strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������ΪNULL,��������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣

//int main()
//{
//	const char* sep ="@."; 
//	char email[] = "zhangpengwei@bitejiuyeke.com.net";
//    char cp[30] = { 0 };
//	strcpy(cp,email);
//	
//	char* ret = NULL;
//	
//	for(ret = strtok(cp,sep);
//		ret != NULL;
//	    ret = strtok(NULL,sep))
//	{
//		printf("%s\n",ret);
//	} 
	
//	char* ret = strtok(cp,sep); 
//    if(ret != NULL)
//		printf("%s\n",ret);
//		
//    ret = strtok(NULL,sep); 
//	if(ret != NULL)
//	printf("%s\n",ret);
//	
//	if(ret != NULL)
//    ret = strtok(NULL,sep); 
//	printf("%s\n",ret);	
//	
//	if(ret != NULL)
//    ret = strtok(NULL,sep); 
//	printf("%s\n",ret);	
//	
//	if(ret != NULL)
//    ret = strtok(NULL,sep); 
//	printf("%s\n",ret);	
//
//	return 0;
//}

//C���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô�����
//strerror
//


//int main()
//{
////	printf("%s\n",strerror(0));
////	printf("%s\n",strerror(1));
////	printf("%s\n",strerror(2));
////	printf("%s\n",strerror(3));
////	printf("%s\n",strerror(4));	
//
////  errno - C�������õ�һ��ȫ�ֵĴ������ŵı���
//	
//	FILE* pf = fopen("E:\\����\\test.txt","r");
//	
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1; //��main�������ص��Ƿ�0ֵʱ����ʾ�쳣
//	}
//	else
//	{
//		
//	}
//	return 0;
//}��

// �ַ����ຯ��
// iscntrl  �κο����ַ�
// isspace	�հ��ַ�: �ո�' ',��ҳ'\f',����'\n',�س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
// isdigit  ʮ��������0-9
// isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa-f����д��ĸA-F
// islower	 Сд��ĸa-z
// isupper	 ��д��ĸA-Z
// isalpha   ��ĸa-z��A-Z
// isalnum	 ��ĸ�������飬a-z��A-Z��0-9
// ispunct	 �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
// isgraph   �κ�ͼ���ַ�
// isprint	 �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
 
// int tolwer(int c); ��д��ĸת��Сд
// int toupper(int c); Сд��ĸת����д

//int main()
//{
//	int a = isspace(' ');  // ������ ����˫���� ���ַ� �����ַ���
//	printf("%d\n",a);    //����ǿո� �ͷ��ط����ֵ 
			
//	int a = isdigit('0');
//	printf("%d\n",a); //��������� �ͷ��ط����ֵ

	
//	int a = iscntrl('\t');
//	printf("%d\n",a);  //����ǿ����ַ� �ͷ��ط����ֵ
		
//	int a = isxdigit('5');
//	printf("%d\n",a); //���Ϊ�淵�ط����ֵ

//    printf("%c\n",tolower('X')); // ��д��ĸתСд
//	printf("%c\n",toupper('a')); // Сд��ĸת��д
//	return 0;
//}

//memcpy �ڴ濽��
//void *memcpy(void* destination,const void * socre size_t num);
// destination ��ʾĿ�����
// source ��ʾ��Դ����
// num ��ʾ���Ƶ��ֽ�
// ����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
// ������������� '\0' ��ʱ�򲢲���ͣ����
// ���source��destination���κε��ص������ƵĽ������δ����ġ�


// memcpy ��������������ռ��е�����
// memcpy �����ǲ����������ص����ڴ�֮������ݿ�����
// ʹ�ú�����ʵ�֣��ص��ڴ�֮������ݿ���
//void* my_memcpy(void* dest,const void* src,SIZE_T num)
//{
//	  assert(dest&&src);
//	  void* ret =dest;
//	  while(num--)
//	  {
//	  	*(char*)dest = *(char*)src;
//	  	 dest = (char*)dest+1;
//		 src  = (char*)src+1;
//		    
//	  }
//	  return ret;
//} 


//int main()
//{
//	int a[] = {1,2,3,4,5,6,7};
//	int b[20] = {0};
//	
//	my_memcpy(b,a,sizeof(a));
//	
//	for(SIZE_T i = 0; i<sizeof(a)/sizeof(a[0]);i++)
//	{
//		printf("%d\n",b[i]);
//	}
//	
//	return 0;
//	
//}





//void test2()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	
////    my_memcpy(arr1+2,arr1,20);
//	//1 2 1 2 1 2 1 8 9 10 
////	memmove(arr1+2,arr1,20);
//	
//	int i = 0;
//	
//	for(i = 0; i<10; i++ )
//	{
//		printf("%d ",arr1[i]);	
//	}
//	
//}
//
//void* my_memmove(void* dest,const void* src,SIZE_T num )
//{
//	assert(dest&&src);
//	
//	void * ret = dest; 
//	
//    if(dest<src)
//	{
//	   	while(num--)
//	  {		
//		//ǰ->��
//		*(char* )dest =  *(char* )src;
//		 dest = (char*)dest+1;
//		 src = (char*)src+1;
//	  }	
//	}
//	else
//	{
//		while(num--)  //���� 20���ֽ�--
//	   {
//	   	 *((char*)dest+num)  = *((char*)src+num);   //��ʱָ�� �Ѿ�����19���ֽ�  �ڴ��Ǵ�0��ʼ 0Ҳ����һ���ֽ� ���� 0-19 �ܹ�20��
//	   
//	   }
//		
//		
//	}
//  return ret;
//} 
//
//void test3()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	
//   my_memmove(arr1,arr1+2,20);
//	
////	memmove(arr1+2,arr1,20);
//	
//	int i = 0;
//	
//	for(i = 0; i<10; i++ )
//	{
//		printf("%d ",arr1[i]);	
//	}
//	
//}
//
//
//
//int main()
//{
//	
//	test3();
//	
//	return 0 ;
//}

//memcmp �Ƚϴ�prt1��prt2ָ�뿪ʼ��num���ֽ�
//int memcmp(const void * ptr1,const void)
//int main()
//{
//	int arr1[] = {1,2,3,4,5}; // 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = {1,2,3};     // 01 00 00 00 03 00 00 00 02 00 00 00  С�˴洢 2��3С ����-1 
//	
//	int ret = memcmp(arr1,arr2,12);
//	printf("%d\n",ret);
//	return 0;
//}

// void * memset(void * ptr,int value,size_t num);
//                      ��ַ       ֵ        �ֽ���      
// �ڴ�����


//int main()
//{
////	char arr[] = "hello bit";
//	//memset(arr,'x',5);
////	memset(arr+6,'x',3);
////	printf("%s\n",arr);
//
//	int arr[10] = {0};
//	memset(arr,1,40); //��ÿ���ֽڶ���ֵΪ1 ����ÿ��Ԫ�ظ�ֵΪ1
//	                  //����ȫ��ֵΪ0
//	int i = 0;
//	for(i = 0 ;i<10 ;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	
//	return 0;
//}

//���һ�����������ĳһλ�����������1�����ĳһλ��ż�������0
// ���� 2222222  0
//      123      101
// �������������������

//int main()
//{
//	int input = 0 ;
//	int sum = 0;
//	
//	scanf("%d",&input);
//	int i = 0;
//	
//	while(input)
//	{
//		int bit = input%10;
//		if(bit%2==1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit*pow(10,i++);
//		input/=10;
//	}
//    printf("%d\n",sum);
//	return 0;
//}

//���ո�ֱ��������ͼ��
//���һ������ 5
//          
//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0; 
//	
//	scanf("%d",&input);
//	
//	for(i=0;i<input;i++)
//	{
//	   for(j=0;j<input;j++)
//	   {
//	   	 if(j<=i)
//	   	 {
//		  	printf("* ");	
//		 }
//		 else
//		 {
//		 	printf("  ");
//		 }
//	   }
//	   printf("\n");
//		
//		
//	}
//	
//	
//	return 0;
//}


// 11 11 7��
// 12 12 8��
//  1 ���Żݾ�-50  0����������

//int main()
//{
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	float price = 0;
//
//
//	while(~(scanf("%f %d %d %d",&price,&month,&day,&flag)))
//	{
//		
//		if(month==11&&day==11)
//		{
//		  price= price * 0.7-50*flag;
////			if(flag==1)
////			{
////			price= price * 0.7-50;
////			if(price<0)
////			{
////				printf("%d\n",0);
////			}
////			else
////			{
////			printf("%.2f\n",price);
////			}
////			
////			}
////			else
////			{
////			price = price * 0.7;
////			printf("%.2f\n",price);	
////			}
//			
//		}
//		else if(month==12&&day==12)
//		{
//		  price= price * 0.7-50*flag;
////			if(flag==1)
////			{
////			price = price * 0.8-50;
////			if(price<0)
////			{
////				printf("%d\n",0);
////			}
////			else
////			{
////			printf("%.2f\n",price);
////			}
////			
////			}
////			else
////			{
////			price = price * 0.8;
////			printf("%.2f\n",price);
////			}
//		}
//		if(price<0.0)
//		{
//			printf("%.2f\n",0.00);
//		}
//		else
//		{
//			printf("%.2f\n",price);
//		}
//
//	}
//	
//	return 0;
//}

//int main()
//{ 
//	// char -128-127
//	//unsigned char 0~255
//   unsigned char a = 200;
//   //0000 0000 0000 0000 0000 0000 1100 1000
//   //11001000 -a �ض�
//   //0000 0000 0000 0000 0000 0000 0110 0100
//   unsigned char b = 100;	
//   unsigned char c = 0;
//   c = a+b; 
//   //��������
//   //0000 0000 0000 0000 0000 0000 1100 1000
//   //0000 0000 0000 0000 0000 0000 0110 0100
//   //0000 0000 0000 0000 0000 0001 0010 1100
//	
//   //0010 1100 -c �ض� %d ������0  0000 0000 0000 0000 0000 0000 0010 1100
//   //	
//   printf("%d %d",a+b,c); //������ %d a+b �������� 0000 0000 0000 0000 0000 0001 0010 1100
////                300  44
//	return 0;
//}

//��32λ���ģʽ�����ϱ���b��ֵ�Ƕ���


//int main()
//{
//	unsigned  int a  = 0x1234;
//	
//	//0x1234 
//	
//	//С�˴洢 34 12 00 00 ���ݵĵ��ֽڶ�Ӧ�͵�ַ ���ֽڶ�Ӧ�ߵ�ַ
//	//�ڴ�     �� ---->��
//	//char     34
//	//��˴洢 00 00 12 34 ���ݵĸ��ֽڶ�Ӧ�͵�ַ ���ֽڶ�Ӧ�ߵ�ַ
//	//�ڴ�     �� ---->��	
//	//char     00 
//    //���ڱ�����Ĭ��С�˴洢 �������г�����С�� û��ʵ�ִ�� ���Ӧ���� 0x00	
//	
//	
//	unsigned char b = *(unsigned char *)&a;
//	
//	printf("%x",b);
//	
//	return 0;
//}

//A˵��B�ڶ� �ҵ���
//B˵���ҵڶ� E����
//C˵���ҵ�һ D�ڶ�
//D˵��C��� �ҵ���
//E˵���ҵ��� A��һ
//ÿλѡ��˵����һ�룬����ȷ������������


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	
//	for(a = 1;a <= 5; a++)
//	{
//		for(b = 1;b <= 5;b++)
//		{
//			for(c = 1;c <= 5;c++)
//			{
//				for(d = 1;d <= 5;d++)
//				{
//					for(e = 1;e <= 5;e++)
//					{
//						if( ((b==2)+(a==3)==1)
//						  && ((b==2)+(e==4)==1)
//						  && ((c==1)+(d==2)==1)
//						  && ((c==5)+(d==3)==1)
//						  && ((e==4)+(a==1)==1)
//						)
//						{
//							if(a*b*c*d*e==120) //a+b+c+d+e==15 �޷����Ψһ������
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//							}
//						}					
//					}		
//					
//				}						
//			}	
//		}
//	}
//	
//	
//	return 0;
//}


//4�����ɷ��Ĺ���
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�
//дһ��������ȷ������˭������

//int main()
//{
//	int killer = 0;
//	for(killer = 'a';killer <='d';killer++)
//	{
//		if( (killer != 'a')+(killer == 'c')
//		    +(killer == 'd')+(killer != 'd')==3
//		  )	
//		{
//			printf("%c",killer);
//		}
//	}
//	
//	
//	
//	
//	return 0;
//}

//����Ļ�ϴ�ӡ�������
//1
//1 1
//1 2 1
//1 3 3 1
//int main()
//{
//	int i=0;
//	int j=0;
//	int k=0;
//	int a[10][10]={0};
//	
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(j==0||i==j)
//			{
//				a[i][j]=1;
//			}
//			if(i>=2&&j>=1)
//			{
//				a[i][j]=a[i-1][j-1]+a[i-1][j];
//			}
//		}
//	}
//
//
//	for(i=0;i<10;i++)
//{
//		for(k=0;k<9-i;k++)
//	   {	
//	    printf(" ");
//	   }
//		for(j=0;j<=i;j++)
//		{	 	
//		  printf("%d ",a[i][j]);
//		}
//		printf("\n");
//}
//	
//	return 0;
//}


//�����ĸ������Ǵ���ģ�
//#include <stdio.h>
//
//int main()
//{
//	int *p =NULL;
//	int arr[10] = {0};
//	
//	
//	return 0;
//}
//
//A. p=arr;
//B. int(*ptr)[10]=&arr;
//C. p=&arr[0];
//D. p=&arr;

//A. p=arr;
//
//������ȷ�ġ���C�����У�������arr�����˻�Ϊָ������Ԫ�ص�ָ�룬
//���ｫ�丳ֵ������ָ��p�ǺϷ��ġ�
//
//B. int(*ptr)[10]=&arr;
//
//��Ҳ����ȷ�ġ����ﶨ����һ��ָ����10�������������ָ��ptr��
//�������ʼ��Ϊָ������arr�ĵ�ַ������д���ǺϷ��ҷ������Ͱ�ȫ�ġ�
//
//C. p=&arr[0];
//
//��ͬ������ȷ�ġ�arr[0]������arr�ĵ�һ��Ԫ�أ�
//ȡ���ַ��ֵ��ָ��p������ֱ��ʹ��������arrЧ����ͬ����Ϊ���߶��õ�������Ԫ�صĵ�ַ��
//

//D. p=&arr;
//
//������ʽ��C��������������ġ�������ĳЩ�������У�
//���������Ա�����ָ�����׸�Ԫ�ص�ָ����ʹ�ã�
//
// �ص㣺��������ĵ�ַ  ��ֱ�Ӷ�����ȡַ(&arr)�õ�������������ĵ�ַ��
//
//������Ϊint(*)[10]����ָ����10������Ԫ�������ָ�룬
//����p������int*�������ᵼ�±������

//int main()
//{
//	int arr[10] = {0};
//	
//	return 0;
//}



// sizeof(arr) ��sizoof arr��ʾ��������
// &arr arr��ʾ��������
// ����sizeof(arr)��&arr�е��������������ط����ֵ�������arr
// ����������Ԫ�صĵ�ַ

//                1
//               1 1
//              1 2 1
//             1 3 3 1
//            1 4 6 4 1
//
//
//
//

//int main()
//{
//	const char *p1 = "abcdef";  //�����ַ��� �ڴ涼ָ��һ��
//	const char *p2 = "abcdef";  //ָ���ŵ�ַ û�����ڴ�����ռ�
//	
//	char arr1[] = "abcedf";  //����ռ䲻һ��
//	char arr2[] = "abcedf";	 //��������Ŀռ�  �����׵�ַ�϶���һ��
//	
//	if(p1==p2)
//	   printf("p1==p2\n");
//	else
//	   printf("p1!=p2\n");
//	if(arr1==arr2)
//	{
//	 	printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	  
//	printf("p1= %p,p2= %p\n",p1,p2);
//	printf("arr1= %p,arr2= %p\n",arr1,arr2);
//	
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�

//void left_rotate(char arr[],int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	int j = 0;
//	k%=len  //��ֹ�˷���Դ �˷�ʱ��
//	for(i=0;i<k;i++)
//	{
//		char tmp = arr[0];
//		
//		for( j=0;j<len-1;j++)
//		{
//			arr[j]=arr[j+1];
//		}
//		arr[len-1]=tmp;
//		
//	}
//	
//	
//} 


//void reserve (char *left,char * right)
//{
//	assert(left&&right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//		
//	}
//	
//	 
//	
//}
//
//void left_rotate(char arr[],int k)
//{
//	int len = strlen(arr);
// 	k%=len;
//	reserve(arr,arr+k-1);
//	reserve(arr+k,arr+len-1);
//	reserve(arr,arr+len-1);
//	
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
////	char arr1[] = "abcdef";
//	left_rotate(arr,8);
//	printf("%s\n",arr);
////	memmove(arr1+4,arr1,2);
////	printf("%s",arr);
//
//
//
//	
//	return 0;
//}

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��o(N);

//struct point
//{
//	int x;
//	int y;
//};

//struct point find_num(int arr[3][3],int r,int c,int k)
//int find_num(int arr[3][3],int r,int c,int k)
//int find_num(int arr[3][3],int* r,int* c,int k)
//{
//	                   //    (x,y) 3�Ǵӵ�һ��������Ҳ�ǣ�Ҳ����һ����С��      
//	                   //     �����˵�ҵ�������С ��ֻ�� ��-- y-- �����������ֻ�� ��++ x++  
//	int x=0;           // 1 2 3  
//	int y=*c-1;         // 4 5 6  //���˵�ҵ���4 4��3�� ��x++��ʱ ����λ��x+1,y��Ϊ6
//	                   // 7 8 9  //4��6С ��y-- ��ʱ����λΪ5 ��y--�õ�4
//	                   // ��
//	                   //(x,y)(����Ҳ�ɵ� x y)
//	
////	struct point p ={-1,-1};
//	
//	
// //  while(x<=r-1&&y>=0)	
//	while(x<=*r-1&&y>=0)
//	{
//
//	if(k<arr[x][y])
//	{
//		
//		y--;
//	}
//	else if(k>arr[x][y])
//	{
//       x++;
//	}
//	else
//	{  // printf("arr[%d][%d]\n",x,y);
////	   p.x=x;
////	   p.y=y;
//       *r = x;
//	   *c = y;   
////	   return p;
//		return 1;
//	}	
//		  
//	}				    
////	 return p;
//     *r = -1;
//     *c = -1;
//     
//	 return 0;               
//}                      
//                    
//					   
//                       
//                       
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	
//	int k = 0;
//	
//	int x = 3;
//	int y = 3;
//	
//	scanf("%d",&k);
//	
//	int ret = find_num(arr,&x,&y,k);
// //   struct point ret = find_num(arr,3,3,k);
//   
//	
////	printf("%d %d",ret.x,ret.y);
//	if(ret == 1)
//	{
//		printf("a[%d][%d]",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//	
//	return 0;
//	
//}

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���



//int is_left_rotate(char arr1[],char arr2[])
//{
//	int i = 0;
//	int len = strlen(arr1);
//	int j = 0;
//
//	for(i=0;i<len;i++)
//	{
//		char tmp = arr1[0];
//		
//		for( j=0;j<len-1;j++)
//		{
//			arr1[j]=arr1[j+1];
//		}
//		arr1[len-1]=tmp;
//		if(strcmp(arr1,arr2)==0)
//		{
//			return 1;
//		}
//	}
//	
//	return 0;
//	
//} 

//int is_left_rotate(char arr1[],char arr2[])
//{
//	int len = strlen(arr1);
//	int len1 = strlen(arr2);
//	
//	if(len!=len1)
//	{
//		return 0;
//	}
//	
//	strncat(arr1,arr1,len);
//	
//	char*p =  strstr(arr1,arr2);
//	
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefa";
// 	//abcdefabcdef
// 	//bcdefa
// 	//cdefab
// 	//defabc
// 	//efabcd
// 	//fabcde
// 	//abcdef
// 	int ret = is_left_rotate(arr1,arr2);
// 	
// 	if(ret == 1)
// 	{
//	   	printf("ok\n");
//	   	
//	}
//	else
//	{
//		printf("no\n");
//	}
// 	
//	return 0;
//}

//���溯�������ȷ����

//char * arr[5] = {"hello","bit"};
//
//test(arr);

//��Ŀ���ݣ�

// A.void test(char* arr);
// B.void test(char** arr);
// C.void test(char arr[5]);
// D.void test(char* arr[5]);

//A. void test(char arr)�����Ǵ���ģ���Ϊchar arr ��һ���ַ����飬�������ַ������飬����û��ָ�����ȡ�
//
//B. void test(char** arr)��������ȷ�ģ���Ϊ����ʾһ��ָ��ָ���ָ�룬����ά���飬����������ʾһ���ַ������顣
//
//C. void test(char arr[5])�����Ǵ���ģ���Ϊ����һ���ַ����飬�����ַ������飬���ҳ���Ϊ5���ⲻ�������������ַ�����
//
//D. void test(char* arr[])��������ȷ�ģ���Ϊ����ʾһ��ָ���ַ�ָ������飬����������ʾһ���ַ������顣

//int main()
//{
//	int aa[2][5]={10,9,8,7,6,5,4,3,2,1};
//	int* ptr1 = (int*)(&aa+1);//����������ά����
//	int* ptr2 = (int*)(*(aa+1));//����һ�е����� �õ��ڶ��еĵ�ַ (aa+1)-->aa[1] ��Ӧ���ڣ�aa+1���Ӹ�*
//	
//	printf("%d,%d",*(ptr1 - 1),*(ptr2 -1)); 
//	
//	
//	return 0;
//}

//���������print_arr������������ĸ�����ȷ��?()

//int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
//print_arr(arr,3,5);

//A.void print_arr(int arr[][],int row,int col);
//B.void print_arr(int*arr,int row,int col);
//C.void print_arr(int (*arr)[5],int row,int col);
//D.void print_arr(int (*arr)[3],int row,int col);



//Aѡ�� int arr[][] �ǲ���ȷ���﷨����C�������㲻������������ά����Ĳ�����
//Bѡ�� int* arr ��������ά������Ϊһ������һά���飬����Ȼ��ĳЩ����¿���ͨ������ƫ���������ʶ�ά�����Ԫ�أ���������ȷ��ʾ����һ����ά���鲢����������ʹ�õĽǶ���˵�����������ѡ��
//Cѡ�� int (*arr)[5] ��ȷ�ر�ʾ��һ��ָ����5�����������ָ�룬�����Ƕ�ά���� arr[3][5] ÿһ�еı�����ʽ������ȷָ���˲�����һ��ָ�����5�������������ָ�룬������ͨ����һ������ row ���ݣ����ַ�ʽ�����ر���˶�ά����Ľṹ��
//Dѡ�� int (*arr)[3] �������̶�Ϊ3��������Ŀ�ж�ά�����ʵ������������

//ת�þ���(����������л����õ����¾���)
//����
// 2 3 (����)
// 1 2 3
// 4 5 6

//���
// 1 4
// 2 5
// 3 6
 
//int main()
//{
//	int m = 0;
//	int n = 0;
//	
//	scanf("%d %d",&m,&n);
//	
//	int a[10][10] = {0};
//    int i = 0;
//	int j = 0;
//		
//    for(i = 0;i < m ;i++)
//    {
//		for(j = 0; j < n ;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//		
//	}
//	
//	for(i= 0; i < n ;i++)
//	{
//		for(j = 0; j < m ;j++)
//		{
//			printf("%d ",a[j][i]);
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//	
//}

//�����Ǿ���(�����Ǿ�����һ������ķ��󣨼�������������ȵľ��󣩣����ص��Ǿ�������������򣨰����Խ������£�������Ԫ�ض�Ϊ��)

//  1 2 3   1 4 6��Խ������µ�ֵ����0 ���������Ǿ���
//  0 4 5
//  0 0 6


//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	
//	
//	int arr[10][10] = {0};
//	
//	int m = 0;
//	int flag = 1;
//	scanf("%d",&m);
//	
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//		
//	}
//	
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			if(arr[i][j]!=0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//	end:
//	if(flag == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//     	printf("NO\n");
//	}
//	return 0;
//}

// ���������ж�
//��һ������һ������N
//�ڶ�������N������
// ���� 5
// 1 6 9 22 30
// sorted
// 5
// 3 4 7 2 10
// unsorted
// 5
// 1 1 1 1 1
// sorted

//int main()
//{
//	int arr[50]={0};
//	
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	int n = 0;
//	
//	scanf("%d\n",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//		if(i>0)
//		{
//			if(arr[i]>arr[i-1])
//			{
//			   flag1 = 1;
//			}
//			else if(arr[i]<arr[i-1])
//			{
//				flag2 = 1;
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//	
//	if(flag1+flag2<=1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

//�ṹ�������
//struct stu          //stu �ǽṹ������ 
//{
//	char name[20];
//	int age;
//};

//struct stu          // stu �ǽṹ������ s1 s2 �ǽṹ���������������ͷ����ȫ�ֱ�����
//{
//	char name[20];
//	int age
//}s1,s 2; //������ȫ�ֱ���
//
//int main()
//{
//	struct stu s3;  //s3�Ǿֲ�����
//	
//	
//	
//	return 0;
//}

//�����ṹ������
//ֻ��ʹ��һ�� (����ȫ������)

//struct
//{
//   int a;
//   char b;
//   float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//	
//}a[20], *p;
//
//int main()
//{
//	p = &x; //���� ����������������������������ȫ��ͬ����������
//	        //�����ǷǷ��� 
//	return 0;
//}

//����������ṹ��������ʱ��ʡ���˽ṹ���ǩ(tag)

//�ṹ��������

//struct Node
//{
//	int data;
//	struct Node next;
//};// �����÷�

//��ȷ�������÷�ʽ

//struct Node 
//{
//	int data;
//	struct Node* next; //�����ṹ��ָ�루����
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef struct Node
//{
//    int data;      // �ṹ���ڵ�һ����Ա�����ڴ洢�������ݡ�
//    Node* next;    // һ��ָ��ͬ���ͽṹ�壨����һ��Node�ڵ㣩��ָ�룬�������������е���һ���ڵ㡣
//} Node;


//
//����д����ȫ��ȷ�ģ����Ҵ�����Ӽ�ࡣ
//������Ϊtypedef�ؼ��������ܹ�ֱ����Node��ָ��struct Node��
//����ڽṹ���ڲ�����ָ��ʱ������ֱ��ʹ��Node* next��


//
//

//struct stu
//{
//    char name[20];
//    int age;
//} s1;
//
//typedef struct stu
//{
//    char name[20];
//    int age;
//} s1;

//���ͨ���ڽṹ�嶨������ typedef��
//��ʵ������Ϊ struct stu ������һ������ s1��
//�����Ƕ�����һ������������ζ�� s1 ������һ���������ƣ�
//���������������ͬ���͵��±�����
//������Ҫÿ�ζ�д�� struct stu����ˣ�
//����� s1 ����ָ��һ������Ľṹ�����
//���ǳ�Ϊ������ struct stu ��һ��������

//struct point
//{
//	int x;
//	int y;
//	
//}p1 = {2,3};
//
//struct score
//{
//	int n;
//	char ch;
//	
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct point p2 = {3,4};
//	struct Stu s1 = {"zhangsan",20,100,'c'};
//	
//	printf("%s %d %d %c",s1.name,s1.age,s1.s.n,s1.s .ch);
//	
//}


//�ṹ���ڴ����

//struct S1
//{
//	char c1;  //1
//	int i;    //4
//	char c2;  //1
//};
//
//struct S2
//{
//	char c1; //1
//	char c2; //3
//	int i ; //4
//};

//struct S3
//{
//	double d;  // 8
//	char c;    // 1
//	int i ;    // 4  8+1=9����4�ı������� 1��3 ����12  12 + 4 �ܹ�16
//	
//};
//
//struct S4
//{
//	char c1;       //1  8   ����Ƕ�׽ṹ���������8 ����1Ҫ���뵽8 ��Ƕ�׽ṹ�嵽������
//  	struct S3 s3;  //16   Ƕ�׵Ľṹ����뵽�Լ���������������������
//	double d;      //8  
//};
//
////offsetof ��Ա��������ʹ����ı����е�ƫ����
//
//int main()
//{
//	
//	printf("%d\n",sizeof(struct S1));
//	printf("%d\n",sizeof(struct S2));
//	printf("%d\n",sizeof(struct S3));
//	printf("%d\n",sizeof(struct S4));

////    printf("%d\n",offsetof(struct S1,c1));
////	printf("%d\n", offsetof(struct S1,i));
////	printf("%d\n",offsetof(struct S1,c2));
//	
//	return 0;
//}





//�ṹ��Ķ������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ����
// ������ = ������Ĭ�ϵ�һ����������ó�Ա��С�еĽ�Сֵ  ������8 ��Ա4 ���С 4
//  VS ��Ĭ�ϵ�ֵΪ8
//3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������    
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С
//����������������(��Ƕ�׽ṹ��Ķ�����)����������

//Ϊʲô�����ڴ����

//1.ƽ̨ԭ����ֲԭ��
//�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵ�;ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣

//2.����ԭ��
//���ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶���
//ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ����;��������ڴ���ʽ���Ҫһ�η��ʡ�

//������˵:�ṹ����ڴ�������ÿռ�����ȡʱ���������

//������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ�
//��ռ�ÿռ�С�ĳ�Ա����������һ��

//���磺
//struct S1
//{  
//  char c1;
//  int i;
//  char c2;	
//}
//struct S1
//{  
//  char c1;
//  char c2;
//  int i;	
//}

//#pragma once
//ͷ�ļ���ʹ�ã�������:��ֹͷ�ļ����������

//#pragma pack(4) //����Ĭ�϶�����Ϊ4
//struct S
//{
//	int i ;
//	double b;
//};
//#pragma pack() //ȡ�����õ�Ĭ�϶���������ԭΪĬ�ϣ������������ṹ�� ���������Ľṹ������Ҫȡ����
//int main()
//{
//	printf("%d",sizeof(struct S));
//	
//	return 0;
//}

//�ṹ�崫��

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for(i = 0; i<3;i++)
//	{
//		printf("%d ",ss.data[i]);
//	}
//	printf("%d\n",ss.num);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for(i = 0; i<3;i++)
//	{
//		printf("%d ",ps->data[i]);
//	}
//	printf("%d\n",ps->num);
//}
//
//int main()
//{
//
//	
//	struct S s = {{1,2,3},100};
//	print1(s);  //��ֵ����
//	print2(&s); //��ַ����
//	return 0;
//}

// print1 �� printf2 ��ѡprint2����
// ԭ��
// �������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
// �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½�

//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ

//λ��

//λ�ε������ͽṹ�����Ƶģ�����������:
//1.λ�εĳ�Ա������ int ��unsigned int �� sign int .
//2.λ�εĳ�Ա�������һ��ð�ź�һ������.

//λ����һ�ֽ�ʡ�ռ������
//����

//struct A
//{
//  // 4byte -32bit	
//  int _a:2;  //��ʾa ֻռ��2������λ
//  int _b:5;	 //��ʾb ֻռ��5������λ
//  int _c:10; //��ʾc ֻռ��10������λ
//  //32-17 = 15
//  //���ٿ�����4byte-32bit 
//  int _d:30; //��ʾd ֻռ��30������λ
//	
//	//���ĳЩ��Ա��ȡֵ��Χ�ǳ����ޣ���ô����Ҫ���ڴ�ռ����һ���̶ȵļ�С
//	
//	
//};
//
//
////47 bit
////6byte - 48bit
////8byte - 64bit
//
////λ�ε��ڴ����
////1.λ�εĳ�Ա������ int unsigned int signed int ������char�����ͼ��壩����
////2.λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)
////3.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
//
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	
//}


//struct S
//{               //1byte
//	char a : 3; //8-3=5��ʣ�£�
//	char b : 4; //5-4=1��ʣ�£�  
//	
//	char c : 5; //1����(�˷ѵ�) �ٿ���1��byte 8-5=3(ʣ��)
//	char d : 4; //3����(�˷ѵ�) �ٿ���1��byte �ܹ�3��byte
//	
//};
//
//int main()
//{
//	struct S s = {0};
//	           // 0110 0010     0000 0011    0000 0100
//			   // b(4λ) a(3λ)    c(5λ)       d(4λ)
//			   //   62            03           04     
//	s.a = 10;  //���� aֻ��3��bit ����10Ϊ 1010�ضϳ� 010
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//λ�εĿ�ƽ̨����
//1.intλ�α������з����������޷������ǲ�ȷ����
//2.λ�������λ����Ŀ����ȷ��.(16λ�������16��32λ�������32��д��27����16λ�����������)
//3.λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ���塣
//4.��һ���ṹ��������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λʱ��������ʣ���λ��������
//���ǲ���ȷ���ġ�

//���ṹ��ȣ�λ�ο��Դﵽͬ����Ч�������ԺܺõĽ�ʡ�ռ䣬�����п�ƽ̨��������ڡ�

//ö�� 
//����˼������о�
//ö�����͵Ķ���

//enum Day
//{   //�����涼��ö�ٳ���  ���ṹ���Ǳ���
//	Mon,  //���Ƕ��Ž�β ���ṹ���Ƿֺ�
//	Tues,
//	wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//	
//};

//enum Day
//{   //�����涼��ö�ٳ���  ���ṹ���Ǳ���
//	Mon=1,  //���Ƕ��Ž�β ���ṹ���Ƿֺ�
//	Tues,
//	wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//	
//	
//};

//ö�ٵ��ŵ�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3.��ֹ��������Ⱦ(��װ)
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

// define M 100  define �����滻 ���������

// int main()
//{
// int m = M ;	��ʵ���Ե�ʱ�� �Ѿ�������M��ֵ�� ֻ�ܿ���int m = 100; ���������
//}
//

//Ĭ������£�ö�ٳ�����ֵ�� 0 ��ʼ������
//������ʽָ������ˣ�����������У�Mon ��ֵ�� 0��
//Tues ��ֵ�� 1���Դ����ơ�

//int main()
//{
////	enum Day d = Fri;  //ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ���
//	
//	printf("%d\n",Mon);
//	printf("%d\n",Tues);
//	printf("%d\n",wed);
//	printf("%d\n",Thur);
//	printf("%d\n",Fri);
//	printf("%d\n",Sat);
//	printf("%d\n",Sun);	
//	return 0;
//}

//����(������)
//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ�(��������Ҳ�й�����)

//union un
//{
//	int a ; //4
//	char c; //1
//};
//
//struct st
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	union un u;
//	
//	u.a = 0x11223344;
//	u.c = 0x00;//����һ���ֽڱ����� FF 256 1���ֽ� = 8��bit
//	
//
//	printf("%x\n",u.a);  //��� 0x11223300 �ڴ��Ǵӵ͵�ַ��ʼ ���� 00����44
//	
//	printf("%d\n",sizeof(u));  //4���ֽ�
//	printf("%p\n",&u);  //������ ����ͬһ����ַ
//	printf("%p\n",&u.a);
//	printf("%p\n",&u.c);
//}

//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С(��Ϊ�������ٵ����������������Ǹ���Ա)��

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//ǿ��ת��Ϊһ���ֽ� ���ڴ�͵�ַ��ʼ 
//
//}
//int check_sys()
//{
//	union un //���ֻ��һ�� un����ȥ�� u����  (�ṹ������)
//	{
//		char c;
//		int i ;
//
//	}u;
//	
//	//  �����С�� ���ڴ�͵�ַ�洢���ֽ� ����Ǵ���� �͵�ַ�洢���ֽ�
//	u.i = 1;     // С��    01 00 00 00
//	return u.c;  // ���    00 00 00 01
//	             //  �͵�ַ �ѵ�һ���ֽ��ó����жϾ����� �����Ǵӵ͵�ַ��ʼ��
//	             //����1��С�� ����0�Ǵ��
//	             
//}
//
//
//int main()
//{
////  int a = 1 // 0x 00 00 00 01
////  �ڴ��ַ ��------->��
////           01 00 00 00 --С�˴洢 	
////           00 00 00 01 --��˴洢
//	int ret = check_sys();
//
// 
//	if(ret ==1)
//	 printf("С��\n");
//	else
//	 printf("���\n");
//}

//union un
//{                 //���������Ķ�������4 
//    char arr[5];  //char arr[5]�Ķ�������1
//	int i;        //���Ա�����4�ı��� 
//	              //������Ҳ�����ڴ���� 
//};
//
//
//int main()
//{
//	printf("%d\n",sizeof(union un));  //����Ϊ8
//	return 0;
//}


//union un
//{                 //���������Ķ�������4  
//    short arr[7];  //short arr[7]�Ķ�������1 short�������ֽ�
//	int i;        //���Ա�����4�ı��� 
//	              //������Ҳ�����ڴ���� 
//};
//
//int main()
//{
//	printf("%d\n",sizeof(union un));  //����Ϊ16
//	return 0;
//}

//��̬�ڴ����

//malloc
//calloc
//realloc
//free


//int main()
//{
//	int a = 10;//4���ֽ�  ��ջ�ռ��Ͽ����ĸ��ֽ�
//	int arr[10];//40���ֽ� ��ջ�ռ��Ͽ���10���ֽڵ������ռ� �ڴ��Сû�취�ı�
//	return 0;
//}
//���������Ŀ��ٿռ�ķ�ʽ�������ص㣺
//1.�ռ俪�ٴ�С�ǹ̶��ġ�
//2.������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ������
//�ڱ���ʱ����
//���Ƕ��ڿռ�����󣬲��������������������ʱ��������Ҫ�Ŀռ�
//��С�ڳ������е�ʱ�����֪��
//������ı���ʱ���ٿռ�ķ�ʽ�Ͳ���������
//��ʱ��ֻ�����Զ�̬�ڴ濪����

//��̬�ڴ溯���Ľ���
// malloc��free
// c�����ṩ��һ����̬�ڴ濪�ٵĺ���:

//void * malloc(size_t size);
//����������ڴ�����һ�� �������õĿռ䣬������ָ�����ռ��ָ��
//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//����ֵ��������void*,����malloc��������֪�����ٿռ�����ͣ�
//������ʹ�����Լ�������
//�������sizeΪ0,malloc����Ϊ�Ǳ�׼δ����ģ�ȡ���ڱ�������

//�䳤����
// //C99��׼֧�ֵı䳤����
// int n = 0;
// scanf("%d",&n);
//int arr2[n];
//


//int main()
//{
////	int arr[10] = {0};
//	//��̬�ڴ濪��
////	int* p =(int *)malloc(INT_MAX); ����ᱬ Not enough space
//    int* p =(int *)malloc(40);
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	} 
//	int i = 0;
//	for(i = 0; i <10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i = 0;i < 10 ;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ��
//	
//	free(p);
//	
//	p=NULL;
//	
//	return 0;
//}







//free ר����������̬�ڴ���ͷźͻ��յģ�����ԭ������:
//free ���������ͷŶ�̬���ٵ��ڴ�
//�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ���塣
//�������ptr��NULLָ�룬����ʲô�¶�����
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	
//	free(p);
//	
//	p = NULL;
//	
//	return 0;
//
//	
//}
//
//int main()
//{
//	int *p = NULL;
//	free(p);
//	return 0;
//	
//}


//����10�����Ϳռ�
//calloc �����Ĺ�����num����СΪsize��Ԫ�ؿ���һ��ռ�,���Ұ�
//�ռ��ÿ���ֽڳ�ʼ��Ϊȫ0.
//�뺯��malloc ������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ�
//��ÿ���ֽڳ�ʼ��Ϊȫ0
//calloc �������Ϊ calloc = malloc+memset

//int main()
//{
//	int* p = (int *)calloc(10,sizeof(int));
//	if( p == NULL )
//	{
//		printf("%s\n",strerror(errno));
//	}
//	int i = 0;
//	for(i = 0; i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

//realloc

//realloc�����ĳ����ö�̬�ڴ����������
//��ʱ���ǻᷢ�ֹ�ȥ����Ŀռ��С��,��ʱ�����ֻ��������Ŀռ������
//Ϊ�˺����ʹ���ڴ�,����һ������ڴ�Ĵ�С�����ĵ���.��realloc
//�����Ϳ��������Զ�̬�����ڴ��С�ĵ���
//void* realloc(void * prt,size_t size)
//prt��Ҫ�������ڴ��ַ
//size ����֮��Ĵ�С
//����ֵΪ����֮����ڴ���ʼλ��
//�����������ԭ�ڴ�ռ��С�Ļ�����,���Ὣԭ���ڴ��е�����
//�Ƶ��µĿռ�
//realloc�ڵ����ڴ�ռ���Ǵ����������:
//���1:ԭ�пռ�֮�����㹻��Ŀռ�
//���2:ԭ�пռ�֮��û���㹻��Ŀռ�
//�������1��ʱ��,Ҫ��չ�ڴ��ֱ��ԭ���ڴ�֮��ֱ���޸Ŀռ䣬ԭ���ÿռ����ݲ������仯
//�������2��ʱ��ԭ�пռ�֮��û���㹻��Ŀռ�ʱ����չ�ķ�����
//�ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ��

//�������������������realloc������ʹ�þ�Ҫע��һЩ��
//int main()
//{
//	int * p =(int*)malloc(40);
//	if(NULL == p)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for(i = 0; i<10;i++)
//	{
//		*(p+i) = i+1;
//	}
//	//����
//	int * ptr = (int* )realloc(p,80);
//		
//	if(ptr!=NULL)
//	{
//		p = ptr;
//	}
//	for(i=0 ;i<10;i++)
//	{
//		printf("%d",*(p+i));
//	}
//	free(p);
//	p=NULL;
//	ptr=NULL;
////	realloc()
//	return 0;
//}

//�����Ķ�̬�ڴ�Ĵ���
//1.��NULLָ��Ľ����ò���

//int main()
//{
//	int *p = (int*)malloc(40);
//	*p=20; //�������p��ֵ��null���������� Ҫ�ж��ǲ��ǿ�ָ��
//	free(p);
//	
//}
//��ȷ������

//int main()
//{
//	int *p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 1;  //����ǿյ� �ͷ��ؾͲ���ִ����������
//	}
//	*p = 20;    
//	free(p);   //�ǵ��ͷ�
//	p=NULL;    //�ǵø�ֵΪ��ָ��.
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int *p =(int*)malloc(40);
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	int i = 0;
//	for(i = 0; i<=10;i++)   //����Ϊ10��Խ�� ���������
//	{
//		p[i] = i;
//	}
//	free(p);
//	p=NULL;
//	
//	
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	//....
//	
//	free(p); //�ᱨ��
//	p=NULL;
//	
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

//int main()
//{
//	int * p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for(i = 0; i<10; i++)
//	{
//		*p = i;
//		p++;  // ����pָ��Ķ�������ʼ��λ����
//	}
//	free(p);  //�����ͷ�p�ͻᱨ��
//	          //���Ըĳ�p[i]����*(p+i)
//	p = NULL;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//	free(p);
//	p = NULL;
//	//....
//	free(p); //�ᱨ��
//	return 0;
//}

//6.��̬�����ڴ������ͷ�(�ڴ�й¶)

//void test()
//{
//	
//	int *p = (int *)malloc(100);
//	
//	int flag = 0;
//	scanf("%d\n",&flag);//5
//	if(flag == 5) return; //�����ĵ���5 �ǾͲ���ִ��������ͷ��ڴ�͸�ֵ��ָ�룬�ͻ�����ڴ�й¶��
//	
//	free(p);
//	p = NULL;
//}
//
//
//int main()
//{
//	test();
//	//.....
//	
//	return 0;
//}

//��̬�ڴ澭������
//1.

//void GetMemory(char* p)  //�������β�
//{
//	p = (char*)malloc(100);  //û���ͷ��ڴ沢��û�и�ֵNULL
//	                         //�ڴ�й¶
//}
//void Test(void)
//{
//	char* str = NULL;  
//	GetMemory(str);   //����������β� ������&str�ĵ�ַ
//	strcpy(str,"hello world");
//	printf(str);	//str��NULL �����û����
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}

//��ȷ������

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char * str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}


//����һ�ֽⷨ
//char* GetMemory()
//{
//   char	*p = (char*)malloc(100);
//   return p;
//}
//
//void Test(void)
//{
//	char * str = NULL;
//	str = Getmemory();
//	strcpy(str,"hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}

//int main()
//{
//	printf("hello world\n");
//	char *p = "hello world\n";
//	printf(p);
//	printf("%s",p);
//	
//	return 0;
//}

//���³�����ʲô����
//int *f1(void)
//{
//	int x = 10;
//	return (&x); // x������֮��  Ұָ��  ��̬���ٵ��ڴ�ᱻ���� ��̬�ڴ�Ļ� Ҫ�ֶ��ͷ�
//}
//
//int *f2(void)
//{
//	int * ptr;  //ptr ������ʼ��û�и�ֵNULL
//	*ptr = 10;
//	return prt;  //Ұָ��
//}

//char * GetMemory(void)
//{
//	char p[] = "hello world"; //�ֲ����� ���Ƿ�ջ���ϵ� ����ջ���ռ��ַ������һջ��������ʱ��
//	return p ; //���� �ֲ�����  ��ȥ�ͻ����� ������malloc ���� char* p(�����ַ��� ֻ�ɶ�)
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(); //��Ϊp�������� ���������Ұָ��
//	printf(str);
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}

//int* test()
//{
//	
//	int a = 10;
//	return &a;
//	
//} 
//
//int main()
//{
//	int*p = test();
//	printf("hehe\n");
//}


//malloc �ڶ��������ڴ棬�ֲ�������ջ�������ڴ档
//�� C �����У��ڴ��Ϊ�������ͣ����ڴ��ջ�ڴ档���ڴ����ɳ���Ա�ֶ�����ģ�
//����ͨ�� malloc �Ⱥ�����������ͷš����ڴ�Ĵ�С����������ʱ��̬���������ҿ��Է��������С���ڴ�顣���ǣ����ڶ��ڴ����ɳ���Ա�ֶ�����ģ���������ͷ��ڴ�����ͷ��˴�����ڴ棬�Ϳ��ܵ����ڴ�й©�������Ч���ڴ档
//�෴��ջ�ڴ����ɱ������Զ�����ģ�ÿ�ν���һ������ʱ��
//������ջ�Ϸ���һЩ�ڴ�����žֲ�������������ʱ���ݡ��������˳�ʱ��
//��Щ�ڴ�ᱻ�Զ��ͷš�ջ�ڴ�Ĵ�С���ޣ�ͨ���Ǽ����ֽڣ����Ҳ��ܶ�̬������
//���ǣ�����ջ�ڴ����ɱ������Զ�����ģ����Բ����׳����ڴ�й©�������Ч���ڴ�����⡣
//��֮���������Ҫ��̬�����ڴ沢�Ҳ�ȷ����ʱ�ͷ�����Ӧ��ʹ�� malloc �Ⱥ����������ڴ档
//�����ֻ��Ҫ�ں����ڲ�ʹ��һЩ��ʱ���ݣ�Ӧ��ʹ�þֲ��������������Ա����ڴ�й©�ͷ�����Ч���ڴ档
//



//void GetMemory(char**p ,int num)
//{
//	*p = (char*)malloc(num);
//	
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str,"hello");
//	printf(str);
//	//û���ͷ��ڴ�
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello");
//	free(str);
//	//������� str = NULL;�Ͳ���ִ������������
//	if(str != NULL) //Ұָ����
//	{
//		strcpy(str,"world");
//		printf(str);
//	} 
//	
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}


//�����Լ������С������֮��

//��շת����� �����Լ��
//���ù�ʽ�������С������
//�������ĳ˻������������������Լ������С�������Ļ�
//������С�������͵��� �������ĳ˻��������Լ��
//���� 10 20
//      30
// 12  18 ���Լ����6 ��С��������36 �;���42
//int main()
//{
//    
//    long a = 0;
//    long b = 0;
//    while(~scanf("%ld%ld", &a, &b))
//    {
//    	long m = a;
//    	long n = b;
//    	long r = 0;
//	
//		while(r=m%n)
//		{
//			m = n;
//			n = r;
//		}
//		printf("%ld\n",a*b/n+n);
//		
//	}
//
//
//
//	return 0;
//}


//���"����"����ͼ��

//����һ������ �������� Ҳ����������*������

// ����  4
//* * * *
//*     *
//*     * 
//* * * * 
// 5
//* * * * *
//*       *
//*       *
//*       *
//* * * * *

//int main()
//{
//	int num  = 0;
//	while(~(scanf("%d",&num)))
//	{
//	   int i = 0;
//	   int j = 0;
//	   for(i = 0; i<num;i++)
//	   {
//
//	   	  for(j=0;j<num;j++)
//		  {	 	
//			 if( i==0 || i == num-1 || j==0|| j==num-1)
//			 	printf("* ");
//			 else
//			 	printf("  ");
//		  }
//		  printf("\n");
//
//	   }
//	}
//	
//	
//	
//	return 0;
//}

//��������
//C99�� �ṹ���е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա

//���磺

//typedef struct st_type
//{
//     int i ;
//     int a[0];
//}type_a;

//��Щ�������ᱨ���޷�������Ըĳ�:
// typedef struct st_type
// {
//   int i;
//	 int a[];  //���������Ա
// }type_a;

//�ṹ�е����������Աǰ���������һ��������Ա
//sizeof���ص����ֽṹ��С����������������ڴ�
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬����
//���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

//struct s
//{
//	int n;
//	int arr[]; //���������Ա
//};
//int main()
//{
////	int sz = sizeof(struct s);  //������ֽ���4 ˵����������������
////	printf("%d\n",sz);
//	
//	//���������ʹ��
    //��malloc��Ϊ�˰ѽṹ��һ����ڶ��� 
//    struct s *ps  = (struct s *)malloc(sizeof(struct s)+40);
//	if( ps == NULL)
//	{
//		return 1;
//	}
//	
//	ps->n = 100;
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	
//	for(i = 0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//������ò����������ټ��ڴ� �������������
//	
//	struct s *ptr = (struct s*)realloc(ps,sizeof(struct s)+80);
//	
//	if(ptr!=NULL)
//	{
//	   ps = ptr;
//	   ptr = NULL;
//	}
//	
//	
//	free(ps);
//	ps = NULL;
//	
//	return 0;
//}

//һ��Ķ�̬�ڴ濪�ٷ��� �����arr������������  
//���������ڴ涼�������� �ڴ���Ƭ�Ŀ����Ծͺܵ�

//struct s
//{
//     int n;
//     int * arr;
//	
//};
//
//int main()
//{
//	struct s *ps = (struct s*)malloc(sizeof(struct s));
//	if( ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if(ps->arr == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	
//	int* ptr = (int*)realloc(ps->arr,80);
//	if(ptr == NULL)
//	{
//		return 1;
//	}
//	
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	
//	return 0;
//}

//C�����ļ�����

//1.Ϊʲôʹ���ļ�

//������Ϣ��¼������ֻ�������Լ�ѡ��ɾ�����ݵ�ʱ��
//���ݲŲ������ڣ�һ�����ݳ־û��ķ����У������ݴ���ڴ����ļ���
//��ŵ����ݿ�ȷ�ʽ��
//ʹ���ļ����ǿ��Խ�����ֱ�Ӵ���ڵ��Ե�Ӳ����
//���������ݵĳ־û�

//2.ʲô���ļ�

//�����ϵ��ļ����ļ���

//�����ڳ�������У�����һ��̸���ļ�������: �����ļ��������ļ�
//(���ļ����ܵĽǶ��������)

//2.1�����ļ�
//����Դ�����ļ�(.c),Ŀ���ļ�(.obj),��ִ�г���(.exe)

//2.2�����ļ�
//�ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������
//������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ�
//��ʵ��ʱ�����ǻ����Ϣ����������ϣ�����Ҫ��ʱ��
//�ٴӴ����ϰ����ݶ�ȡ���ڴ���ʹ�ã����ﴦ��ľ��Ǵ���
//�ϵ��ļ�

//2.3�ļ���
//һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á�
//�ļ�������3����: �ļ�·��+�ļ�������+�ļ���׺
//����: C:\code\test.txt
//Ϊ�˷���������ļ���ʶ������Ϊ�ļ�����

//3.�ļ��Ĵ򿪺͹ر�
//3.1�ļ�ָ��
//�����ļ�ϵͳ�У��ؼ��ĸ�����"�ļ�����ָ��"�����"�ļ�ָ��"��
//ÿ�������õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ����
//��������ļ��������Ϣ(���ļ������֣��ļ�״̬���ļ���ǰ��λ�õ�)��
//��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������
//ϵͳ�����ģ�ȡ��FILE

//�����ļ�����

//���ļ�
//��/д-�����ļ�
//�ر��ļ�

//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����
//һ��FILE�ṹ�ı�������������е���Ϣ��ʹ���߲��ع�ϵϸ��
//һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���
//����ʹ���������ӷ���

//����pf��һ��ָ��FILE�������ݵ�ָ�����������ʹpfָ��
//ĳ���ļ����ļ���Ϣ��(��һ���ṹ�����).ͨ�����ļ���Ϣ��
//�е���Ϣ�ܹ����ʸ��ļ���Ҳ����˵��ͨ���ļ�ָ������ܹ�
//�ҵ������������ļ���

//3.2�ļ��Ĵ򿪺͹ر�
//�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE *
//��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��

//ANSIC�涨����fopen���������ļ���fclose���ر��ļ���

//���ļ�

// FILE * fopen(const char * filename,const char* mode);

//�ر��ļ�  ������ر��ļ����ܻᶪʧ�ļ�

//int fclose(FILE* stream);

//int main()
//{
//	FILE * pf = fopen("C:\\Users\\lishuming\\Desktop\\test.txt","r");
//	if( pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//...
//	//���ļ�      
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	
//	
//}

//д�����ַ�
//int main()
//{
//	FILE * pf = fopen("test.txt","w");
//	if( pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//д�ļ�
////	fputc('a',pf);  //fputc д�����ַ�
//	
//	char i = 0;
//	for(i = 'a';i<='z';i++)
//	{
//		fputc(i,pf);
//	}
//	//�ر��ļ�
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//�������ַ�

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//���ļ�
////	int ch = fgetc(pf);
////	printf("%c\n",ch);
////	 ch = fgetc(pf);   //������ȡ�����ȡ����һ���ֽ�
////	printf("%c\n",ch);	
////	 ch = fgetc(pf);
////	printf("%c\n",ch);
////	 ch = fgetc(pf);
////	printf("%c\n",ch);	
//	int ch = 0;
//	while((ch = fgetc(pf))!= EOF)
//	{
//		printf("%c ",ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf=NULL;
//	
//	return 0;	
//}

//дһ������
//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	
//	//дһ������
//	fputs("hello bit\n",pf);
//	fputs("hello bit\n",pf);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//��һ������
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		//printf("%s\n",strerror(errno));
//		perror("fopen"); //��һ������������͵�д�� �����
//		return 1;
//	}
//	char arr[20];
//	fgets(arr,5,pf);//����������������ֻ��4�� ����һ���ǻ��з�
//	
//	printf("%s\n",arr);
//	
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};


//int main()
//{  
//	struct S s = {"zhangsan",25,50.5f}; //��fȷ�� float���� ����Ĭ��double����
//
//	FILE *pf = fopen("test.txt","w");
//	if(pf == NULL)
// 	{
//	 	perror("fopen");
//		return 1; 	
//	}
//
//	fprintf(pf,"%s %d %f",s.arr,s.age,s.scorce);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//	
//	
//}

//int main()
//{  
//	struct S s = {0}; //��fȷ�� float���� ����Ĭ��double����
//
//	FILE *pf = fopen("test.txt","r");
//	if(pf == NULL)
// 	{
//	 	perror("fopen");
//		return 1; 	
//	}
//
//	fscanf(pf,"%s %d %f",s.arr,&(s.age),&(s.scorce));
//	//printf("%s %d %f",s.arr,s.age,s.scorce);
//	fprintf(stdout,"%s %d %f",s.arr,s.age,s.scorce);  //�����
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//	
//	
//}

//
//��
//FILE * 
//
//printf
//scanf
//
//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
//FILE * stdin - ��׼������(����)
//FILE * stdout - ��׼�����(��Ļ)
//FILE * stderr - ��׼������(��Ļ)


//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};

//int main()
//{
//	struct S s = {"zhangsan",25,50.5f};
//	//�Զ����Ƶ���ʽд���ļ���
//	FILE * pf = fopen("test.txt","wb");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	struct S s = {0};
//	//�Զ����Ƶ���ʽ���ļ�
//	FILE * pf = fopen("test.txt","rb");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s,sizeof(struct S),1,pf);
//	printf("%s %d %f",s.arr,s.age,s.scorce);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

/*
scanf ����Ա�׼����ĸ�ʽ���������
printf ����Ա�׼����ĸ�ʽ��������

fscanf ����������������ĸ�ʽ���������
fprintf ���������������ĸ�ʽ��������

sscanf �Ǵ�һ���ַ�����ת����һ����ʽ��������
sprintf  �ǰ�һ����ʽ��������ת�����ַ���

*/

//struct S 
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {"zhangsan",20,50.5f};
//	struct S tmp = {0};
//	char buf[100] = {0};
//	
//	sprintf(buf,"%s %d %f",s.arr,s.age,s.score);  //��s�еĸ�ʽ������ת�����ַ���
//	printf("%s\n",buf);
//	
//    sscanf(buf,"%s %d %f",tmp.arr,&(tmp.age),&(tmp.score));//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
//	printf("%s %d %f\n",tmp.arr,tmp.age,tmp.score);
//}

//���ַ�
//�ļ��������д
//fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�루�ļ����ݵĹ�꣩��
//ftell
//�����ļ�ָ���������ʼλ�õ�ƫ����
//rewind
//���ļ�ָ���λ�ûص�?������ʼλ��

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	//���ļ�
//	//��λ�ļ�ָ��
//	
//	fseek(pf,2,SEEK_SET);  //seek_set �趨λ��
//	
//	int ch = fgetc(pf);
//	printf("%c\n",ch); //����c ��2 ���Զ�+1 ������3 
//	printf("%d\n",ftell(pf));
////	fseek(pf,2,SEEK_CUR);  //seek_cur ִ������λ��  seek_set��
////	
////	 ch = fgetc(pf);
////	printf("%c\n",ch);
//
//	fseek(pf,-1,SEEK_END); //ָ������λ��
//	 ch = fgetc(pf);  	
//	printf("%c\n",ch);	
//    printf("%d\n",ftell(pf));
//
//	rewind(pf);  //�ص���ʼλ��
//	 ch = fgetc(pf);  	
//	printf("%c\n",ch);	
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//	
//}
/*

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

ptr��ָ��Ҫд�����ݵ��ڴ������ָ�롣
size��ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ����
nmemb��Ҫд���Ԫ�ص�������
stream��ָ���Ѿ��򿪵��ļ�����ָ�롣


*/
//int main()
//{
//	int a = 10000;
//	
//	FILE * pf = fopen("test.txt","wb");
//	fwrite(&a,4,1,pf);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//	
//	
//}






/*

�ļ���ȡ�������ж�
������ʹ�õ� feof
�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�����ж��ļ��Ƿ������
feof �������ǣ����ļ���ȡ������ʱ���ж��Ƕ�ȡ������ԭ���Ƿ��ǣ������ļ�β������
1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF �� fgetc �������� NULL �� fgets ��
���磺
fgetc �ж��Ƿ�Ϊ EOF .
fgets �жϷ���ֵ�Ƿ�Ϊ NULL .

2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
���磺
fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����



*/


//VS2022 WIN11��������
//int main()
//{
// FILE*pf = fopen("test.txt", "w");
// fputs("abcdef", pf);//�Ƚ�����������������
// printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
// Sleep(10000);
// printf("ˢ�»�����\n");
// fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
// //ע��fflush ��?�汾��VS�ϲ���ʹ?��
// printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
// Sleep(10000);
// fclose(pf);
// //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
// pf = NULL;
// return 0;
//}




/*
��Ϊ�л������Ĵ��ڣ�C�����ڲ����ļ���ʱ����Ҫ��ˢ�»������������ļ�����������ʱ��ر��ļ�
������������ܵ��¶�д�ļ������⡣

*/

/*
__FILE__        //���б����Դ�ļ�
__LINE__        //�ļ���ǰ�ķ���
__DATE__        //�ļ������������
__TIME__        //�ļ��������ʱ��
__STDC__        //�����������ѭANSI C,��ֵΪ1,����δ����
*/


//Ԥ����

//int main()
//{
//	 int i = 0;
//	 FILE * pf = fopen("log.txt","w");
//	 if(pf == NULL)
//	 {
//	 	perror("fopen");
//	 	return EXIT_FAILURE;
//	 }
//	 for(i=0;i<10;i++)
//	 {
//	 	fprintf(pf,"File:%s Line=%d,date=%s,time=%s,i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i); //�������ڵ�ǰmain.c���� ��6537�� Ŀǰ�ı�������2024.11.12 ����ʱ��pm2.30
//	 	
//	 }
//	fclose(pf);
//	pf = NULL;
//	return 0;
//	
//}

//int main()
//{
//	
//	printf("%d\n",__STDC__);
//	return 0;
//	
//	
//}

// #define ���ư�����һ���涨�����аѲ����滻���ı��У�����ʵ��ͨ����Ϊ������

//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")
//int main()
//{
//	int m = MAX;
//	printf("%d\n",MAX);
//	printf("%s\n",STR);
//	print;
//	return 0;
//}
//
//#define CASE break;case
//
//int main()
//{
//	switch()
//	{
//		case 1:
//		CASE 2: //������ break;case
//		CASE 3:
//		CASE 4:
//		break;
//		
//	}
//	return 0;
//	
//	
//}


/* ����������� ���滻һ�еĻس�   ������ ���治���������� �ո�Ҳ���� */
/*#define DEBUG_PRINT printf ("File:%s Line=%d,date=%s,time=%s,i=%d\n",\
__FILE__,\
__LINE__,\
__DATE__,\
__TIME__)*/

/*
#define name(parament-list) stuff
���е�parament - list ��һ���ɶ��Ÿ����ķ��ű�,���ǿ��ܳ�����stuff��

ע��
�����б�������ű�����name����
�������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ����
*/

          
//�����ֲ��� ��Ҫ��������

//#define SQUARE(X) ((X)*(X))
//
//
//
//int main()
//{
////	int r = SQUARE(5);
//    int r = SQUARE(5+1);	//����� #define SQUARE(X) X*X ���������5+1*5+1 == 11������36
//	printf("%d\n",r);
////	printf("222");
//	return 0;
//}


//#define DOUBLE(X)  ((X)+(X))

//int main()
//{
////	int r = DOUBLE(3*2);   //(3*2)+(3*2)
//	
//	/*��������������� ((X)+(X))*/
//	int  r = 10*DOUBLE(3); // 10*3+3 = 33
//	
//	printf("%d\n",r);
//	
//	return 0;
//	
//}

//�������#define�����п��Գ�������#define����ķ��š����Ƕ��ں꣬���ܳ��ֵݹ顣
//��Ԥ��������#define����ķ��ŵ�ʱ���ַ������������ݲ���������

//#define M 100
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	// "M" //�ַ�������������
//	//"DOUBLE(3)";
////	DOUBLE(100+2);
////	((100+2)+(100+2));
////	return 0;
//}

//��ΰѲ������뵽�ַ�����

//#define PRINT(N) printf("the value of "#N" is %d\n",N)

//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N)
//int main()
//{
////	printf("hello world\n");
////	printf("hello ""world\n");
//	
//	int a = 10;
//	PRINT(a,"%d");
//	//printf("the value of""a"" is %d\n",a)  //#N���԰Ѳ���ת���ɶ�Ӧ���ַ���
////	printf("the value of a is %d\n",a);
//	
//	float f = 3.14f;
//	PRINT(f,"%lf");
//	
////	int b = 20;
////	PRINT(b);
//	//printf("the value of""b"" is %d\n",b)  //#N���԰Ѳ���ת���ɶ�Ӧ���ַ���
//	//printf("the value of b is %d\n",b);
//	
//	return 0;
//}

#define MAX(x,y) ((x)>(y)?(x):(y))
//������ȫ�滻
//�������õĺ����
//��������ں�Ķ����г��ֳ���һ�ε�ʱ������������и����ã�
//��ô����ʹ��������ʱ��Ϳ��ܳ���Σ�գ����²���Ԥ��ĺ����
//�����þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч����

//����
// x+1 ����������
// x++ ���и�����

//int main()
//{
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++,b++);
////	int m = ((a++) > (b++) ? (a++) : (b++));
//            //6     // 5     //7    //5  
//    printf("m=%d ",m);
//    printf("a=%d b=%d\n",a,b);
//    
//    return 0;
//	
//	return 0;
//}

//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int Max(int x ,int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	
//	return 0;
//	
//}

//��ͺ����Ա�
//Ϊʲô���ú���������������

//ԭ���ж���
//1.���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ
//���Ժ�Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ�

//2.��Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������͡�
//���Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á���֮�����������������͡�
//�����͡������͵ȿ�������>���Ƚϵ����͡�
//���������޹صġ�

//���ȱ�㣺��Ȼ�ͺ�����Ⱥ�Ҳ�����Ƶĵط���

//1.ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽������
//���Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//2.����û�����Եġ�
//3.�����������޹أ�Ҳ�Ͳ����Ͻ���
//4.����ܻ������������ȼ������⣬���³������׳���

//����ʱ����������������������顣���磺��Ĳ������Գ�������
//���Ǻ���������

//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//
//int main()
//{
//	//malloc(40);
//	//malloc(10,int);
//	
//	int* p = MALLOC(10,int);
//	
//	 
//	
//	return 0;
//}

//�����涨
//�Ѻ���ȫ����д
//��������Ҫȫ����д


// #undef
// ����ָ�������Ƴ�һ���궨��

//#define M 100
//
//int main()
//{
//	
//	printf("%d",M);
//#undef M
//    printf("%d",M);	
//	
//	return 0;
//}

//��������
//#define _DEBUG_

//int main()
//{
//  int i = 0;
//  int arr[10] = {0};
//  for(i=0; i<10; i++)
//  {
//  	arr[i] = i;
//  	#ifdef _DEBUG_
//  	printf("%d\n",arr[i]);
//  	#endif
//  }	
//	return 0;
//}
/*
#if �������ʽ
 //...
#endif
//�������ʽ��Ԥ��������ֵ��
�磺
#define __DEBUG__ 1
#if __DEBUG__
 //..
#endif
2.�����?����������
#if �������ʽ
 //...
#elif �������ʽ
 //...
#else
 //...
#endif
3.�ж��Ƿ񱻶���
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol

*/

/*
#ifndef __TEST_H__  //���û�ж��� ��ô�Ͷ��� ������������������ļ� �Ͳ����ٶ�����
#define __TEST_H__  //��ֹͷ�ļ����ظ���ΰ���

int Add(int x,int y);

#endif

����һ��д��

#pragma once

int Add(int x,int y);



*/
/*
<>��""�������ǲ��ҵĲ��Բ�ͬ
#include<stdio.h>
<>���Ҳ���:ֱ��ȥ��Ŀ¼�²���

#include "test.h"

""���Ҳ��ԣ�
1.��ȥ�������ڵ�·���²���
2.��������Ҳ�������ȥ��Ŀ¼�²���

*/
/*
offsetof�������ڽṹ������У�
���ڼ���ṹ����ĳ����Ա�ĵ�ַ����ڸýṹ����ʼ��ַ��ƫ������

�� offsetof(type, member) �᷵��һ������Ϊ size_t �����ͳ�����
�ó�����һ���ṹ���Ա����ڽṹ�忪ͷ���ֽ�ƫ������
��Ա���� member�����ģ��ṹ����������� type �и�����

*/
struct S
{
	char c1;
	int i;
	char c2;
	
};

#define OFFSETOF(type,m_name)  (size_t)&(((type*)0)->m_name)

int main()
{
	
	struct S s = {0};

	printf("%d\n",OFFSETOF(struct S,c1));
	printf("%d\n",OFFSETOF(struct S,i));
	printf("%d\n",OFFSETOF(struct S,c2));

	
	printf("%d\n",offsetof(struct S,c1));
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,c2));
	
	
	return 0;
}




//��60���㷨

//// �������ڽṹ��
//struct Date 
//{
//    int year;
//    int month;
//    int day;
//};
//
//// �ж��Ƿ�Ϊ����
//bool isLeapYear(int year) 
//{
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//// ��ȡһ���µ�����
//int getDaysInMonth(int year, int month)
//{
//    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    return month == 2 && isLeapYear(year) ? 29 : daysInMonth[month - 1];
//}
//
//// �������������
//void addDaysToDate(struct Date *date, int daysToAdd)
// {
//    int totalDays = daysToAdd;
//    while (totalDays > 0) 
//	{
//        int daysInMonth = getDaysInMonth(date->year, date->month);
//        
//        if (date->day + totalDays <= daysInMonth)
//		 {
//            date->day += totalDays;
//            break;
//        } 
//		else
//		 {
//            totalDays -= (daysInMonth - date->day + 1);// 30-23+1=8  all=60-8=52  m=10 31 52-31=21
//            date->day = 1;
//            date->month++;
//            if (date->month > 12) 
//			{
//                date->month = 1;
//                date->year++;
//            }
//        }
//    }
//}
//
//int main() {
//    struct Date startDate = {2024, 9, 23};
//    int daysToAdd = 60;
//
//    addDaysToDate(&startDate, daysToAdd);
//    
//    printf("New date: %04d-%02d-%02d\n", startDate.year, startDate.month, startDate.day);
//    
//    return 0;
//}


//���������

//����������ȷʵ���׻�����������ϸ����һ�����ǵ�����
//
//1. `int (*a[10])(int);`
//   ���������ʾ`a`��һ�����飬����ĳ���Ϊ10�������е�ÿ��Ԫ�ض���һ��ָ�룬��Щָ��ָ��ĺ�������һ����������������һ�����������ԣ�`a`ֱ�Ӿ���һ������10������ָ������顣
//

//����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ�ض���һ������ָ�룬�ú����ķ���ֵ��int��������int*


//2. `int (*(*a)[10])(int);`
//   ����������Ӹ��ӡ����`a`������һ��ָ�룬���ָ��ָ�����һ�����飨����Ϊ10�������Ǹ������ÿ��Ԫ������һ��ָ�룬��Щ���յ�ָ��ָ��Ĳ��ǽ���һ���������������������ĺ�����Ҳ����˵��`a`����ָ�����һ������ĵ�ַ�������ָ���������ǰ�������ָ��ġ�
//
//�ܽ᣺
//- �ڵ�һ�������У�`a`ֱ����һ�����飬�����Ԫ���Ǻ���ָ�롣
//- �ڵڶ��������У�`a`��һ��ָ�룬��ָ�����һ�����飬���Ǹ���ָ��������Ԫ�ز��Ǻ���ָ�롣
//
//�����������Ĺؼ���������`a`����Ĳ�Σ���һ����ֱ�ӵ����飬�ڶ�����ͨ��ָ���ӷ��ʵ����顣
//
//
//
//


//struct A
//{
//
// char c1;
//
//int i;
//
// char c2;
// 
//};
//struct B
//{
// char c1;
//
//char i;
//
//int c2;	
//	
//	
//};
//struct STU
//{
//int a;
//char b;
//int d;
//struct A h;
//char c;
//};
//struct STU1
//{
//int a;
//char b;
//int d;
//struct B h;
//char c;
//};
//
//
//int main()
//{
//	
//	struct STU s[]={1};
//	struct STU1 s1[]={1};
//	int sz = sizeof(s[0]);   //struct A �ܹ�12���ֽ� 4 1 4 12 1    25����4�ı��� 28
//	int sz1 = sizeof(s1[0]); //struct B �ܹ�8���ֽ�  4 1 4 8 1     21����4�ı��� 24 
//	printf("%d\n%d",sz,sz1);
//	
//	
//	
//	return 0;
//}

 
//int main()
//{
//	int a=2;
//	int b=3;
//	
//	//������������λ�� ��򽻻�
//    a=a^b;
//    b=a^b;
//    a=a^b;
//	
//	return 0;
//	
//} 
 
 

 

 
//#define MAX_NUM 10
 
//typedef	struct person
//   {
//   	char name[20];
//   }p2;
//   
//p2 pp[MAX_NUM];

//int main()
//{
////	int data;
////	
////	int a=0,b=0;
//	int count=0;
//    int num=9;
//   
//	srand((unsigned int)time(NULL));
//
//    strcpy(pp[0].name,"������");  //Ŀǰ���˽�
//    strcpy(pp[1].name,"���");  //Ŀǰ���˽�
//    strcpy(pp[2].name,"�Ÿ�");  //Ŀǰ���˽�
//    strcpy(pp[3].name,"��֪��");  //Ŀǰ���˽�
//    strcpy(pp[4].name,"����");  //Ŀǰ���˽�
//    strcpy(pp[5].name,"������");  //Ŀǰ���˽�
//    strcpy(pp[6].name,"������");  //Ŀǰ���˽�
//    strcpy(pp[7].name,"����");  //Ŀǰ���˽�
//    strcpy(pp[8].name,"������");  //Ŀǰ���˽�
//    strcpy(pp[9].name,"�Ϻ�Ȼ");  //Ŀǰ���˽�
////	for(int i=0;i<5;i++)
////	{
////		scanf("%s",pp[i].name);
////		//TODO
////	}
//		
////	data = rand()%10;
//	
//    printf("���Ƚ�\n");
//	for(int i=0;i<3;i++)
//	{
//		count = rand()%num; 
//		
//		printf("%s\n",pp[count].name);
//		strcpy(pp[count].name,"");
//		for(int i=count;i<9;i++)
//		{
//			pp[i]=pp[i+1];
//		}
//		num=num-1;
//		//TODO
//	}
//	printf("\n���Ƚ�\n");
//		for(int i=0;i<2;i++)
//		{
//			count = rand()%num; 
//			
//			printf("%s\n",pp[count].name);
//			strcpy(pp[count].name,"");
//			for(int i=count;i<9;i++)
//			{
//				pp[i]=pp[i+1];
//			}
//			num=num-1;
//			//TODO
//		}
//		printf("\nһ�Ƚ�\n");
//		for(int i=0;i<1;i++)
//		{
//		  count = rand()%num; 
//		
//	  	  printf("%s\n",pp[count].name);
//	      strcpy(pp[count].name,"");
//	   	  for(int i=count;i<9;i++)
//	     	{
//			pp[i]=pp[i+1];
//	    	}
//		num=num-1;
//		//TODO
//}
//	
//    
////	printf("%f\n",count/1000000.0);
//	return 0;
//}

// 0 1 2 -1 14��
//  a   b 
//  if(rand ==0) a+0  if(a==7)
//  if(rand ==1) a+1
//  if(rand ==2) a+2
//  if(rand ==-1) b-1
//
//
//




//#include "stm32f4xx_hal.h"
//
//// ����RTCʱ�Ӿ��
//RTC_HandleTypeDef hrtc;
//
//// �������ڱ������ڵı���
//RTC_DateTypeDef currentDate;
//RTC_DateTypeDef previousDate;
//
//// �ж�һ��ʱ���ȥ��
//uint8_t isOneDayPassed(void)
//{
//    // ��ȡ��ǰ����
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // ��ȡ��һ�ε�����
//    HAL_RTC_GetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//
//    // ������ڷ����仯����˵��һ��ʱ���ȥ��
//    if (currentDate.Date != previousDate.Date ||
//        currentDate.Month != previousDate.Month ||
//        currentDate.Year != previousDate.Year)
//    {
//        previousDate = currentDate; // ������һ�ε�����Ϊ��ǰ����
//        return 1; // ����һ��ʱ���ȥ��
//    }
//
//    return 0; // ����һ��ʱ��û�й�ȥ
//}
//
//// �ж�һ����ʱ���ȥ��
//uint8_t isOneMonthPassed(void)
//{
//    // ��ȡ��ǰ����
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // ��ȡ��һ�ε�����
//    HAL_RTC_GetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//
//    // ����·ݷ����仯����˵��һ����ʱ���ȥ��
//    if (currentDate.Month != previousDate.Month ||
//        currentDate.Year != previousDate.Year)
//    {
//        previousDate = currentDate; // ������һ�ε�����Ϊ��ǰ����
//        return 1; // ����һ����ʱ���ȥ��
//    }
//
//    return 0; // ����һ����ʱ��û�й�ȥ
//}
//
//// �ڶϵ�����±���RTC���ڵ����ݼĴ���
//void saveRtcDateToBackupReg(void)
//{
//    // ��ȡ��ǰ����
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // д�����ڵ�RTC���ݼĴ���
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR1, currentDate.Date);
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR2, currentDate.Month);
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR3, currentDate.Year);
//}
//
//// ���ϵ�����´ӱ��ݼĴ����ָ�RTC����
//void restoreRtcDateFromBackupReg(void)
//{
//    // ��ȡ���ڴ�RTC���ݼĴ���
//    previousDate.Date = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR1);
//    previousDate.Month = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR2);
//    previousDate.Year = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR3);
//
//    // ����RTC����
//    HAL_RTC_SetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//}
//ʹ�÷�����
//
//���ȣ�����Ҫ��ȷ���ò���ʼ��STM32��RTCʱ�ӡ�
//�ڶϵ�֮ǰ������saveRtcDateToBackupReg()������RTC���ڱ��浽���ݼĴ����С�
//���ϵ粢��ʼ��RTCʱ��֮�󣬵���restoreRtcDateFromBackupReg()�����ӱ��ݼĴ����лָ�RTC���ڡ�
//���ʵ���λ�õ���isOneDayPassed()���������ж�һ��ʱ���Ƿ��Ѿ���ȥ��
//���ʵ���λ�õ���isOneMonthPassed()���������ж�һ����ʱ���Ƿ��Ѿ���ȥ��
//#include "stm32f4xx_hal.h"
//RTC_HandleTypeDef hrtc;
//RTC_TimeTypeDef previous_time;
//RTC_DateTypeDef previous_date;
//// �ڳ���ĳ�ʼ�����֣����ô˺�������ʼ��RTCģ���ʱ�����
//void Initialize_RTC(void) {
//    // ... RTC ��ʼ������ ...
//    // ����Ĵ������RTC�Ѿ��ڱ�ĵط�����ȷ����
//    HAL_RTC_GetTime(&hrtc, &previous_time, RTC_FORMAT_BIN);
//    HAL_RTC_GetDate(&hrtc, &previous_date, RTC_FORMAT_BIN);
//}
//// �ж�һ��ʱ���Ƿ��ȥ��
//void CheckDayPassed(void) {
//    RTC_TimeTypeDef current_time;
//    RTC_DateTypeDef current_date;
//    // ��ȡ��ǰʱ�������
//    HAL_RTC_GetTime(&hrtc, &current_time, RTC_FORMAT_BIN);
//    HAL_RTC_GetDate(&hrtc, &current_date, RTC_FORMAT_BIN);
//    // �ж��Ƿ����µ�һ��
//    if ((current_date.Date != previous_date.Date) ||
//        (current_date.Month != previous_date.Month) ||
//        (current_date.Year != previous_date.Year)) {
//        // һ���ȥ��
//        // ִ����Ҫ�Ĳ���
//        // ����previous_time��previous_date
//        previous_time = current_time;
//        previous_date = current_date;
//    }
//}
//// �ж�һ����ʱ���Ƿ��ȥ��
//void CheckMonthPassed(void) {
//    RTC_DateTypeDef current_date;
//    // ��ȡ��ǰ���ڣ�ʱ�䲻��Ҫ��
//    HAL_RTC_GetDate(&hrtc, &current_date, RTC_FORMAT_BIN);
//    // �ж��Ƿ����µ�һ����
//    if ((current_date.Month != previous_date.Month) ||
//        (current_date.Year != previous_date.Year)) {
//        // һ���¹�ȥ��
//        // ִ����Ҫ�Ĳ���
//        // ����previous_date��ʱ��ͬ�����£�
//        previous_date = current_date;
//    }
//}
