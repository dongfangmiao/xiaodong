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
//   int* c=&b;  //指针变量（地址）
// *c=2199;  //引用操作符 指向地址的对象

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
//	case 4: printf("金风玉露一相识，却胜人间无数"); break;
//	case 5:
//  	case 6: printf("又岂在朝朝暮暮");break;
//
//  	default: printf("俏佳人");break;	//TODO
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
//   printf("请输入密码:");
//
//   gets(password);



//   int ch = 0;
////   while((ch = getchar())!='\n')
////   {
////   	;
////
////   }

//   printf("请确认密码(Y/N):");
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

//计算阶乘
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
//计算元素数量
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
////   	int mid =(left+right)/2;  数据可能会溢出
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
//   	printf("找不到");
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
//		printf("请输入密码:");
//		scanf("%s",password);
//		if(strcmp(password,"dongxing")==0)  //比较两个字符串不能用 == 得用库函数strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if(i==3)
//	{printf("登录失败");
//	}

//猜大小 rand随机  srand生成随机


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
//{	printf("请猜数字\n");
//	scanf("%d",&guest);
//
//	if(guest<ret) {printf("猜小了\n");}
//
//	else if(guest>ret) printf("猜大了\n");
//
//	else {printf("猜对了\n" );break;}
//
//
//}
////	if(ret>=0&&ret<=327)
////	{
//////		printf("%d\n",ret);
////	printf("一等奖\n");		//TODO
////	}
////	else if(ret>=328&&ret<=3603)
////	{
////		printf("二等奖\n");
////		//TODO
////	}
////	else if(ret>=3604&&ret<=10753)
////	{
////		printf("三等奖\n");
////		//TODO
////	}
////	else
////	{
////		printf("谢谢惠顾\n");
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
//	  printf("请选择");
//	  scanf("%d",&input);
//	  switch(input)
//	  {
//	  	case 1 :
//	  		game();
//	  		break;
//	  	case 0 :
//	  		printf("退出游戏");
//	  		break;
//	  	default :
//	  		printf("选择错误 重新选择\n");
//	  		break;
//
//	  }
//	}while(input);
//
//    return 0;
//
// }

//关机功能 goto
//int main()
//{
//
//	char input[20]={0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("你的电脑将在60s内关机，输入 我是猪 ，即可取消\n");
//	scanf("%s",input);
//
//	if(strcmp(input,"我是猪")==0)
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


//关机功能 while
//int main()
//{
//
//	char input[20]={0};
//	system("shutdown -s -t 60");
//
//while(1)
//{
//
//	printf("你的电脑将在60s内关机，输入 我是猪 ，即可取消\n");
//	scanf("%s",input);
//
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//}
//	return 0;
//
//}



//关机功能

//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");
//	int count = 60;
//while(1)
//{	//TODO
//
//	if(count--)
//{	printf("你的电脑将在%ds内关机，输入 我是猪 ，即可取消\n",count);
//Sleep(1000);
//system("cls");
//}
//	if(kbhit())
//	{
//		scanf("%s",input);
//			if(strcmp(input,"我是猪")==0)
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

//memset函数的作用就是在替换指定位置的值
//strcpy 复制内容
//int main()
//{
//	char arr1[]={0};
//	char arr2[]={"梧桐深院锁春秋"};
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


//比较大小
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

//传值调用 对形参的修改不会影响实参
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
//	printf("交换前 %d %d",x,y);
//	swap(x,y);
//	printf("交换后 %d %d",x,y);
//
//	return 0;
//
//}

//传址调用 可以直接操作函数外部调用
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
//	printf("交换前 %d %d\n",a,b);
//	swap(&a,&b);
//	printf("交换后 %d %d\n",a,b);
//
//	return 0;
//
//
//}

//判断100-200是不是素数
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


//判断素数
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



//判断一个数是不是2的幂次方
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
//		printf("找不到");
//		//TODO
//	}
//	else
//	{
//		printf("找到了是你 %d",ret);
//	}
//
//}

//数组传参实际上传的是数组元素的首地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//错误示范
//int binary_search(int arr[],int k)//形式上arr看上是数组，本质是指针变量
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
//		printf("找不到");
//		//TODO
//	}
//	else
//	{
//		printf("找到了是你 %d",ret);
//	}
//}


//每调用一次函数 ，num值加一
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

//嵌套调用 不能嵌套定义

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

//链式访问

//int main()
//{
////	printf("%d\n",strlen("adceef"));
//
//	printf("%d",printf("%d",printf("%d",4321)));  //printf函数的返回值 返回的是字符串中字符的个数。 先输出4321 然后根据字符个数输出4 最后再根据字符个数输出1
//   return 0;
//}

//输入1234 输出1 2 3 4
//大事化小
//函数的递归 调用函数本身
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件

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

//有临时变量求字符函数
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

//编写函数不允许创建临时变量 求字符长度
//函数递归
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

//递归实现
//int fac(int n)
//{
//	if(n<=1)
//	return 1;
//
//	else
//	return n*fac(n-1);
//}

//迭代方式
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

//计算第n个斐波那契数列
//递归算法 会溢出 重复计算且时间长
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

//非递归算法 去除多余的重复计算
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
//// 结论
////指针类型决定了指针在被解引用的时候访问几个字节
////如果是int*指针 解引用访问4个字节
////  如果是char*指针，解引用访问1个字节
//// 推广到其他类型
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
//	//p没有初始化，就意味着没有明确的方向
//	//一个局部变量不初始化的华，放的是随机值 0xCCCCCCCC
//	*p=10;  //非法访问内存了，这里的p就是野指针
//
//	return 0;
//
//
//}

//int main()
//{
//	int len = strlen("abcdef");  //计算字符个数
//	printf("%d\n",len);
//
//	return 0;
//
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')  //取字符地址 计算元素个数
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


/*指针-指针*/

//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str != '\0')  //取字符地址 计算元素个数
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

///*二级指针*/
//int main()
//{
//	int a = 20;
//	int* pa = &a;       // *pa是指针 int说明 pa指向的对象是int类型
//	int** ppa = &pa;   //*说明ppa是指针
//	                   //int* 说明 ppa指向的对象是int*类型
//	**ppa=80;
//
//	printf("%d",a);       //二级指针变量是用来存放一级指针变量的地址的
//
//}

/*指针数组*/

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
//			printf("%d ",parr[i][j]); //等同于 *(parr[i]+j)（由于i是行数组的首地址 必须是每个数组的首地址以此排列）  arr[i] = *(arr+i)  相当于解引用
//			/* *(parr+i)[j] 看成是调用 parr[0] [1] [2]  这是不行的   */
//		}
//		printf("\n");
//
//
//	}
//
//
//	return 0;
//}

//struct peo//结构体类型
//{
//	char name[20];
//	char sex[5];
//	char number[20];
//	int num;
//
//};//结构体变量
//
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n",p.name,p.sex,p.number,p.num);//结构体变量.成员变量
//
//}
//
//
//
//void print2(struct peo* sp)
//{
//
//	printf("%s %s %s %d\n",sp->name,sp->sex,sp->number,sp->num);//结构体指针->成员变量
//
//}//结构体传参的时候，要传结构体的地址 不然浪费时间和空间资源
//
//
//
//
//
//int main()
//{
//	struct peo p1 ={"张","男","8777555",170};
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

/*写一个函数返回参数二进制中1的个数*/
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

///*判断一个数是不是2的n次方*/
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

/*两个int(32位)整数m和n的二进制中，有多少个位(bit)不同*/

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
//	//异或操作符
//	//相同为0，相异为1
//	int ret = m^n;
//	//统计一下ret中二进制位有几个1
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
//   	/*获取奇数位的数字*/
//   	 for(i=30;i>=0;i-=2)
//   	{
//	 printf("%d ",(num>>i)&1);
//	}
//	printf("\n");
//	/*获取偶数位的数字*/
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


//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值
//

//int i;
//int main()
//{
//	i--;
//	if(i>sizeof(i))  //当有符号整型和无符号整型进行比较时 -1换成无符号整型，会变成很大的数
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

/*栈区内存的使用习惯是先使用高地址处的空间，再使用低地址出的空间*/
/*数组随着下标的增长地址是用低到高变化的*/
/*如果i和arr之间有适当的空间，利用数组的越界操作就可能会覆盖到i，就可能会导致死循环出现的*/


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
//	//断言  判断指针是否为空指针 是则退出，以防越界
//	assert(src != NULL);
//  assert(dest != NULL);
//
//	while(*dest++ = *src++) //'\0'的ASCII码为0，while循环里的赋值表达式 先赋值再判断 如果左侧的变量为0 则while判断语句为假不执行
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
//	//strcpy在拷贝字符串的时候 会把原字符中的\0也拷贝过去
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
////	int* p = &num;   //破坏了 const 的作用
////	*p = 20;
//
//	//两种写法都一样
//	//p指向的对象 不能通过p来改变了，但是p变量本身的值是可以改变的
////	int const* p = &num;
////	const int* p = &num;
//
////  p指向的对象是可以通过p来改变的
//
////  int* const p =&num;
////  int n = 100;
////   *p=0 //ok
////   p=&n //err
////
////
////	int** a=&p;         //破坏了 const 的作用
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
//	//断言  判断指针是否为空指针 是则退出，以防越界
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++) { //'\0'的ASCII码为0，while循环里的赋值表达式 先赋值再判断 如果左侧的变量为0 则while判断语句为假不执行
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
//	//strcpy在拷贝字符串的时候 会把原字符中的\0也拷贝过去
////	my_strcpy(arr1,p);
//
////链式访问       
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
//	  //内存 存储地址 从 低 到  高 存储字节顺序
// // 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00	
//	int arr[]={1,2,3,4,5};
//	short* p =(short*)arr; //short* 访问两个字节
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
//	//低  -- --  高
//	//44 33 22 11  内存倒着存
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n",a);
//	
//	
//
//	
//	//任何一个变量/表达式，都有2个属性
//	//值属性
//	//类型属性
//	
//
//}




//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

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

//将一个字符串str的内容颠倒过来，并输出

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

//求Sn= a+aa+aaa+aaaa+aaaaa的前5项之后，其中a是一个数字；
//例如 2+22+222+2222+22222

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


//求出0-100000之间的所有"水仙花数"并输出
//"水仙花数"是指一个n位数，其各位数字的n次方之和确好等于该数本身，如：153 = 1 ^ 3+5 ^ 3+3 ^ 3,到153是一个"水仙花数".
//int main()
//{
//	int  i = 0;
//	for(i=0;i<=100000;i++)
//	{
//
//		//判断i是否为"水仙花数"
//		//1234
//		//计算i是几位数 ->n
//		int n = 1; //任何一个数至少是一位数
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
//		    sum+=pow(tmp%10,n);  //编译器问题 5的3次方变124 实际有153这个水仙花数	   
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
//		//判断i是否为"水仙花数"
//		//1234
//		//计算i是几位数 ->n
//		int n = 1; //任何一个数至少是一位数
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
// 		    sum+=pow(tmp%10,n);  //编译器问题 5的3次方变124 实际有153这个水仙花数	   
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

//打印棱形

//int main()
//{
//	int line = 0 ;
//	scanf("%d",&line);
//	int i = 0;
//	for(i=0;i<line;i++)
//	{
//		//打印一行
//		//空格
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
//		//打印一行
//		//空格
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

//计算a和b的最小公倍数

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



//喝汽水，1瓶汽水1元,2个空瓶可以换一瓶汽水,给20元,可以喝多少汽水(编程实现)

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

//倒置字符串   将一句话的单词进行倒置，标点不倒置 比如 I like beijing 经过函数后变为 beijing. like I

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


//判断当前机器是大端字序还是小端字序

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
////		printf("小端字序\n");
////	}
////	else
////	{
////		printf("大端字序\n");
////	}
//	
//	int ret = check_sys();
//	if(ret==1)
//	{
//		printf("小端字序\n");
//	}
//	else
//	{
//		printf("大端字序\n");
//	}
//	
//	return 0;
//}

//  数据还是以补码的形式存储  char型用%u显示 整型提升  %d 则显示原码
//整体提升  看类型 不是看%u %d  有符号的话 如果是1就补1 0就补0  无符号就补0
//int main()
//{
//	char a = 128;  // char 范围-128-127
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
//	// -1 补码  1111 1111 
//	//-128 补码 1000 0000 
//	// char 型   相加 10111 1111 截断 0111 1111 127   
//	// -1        补码  1111 1111
//	// 129       补码 10111 1111 
//	// char 型   相加 10111 1110 截断 0111 1110 126 
//	printf("%d\n",strlen(a));
//	printf("%d\n",a[254]);
//	//strlen 是求字符串的长度,关注的是字符串中'\0'（数字0）之前出现多少字符
//	return 0;
//}


//
//
//int main()
//{
//	unsigned char i = 0; 
//	for( i=0;i<=255;i++)
//	{
//		printf("hello world\n"); //255是unsigned char型范围极限 再往上加 就又从0开始
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
//	//因为 strlen 返回值都是无符号型 所以 无符号-无符号 大于>=0
//	//my_strlen 返回值是有符号 所以根据输入的值可以判断哪个大哪个小
////	if(my_strlen("abc")-my_strlen("abcdef")>=0)
//  if(strlen("abc")-strlen("abcdef")>=0)   //或者 直接 strlen("abc")>strlen("abcdef")
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
//	//IEEE 754规定：
//	//对于32位的浮点数，最高的1位是符号位s 接着的8位是指数E，剩下的23位为有效数字M
//	//S(1bit)  E(8bit)  M(23bit)
//    //对于64位的浮点数，最高的1位是符号位s 接着的11位是指数E，剩下的52位为有效数字M
//	//	
//	// 5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2  为了区别正数和负数 8位E 加上中间值127  11位的E 加中间值1023
//	// 0 10000001(e+127=129)   (前提（E不全为0或E不全为1）前面如果是1不用写 多留位置) 01100000000000000000000
//	// 0100 0000 1011 0000 0000 0000 0000 0000 十六进制
//	//  4    0    b    0    0    0    0    0
//	
//	// E从内存取出来  有三中情况
//	// E不全为0或不全为1 采用中间值减去算法
//	// E全为0 说明这个数无限接近于0 ，这时浮点数的指数E等于1-127(或者1-1023)即为真实值 有效数字不再加上第一位的1 而是还原为0.xxxxxx的小数
//	// E全为1 说明这个数无穷大
//	
//}




//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	//0(区别±0为正 1为负) 00000000 00000000000000000001001  
//	//E=-126
//	//M=0.00000000000000000001001
//	//+ 0.00000000000000000001001* 2^-126
//
//	float* pFloat = (float*)&n;
//	printf("n的值为%d\n",n);
//	printf("*pFloat的值为: %f\n",*pFloat); //认为是浮点型的方式存储 所以这个数无限接近于0 
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//0 10000010(E+127) 00100000000000000000000
//	printf("num的值为:%d\n",n); //以整数的形式读出来会很大
//    printf("*pFloat的值为:%f\n",*pFloat);
//	 
//	
//	return 0;
//	
//	
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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
//		scanf("%d",&arr[i]);// 或者arr+i
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

//有序序列合并

//第一行输入 两个整数，第一个数字代表第一个有序序列的个数 第二个数字代表第二个有序序列的个数 
//第二行输入有序序列
//第三行输入有序序列

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int arr1[n];
//	int arr2[m];
////	int arr3[m+n];  //存起来再输出
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
//		if(arr1[j]<arr2[k])  //   想相同输出一次 则if(arr1[j]<=arr2[k])
//		{
//			
//			printf("%d ",arr1[j]);
//			j++;
////			arr3[r++]=arr1[j++];
//			
//		}
//		else
//		{
//		/*想相同输出一次	
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
// /*想相同输出一次
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
////	char* p = "abcdef"; //把字符串首字符a的地址，赋值给了p 而且这是个常量字符串不能被改
////
////// *p="w";           //错误形式 
//////			       "abcdef" 是一个字符串面量，p的确指向其地址，
//////			       但该地址存在于在进程的 text 段，text 段除了保存常量还保存可执行代码，
//////			       因此是不允许可写权限的，而是只允许可读、可执行权限。
////	
////	
////	printf("%s\n",p);
//	
//	
//	return 0;
//}


//int main()
//{
//	const char *p1 = "abcdef";  //常量字符串 内存都指向一个
//	const char *p2 = "abcdef";  //指针存放地址 没有向内存申请空间
//	
//	char arr1[] = "abcedf";  //数组空间不一样
//	char arr2[] = "abcedf";	 //两块独立的空间  数组首地址肯定不一样
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


//指针数组 - 是数组，是用来存放指针的数组
//int* arr[6] 存放整型指针的数组  每个元素都是指针  int*  int*  int* int* int* int*
//char* arr[5] 存放字符指针的数组  每个元素都是指针 char*  char* char* char* char*
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
//	   	//*(p+j) ->p[j] 所以 +j 可以替换成[j]  
//	   	//  printf("%d ",*(parr[i]+j)); 这个不是二维数组 二维数组的内存是连续存放的 这个三个数组的内存不一定连续
//			printf("%d ",parr[i][j]); 	   	
//	   }
//	   printf("\n");
//	}
//	
//	return 0;
//}

//C语言实现简单数据结构
//指针+结构体+动态内存处理


//数组指针 -指针 指向数组的指针
 
//整型指针 - 指向整型的指针
//int*
//字符指针 - 指向字符的指针
//char*



//int *p1[10];  p1是指针数组
//int (*p2)[10];  p2是 数组指针 p2可以查一个数组，该数组有10个元素，每个元素是int类型
//解释：p先和*结合 说明p是一个指针变量，然后指向的是一个大小为10个整型的数组，所以p是一个指针，指向一个数组，叫数组指针
//这里要注意：[]的优先级要高于*号的，所以必须加上()来保证p先和*结合



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

//数组名 通常表示的都是数组首元素的地址
//但是有两个例外；
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//2. &数组名，这里的数组名表示的依然是整个数组，所以&数组名取出的是整个数组的地址

//数组指针 -指针 指向数组的指针
 
//整型指针 - 指向整型的指针
//int*
//字符指针 - 指向字符的指针
//char*

//int main()
//{
//	int arr[10] = {0};
//	
////	int*p = &arr; 有警告的
//	
//	int* p =arr;  //int* 4个字节  单个元素  单单指首地址
//	
//	
//	int(*p2)[10]=&arr;  //数组指针 整个数组
//	
//	//p2的类型是int(*)[10];
//
////	int arr[5];    arr是整型数组
////  int *parr1[10];    parr1是整型指针数组
////  int (*parr2)[10];  parr2是数组指针
////  int (*parr3[10])[5]; parr3是存放数组指针的数组
////  arr1 {1,2,3,4,5}
////  arr2 {2,3,4,5,6}
////  arr3 {1,2,3,4,5}
//// int(*parr3[10][5])={&arr1,&arr2,&arr3};	
//	return 0;
//}

//数组参数 指针参数

//一维数组传参
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


//二维数组传参 行可以省略 列不能省略

// void test(int arr[3][5]){}
// void test(int arr[][]) 错误
// void test(int arr[][5]) 

//二维数组的数组名 表示首元素的地址 其实是第一行的地址

//第一行代表的是一个一维数组 而不是单个元素

/*
int main()
{
	int arr[3][5]={0};
	test(arr);
}


*/
//函数指针 一般指向函数的指针是函数指针

//int Add(int x,int y)
//{
//		return x+y;
//}
//
//int main()
//{
////	int arr[5] = {0};
////	//&数组名 - 取出的数组的地址
////	int (*p)[5] = &arr;//数组指针
////	
////	//&函数名 - 取出的就是函数的地址
////	printf("%p\n",&Add);
////	printf("%p\n",Add);
//	//对于函数来说，&函数名和函数名就是函数的地址
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
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	int** p =arr;
//	
//	//数组指针
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
//	//函数指针 - 也是一种指针，是指向函数的指针  
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

//typedef void(* pf_t)(int); //把void(*)(int)类型重命名为 pf_t
//
//
//
//int main()
//{
//	
////	(*(void(*)())0)();
////   (void(*)())0   把0的地址为强制转换成 函数指针类型 
// 以上代码是一次函数调用，调用的是0作为地址处的函数
// 把0强制类型转换为：无参，返回类型是void的函数的地址
//// 调用0地址处的这个函数
//
//	
//	void(*signal(int ,void(*)(int)))(int);
//	//signal 是函数名  以上代码是一次函数声明
//	//声明的signal函数的第一个参数的类型是int,第二参数的类型是函数指针。
//	//该函数指针指向的函数参数是int，返回类型是void，signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int（最外面的int），返回类型是void（最外面的void）
//	
//	pf_t signal(int,pf_t);
//	
//	return 0;
//}


//函数指针的用途


//写一个计算器
//加法、减法、乘法、除法

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
//回调函数
//void calc(int (*pf) (int,int))
//{	
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//		
//	printf("请输入2个操作数:");   //太过冗余
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
//		printf("请选择:>");
//		scanf("%d",&input);
//
//		switch(input)
//		{
//			case 1:
////				printf("请输入2个操作数:");   //太过冗余
////				scanf("%d %d",&x,&y);		
////				ret = Add(x,y);
////				printf("%d\n",ret);
//				calc(Add);
//				break;
//			case 2:
////				printf("请输入2个操作数:");   //太过冗余
////				scanf("%d %d",&x,&y);
////				ret = Sub(x,y);
////				printf("%d\n",ret);
//				calc(Sub);
//				break;
//			case 3:
////				printf("请输入2个操作数:");    //太过冗余
////				scanf("%d %d",&x,&y);
////				ret = Mul(x,y);
////				printf("%d\n",ret);
//				calc(Mul);
//				break;
//			case 4:
////				printf("请输入2个操作数:");    //太过冗余
////				scanf("%d %d",&x,&y);
////				ret = Div(x,y);
////				printf("%d\n",ret);
//                calc(Div);
//				break;
//			case 0:
//				printf("退出计算器");
//				break;
//			default:
//				printf("选择错误");
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
//	int (*pf)(int,int)=Add; //pf是函数指针
//	int (*arr[4])(int,int)={Add,Sub,Mul,Div}; arr为函数指针的数组
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
//	//函数指针数组
//	int (*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};
//	
//////	//指向[函数指针数组]的指针
//////	int (*(*pffar)[5])(int,int)=&pfArr;
//	 
//	 
//	
//	do{
//			menu();
//			printf("请选择:>");
//			scanf("%d",&input);	
//		if(input==0)
//		{
//			printf("退出计算器\n");
//		}
//		else if(input>=1&&input<=4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d",&x,&y);
//			ret = pfArr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else
//		{
//			printf("选择错误\n");
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
//	//趟数
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1; //假设数组是排好序
//		//一趟冒泡排序的过程
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
////qsort(void *, //你要排序的数据的起始位置 
////     size_t,  //待排序的数据元素的个数
////	   size_t,  //待排序的数据元素的大小 （单位是字节）
////	   int (*)(const void *, const void *)) //函数指针 比较函数
//
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	//把数组排成升序
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
//	void* pv = &a;//void* 是无具体类型的指针，可以接受任意类型的地址
//	//void* 是无具体类型的指针，所以不能用解引用操作，也不能++整数
//	
//	return 0;
//}

//int cmp_int(const void* e1,const void* e2)
//{
//    if(*(int*)e1 > *(int*)e2)
//      return 1;     // e1>e2  设定返回 1  或者 e1<e2 设定返回-1 则是升序
//                    // e1>e2 设定返回-1  或者 e1<e2  设定返回 1 则是降序
//    else if(*(int*)e1 == *(int*)e2)
//      return 0;
//    else
//      return -1;
//
//
//////	return (*(int*)e1-*(int*)e2); //升序
//////	return (*(int*)e2-*(int*)e1); //降序  返回 >0 =0 <0
//}

////回调函数就是一个通过用函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，
////而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应
//
//
//
//
//
//int main()
//{
////	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	//把数组排成升序
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
//	//strcmp -> 返回值 >0 = 0 <0 具体是比较一个一个的ASCII码 
//	return strcmp(((struct STU*)e1)->name,((struct STU*)e2)->name); //升序
//}
//int cmp_stu_by_age(const void *e1,const void* e2)
//{
//	return((struct STU*)e1)->age-((struct STU*)e2)->age; //升序
//	
//}
//
//int cmp_int(const void* e1,const void* e2)
//{
//    if(*(int*)e1 > *(int*)e2)
//      return 1;     // e1>e2  设定返回 1  或者 e1<e2 设定返回-1 则是升序
//                    // e1>e2 设定返回-1  或者 e1<e2  设定返回 1 则是降序
//    else if(*(int*)e1 == *(int*)e2)
//      return 0;
//    else
//      return -1;
//
//
//////	return (*(int*)e1-*(int*)e2); //升序
//////	return (*(int*)e2-*(int*)e1); //降序  返回 >0 =0 <0
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
//	//趟数
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1; //假设数组是排好序
//		//一趟冒泡排序的过程
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
//	//把数组排成升序
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
//	//sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%d\n",sizeof(a+0)); //4
//	//a不是单独放在sizeof内部，也没有取地址，所以a就是首元素的地址，a+0还是首元素的地址 
//	//是地址，大小就是4/8个字节
//	printf("%d\n",sizeof(*a)); //4  
//	// a<===>&a[0] a+0<===>&a[0]+0  *&a等于a[0]
//	//*a中的a是数组首元素的地址，*a就是对首元素的地址解引用，找到的就是首元素
//	//首元素的大小就是4个字节
//	printf("%d\n",sizeof(a+1));//4
//	//这里的a是数组首元素的地址
//	//a+1是第二个元素的地址
//	//sizeof(a+1)就是地址的大小
//	printf("%d\n",sizeof(a[1]));//4
//	//计算的是第二个元素的大小
//	printf("%d\n",sizeof(&a));//4/8
//	//&a取出的数组的地址，数组的地址，也是个地址
//	printf("%d\n",sizeof(*&a));//16
//	//&a---->int(*)[4]
//	//&a拿到的是数组名的地址，类型是int(*)[4]，是一种数组指针
//	//数组指针解引用找到的是数组
//	//*&a ---> a
//	//&和*抵消了 相当于a
//	printf("%d\n",sizeof(&a+1));//4/8
//	//&a取出的是数组的地址
//	//&a--> int(*)[4]
//	//&a+1 是从数组a的地址向后跳过了4个整型元素的数组大小
//	//&a+1还是地址，是地址就是4/8字节
//	
//	printf("%d\n",sizeof(&a[0]));//4/8
//	//&a[0]就是第一个元素的地址
//	//计算的是地址的大小
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	//&a[0]+1是第二个元素的地址
//	//计算的是地址的大小	
//	return 0;
//}


//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));//6
//	//sizeof(数组名)
//	printf("%d\n",sizeof(arr+0));// 4/8
//	//arr + 0 是数组首元素的地址
//	printf("%d\n",sizeof(*arr));//
//	//*arr就是数组的首元素，大小是1字节
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n",sizeof(arr[1]));// 1
//	//第二个元素 
//	printf("%d\n",sizeof(&arr));//4/8
//	//&arr是数组的地址，是地址就是 4 / 8个字节
//	printf("%d\n",sizeof(&arr+1));//4
//	//&arr+1是数组后的地址
//	//
//	printf("%d\n",sizeof(&arr[0]+1));//4
//	//&arr[0]+1 是第二个元素的地址
//	printf("%d\n",sizeof(arr[0]+1));
//	
//	
//	return 0;
//}

//sizeof 返回的是字节大小
//strlen 返回的是字符数量（不包括结束的空字符，到结束符之前停）


//int main()
//{
//	char arr[]={'a','b','c','d','e','f'}; //没有结束符 所以随机

//	//size_t strlen ( const char * str ); 参数是指针

//	printf("%d\n",strlen(arr));//随机值
//	printf("%d\n",strlen(arr+0));//随机值
//	
////	printf("%d\n",strlen(*arr));// --> strlen('a');-->strlen(97);//野指针 非法数据
////	printf("%d\n",strlen(arr[1]));//--> strlen('b');-->strlen(98);//野指针 非法数据
//	printf("%d\n",strlen(&arr));//随机值
//	printf("%d\n",strlen(&arr+1));//随机值-6 跳过一个数组 
//	printf("%d\n",strlen(&arr[0]+1));//随机值-1
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
//	//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符的个数
//	//strlen是库函数，只针对字符串
//	//sizeof只关注占用内存空间的大小，不在乎内存中放的是什么
//	//sizeof是操作符
//	             
//	printf("%d\n",strlen(arr));//6      
//	printf("%d\n",strlen(arr+0));//6
////	printf("%d\n",strlen(*arr));//err   
////	printf("%d\n",strlen(arr[1]));//err    
//	printf("%d\n",strlen(&arr));//6   
//	printf("%d\n",strlen(&arr+1));//随机值   
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
//	printf("%d\n",strlen(&p));//随机值
//	printf("%d\n",strlen(&p+1));//随机值
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
//	//a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个一维数组
//	//sizeof(a[0])计算的就是第一行的大小
//	printf("%d\n",sizeof(a[0]+1));//4/8
//	//a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址
//	//就是第一行这个一维数组的第一个元素的地址，a[0]+1就是第一行第二个元素的地址
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	//a[0]+1就是第一行第二个元素的地址
//	//*(a[0]+1)就是第一行第二个元素
//	printf("%d\n",sizeof(a+1));//4/8
//	//a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
//	//a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
//	//a+1就是跳过第一行，表示第二行的地址
//	printf("%d\n",sizeof(*(a+1)));//16
//	//*(a+1)是对第二行地址的解引用，拿到的是第二行
//	//*(a+1)-->a[1]
//	//sizeof(*(a+1))-->sizeof(a[1])
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	//&a[0] - 对第一行的数组名取地址，拿出的是第一行的地址
//	//&a[0]+1 得到的是第二行的地址
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	//a表示首元素的地址，就是第一行的地址
//	//*a就是对第一行地址的解引用，拿到的就是第一行
//	
//	printf("%d\n",sizeof(a[3]));//16 
//	//越界但是不会访问第四行 类型已经固定了 
//	
//	//sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//	//&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//	//除此之外所有的数组名都表示首元素的地址
//	return 0;
//}




//int main()
//{
//	
//
//	
//	
//	int a[5]={1,2,3,4,5};
//	int *ptr = (int*)(&a+1); //数组指针类型强制转换成整型指针 &a+1则是跳过一个数组
//	
//	printf("%d %d",*(a+1),*(ptr-1));//第一个没有sizeof 没有& 则表示首元素的地址，表示第二个元素
//	//第二个整型指针 -1则 减去一个整型字节 则为 5 
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
////假设p的值为0x100000,如下表表达式的值分别是多少？
////已知，结构体Test类型的变量大小是20个字节
////x86
//
//int main()
//{
//	printf("%p\n",p+0x1);
//	//0x100000+1 --> 0x100014 跳过一个结构体
//	printf("%p\n",(unsigned long)p + 0x1);
//	// (unsigned long)p 转换为无符号整型 1048576+1 -->1048577
//	// 0x100001
//	printf("%p\n",(unsigned int*)p + 0x1);
//	//0x100000+4 --> 0x100004
//	return 0;
//}

//int main()
//{
//	int a[4]= {1,2,3,4};
//	int* ptr1 = (int*)(&a+1);
//	//跳过一个结构体
//	int* ptr2 = (int*)((int)a+1);
//	// 如果a= 0x0012ff40
//	// a+1 -> 0x0012ff44
//	// (int)a+1 -> 0x0012ff41
//	// 小端存储 01 00 00 00 02 00 00 00    低地址-->高地址
//	//             ↓从这里开始 4个字节 内存地址 00 00 00 02 低 -高 所以 *ptr = 02 00 00 00
//	printf("%x,%x",ptr1[-1],*ptr2);
//	 
//	
//	
//	return 0;
//}

//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)}; // 里面是个括号 不是中括号 逗号表达式返回的是括号里最后一个表达式的值
//	//所以实际 a[3][2] = {{1,3},{5,0},{0,0}}
//	int *p;
//	p = a[0];
//	printf("%d",p[0]);
//	
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int (*p)[4];  // 指向含有4个元素的指针
//	p = a;
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
// //   1 2 3 4 5  6 7 8 9 10 1112131415 1617181920 2122232425	  
// //   □□□□□ □□□□□ □□□□□ □□□□□ □□□□□ 	
// //	  p      ↓       ↓       ↓       ↓  ↓1 2  3 4↓      23-19=4个元素 因为是倒着减 所以是-4    补码就是内存
// //                                      □  □ □
// //                                     p40 p41 p42 17已经是p[4][0]注意！  P
//	return 0;                  
//}

//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);//跳过整个二维数组
//	int* ptr2 = (int*)(*(aa+1));//跳过一行的数组 得到第二行的地址 (aa+1)-->aa[1]
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
//	pa++; //char 移到下一个数组 所以是at
//	printf("%s\n",*pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//	char** cp[] = {c+3,c+2,c+1,c};
//	char*** cpp = cp;
//	
//	printf("%s\n",**++cpp);  //++cpp cpp的值已变 cpp已经指向第二个元素的地址
//	printf("%s\n",*-- *++cpp+3); //先++cpp  cpp已经指向第三个元素的地址   引用元素c+1然后减1 c+1-1 =c  然后 再引用 +3  ER             
//	printf("%s\n",*cpp[-2]+3);
//	//此时cpp是指向第三个元素的地址  *cpp[-2]-->* *(cpp-2)+3  cpp-2 则指向 第一个元素的地址
//	//解引用为c+3的地址  然后再解引用 为 FIRST 再+3  则指向ST
//	printf("%s\n",cpp[-1][-1]+1);
//	//此时cpp是指向第三个元素的地址 cpp[-1][-1] -->*(*(cpp-1)-1)  +1
//	//先cpp-1则是指向第二个元素的地址 然后引用-1  则是 c+2-1=c+1 最后引用 c+1 NEW 再+1 则指向 EW
//}

//int main()
//{
//	
//////	char arr[] = "abcdef"; //abcdef\0
////	char arr[] = {'b','i'}; // strlen(arr)  随机  无法确定后面哪个元素为 \0
////	int len = strlen(arr);
////	//strlen 返回的是无符号整型
////	printf("%d\n",len);
//	
////	if(strlen("abc")-strlen("abcdef")>0)  //这里写是有问题的 得到的是负数但又转换成无符号整型了
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
////	name = "zhansan";//err,name数组名是地址，地址是一个常量值，不能被赋值
//    char arr[] = {'b','i','t','k'};//err 不知道什么时候遇到\0,无法判断什么时候停止复制
//    strcpy(name,arr);
//	printf("%s\n",name);
//	
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef"; //p是指针 是常量不可修改 如果p[]存放的是字符变量 可修改
//	char arr[] = "bit";
//	strcpy(p,arr); //目标区域不可更改
//	printf("%s",p);//err
//	
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src )
//{
//	assert(dest&&src);
//	char* ret = dest; 
//	while(*dest++ = *src++);  //这是赋值表达式 不是 相等表达式 *dest = 0停止了
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
//			return 0; //相等
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
//	//两个字符串比较，应该使用strcmp。
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
////	//比较一下两个字符串是否相等
////	//arr1是数组名，数组名是数组首元素的地址
////	//arr2是数组名，数组名是数组首元素的地址
////	if(arr1 == arr2)  //比较的是地址 地址肯定不一样 不是比较两个字符串
////	{
////		printf("==\n");
////	}
////	else
////	{
////		printf("!=\n");
////	}
//	
//}

//长度受限制的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	
//	strncpy(arr1,arr2,5);  //补\0
//	
//	printf("%s\n",arr1);
//}

//int main()
//{
//	char arr1[20] = "hello, ";
//	char arr2[] = "world!";
//	strncat(arr1,arr2,5	);  //过去自动补个\0
//	printf("%s",arr1);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strncmp(arr1,arr2,4);  //不同的编译器返回的值会不一样 会返回 >0 ==0 <0 任意一个值
//	printf("%d\n",ret);
////	if(ret == 0)
////		printf("==\n");
////	else if(ret < 0)
////		printf("<\n");
////	else
////		printf(">\n");
//}
//KMP算法
//这个算法也是用来实现在一个字符串中查找子字符串的
//效率高，但是实现难度大



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
////	char  *ret = my_strstr(email,substr);  //查找子字符串  根据第二个字符串，找到有在第一个字符串出现的字符(完全匹配)，并返回
//	char arr1[] = "abbbcdef";	
//	char arr2[] = "bbcq";
//	char* ret = strstr(arr1,arr2);
//	if(ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}



//strtok
//切割字符串
//
//zhangpengwei@bitejiuyeke.com
//
// char* strtok(char* str ,const char* sep);
//sep参数是个字符串,定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个有sep字符串中一个或者多个分隔符分割的标记
//strtok函数找到的str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。(注：strtok函数
//会改变操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改)
//strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为NULL,函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回NULL指针。

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

//C语言的库函数，在执行失败的时候，都会设置错误码
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
////  errno - C语言设置的一个全局的错误码存放的变量
//	
//	FILE* pf = fopen("E:\\桌面\\test.txt","r");
//	
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1; //当main函数返回的是非0值时，表示异常
//	}
//	else
//	{
//		
//	}
//	return 0;
//}、

// 字符分类函数
// iscntrl  任何控制字符
// isspace	空白字符: 空格' ',换页'\f',换行'\n',回车'\r',制表符'\t'或者垂直制表符'\v'
// isdigit  十进制数字0-9
// isxdigit 十六进制数字，包括所有十进制数字，小写字母a-f，大写字母A-F
// islower	 小写字母a-z
// isupper	 大写字母A-Z
// isalpha   字母a-z或A-Z
// isalnum	 字母或者数组，a-z，A-Z，0-9
// ispunct	 标点符号，任何不属于数字或者字母的图形字符（可打印）
// isgraph   任何图形字符
// isprint	 任何可打印字符，包括图形字符和空白字符
 
// int tolwer(int c); 大写字母转换小写
// int toupper(int c); 小写字母转换大写

//int main()
//{
//	int a = isspace(' ');  // 单引号 不是双引号 测字符 不是字符串
//	printf("%d\n",a);    //如果是空格 就返回非零的值 
			
//	int a = isdigit('0');
//	printf("%d\n",a); //如果是数字 就返回非零的值

	
//	int a = iscntrl('\t');
//	printf("%d\n",a);  //如果是控制字符 就返回非零的值
		
//	int a = isxdigit('5');
//	printf("%d\n",a); //如果为真返回非零的值

//    printf("%c\n",tolower('X')); // 大写字母转小写
//	printf("%c\n",toupper('a')); // 小写字母转大写
//	return 0;
//}

//memcpy 内存拷贝
//void *memcpy(void* destination,const void * socre size_t num);
// destination 表示目标参数
// source 表示来源参数
// num 表示复制的字节
// 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置
// 这个函数在遇到 '\0' 的时候并不会停下来
// 如果source和destination有任何的重叠，复制的结果都是未定义的。


// memcpy 负责拷问两块独立空间中的数据
// memcpy 函数是不用来处理重叠的内存之间的数据拷贝的
// 使用函数来实现，重叠内存之间的数据拷贝
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
//		//前->后
//		*(char* )dest =  *(char* )src;
//		 dest = (char*)dest+1;
//		 src = (char*)src+1;
//	  }	
//	}
//	else
//	{
//		while(num--)  //假设 20个字节--
//	   {
//	   	 *((char*)dest+num)  = *((char*)src+num);   //此时指针 已经跳过19个字节  内存是从0开始 0也代表一个字节 所以 0-19 总共20个
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

//memcmp 比较从prt1和prt2指针开始的num个字节
//int memcmp(const void * ptr1,const void)
//int main()
//{
//	int arr1[] = {1,2,3,4,5}; // 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = {1,2,3};     // 01 00 00 00 03 00 00 00 02 00 00 00  小端存储 2比3小 返回-1 
//	
//	int ret = memcmp(arr1,arr2,12);
//	printf("%d\n",ret);
//	return 0;
//}

// void * memset(void * ptr,int value,size_t num);
//                      地址       值        字节数      
// 内存设置


//int main()
//{
////	char arr[] = "hello bit";
//	//memset(arr,'x',5);
////	memset(arr+6,'x',3);
////	printf("%s\n",arr);
//
//	int arr[10] = {0};
//	memset(arr,1,40); //是每个字节都赋值为1 不能每个元素赋值为1
//	                  //可以全赋值为0
//	int i = 0;
//	for(i = 0 ;i<10 ;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	
//	return 0;
//}

//输出一个整数，如果某一位是奇数，则变1，如果某一位是偶数，则变0
// 例如 2222222  0
//      123      101
// 编译器有问题输出有误

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

//带空格直角三角形图案
//输出一个数字 5
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


// 11 11 7折
// 12 12 8折
//  1 有优惠卷-50  0则正常计算

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
//   //11001000 -a 截断
//   //0000 0000 0000 0000 0000 0000 0110 0100
//   unsigned char b = 100;	
//   unsigned char c = 0;
//   c = a+b; 
//   //整型提升
//   //0000 0000 0000 0000 0000 0000 1100 1000
//   //0000 0000 0000 0000 0000 0000 0110 0100
//   //0000 0000 0000 0000 0000 0001 0010 1100
//	
//   //0010 1100 -c 截断 %d 提升补0  0000 0000 0000 0000 0000 0000 0010 1100
//   //	
//   printf("%d %d",a+b,c); //由于是 %d a+b 整型提升 0000 0000 0000 0000 0000 0001 0010 1100
////                300  44
//	return 0;
//}

//在32位大端模式处理上变量b的值是多少


//int main()
//{
//	unsigned  int a  = 0x1234;
//	
//	//0x1234 
//	
//	//小端存储 34 12 00 00 数据的低字节对应低地址 高字节对应高地址
//	//内存     低 ---->高
//	//char     34
//	//大端存储 00 00 12 34 数据的高字节对应低地址 低字节对应高地址
//	//内存     低 ---->高	
//	//char     00 
//    //由于编译器默认小端存储 所以运行出来是小端 没法实现大端 大端应该是 0x00	
//	
//	
//	unsigned char b = *(unsigned char *)&a;
//	
//	printf("%x",b);
//	
//	return 0;
//}

//A说：B第二 我第三
//B说：我第二 E第四
//C说：我第一 D第二
//D说：C最后 我第三
//E说：我第四 A第一
//每位选手说对了一半，请编程确定比赛的名次


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
//							if(a*b*c*d*e==120) //a+b+c+d+e==15 无法获得唯一的排名
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


//4个嫌疑犯的供词
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//写一个程序来确定到底谁是凶手

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

//在屏幕上打印杨辉三角
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


//下面哪个代码是错误的？
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
//这是正确的。在C语言中，数组名arr可以退化为指向其首元素的指针，
//这里将其赋值给整型指针p是合法的。
//
//B. int(*ptr)[10]=&arr;
//
//这也是正确的。这里定义了一个指向含有10个整数的数组的指针ptr，
//并将其初始化为指向数组arr的地址。这种写法是合法且符合类型安全的。
//
//C. p=&arr[0];
//
//这同样是正确的。arr[0]是数组arr的第一个元素，
//取其地址赋值给指针p，这与直接使用数组名arr效果相同，因为两者都得到数组首元素的地址。
//

//D. p=&arr;
//
//这个表达式在C语言中是有问题的。尽管在某些上下文中，
//数组名可以被当作指向其首个元素的指针来使用，
//
// 重点：整个数组的地址  但直接对数组取址(&arr)得到的是整个数组的地址，
//
//其类型为int(*)[10]，即指向含有10个整型元素数组的指针，
//这与p的类型int*不符，会导致编译错误。

//int main()
//{
//	int arr[10] = {0};
//	
//	return 0;
//}



// sizeof(arr) 有sizoof arr表示整个数组
// &arr arr表示整个数组
// 除了sizeof(arr)和&arr中的数组名，其他地方出现的数组名arr
// 都是数组首元素的地址

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
//	const char *p1 = "abcdef";  //常量字符串 内存都指向一个
//	const char *p2 = "abcdef";  //指针存放地址 没有向内存申请空间
//	
//	char arr1[] = "abcedf";  //数组空间不一样
//	char arr2[] = "abcedf";	 //两块独立的空间  数组首地址肯定不一样
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

//实现一个函数，可以左旋字符串中的k个字符

//void left_rotate(char arr[],int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	int j = 0;
//	k%=len  //防止浪费资源 浪费时间
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

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于o(N);

//struct point
//{
//	int x;
//	int y;
//};

//struct point find_num(int arr[3][3],int r,int c,int k)
//int find_num(int arr[3][3],int r,int c,int k)
//int find_num(int arr[3][3],int* r,int* c,int k)
//{
//	                   //    (x,y) 3是从第一行里最大的也是，也是这一列最小的      
//	                   //     ↓如果说找的数比它小 则只用 列-- y-- 如果比它大则只需 行++ x++  
//	int x=0;           // 1 2 3  
//	int y=*c-1;         // 4 5 6  //如果说找的是4 4比3大 则x++此时 坐标位（x+1,y）为6
//	                   // 7 8 9  //4比6小 则y-- 此时坐标位为5 再y--得到4
//	                   // ↑
//	                   //(x,y)(备用也可当 x y)
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
//		printf("找不到");
//	}
//	
//	return 0;
//	
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串



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

//下面函数设计正确的是

//char * arr[5] = {"hello","bit"};
//
//test(arr);

//题目内容：

// A.void test(char* arr);
// B.void test(char** arr);
// C.void test(char arr[5]);
// D.void test(char* arr[5]);

//A. void test(char arr)：这是错误的，因为char arr 是一个字符数组，而不是字符串数组，并且没有指定长度。
//
//B. void test(char** arr)：这是正确的，因为它表示一个指向指针的指针，即二维数组，可以用来表示一个字符串数组。
//
//C. void test(char arr[5])：这是错误的，因为它是一个字符数组，不是字符串数组，并且长度为5，这不足以容纳两个字符串。
//
//D. void test(char* arr[])：这是正确的，因为它表示一个指向字符指针的数组，可以用来表示一个字符串数组。

//int main()
//{
//	int aa[2][5]={10,9,8,7,6,5,4,3,2,1};
//	int* ptr1 = (int*)(&aa+1);//跳过整个二维数组
//	int* ptr2 = (int*)(*(aa+1));//跳过一行的数组 得到第二行的地址 (aa+1)-->aa[1] 不应该在（aa+1）加个*
//	
//	printf("%d,%d",*(ptr1 - 1),*(ptr2 -1)); 
//	
//	
//	return 0;
//}

//下面代码中print_arr函数参数设计哪个是正确的?()

//int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
//print_arr(arr,3,5);

//A.void print_arr(int arr[][],int row,int col);
//B.void print_arr(int*arr,int row,int col);
//C.void print_arr(int (*arr)[5],int row,int col);
//D.void print_arr(int (*arr)[3],int row,int col);



//A选项 int arr[][] 是不正确的语法，在C语言中你不能这样声明二维数组的参数。
//B选项 int* arr 将整个二维数组视为一个长的一维数组，这虽然在某些情况下可以通过计算偏移量来访问二维数组的元素，但对于明确表示这是一个二维数组并且易于理解和使用的角度来说，并不是最佳选择。
//C选项 int (*arr)[5] 正确地表示了一个指向含有5个整数数组的指针，这正是二维数组 arr[3][5] 每一行的表现形式。它明确指出了参数是一个指向具有5个整数的数组的指针，且行数通过另一个参数 row 传递，这种方式清晰地表达了二维数组的结构。
//D选项 int (*arr)[3] 将列数固定为3，这与题目中二维数组的实际列数不符。

//转置矩阵(将矩阵的行列互换得到的新矩阵)
//输入
// 2 3 (行列)
// 1 2 3
// 4 5 6

//输出
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

//上三角矩阵(上三角矩阵是一种特殊的方阵（即行数和列数相等的矩阵），其特点是矩阵的下三角区域（包括对角线以下）的所有元素都为零)

//  1 2 3   1 4 6这对角线以下的值都是0 就是上三角矩阵
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

// 有序序列判断
//第一行输入一个整数N
//第二行输入N个整数
// 输入 5
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

//结构体的声明
//struct stu          //stu 是结构体类型 
//{
//	char name[20];
//	int age;
//};

//struct stu          // stu 是结构体类型 s1 s2 是结构体变量（放在最外头就是全局变量）
//{
//	char name[20];
//	int age
//}s1,s 2; //现在是全局变量
//
//int main()
//{
//	struct stu s3;  //s3是局部变量
//	
//	
//	
//	return 0;
//}

//匿名结构体类型
//只能使用一次 (不完全的声明)

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
//	p = &x; //警告 编译器会把上面的两个声明当成完全不同的两个类型
//	        //所以是非法的 
//	return 0;
//}

//上面的两个结构在声明的时候省略了结构体标签(tag)

//结构的自引用

//struct Node
//{
//	int data;
//	struct Node next;
//};// 错误用法

//正确的自引用方式

//struct Node 
//{
//	int data;
//	struct Node* next; //包含结构体指针（链表）
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef struct Node
//{
//    int data;      // 结构体内的一个成员，用于存储整型数据。
//    Node* next;    // 一个指向同类型结构体（即另一个Node节点）的指针，用于链接链表中的下一个节点。
//} Node;


//
//这样写是完全正确的，并且代码更加简洁。
//这是因为typedef关键字让你能够直接用Node来指代struct Node，
//因此在结构体内部定义指针时，可以直接使用Node* next。


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

//这里，通过在结构体定义后加上 typedef，
//你实际上是为 struct stu 创建了一个别名 s1，
//而不是定义了一个变量。这意味着 s1 现在是一个类型名称，
//你可以用它来声明同类型的新变量，
//而不需要每次都写出 struct stu。因此，
//这里的 s1 不是指向一个具体的结构体对象，
//而是成为了类型 struct stu 的一个别名。

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


//结构体内存对齐

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
//	int i ;    // 4  8+1=9不是4的倍数所以 1加3 不到12  12 + 4 总共16
//	
//};
//
//struct S4
//{
//	char c1;       //1  8   由于嵌套结构体对齐数是8 所以1要对齐到8 让嵌套结构体到整数倍
//  	struct S3 s3;  //16   嵌套的结构体对齐到自己的最大对齐数的整数倍处
//	double d;      //8  
//};
//
////offsetof 成员在这个类型创建的变量中的偏移量
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





//结构体的对齐规则
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处。
// 对齐数 = 编译器默认的一个对齐数与该成员大小中的较小值  对齐数8 成员4 则较小 4
//  VS 中默认的值为8
//3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。    
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小
//就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。

//为什么存在内存对齐

//1.平台原因（移植原因）
//不是所有的硬件平台都能访问任意地址上的任意数据的;某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常

//2.性能原因
//数据结构（尤其是栈）应该尽可能地在自然边界上对齐
//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问;而对齐的内存访问仅需要一次访问。

//总体来说:结构体的内存对齐是拿空间来换取时间的做法。

//那在设计结构体的时候，我们既要满足对齐，又要节省空间
//让占用空间小的成员尽量集中在一起

//例如：
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
//头文件中使用，功能是:防止头文件被多次引用

//#pragma pack(4) //设置默认对齐数为4
//struct S
//{
//	int i ;
//	double b;
//};
//#pragma pack() //取消设置的默认对齐数，还原为默认（单独针对这个结构体 不清楚后面的结构体所以要取消）
//int main()
//{
//	printf("%d",sizeof(struct S));
//	
//	return 0;
//}

//结构体传参

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
//	print1(s);  //传值调用
//	print2(&s); //传址调用
//	return 0;
//}

// print1 和 printf2 首选print2函数
// 原因：
// 函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
// 如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降

//结构体传参的时候，要传结构体的地址

//位段

//位段的声明和结构是类似的，有两个不用:
//1.位段的成员必须是 int 、unsigned int 或 sign int .
//2.位段的成员名后边有一个冒号和一个数字.

//位段是一种节省空间的做法
//比如

//struct A
//{
//  // 4byte -32bit	
//  int _a:2;  //表示a 只占用2个比特位
//  int _b:5;	 //表示b 只占用5个比特位
//  int _c:10; //表示c 只占用10个比特位
//  //32-17 = 15
//  //又再开创了4byte-32bit 
//  int _d:30; //表示d 只占用30个比特位
//	
//	//如果某些成员的取值范围非常有限，那么所需要的内存空间可以一定程度的减小
//	
//	
//};
//
//
////47 bit
////6byte - 48bit
////8byte - 64bit
//
////位段的内存分配
////1.位段的成员可以是 int unsigned int signed int 或者是char（整型家族）类型
////2.位段的空间上是按照需要以4个字节(int)或者1个字节(char)
////3.位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	
//}


//struct S
//{               //1byte
//	char a : 3; //8-3=5（剩下）
//	char b : 4; //5-4=1（剩下）  
//	
//	char c : 5; //1不够(浪费掉) 再开创1个byte 8-5=3(剩下)
//	char d : 4; //3不够(浪费掉) 再开创1个byte 总共3个byte
//	
//};
//
//int main()
//{
//	struct S s = {0};
//	           // 0110 0010     0000 0011    0000 0100
//			   // b(4位) a(3位)    c(5位)       d(4位)
//			   //   62            03           04     
//	s.a = 10;  //由于 a只用3个bit 所以10为 1010截断成 010
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//位段的跨平台问题
//1.int位段被当成有符号数还是无符号数是不确定的
//2.位段中最大位的数目不能确定.(16位机器最大16，32位机器最大32，写成27，在16位机器会出问题)
//3.位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
//4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用
//这是不是确定的。

//跟结构相比，位段可以达到同样的效果，可以很好的节省空间，但是有跨平台的问题存在。

//枚举 
//顾名思义就是列举
//枚举类型的定义

//enum Day
//{   //这里面都是枚举常量  而结构体是变量
//	Mon,  //都是逗号结尾 而结构体是分号
//	Tues,
//	wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//	
//};

//enum Day
//{   //这里面都是枚举常量  而结构体是变量
//	Mon=1,  //都是逗号结尾 而结构体是分号
//	Tues,
//	wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//	
//	
//};

//枚举的优点
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨。
//3.防止了命名污染(封装)
//4.便于调试
//5.使用方便，一次可以定义多个常量

// define M 100  define 就是替换 不方便调试

// int main()
//{
// int m = M ;	其实调试的时候 已经看不了M的值了 只能看到int m = 100; 不方便调试
//}
//

//默认情况下，枚举常量的值从 0 开始递增，
//除非显式指定。因此，在这个例子中，Mon 的值是 0，
//Tues 的值是 1，以此类推。

//int main()
//{
////	enum Day d = Fri;  //只能拿枚举常量给枚举变量赋值，才不会出现类型的差异
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

//联合(共用体)
//联合也是一种特殊的自定义类型
//这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间(所以联合也叫共用体)

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
//	u.c = 0x00;//这是一个字节别晕了 FF 256 1个字节 = 8个bit
//	
//
//	printf("%x\n",u.a);  //输出 0x11223300 内存是从低地址开始 所以 00换了44
//	
//	printf("%d\n",sizeof(u));  //4个字节
//	printf("%p\n",&u);  //共用体 都是同一个地址
//	printf("%p\n",&u.a);
//	printf("%p\n",&u.c);
//}

//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小(因为联合至少得有能力保存最大的那个成员)。

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//强制转换为一个字节 从内存低地址开始 
//
//}
//int check_sys()
//{
//	union un //如果只用一次 un可以去掉 u不用  (结构体匿名)
//	{
//		char c;
//		int i ;
//
//	}u;
//	
//	//  如果是小端 这内存低地址存储低字节 如果是大端则 低地址存储高字节
//	u.i = 1;     // 小端    01 00 00 00
//	return u.c;  // 大端    00 00 00 01
//	             //  低地址 把第一个字节拿出来判断就是了 联合是从低地址开始的
//	             //返回1是小端 返回0是大端
//	             
//}
//
//
//int main()
//{
////  int a = 1 // 0x 00 00 00 01
////  内存地址 低------->高
////           01 00 00 00 --小端存储 	
////           00 00 00 01 --大端存储
//	int ret = check_sys();
//
// 
//	if(ret ==1)
//	 printf("小端\n");
//	else
//	 printf("大端\n");
//}

//union un
//{                 //这里面最大的对齐数是4 
//    char arr[5];  //char arr[5]的对齐数是1
//	int i;        //所以必须是4的倍数 
//	              //联合体也存在内存对齐 
//};
//
//
//int main()
//{
//	printf("%d\n",sizeof(union un));  //这里为8
//	return 0;
//}


//union un
//{                 //这里面最大的对齐数是4  
//    short arr[7];  //short arr[7]的对齐数是1 short是两个字节
//	int i;        //所以必须是4的倍数 
//	              //联合体也存在内存对齐 
//};
//
//int main()
//{
//	printf("%d\n",sizeof(union un));  //这里为16
//	return 0;
//}

//动态内存管理

//malloc
//calloc
//realloc
//free


//int main()
//{
//	int a = 10;//4个字节  在栈空间上开辟四个字节
//	int arr[10];//40个字节 在栈空间上开辟10个字节的连续空间 内存大小没办法改变
//	return 0;
//}
//但是上述的开辟空间的方式有两个特点：
//1.空间开辟大小是固定的。
//2.数组在申明的时候，必须指定数组的长度，它所需要的内在
//在编译时分配
//但是对于空间的需求，不仅仅是上述的情况。有时候我们需要的空间
//大小在程序运行的时候才能知道
//那数组的编译时开辟空间的方式就不能满足了
//这时候只能试试动态内存开辟了

//动态内存函数的介绍
// malloc和free
// c语言提供了一个动态内存开辟的函数:

//void * malloc(size_t size);
//这个函数向内存申请一块 连续可用的空间，并返回指向这块空间的指针
//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//返回值的类型是void*,所以malloc函数并不知道开辟空间的类型，
//具体在使用者自己来决定
//如果参数size为0,malloc的行为是标准未定义的，取决于编译器。

//变长数组
// //C99标准支持的变长数组
// int n = 0;
// scanf("%d",&n);
//int arr2[n];
//


//int main()
//{
////	int arr[10] = {0};
//	//动态内存开辟
////	int* p =(int *)malloc(INT_MAX); 这个会爆 Not enough space
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
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间的
//	
//	free(p);
//	
//	p=NULL;
//	
//	return 0;
//}







//free 专门用来做动态内存的释放和回收的，函数原型如下:
//free 函数用来释放动态开辟的内存
//如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义。
//如果参数ptr是NULL指针，则函数什么事都不做
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


//开辟10个整型空间
//calloc 函数的功能是num个大小为size的元素开辟一块空间,并且把
//空间的每个字节初始化为全0.
//与函数malloc 的区别只在于calloc会在返回地址之前把申请的空间
//的每个字节初始化为全0
//calloc 可以理解为 calloc = malloc+memset

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

//realloc函数的出现让动态内存管理更加灵活
//有时我们会发现过去申请的空间调小了,有时我们又会觉得申请的空间过大了
//为了合理的使用内存,我们一定会对内存的大小做灵活的调整.那realloc
//函数就可以做到对动态开辟内存大小的调整
//void* realloc(void * prt,size_t size)
//prt是要调整的内存地址
//size 调整之后的大小
//返回值为调整之后的内存起始位置
//这个函数调整原内存空间大小的基础上,还会将原来内存中的数据
//移到新的空间
//realloc在调整内存空间的是存在两种情况:
//情况1:原有空间之后有足够大的空间
//情况2:原有空间之后没有足够大的空间
//当是情况1的时候,要扩展内存就直接原有内存之后直接修改空间，原来得空间数据不发生变化
//当是情况2的时候，原有空间之后没有足够多的空间时，扩展的方法：
//在堆空间上另找一个合适大小的连续空间来使用。这样函数返回的是一个新的内存地址。

//由于上述的两种情况，realloc函数的使用就要注意一些。
//int main()
//{
//	int * p =(int*)malloc(40);
//	if(NULL == p)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for(i = 0; i<10;i++)
//	{
//		*(p+i) = i+1;
//	}
//	//扩容
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

//常见的动态内存的错误
//1.对NULL指针的解引用操作

//int main()
//{
//	int *p = (int*)malloc(40);
//	*p=20; //这里如果p的值是null，就有问题 要判断是不是空指针
//	free(p);
//	
//}
//正确的做法

//int main()
//{
//	int *p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 1;  //如果是空的 就返回就不会执行下面的语句
//	}
//	*p = 20;    
//	free(p);   //记得释放
//	p=NULL;    //记得赋值为空指针.
//	return 0;
//}

//2.对动态开辟空间的越界访问
//int main()
//{
//	int *p =(int*)malloc(40);
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	int i = 0;
//	for(i = 0; i<=10;i++)   //这里为10会越界 会出现问题
//	{
//		p[i] = i;
//	}
//	free(p);
//	p=NULL;
//	
//	
//	return 0;
//}

//3.对非动态开辟内存使用free释放

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	//....
//	
//	free(p); //会报错
//	p=NULL;
//	
//	return 0;
//}

//4.使用free释放一块动态开辟内存的一部分

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
//		p++;  // 这里p指向的都不是起始的位置了
//	}
//	free(p);  //所以释放p就会报错
//	          //可以改成p[i]或者*(p+i)
//	p = NULL;
//}

//5.对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//	free(p);
//	p = NULL;
//	//....
//	free(p); //会报错
//	return 0;
//}

//6.动态开辟内存忘记释放(内存泄露)

//void test()
//{
//	
//	int *p = (int *)malloc(100);
//	
//	int flag = 0;
//	scanf("%d\n",&flag);//5
//	if(flag == 5) return; //如果真的等于5 那就不会执行下面的释放内存和赋值空指针，就会造成内存泄露。
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

//动态内存经典例题
//1.

//void GetMemory(char* p)  //这里是形参
//{
//	p = (char*)malloc(100);  //没有释放内存并且没有赋值NULL
//	                         //内存泄露
//}
//void Test(void)
//{
//	char* str = NULL;  
//	GetMemory(str);   //这里给的是形参 而不是&str的地址
//	strcpy(str,"hello world");
//	printf(str);	//str是NULL 解引用会崩溃
//}
//
//int main()
//{
//	Test();
//	return 0;
//	
//}

//正确的做法

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
//	//释放
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


//另外一种解法
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
//	//释放
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

//以下程序有什么问题
//int *f1(void)
//{
//	int x = 10;
//	return (&x); // x被销毁之后  野指针  静态开辟的内存会被销毁 动态内存的话 要手动释放
//}
//
//int *f2(void)
//{
//	int * ptr;  //ptr 甚至初始化没有赋值NULL
//	*ptr = 10;
//	return prt;  //野指针
//}

//char * GetMemory(void)
//{
//	char p[] = "hello world"; //局部变量 都是放栈区上的 返回栈区空间地址的问题一栈区都是临时的
//	return p ; //数组 局部变量  出去就会销毁 可以用malloc 或者 char* p(常量字符串 只可读)
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(); //因为p被销毁了 所以这个是野指针
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


//malloc 在堆区分配内存，局部变量在栈区分配内存。
//在 C 语言中，内存分为两种类型：堆内存和栈内存。堆内存是由程序员手动管理的，
//可以通过 malloc 等函数来分配和释放。堆内存的大小可以在运行时动态调整，而且可以分配任意大小的内存块。但是，由于堆内存是由程序员手动管理的，如果忘记释放内存或者释放了错误的内存，就可能导致内存泄漏或访问无效的内存。
//相反，栈内存是由编译器自动管理的，每次进入一个函数时，
//都会在栈上分配一些内存来存放局部变量和其他临时数据。当函数退出时，
//这些内存会被自动释放。栈内存的大小有限，通常是几兆字节，而且不能动态调整。
//但是，由于栈内存是由编译器自动管理的，所以不容易出现内存泄漏或访问无效的内存的问题。
//总之，如果你需要动态分配内存并且不确定何时释放它，应该使用 malloc 等函数来分配内存。
//如果你只需要在函数内部使用一些临时数据，应该使用局部变量，这样可以避免内存泄漏和访问无效的内存。
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
//	//没有释放内存
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
//	//加上这个 str = NULL;就不会执行下面的语句了
//	if(str != NULL) //野指针了
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


//求最大公约数和最小公倍数之和

//用辗转相除法 求最大公约数
//利用公式法求出最小公倍数
//两个数的乘积等于这两个数的最大公约数与最小公倍数的积
//所以最小公倍数就等于 两个数的乘积除以最大公约数
//例如 10 20
//      30
// 12  18 最大公约数是6 最小公倍数是36 和就是42
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


//输出"空心"正方图案

//输入一个数字 代表行数 也代表正方形*的数量

// 例如  4
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

//柔性数组
//C99中 结构体中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员

//例如：

//typedef struct st_type
//{
//     int i ;
//     int a[0];
//}type_a;

//有些编译器会报错无法编译可以改成:
// typedef struct st_type
// {
//   int i;
//	 int a[];  //柔性数组成员
// }type_a;

//结构中的柔性数组成员前面必须至少一个其他成员
//sizeof返回的这种结构大小不包括柔性数组的内存
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配
//并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//struct s
//{
//	int n;
//	int arr[]; //柔性数组成员
//};
//int main()
//{
////	int sz = sizeof(struct s);  //算出来字节是4 说明不包括柔性数组
////	printf("%d\n",sz);
//	
//	//柔性数组的使用
    //用malloc是为了把结构体一起放在堆上 
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
//	//如果觉得不够还可以再加内存 这就是柔性数组
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

//一般的动态内存开辟方法 这里的arr不是柔性数组  
//柔性数组内存都是连续的 内存碎片的可能性就很低

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

//C语言文件操作

//1.为什么使用文件

//数据信息记录下来，只有我们自己选择删除数据的时候
//数据才不复存在，一般数据持久化的方法有，把数据存放在磁盘文件、
//存放到数据库等方式。
//使用文件我们可以将数据直接存放在电脑的硬盘上
//做到了数据的持久化

//2.什么是文件

//磁盘上的文件是文件。

//但是在程序设计中，我们一般谈的文件有两种: 程序文件、数据文件
//(从文件功能的角度来分类的)

//2.1程序文件
//包括源程序文件(.c),目标文件(.obj),可执行程序(.exe)

//2.2数据文件
//文件的内容不一定是程序，而是程序运行时读写的数据，比如程序
//运行需要从中读取数据的文件，或者输出内容的文件
//其实有时候我们会把信息输出到磁盘上，当需要的时候
//再从磁盘上把数据读取到内存中使用，这里处理的就是磁盘
//上的文件

//2.3文件名
//一个文件要有一个唯一的文件标识，以便用户识别和引用。
//文件名包含3部分: 文件路径+文件名主干+文件后缀
//例如: C:\code\test.txt
//为了方便起见，文件标识常被称为文件名。

//3.文件的打开和关闭
//3.1文件指针
//缓冲文件系统中，关键的概念是"文件类型指针"，简称"文件指针"。
//每个被钟用的文件都在内存中开辟了一个相应的文件信息区，
//用来存放文件的相关信息(如文件的名字，文件状态及文件当前的位置等)。
//这些信息是保存在一个结构体变量中的。该结构体类型是有
//系统声明的，取名FILE

//操作文件过程

//打开文件
//读/写-操作文件
//关闭文件

//每当打开一个文件的时候，系统会根据文件的情况自动创建
//一个FILE结构的变量，并填充其中的信息，使用者不必关系细节
//一般都是通过一个FILE的指针来维护这个FILE结构的变量
//这样使用起来更加方便

//定义pf是一个指向FILE类型数据的指针变量。可以使pf指向
//某个文件的文件信息区(是一个结构体变量).通过该文件信息区
//中的信息能够访问该文件。也就是说，通过文件指针变量能够
//找到与它关联的文件。

//3.2文件的打开和关闭
//文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。
//在编写程序的时候，在打开文件的同时，都会返回一个FILE *
//的指针变量指向该文件，也相当于建立了指针和文件的关系。

//ANSIC规定是用fopen函数来打开文件，fclose来关闭文件。

//打开文件

// FILE * fopen(const char * filename,const char* mode);

//关闭文件  如果不关闭文件可能会丢失文件

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
//	//读文件      
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	
//	
//}

//写单个字符
//int main()
//{
//	FILE * pf = fopen("test.txt","w");
//	if( pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//写文件
////	fputc('a',pf);  //fputc 写单个字符
//	
//	char i = 0;
//	for(i = 'a';i<='z';i++)
//	{
//		fputc(i,pf);
//	}
//	//关闭文件
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//读单个字符

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	//读文件
////	int ch = fgetc(pf);
////	printf("%c\n",ch);
////	 ch = fgetc(pf);   //继续获取它会获取到下一个字节
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
//	//关闭文件
//	fclose(pf);
//	pf=NULL;
//	
//	return 0;	
//}

//写一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	
//	//写一行数据
//	fputs("hello bit\n",pf);
//	fputs("hello bit\n",pf);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//读一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		//printf("%s\n",strerror(errno));
//		perror("fopen"); //另一种输出错误类型的写法 更简洁
//		return 1;
//	}
//	char arr[20];
//	fgets(arr,5,pf);//真正读到的数据是只有4个 后面一个是换行符
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
//	struct S s = {"zhangsan",25,50.5f}; //加f确认 float类型 不加默认double类型
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
//	struct S s = {0}; //加f确认 float类型 不加默认double类型
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
//	fprintf(stdout,"%s %d %f",s.arr,s.age,s.scorce);  //输出流
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//	
//	
//}

//
//流
//FILE * 
//
//printf
//scanf
//
//任何一个C程序，只要运行起来就会默认打开3个流
//FILE * stdin - 标准输入流(键盘)
//FILE * stdout - 标准输出流(屏幕)
//FILE * stderr - 标准错误流(屏幕)


//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};

//int main()
//{
//	struct S s = {"zhangsan",25,50.5f};
//	//以二进制的形式写到文件中
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
//	//以二进制的形式读文件
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
scanf 是针对标准输入的格式化输入语句
printf 是针对标准输出的格式化输出语句

fscanf 是针对所有输入流的格式化输入语句
fprintf 是针对所有输出流的格式化输出语句

sscanf 是从一个字符串中转化成一个格式化的数据
sprintf  是把一个格式化的数据转化成字符串

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
//	sprintf(buf,"%s %d %f",s.arr,s.age,s.score);  //把s中的格式化数据转换成字符串
//	printf("%s\n",buf);
//	
//    sscanf(buf,"%s %d %f",tmp.arr,&(tmp.age),&(tmp.score));//从字符串buf中获取一个格式化的数据到tmp中
//	printf("%s %d %f\n",tmp.arr,tmp.age,tmp.score);
//}

//读字符
//文件的随机读写
//fseek
//根据文件指针的位置和偏移量来定位文件指针（文件内容的光标）。
//ftell
//返回文件指针相对于起始位置的偏移量
//rewind
//让文件指针的位置回到?件的起始位置

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	//读文件
//	//定位文件指针
//	
//	fseek(pf,2,SEEK_SET);  //seek_set 设定位置
//	
//	int ch = fgetc(pf);
//	printf("%c\n",ch); //读到c 是2 后自动+1 所以是3 
//	printf("%d\n",ftell(pf));
////	fseek(pf,2,SEEK_CUR);  //seek_cur 执行完后的位置  seek_set后
////	
////	 ch = fgetc(pf);
////	printf("%c\n",ch);
//
//	fseek(pf,-1,SEEK_END); //指针最后的位置
//	 ch = fgetc(pf);  	
//	printf("%c\n",ch);	
//    printf("%d\n",ftell(pf));
//
//	rewind(pf);  //回到起始位置
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

ptr：指向要写入数据的内存区域的指针。
size：每个元素的大小（以字节为单位）。
nmemb：要写入的元素的数量。
stream：指向已经打开的文件流的指针。


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

文件读取结束的判定
被错误使用的 feof
牢记：在文件读取过程中，不能用feof函数的返回值直接来判断文件是否结束。
feof 的作用是：当文件读取结束的时候，判断是读取结束的原因是否是：遇到文件尾结束。
1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
例如：
fgetc 判断是否为 EOF .
fgets 判断返回值是否为 NULL .

2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
例如：
fread判断返回值是否小于实际要读的个数。



*/


//VS2022 WIN11环境测试
//int main()
//{
// FILE*pf = fopen("test.txt", "w");
// fputs("abcdef", pf);//先将代码放在输出缓冲区
// printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
// Sleep(10000);
// printf("刷新缓冲区\n");
// fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
// //注：fflush 在?版本的VS上不能使?了
// printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
// Sleep(10000);
// fclose(pf);
// //注：fclose在关闭文件的时候，也会刷新缓冲区
// pf = NULL;
// return 0;
//}




/*
因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件
如果不做，可能导致读写文件的问题。

*/

/*
__FILE__        //进行编译的源文件
__LINE__        //文件当前的符号
__DATE__        //文件被编译的日期
__TIME__        //文件被编译的时间
__STDC__        //如果编译器遵循ANSI C,其值为1,否则未定义
*/


//预处理

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
//	 	fprintf(pf,"File:%s Line=%d,date=%s,time=%s,i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i); //现在是在当前main.c编译 第6537行 目前的编译日期2024.11.12 编译时间pm2.30
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

// #define 机制包括了一个规定，运行把参数替换到文本中，这种实现通常称为宏或定义宏

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
//		CASE 2: //代替了 break;case
//		CASE 3:
//		CASE 4:
//		break;
//		
//	}
//	return 0;
//	
//	
//}


/* 这个是续航符 代替换一行的回车   续航符 后面不能其他东西 空格也不行 */
/*#define DEBUG_PRINT printf ("File:%s Line=%d,date=%s,time=%s,i=%d\n",\
__FILE__,\
__LINE__,\
__DATE__,\
__TIME__)*/

/*
#define name(parament-list) stuff
其中的parament - list 是一个由逗号隔开的符号表,他们可能出现在stuff中

注意
参数列表的左括号必须与name紧邻
如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分
*/

          
//有这种参数 不要吝啬括号

//#define SQUARE(X) ((X)*(X))
//
//
//
//int main()
//{
////	int r = SQUARE(5);
//    int r = SQUARE(5+1);	//如果是 #define SQUARE(X) X*X 则出来的是5+1*5+1 == 11而不是36
//	printf("%d\n",r);
////	printf("222");
//	return 0;
//}


//#define DOUBLE(X)  ((X)+(X))

//int main()
//{
////	int r = DOUBLE(3*2);   //(3*2)+(3*2)
//	
//	/*如果不加整体括号 ((X)+(X))*/
//	int  r = 10*DOUBLE(3); // 10*3+3 = 33
//	
//	printf("%d\n",r);
//	
//	return 0;
//	
//}

//宏参数和#define定义中可以出现其他#define定义的符号。但是对于宏，不能出现递归。
//当预处理搜索#define定义的符号的时候，字符串常量的内容并不被搜索

//#define M 100
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	// "M" //字符串常量不搜索
//	//"DOUBLE(3)";
////	DOUBLE(100+2);
////	((100+2)+(100+2));
////	return 0;
//}

//如何把参数插入到字符串中

//#define PRINT(N) printf("the value of "#N" is %d\n",N)

//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N)
//int main()
//{
////	printf("hello world\n");
////	printf("hello ""world\n");
//	
//	int a = 10;
//	PRINT(a,"%d");
//	//printf("the value of""a"" is %d\n",a)  //#N可以把参数转换成对应的字符串
////	printf("the value of a is %d\n",a);
//	
//	float f = 3.14f;
//	PRINT(f,"%lf");
//	
////	int b = 20;
////	PRINT(b);
//	//printf("the value of""b"" is %d\n",b)  //#N可以把参数转换成对应的字符串
//	//printf("the value of b is %d\n",b);
//	
//	return 0;
//}

#define MAX(x,y) ((x)>(y)?(x):(y))
//宏是完全替换
//带副作用的宏参数
//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，
//那么你在使用这个宏的时候就可能出现危险，导致不可预测的后果。
//副作用就是表达式求值的时候出现的永久性效果，

//例如
// x+1 不带副作用
// x++ 带有副作用

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

//宏和函数对比
//为什么不用函数来完成这个任务？

//原因有二：
//1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。
//所以宏比函数在程序的规模和速度方面更胜一筹。

//2.更为重要的是函数的参数必须声明为特定的类型。
//所以函数只能在类型合适的表达式上使用。反之这个宏可以适用于整型、
//长整型、浮点型等可以用来>来比较的类型。
//宏是类型无关的。

//宏的缺点：当然和函数相比宏也有劣势的地方：

//1.每次使用宏的时候，一份宏定义的代码将插入到程序中
//除非宏比较短，否则可能大幅度增加程序的长度。
//2.宏是没法调试的。
//3.宏由于类型无关，也就不够严谨。
//4.宏可能会带来运算符优先级的问题，导致程序容易出错。

//宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型
//但是函数做不到

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

//命名规定
//把宏名全部大写
//函数名不要全部大写


// #undef
// 这条指令用于移除一个宏定义

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

//条件编译
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
#if 常量表达式
 //...
#endif
//常量表达式由预处理器求值。
如：
#define __DEBUG__ 1
#if __DEBUG__
 //..
#endif
2.多个分?的条件编译
#if 常量表达式
 //...
#elif 常量表达式
 //...
#else
 //...
#endif
3.判断是否被定义
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol

*/

/*
#ifndef __TEST_H__  //如果没有定义 那么就定义 后面再遇到包含这个文件 就不用再定义了
#define __TEST_H__  //防止头文件被重复多次包含

int Add(int x,int y);

#endif

另外一种写法

#pragma once

int Add(int x,int y);



*/
/*
<>和""的区别是查找的策略不同
#include<stdio.h>
<>查找策略:直接去库目录下查找

#include "test.h"

""查找策略：
1.先去代码所在的路径下查找
2.如果上面找不到，再去库目录下查找

*/
/*
offsetof经常用于结构体变量中，
用于计算结构体中某个成员的地址相对于该结构体起始地址的偏移量。

宏 offsetof(type, member) 会返回一个类型为 size_t 的整型常量，
该常量是一个结构体成员相对于结构体开头的字节偏移量。
成员是由 member给定的，结构体的名称是在 type 中给定的

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




//隔60天算法

//// 定义日期结构体
//struct Date 
//{
//    int year;
//    int month;
//    int day;
//};
//
//// 判断是否为闰年
//bool isLeapYear(int year) 
//{
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//// 获取一个月的天数
//int getDaysInMonth(int year, int month)
//{
//    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    return month == 2 && isLeapYear(year) ? 29 : daysInMonth[month - 1];
//}
//
//// 添加天数到日期
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


//特殊的声明

//这两个声明确实容易混淆，让我详细解释一下它们的区别：
//
//1. `int (*a[10])(int);`
//   这个声明表示`a`是一个数组，数组的长度为10，数组中的每个元素都是一个指针，这些指针指向的函数接受一个整数参数并返回一个整数。所以，`a`直接就是一个包含10个函数指针的数组。
//

//声明一个指向含有10个元素的数组的指针，其中每个元素都是一个函数指针，该函数的返回值是int，参数是int*


//2. `int (*(*a)[10])(int);`
//   这个声明更加复杂。这里，`a`首先是一个指针，这个指针指向的是一个数组（长度为10），而那个数组的每个元素又是一个指针，这些最终的指针指向的才是接受一个整数参数并返回整数的函数。也就是说，`a`首先指向的是一个数组的地址，这个被指向的数组才是包含函数指针的。
//
//总结：
//- 在第一个声明中，`a`直接是一个数组，数组的元素是函数指针。
//- 在第二个声明中，`a`是一个指针，它指向的是一个数组，而那个被指向的数组的元素才是函数指针。
//
//这两个声明的关键区别在于`a`本身的层次：第一个是直接的数组，第二个是通过指针间接访问的数组。
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
//	int sz = sizeof(s[0]);   //struct A 总共12个字节 4 1 4 12 1    25不够4的倍数 28
//	int sz1 = sizeof(s1[0]); //struct B 总共8个字节  4 1 4 8 1     21不够4的倍数 24 
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
//	//交换两个数的位置 异或交换
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
//    strcpy(pp[0].name,"辛弃疾");  //目前不了解
//    strcpy(pp[1].name,"李白");  //目前不了解
//    strcpy(pp[2].name,"杜甫");  //目前不了解
//    strcpy(pp[3].name,"贺知章");  //目前不了解
//    strcpy(pp[4].name,"苏轼");  //目前不了解
//    strcpy(pp[5].name,"李清照");  //目前不了解
//    strcpy(pp[6].name,"李商隐");  //目前不了解
//    strcpy(pp[7].name,"杜牧");  //目前不了解
//    strcpy(pp[8].name,"刘禹锡");  //目前不了解
//    strcpy(pp[9].name,"孟浩然");  //目前不了解
////	for(int i=0;i<5;i++)
////	{
////		scanf("%s",pp[i].name);
////		//TODO
////	}
//		
////	data = rand()%10;
//	
//    printf("三等奖\n");
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
//	printf("\n二等奖\n");
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
//		printf("\n一等奖\n");
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

// 0 1 2 -1 14个
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
//// 定义RTC时钟句柄
//RTC_HandleTypeDef hrtc;
//
//// 定义用于保存日期的变量
//RTC_DateTypeDef currentDate;
//RTC_DateTypeDef previousDate;
//
//// 判断一天时间过去了
//uint8_t isOneDayPassed(void)
//{
//    // 获取当前日期
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // 读取上一次的日期
//    HAL_RTC_GetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//
//    // 如果日期发生变化，则说明一天时间过去了
//    if (currentDate.Date != previousDate.Date ||
//        currentDate.Month != previousDate.Month ||
//        currentDate.Year != previousDate.Year)
//    {
//        previousDate = currentDate; // 更新上一次的日期为当前日期
//        return 1; // 返回一天时间过去了
//    }
//
//    return 0; // 返回一天时间没有过去
//}
//
//// 判断一个月时间过去了
//uint8_t isOneMonthPassed(void)
//{
//    // 获取当前日期
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // 读取上一次的日期
//    HAL_RTC_GetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//
//    // 如果月份发生变化，则说明一个月时间过去了
//    if (currentDate.Month != previousDate.Month ||
//        currentDate.Year != previousDate.Year)
//    {
//        previousDate = currentDate; // 更新上一次的日期为当前日期
//        return 1; // 返回一个月时间过去了
//    }
//
//    return 0; // 返回一个月时间没有过去
//}
//
//// 在断电情况下保存RTC日期到备份寄存器
//void saveRtcDateToBackupReg(void)
//{
//    // 获取当前日期
//    HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
//
//    // 写入日期到RTC备份寄存器
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR1, currentDate.Date);
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR2, currentDate.Month);
//    HAL_RTCEx_BKUPWrite(&hrtc, RTC_BKP_DR3, currentDate.Year);
//}
//
//// 在上电情况下从备份寄存器恢复RTC日期
//void restoreRtcDateFromBackupReg(void)
//{
//    // 读取日期从RTC备份寄存器
//    previousDate.Date = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR1);
//    previousDate.Month = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR2);
//    previousDate.Year = HAL_RTCEx_BKUPRead(&hrtc, RTC_BKP_DR3);
//
//    // 设置RTC日期
//    HAL_RTC_SetDate(&hrtc, &previousDate, RTC_FORMAT_BIN);
//}
//使用方法：
//
//首先，你需要正确配置并初始化STM32的RTC时钟。
//在断电之前，调用saveRtcDateToBackupReg()函数将RTC日期保存到备份寄存器中。
//在上电并初始化RTC时钟之后，调用restoreRtcDateFromBackupReg()函数从备份寄存器中恢复RTC日期。
//在适当的位置调用isOneDayPassed()函数可以判断一天时间是否已经过去。
//在适当的位置调用isOneMonthPassed()函数可以判断一个月时间是否已经过去。
//#include "stm32f4xx_hal.h"
//RTC_HandleTypeDef hrtc;
//RTC_TimeTypeDef previous_time;
//RTC_DateTypeDef previous_date;
//// 在程序的初始化部分，调用此函数来初始化RTC模块和时间变量
//void Initialize_RTC(void) {
//    // ... RTC 初始化代码 ...
//    // 这里的代码假设RTC已经在别的地方被正确设置
//    HAL_RTC_GetTime(&hrtc, &previous_time, RTC_FORMAT_BIN);
//    HAL_RTC_GetDate(&hrtc, &previous_date, RTC_FORMAT_BIN);
//}
//// 判断一天时间是否过去了
//void CheckDayPassed(void) {
//    RTC_TimeTypeDef current_time;
//    RTC_DateTypeDef current_date;
//    // 获取当前时间和日期
//    HAL_RTC_GetTime(&hrtc, &current_time, RTC_FORMAT_BIN);
//    HAL_RTC_GetDate(&hrtc, &current_date, RTC_FORMAT_BIN);
//    // 判断是否是新的一天
//    if ((current_date.Date != previous_date.Date) ||
//        (current_date.Month != previous_date.Month) ||
//        (current_date.Year != previous_date.Year)) {
//        // 一天过去了
//        // 执行需要的操作
//        // 更新previous_time和previous_date
//        previous_time = current_time;
//        previous_date = current_date;
//    }
//}
//// 判断一个月时间是否过去了
//void CheckMonthPassed(void) {
//    RTC_DateTypeDef current_date;
//    // 获取当前日期（时间不必要）
//    HAL_RTC_GetDate(&hrtc, &current_date, RTC_FORMAT_BIN);
//    // 判断是否是新的一个月
//    if ((current_date.Month != previous_date.Month) ||
//        (current_date.Year != previous_date.Year)) {
//        // 一个月过去了
//        // 执行需要的操作
//        // 更新previous_date（时间同步更新）
//        previous_date = current_date;
//    }
//}
