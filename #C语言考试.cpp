#include<stdio.h>
#include<math.h>
#include<string.h>
/*
int main()
{
	float a,b,c,s,area;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%7.2f\n",area);
    printf("a=%7.2f\nb=%7.2f\nc=%7.2f\n",a,b,c);
	return 0;
}
*/
/*
int main()
{
	float a,b,c,s,area;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%7.2f\nb=%7.2f\nc=%7.2f\n",a,b,c);
    printf("%7.2f",area);
	return 0;
}
*/
/*
int main()
{
	double a,b,c,x1,x2,q,p,disc;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	p=(-b)/(2.0*a);
	q=sqrt(disc)/(2.0*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);	
	return 0;
}
*/
/*
int main()
{
	double a,b,c,p,q,x1,x2,disc;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)
	{
		printf("无根"); 
	}
	else
	{
	    p=b/(-2*a);
		q=sqrt(disc)/(-2*a);
		x1=p+q;
		x2=p-q;
		printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	
	}
	return 0;
}
*/
/*
int main()
{
	char c1,c2;
	c1=getchar();
	c2=c1+32;
	putchar(c1);
	putchar(c2);
	return 0;
}
*/
/*
int main()
{
	char c1,c2;
	c1=getchar();
	c2=c1+32;
	putchar(c1);
	putchar('\n');
	putchar(c2);	
	return 0;
}
*/
/*
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		t=a;
		b=a;
		a=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%d %d %d",a,b,c);
	
	return 0;
 } */
 /*
 int main()
 {
 	int x,y;
 	scanf("%d",&x);
 	if(x<0)  y=-1;
 	else
		if(x==0)
		y=0;
		else
		y=1;
	printf("%d",y);	 	
 	return 0;
 }
 */
 /*
 int main()
 {
 	int x,y;
 	scanf("%d",&x);
 	if(x>=0)
 		if(x==0) y=0;
 		else y=1;
 	else
 		y=-1;
 		printf("%d",y);
 	return 0;
 }*/
 /*
 int main()
 {
 	char guard;
 	scanf("%c",&guard);
 	switch(guard)
 	{
 		case'A':printf("85~100\n"); break;
 		case'B':printf("70~84\n"); break;
 		defaut:printf("错误");
	 }
 	printf("%c",guard);
 	
 	return 0;
 }
*/
/*
int main()
{
	char guard;
	scanf("%c",&guard);
	switch(guard)
	{
		case 'A':printf("85~100\n"); break;
		case 'B':printf("75~84\n");  break;
		defaut:printf("错误");
	}
	
	return 0;
}
*/
 /*
int main()
{
	int year,leap=0;
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0) leap=1;
			else leap=0;
		}
		else leap=1;
		
	}
	else leap=0;  
	
	if(leap)
	{
		printf("闰年"); 
	}
	else
		printf("不是闰年"); 
	
	return 0;
}
*/
/*
int mian()
{
	int year,leap;
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0)
	printf("闰年");
	else
	printf("不是闰年");
	return 0;
}*/
/*
int main()
{
	char ch;
	scanf("%c",&ch);
	ch=(ch>'A' && ch<'Z'?(ch+32):ch);
	printf("%c\n",ch);
	return 0;
}*/
/*
int main()
{
	int c,s;
	float p,w,d,f;
	scanf("%f%f%d",&p,&w,&s);
	if(s>=3000) c=12;
	else c=s/250;
	switch(c)
	{
		case 0:d=0; break;
		case 1:d=2; break;
		case 2:
		case 3:d=5; break;
		case 4:
		case 5:
		case 6:
		case 7:d=8; break;
		case 8:
		case 9:
		case 10:
		case 11:d=10;break;
		case 12:d=15;break;	
	}
	f=p*w*s*(1-d/100);
	printf("%7.2f",f);
	return 0;
}
*/
/*
int main()
{
	int c,s,d;
	float p,w,f;
	scanf("%f%f%d",&p,&w,&s);
	if(s>=3000) c=12;
	else c=s/250;
	switch(c)
	{
		case 0:d=0; break;
		case 1:d=2; break;
		case 2:
		case 3:d=5; break;
		case 4:
		case 5:
		case 6:
		case 7:d=8;break;
		case 8:
		case 9:
		case 10:
		case 11:d=10;break;
		case 12:d=15;break;
			
	}
	f=p*w*s*(1-d/100);
	printf("%7.2f",f);
	
	
	
	return 0;
}
*/
/*
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+6;
		i++;
	}
	printf("%d",sum);
	return 0;
}*/
/*
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+6;
		i++;
	}
	printf("%d",sum);
	return 0;
}*/

/*
int main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+6;
		i++
	}while(i<=100);
	printf("%d",sum);
	return 0;
}*/
/*
int main()
{
	int i=1,sum=0;
	for(i=1;i<=100;i++)
	{
		sum=sum+6;
	}
	printf("%d",sum);
	return 0;
}*/
/*
int main()
{
	int x;
	do
	{
		scanf("%d",&x);
		if(x<=0) continue;
		printf("%d\n",x);
	}while(x!=100);
	printf("程序结束");
	
	return 0;
}*/
/* 
int main()
{
	int x;
	while(x!=100)
	{
		scanf("%d",&x);
		if(x<=0) continue;
		printf("%d\n",x);
	}
	printf("程序结束");
	
	return 0;
 } 
 */
 /*
 int main()
 {
 	int i,m,k,n=0;
 	for(m=101;m<300;m=m+2)
 	{
 		k=sqrt(m);
 		for(i=2;i<=k;i++)
 		if(m%i==0)  break;
	 
    	if(i>=(k+1))
 	    {
 		printf("%d\n",m);
 	    n++;
        }
    }
    printf("%d",n);
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	int k,i,n=0,m;
 	for(m=101;m<=300;m++)
 	{
 		k=sqrt(m);
 		for(i=2;i<=k;i++)
 		if(m%i==0) break;
 		if(i>=k+1)
 		{
 			n++;
 			printf("%d\n",m);
		 }
	 }
	 printf("%d\n",n);
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	int n;
 	for(n=0;n<=200;n++)
 	{
 		if(n%3==0)
 		continue;
 		else
 		printf("%d\n",n);
	 }
 }*/
 /*
 int main()
 {
 	int i;
 	for(i=0;i<10;i++);
 	printf("%d\n",i);
 	return 0;//结果是10； 
 }*/
 /*
 int main()
 {
 	int i,j,n;
 	for(i=1;i<=4;i++)
 	{
 		for(j=1;j<=5;j++,n++)
 		{
		printf("%d\t",i*j);
 		if(n%5==0)
 		printf("\n");
    	}
	 }
	 printf("\n");
	 for(i=1;i<=4;i++)
	 {
	 	for(j=1;j<=5;j++,n++)
	 	{
	 		if(i==3) break;
	 		printf("%d\t",i*j);
	 		if(n%5==0)
 		    printf("\n");
		 }
	 }
	 printf("\n");
	 for(i=1;i<=4;i++)
	 {
	 	for(j=1;j<=5;j++,n++)
	 	{
	 		if(i==3&& j==1) continue;
	 		printf("%d\t",i*j);
	 		if(n%5==0)
 		    printf("\n");
		 }
	 }
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	float t=1,pi=0,n=1;
 	int s=1;
 	while(fabs(t)>=1e-6)
 	{
 		pi=pi+t;
 		n=n+2;
 		s=-s;
 		t=s/n;
	 }
 	pi=pi*4;
 	printf("%10.6f",pi);
 	return 0;
 }
 */
 /*
 int main()
 {
 	float t=1,n=1,pi=0;
 	int s=1;
 	while(fabs(t)>=1e-6)
 	{
 		pi=pi+t;
 		s=-s;
 		n=n+2;
 		t=s/n;
	 }
 	pi=pi*4;
 	printf("%10.6f",pi);
 	return 0;
 }
 */
/* 
 int main()
 {
 	int f1=1,f2=1,f3;
 	int i;
 	printf("%12d\n%12d\n",f1,f2);
 	for(i=0;i<=38;i++)
 	{
 		f3=f1+f2;
 		printf("%12d\n",f3);
 		f1=f2;
 		f2=f3;
 		
	 }
 	
 	
 	return 0;
 }*/
 
 /*
 int main()
 {
 	int f1,f2,f3;
 	f1=1;
 	f2=1;
 	printf("%d\n%d\n",f1,f2);
 	for(int i=1;i<=38;i++)
 	{
 		f3=f1+f2;
 		f1=f2;
 		f2=f3;
 		printf("%d\n",f3);
	 }
 	
 	
 	
 	return 0;
 }
 */
 /*
 int main()
 {
 	int f1,f2;
 	int i;
 	for(i=1;i<=20;i++)
 	{
 		printf("%12d\t%12d\t",f1,f2);
 		if(i%2==0)
 		printf("\n");
 		f1=f1+f2;  //f1=1 f2=2    f1=f3=f1+f2=3 f4=f2+f3=f2+f1
 		f2=f2+f1;
	 }
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	int f1,f2,i;
 	f1=1; f2=1;
 	for(i=1;i<=20;i++)
 	{
 		printf("%12d%12d",f1,f2);
 		if(i%2==0)
 		printf("\n");
 		f1=f1+f2;
 		f2=f2+f1;
 		
	 }
 */
 /*
 int main()
 {
 	char c;
 	c=getchar();
 	printf("%c",c);
 	while(c!='\n')
	 {  
	 	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	 	{
	 		if((c>='w'&&c<='z')||(c>='W'&&c<='Z'))
	 		{
	 			c=c-22;
			 }
	 		else
	 		c=c+4;
	 		
		 }
 		
 	 printf("%c",c);	
 	 c=getchar();
	 }
 	return 0;
 }
 */
 /*
 int main()
 {
 	char c;
 	c=getchar();
 	while((c=getchar())!='\n')
 	{
 		if((c>='a'&&c<='z')||(c>='A')&&(c<='Z'))
 		{
 			if((c>='w'&&c<='z')||(c>='W'&&c<='Z'))
 			{
 				c=c-22;
			 }
			 else
			 c=c+4;
		 }
		 printf("%c",c);
	 }
 	
 	
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	
 	int arr[50]={0};
 	int i,j,n,t;
 	n=10;
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);//不要忘记取地址符 
	 }
	 for(j=0;j<n-1;j++)
	 {
	 	for(i=0;i<n-1-j;i++)
	 	{
	 		if(arr[i]>arr[i+1])
	 		{
	 		     t=arr[i];
	 		     arr[i]=arr[i+1];
	 		     arr[i+1]=t;
			 }
		 }
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
 	return 0;
 }
 */
 /* 
 int main()
 {
 	int a[40];
 	int i,j,t;
 	int n;
 	n=10;
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",&a[i]);
	 }
 	for(j=0;j<n-1;j++)
 	{
 		for(i=0;i<n-1-j;i++)
 		{
 			if(a[i+1]>a[i])//如果后面右边有比前面大的数；就把它调到前面来 
			 {
			 	t=a[i];
			 	a[i]=a[i+1];
				a[i+1]=t; 	
			 }                             //从大到小排列 
		 }
	 }
 	for(i=0;i<n;i++)
 	{
 		printf("%d\n",a[i]);
	 }
 	
 	return 0;
 }*/

 	
 	
 	/*
int main()
{
	int a[3][4]={{1,2,3,4},{4,3,2,1},{1,2,3,4}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
	 } 
	
	
	return 0;
}*/
/*
int main()
{
	int i,j,n=0;
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	for(i=0;i<=1;i++)
	{
		if(n%3==0)//n的初值是0；当打完3个数字后就打换行符 
	    printf("\n");
		for(j=0;j<=2;j++,n++)//j与n之间用逗号隔开 
		{
			printf("%5d",a[i][j]);
		//	if(n%3==0)
	    //    printf("\n");
			b[j][i]=a[i][j];
		}
	}
	printf("\n"); //此时n的值为6，与循环次数以及打出的字数一致 
	printf("%d\n",n);//可以用来记录打出的数字的个数 
	n=0;
	for(i=0;i<=2;i++)
	{
		if(n%2==0)
		printf("\n");
		for(j=0;j<=1;j++,n++)
		{
			printf("%5d",b[i][j]);
			//if(n%2==0)
		//	printf("\n");
		}
	}
	
	return 0;
}*/
/* 
int main()
{
	int i,j,row,colum,max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	max=a[0][0];
	row=0; colum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	
	printf("%d\n",max);
	printf("%d\t%d",row,colum);  //结果是 10     2,1 
	                           //指的是10 在第3行第2列 
	return 0;
}*/
/*
int main()
{
	int i,j,max,row,colum;
	int a[3][4]={{1,2,3,3},{6,9,10,2},{-19,50,20,89}};
	max=a[0][0];
	row=0;
	colum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	printf("%d\n%d\n%d\n",max,row,colum);
	return 0;
}*/
/* 
int main()
{
	char a[]="i am happy"; //这个数组的长度是11 包括/0 
	char b[5][4]={{'m'},{'a'},{'c'},{"c"},{"edd"}};
	int i,j;
	for(i=0;i<11;i++)
	{
		printf("%c\n",a[i]);//输出 i a m h a p p y以字符形式 
	}
	printf("%s\n",a);//输出 i am happy 以字符串形式 
	for(i=0;i<5;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		printf("%c",b[i][j]);//只能 以%c的形式输出才可以输出b数组中所有元素 
		}
	}
	return 0;
}*/
/* 
int main()
{
	char str[]="china\nbeijing"; 
	char str1[]="china beijing";
	puts(str);//遇到\0字符就停止输出 
	char c[10];
	gets(c);//以回车符作为结束
	return 0;
}*/
/*
char* strcat_my(char str1[],char str2[])
{
	char *p=str1;
	int i,j;
	i=j=0;
	while(str1[i]!='\0')
	i++;
	while((str1[i]=str2[j])!='\0')
	{
		i++;
		j++;
	}
	return p; 
}

int main()
{
	int i=0;
	char str1[30]={"people's republic of "};
	char str2[]={"china"};
	printf("%s",strcat(str1,str2));
	printf("\n");
	//strcat函数实现
	while(str1[i]!=0)
	{
		printf("%c",str1[i]);
		i++;
	}
	return 0;
}///有问题
*/
/*
int main()
{
	char str1[30]={"people's republic of "};
	char str2[]={"china"};
	strcpy(str1,str2);//运行结果是china 
	strcpy(str1,"people");//注意括号中是数组名 
	printf("%s",str1);
	
	return 0;
 } */
 
 /*
char *my_stract(str1[],str2[])
{
	int i=0,j;
	while(str[i]!='\0')
	{
		i++;
	}
	while((str1[i]=str2[j])!='\0')
	{
		i++;
		j++;
	}
	return str1;
	
}
 
 
 
int main()
{
	int i,j;
	char str1="people's republic";
	char str2="of china";
	stract(str1.str2);
	printf("%s\n",str1);
	my_stract(str1,str2);
	printf("%s",str1);
	return 0;
 } */
 /*
 int main()
 {
 	int i;
 	char str1[]="people's republic";
	char str2[]="of china";
	i=strcmp(str1,str2);
 	printf("%d",i);
 	
 	return 0;
 }*/
 /* 
 int main()
 {
 	char string[50];
 	int i=0,num=0,word=0;
 	char c;
 	gets(string);
 	for(i=0;(c=string[i]!='\0');i++)//是'\0'; 
 	{
 		if(string[i]==' ')//单引号 
 		{
 			word=0;
		 }
		 else
		 if(word==0)
		 {
		 	word=1;
		 	num++;
		 }
	 }
 	printf("%d",num);
 	return 0;
 }*/
 /*
 int main()
 {
 	char string[39];
 	int word=0,i=0,num=0;
 	gets(string);
 	while(string[i]!='\0')
 	{
 		if(string[i]==' ')
 		{
 			word=0;
		 }
		 else
		 if(word==0)
		 {
		 	num++;
		 	word=1;
		 }
		 i++;
 		
	 }
 	
 	printf("%d",n);
 	return 0;
 }*/
 





/*

int main()
{
	int arr[30]={0,1,2,3,4,5,6,7,8,9};
	int i,j,t,n=10;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(arr[i+1]<arr[i])
			{
				t=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=t;
				
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	int k;//从小到大排列 
	for(i=0;i<n-1;i++)
	{
		k=i;//保存当前最小数 
		for(j=i+1;j<n;j++)
		{
			if(arr[k]>arr[j]);//如果前面的数大于后面的数
			{
			   k=j;//找出最小的数 
			} 
		}
		if(k!=i)
		{
			t=arr[k];
			arr[k]=arr[i];
			arr[i]=t;
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}*/
/*
void sort(int a[],int n)//从大到小排列 
{
   int i,j,k,t;
   for(i=0;i<n-1;i++)
   {
   	k=i;//记录最大的 
   	for(j=i+1;j<n;j++)
   	{
   		if(a[j]>a[k])
   		k=j;
		   
	}
	  if(k!=i)
	  {
	  	t=a[i];
	  	a[i]=a[k];
	  	a[k]=t;
	   }	     
   }	
}

int main()
{
	int a[30]={1,2,3,4,5,6,7,8,9,10};
	int n=10,i;
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}*/
/*
void sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[k])
			k=j;
		}
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}	
	}
	
	
}


int main()
{
	int a[30]={0,1,2,3,4,5,6,7,8,9};
	int n=10,i;
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}*/
/*
int max(int a[][4])//int a[][4] 
{
	int i,j,max;
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	return max;	
}

int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	int b=max(a);
	printf("%d",b);
	return 0;
}*/
/*
long facl(int n)
{
	long result;
	if(n==1)
	result=1;
	else
	result=n*facl(n-1);
	return(result);
	
}

int main()
{
	int n;
	long f;
	scanf("%d",&n);
	f=facl(n);
	printf("%d",f);
	return 0;
}*/
/* 
long facl(int n)
{
	long result;
	if(n==1)
	result=1;
	else
	result=n*facl(n-1);
	return(result);	
}
int main()
{
	int n;
	scanf("%d",&n);//注意取地址符 
	long f=facl(n);
	printf("%ld",f);
	
	return 0;
}*/
/*
int main()
{
	printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");
	
	return 0;
}*/
/*
int main()
{
	int n,place;
	scanf("%d",&n);//取地址符 
	if(n>9999)
	place=5;
	else if(n>999)
	place=4;
	else if(n>99)
	place=3;
	else if(n>9)
	place=2;
	else 
	place=1;
	printf("%d\n",place);
	int a,b,c,d,e;
	a=n/10000;
	b=n%10000/1000;
	c=n%1000/100;
	d=n%100/10;
	e=n%10;
	int f,g,h,i,j;//取整 
	f=n/10000;
	g=(int)(n-f*10000)/1000; 
	h=(int)(n-f*10000-g*1000)/100;
	i=(int)(n-f*10000-g*1000-h*100)/10;
	j=(int)(n-f*10000-g*1000-h*100-i*10)/1;
	switch(place)
	{
		case 5:printf("%d %d %d %d %d\n",e,d,c,b,a);break;//不要忘了break 
		case 4:printf("%d %d %d %d\n",e,d,c,b);break;
		case 3:printf("%d %d %d\n",e,d,c);break;
		case 2:printf("%d %d",e,d);break;
		case 1:printf("%d",e);break;
	}
	switch(place)
	{
		case 5:printf("%d %d %d %d %d\n",j,i,h,g,f);break;//不要忘了break 
		case 4:printf("%d %d %d %d\n",j,i,h,g);break;
		case 3:printf("%d %d %d\n",j,i,h);break;
		case 2:printf("%d %d",j,i);break;
		case 1:printf("%d",h);break;
	}
	return 0;
 } 
 
*/
/* 
int main()
{
	int a,n,i=1;//i用来记录循环次数 
	scanf("%d%d",&a,&n);
	//sn用于记录总和 
	int count=0;
	int tn=a,sn=0;
	while(i<=n)
	{
	   sn=sn+tn;
	   tn=tn*10+a;
	   i++;	//注意这里的初始化问题 i最后的值应该为 n+1 从1到n+1  历经n次循环 
	   count++;//count的值为n 从0到n历经n次循环 
	 } 
	printf("%d",sn);
	printf("%d %d",i,count);
	return 0;
 } */
 /*
 int main()
 {
 	double sn=0;
 	int n,i=1,tn=1;//n控制循环次数 
 	n=20;
 	while(i<=20)
 	{
 		tn=tn*i;
 		sn=sn+tn;
 		i++;
	 }
 	printf("%22.15e\n%d\n",sn,i);
 	
 	double s=0,t=1;
 	for(n=1;n<=20;)
 	{
 		t=t*n;
 		s=s+t;
 		n++;
	 }
	 printf("%22.15e\n",s);
	return 0;
 }
*/
/* 
int main()
{
	int n1=100,n2=50,n3=10;
	double k,sn1=0,sn2=0,sn3=0;//给结果定义为double类型 
	for(k=1;k<=100;k++)
	{
		sn1=sn1+k;
	}
	for(k=1;k<=50;k++)
	{
		sn2=sn2+k*k;
	}
	for(k=1;k<=10;k++)
	{
		sn3=sn3+1/k;
	}
	printf("%f",sn1+sn2+sn3);//double类型数据用%f的形式输出 
	return 0;
}*/
/*
int main()
{
	double sn,tn1=2,tn2=1,t;
	int n;
	for(n=1;n<=20;n++)
	{
		sn=sn+tn1/tn2;
		t=tn1;
		tn1=tn1+tn2;
		tn2=t;
	}
	
	printf("%f",sn);
	return 0;
}*/
/* 
int main()
{
	int i=1,j,sn;
	for(i=2;i<=1000;i++)
	{
		sn=0;//每一次都要给sn清零 
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sn=sn+j;
				
			}
		}
	if(sn==i)
	printf("%d\n",i);	
	
		
	}
	
	
	
	return 0;
}*/
/*
int main()
{
	int i,j,k;
	for(i=0;i<=3;i++)
	{
		for(j=1;j<=3-i;j++)//打出3个空格 
		printf(" ");
		for(k=0;k<2*i+1;k++)
		printf("*");
		for(j=1;j<=3-i;j++)
		printf(" ");
		printf("\n");
		
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<i+1;j++)
		printf(" ");
		for(k=0;k<((2-i)*2+1);k++)
		printf("*");
		for(j=0;j<i+1;j++)
		printf(" ");
		printf("\n");
	}
	
	return 0;
}*/
/*
int main()
{
	int i,tmp=1,j;
	for(i=2;i<=100;i++)
	{
		tmp=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			tmp=0;
		}
		if(tmp)
		printf("%d\n",i);
	}
	int count=0;
	for()
	
}*/
/* 
int main()//从大到小排序 
{
	int arr[30]={1,16,5,98,23,119,18,75,65,81};
	int i,j,k,t,n=10;
	for(i=0;i<=n-1;i++)//i从0开始即数组的第一位元素开始 直到最后一个元素 
	{
		k=i;
		for(j=i+1;j<=n-1;j++)//j从i后面的元素开始； 直到最后一个元素 
		{
			if(arr[j]>arr[k])  k=j;
		}
		if(k!=i)
		{
			t=arr[i];
			arr[i]=arr[k];
			arr[k]=t;
		}
	}
	
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	return 0;
}*/
/* 
int main()
{
	int a[20]={1,4,6,9,13,16,19,28,40,100};
	int n,tmp=0,i,t;
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]>n)  
		{
		tmp=i;
		break;//找到后要及时跳出 
	    }
	}
	for(i=9;i>=tmp;i--)
	{
		a[i+1]=a[i];
	}
	a[tmp]=n;
	for(i=0;i<11;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/

/* 
//逆序输出
int main()
{
	int arr[]={8,6,5,4,1};
	int n=5,i,t;
	for(i=0;i<n/2;i++)//逆序输出 当i小于n/2 
	{
	    t=arr[i];
	    arr[i]=arr[n-1-i];//将arr[i]位置的数与arr[n-1-i]位置的数交换 
	    arr[n-1-i]=t;
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } */
 
 /* 
 //杨辉三角
 int main()
 {
 	int arr[10][10];
 	int n=10,i,j;
 	for(i=0;i<n;i++)
 	{
 		arr[i][i]=1;//使两边 的值为1 
 		arr[i][0]=1;
 		
	 }
 	for(i=2;i<n;i++)//从第三行开始处理 
 	{
 	    for(j=1;j<=i-1;j++)
		 {
		 	arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
	     }	
	}
 	for(i=0;i<n;i++)//先赋值在打印 
 	{
 		for(j=0;j<=i;j++)
 		{
 			printf("%6d",arr[i][j]);
		 }
		 printf("\n");//打印\n 
	 }
 	
 	
 	
 	return 0;
  } */
  
/* 
 
int main()
{
  int arr[4][5];
  int i,j,flag;
  for(i=0;i<4;i++)
  {
  	for(j=0;j<5;j++)
  	{ 
  	   scanf("%d",&arr[i][j]);
	  }
  }
  int t,m,n;
  int max,min;
  for(i=0;i<4;i++)
  {
  	max=arr[i][0];
  	m=0;
  	for(j=0;j<5;j++)
  	{
  	   	if(arr[i][j]>max)
  	   	{
			 max=arr[i][j];
			 m=j;
	    }
    }
	flag=1;//假设他是鞍点 
  	for(t=0;t<4;t++)
  	{
  		if(max>arr[t][m])//if 后面不加分号 
  		flag=0;
  		continue;
	}
  	if(flag)
  	printf("%d",max);
  	
  }
  return 0;	
}*/

/*
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		printf("* * * * *\n");
	}
	
	return 0;
 } */
 /*
 int main()
 {
 	char str1[30],str2[30];
 	gets(str1);
 	int i=0;
 	while(str1[i]!='\0')
 	{
 		str2[i]=str1[i];
 		i++;
 		
	}
 	str2[i]='\0';
 	printf("%s",str2);
 	return 0;
 }*/
 /*
int main()
{
	char str1[30],str2[30];
	gets(str1);
	int i;
	for(i=0;i<=strlen(str1);i++)
	{
		str2[i]=str1[i];
	}
	
	printf("%s",str2);
	return 0;
}*/

 /*
float x1,x2,disc,p,q;


int main()
{
void m1(float,float);
void m2(float,float);
void m3(float,float);
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0)
	{
		m1(a,b);
		printf("%f %f\n",x1,x2);
	}
	else if(disc==0)
	{
		m2(a,b);
		printf("%f %f\n",x1,x2);
	}
	else if(disc<0)
	{
		m3(a,b);
		printf("%f+%fi %f-%fi\n",p,q,p,q);
		
	}
	
	return 0;
}
void m1(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
}
void m2(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void m3(float a,float b)
{
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
	
}*/
/*
float x1,x2,disc,p,q;
int main()
{
	void m1(float,float);
	void m2(float,float);
	void m3(float,float);
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	disc=b*b-4*a*c;
	printf("%f\n",disc);
	if(disc>0)
	{
		m1(a,b);
		printf("%f %f",x1,x2);
	}
	 else if(disc==0)
	 {
	 	m2(a,b);
	 	printf("%f %f",x1,x2);
	 }
	else
	{
		m3(a,b);
		printf("%f+%fi %f-%fi",p,q,p,q);
		
	}
	
	return 0;
}
void m1(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);	
}
void m2(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void m3(float a,float b)
{
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
}*/
/*
int main()
{
	void m(int);
	int a;
	scanf("%d",&a);
	m(a);
	return 0;
 } 
void m(int a)
 {
 	int i,j,k;
 	k=sqrt(a);
 	for(i=2;i<=k;i++)//小于等于sqrt(k) 
 	{
 	    if(a%i==0)
		break;	
 		
	 }
 	if(i>k)
 	{
 		printf("%d",a);
	 }
	 else
	 printf("none");
 	
 	
 }*/
 
 /*
 //逆序输出 
 int main()
 {
 	void m(char str[]);
 	char str[40];
 	gets(str);
 	m(str);
 	printf("%s",str);
 	
 }
 void m(char str[])
 {
 	int a=strlen(str)/2;
 	int n=strlen(str);
 	int i;
 	char tmp;
 	for(i=0;i<a;i++)
 	{
 		tmp=str[i];
 		str[i]=str[n-1-i];
 		str[n-1-i]=tmp;
 		
	 }
 }*/
 /*
 int main()
 {
 	void my_stract(char str1[],char str2[]);
 	char str1[40],str2[40];
 	gets(str1);
 	gets(str2);
 	printf("%s",str1);
 	printf("%s",str2);//gets函数是可以连续输入的 连续输入getchar的时候中间不能有空格 
 	my_stract(str1,str2);
 	printf("%s",str1);
 	return 0;
 }
 void my_stract(char str1[],char str2[])
 {
 	int i,j=0;
 	while(str1[i]!='\0')
 	{
 		i++;
	 }
 	while(str2[j]=str1[i]!='\0')
 	{
 		i++;
 		j++;
 		
	 }
 	
 	
 }
 */
 /*
 int main()
 {
 	void cpy(char str1[],char str2[]);
 	char str1[40],str2[40];
 	gets(str1);
 	cpy(str1,str2);
 	printf("%s",str2);
 	
 	return 0;
 }
 void cpy(char str1[],char str2[])
 {
 	int n=strlen(str1);
 	int i,j=0;
 	for(i=0;i<n;i++)//还可以写成for(i=0;str1[i]!='\0') 
 	{
 	   if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='I'||str1[i]=='i'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
		{
			str2[j]=str1[i];
			j++;
		}	
 		str2[j]='\0';//注意自己补上'\0' 
 		
	 }
 	
 	
 }*/
 /*
 int main()
 {
 	int al(char);
 	int longest(char str[]);
 	char str[40];
 	gets(str);
 	int i;
 	for(i=longest(str);al(str[i]);i++)
 	{
 		printf("%c",str[i]);
	 }	
 	return 0;
 }
 int al(char c)
 {
 	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
 	return(1);
 	else 
 	return(0);
 }
 int longest(char str[])
 {
 	int len=0,i,lengh=0,flag=1,place=0,point;
 	for(i=0;i<=strlen(str);i++)//str1[i]!='\0'
 	{
 		if(al(str[i]))
 		{
 			if(flag)
 			{
 				point=i;//用point记录当前单词的起始位置； 
 				flag=0;
			}
			else
			    len++; 
		}
		else
		{
			flag=1;
			if(len>=lengh)
			{
				lengh=len;
				place=point;//place纪录目前最长的字符 
				len=0;
			}
		}
	}
 	
 	return(place);
 }*/
 /* 
 int main()
 {
 	int al(char c);
 	int longest(char str[]);
 	char str1[40];
 	gets(str1);
 	int i;
 	for(i=longest(str1);al(str1[i]);i++)
 	{
 		printf("%c",str1[i]);
    }
 	return 0;
 }
 int al(char c)
 {
 	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
 	return(1);
 	else
    return(0) ;	
 }
 int longest(char str1[])
 {
 	int i=0;
 	int flag=1;//纪录单词是否开始
	int place=0;//纪录最长的单词的开始位置
	int lengh=0;//纪录目前最长单词的长度
	int len=0,point;//len记录当前单词的长度，point记录当前单词的开始位置 
 	for(i=0;i<=strlen(str1);i++)//<=strlen(str1) 不是<strlen(str1) 要包括'\0'判断最后一个字符是否结束 
 	{
 		if(al(str1[i]))
 		{
 			if(flag)
 			{               //am 
 				point=i;
 				flag=0;//出现新单词后将flag变为0 
 				len++;
			 }
			 else
			    len++; 
 			
		 }
 		else//将一个单词的长度统计完了 
 		{
 			flag=1;//统计完之后将flag归1 
 			printf("%d\n",len);
 			if(len>=lengh)
			 {
			 	lengh=len;
			 	place=point;
			 	len=0;//将len的长度归零 
			  } 
		 }
	 }
	 return(place);
 	
 	
 }*/
 /*
 int main()
 {
 	float p(int n,int x); 
 	int x,n;
 	scanf("%d%d",&n,&x);
 	printf("%f",p(n,x));
 	return 0;
 }
float p(int n,int x)
 {
 	if(n==0)
	 return(1);
	if(n==1) 
	 return(x);
	else
	  return(2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x)/n;
 	
 }*/
 /*
 float score[10][5];
 float a_stu[10],a_cour[5];//a_cour每门课的平均成绩 a_stu每个学生的平均成绩 
 int r,c;
 int main()
 {
    void input(void);
	void aver_stu(void);//每个学生平均分 
	void aver_cour(void);//每门课平均分
	float highest();//找到最高的分数 
	input();
	int i,j;
	aver_stu();
	aver_cour(); 
	for(i=0;i<10;i++)
	{
		printf("\nNO %2d",i+1);
		for(j=0;j<5;j++)
		{
			printf("%8.2f",score[i][j]);
		}
		printf("%8.2f\n",a_stu[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%8.2f",a_cour[i]);
	}
	printf("\n");
	
	float h;
	h=highest();//调用函数的格式是函数名（传递的地址） 
	printf("highest:%7.2f    NO.%2d     course:%2d\n",h,r,c); 
	return 0;
 }
 void input(void)
 {
 	int i,j;
 	for(i=0;i<10;i++)
 	{
 		printf("please input score of student%2d:\n",i+1);
 		for(j=0;j<5;j++)
 		{
 			scanf("%f",&score[i][j]);
		 }
	 }
 	
 }
 void aver_stu(void)
 {
 	int i,j;
 	float sum=0; 
 	for(i=0;i<10;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			sum=sum+score[i][j];
		 }
 		a_stu[i]=sum/5.0;
 		
 		
	 }
 	
 }
 void aver_cour(void)
 {
 	int i,j;
 	float sum=0;
 	for(i=0;i<5;i++)
 	{
 		for(j=0;j<10;j++)
 		{
 			sum=sum+score[j][i];
		 }
 	    a_cour[i]=sum/10.0;//sum是float类型的 a_cour是float类型的数组 
	 }
 	
 	
 }
 float highest()
 {
 	float high;
 	int i,j;
 	high=score[0][0];
 	for(i=0;i<10;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			if(score[i][j]>high)
 			{
 				high=score[i][j];
 				r=i+1;
 				c=j+1;//r,c是全局变量 
			 }
		 }
 		
	 }
 	
 	return(high);
 }*/
 /*改变指针所的指对象 
 int main()
 {
 	int *p1,*p2,a,b,*p;
 	p1=&a;
	p2=&b;
	scanf("%d%d",&a,&b);
    if(a>b)
	{
		p=p1;
		p1=p2;
		p2=p;
		
	 } 
 	
 	printf("%d %d\n",*p1,*p2);
 	return 0;
 }*/
 /* 
 int main()
 {
 	void swap(int *p1,int *p2);
 	int a,b,*p1,*p2;
 	p1=&a;p2=&b;
 	scanf("%d%d",&a,&b);
 	if(a>b)
 	{
 		swap(p1,p2);
	 }
 	printf("%d %d",a,b);
 }
 void swap(int *p1,int *p2)//不要忘记void 
 {
 	int tmp;
 	tmp=*p1;//以指针为入口 改变a,b的值 
 	*p1=*p2;
 	*p2=tmp;
 	
 }
 *//*
 int main()
 {
 	void exchange(int *p1,int *p2,int *p3);
 	int a,b,c,*p1,*p2,*p3;
 	p1=&a; p2=&b; p3=&c;
 	scanf("%d%d%d",&a,&b,&c);
 	exchange(p1,p2,p3);
 	printf("%d %d %d",a,b,c);
 	return 0;
 }
 void exchange(int *p1,int *p2,int *p3)//传递的是入口 也就是指针 
 {
 	void swap(int *b1,int *b2);
 	if(*p1>*p2) swap(p1,p2);
 	if(*p1>*p3) swap(p1,p3);
 	if(*p2>*p3) swap(p2,p3);
 }
 
 void swap(int *b1,int *b2)
 {
 	int tmp;
 	tmp=*b1;
 	*b1=*b2;
 	*b2=tmp;
 	
 	
 }
 */
 /* 
 int main()
 { 
    int arr[10],i,*p;
    p=arr;
    for(i=0;i<10;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(p=arr;p<(a+10);p++)
	{
		scanf("%d",p);
	}
    for(i=0;i<10;i++)
    {
    	printf("%d",arr[i]);
    	printf("%d",*(arr+i));
	}
 	for(p=arr;p<(a+10);p++)//初始化p=arr ；范围p<(a+10) ;a是p的初值 
 	{
 		printf("%d",*p);
	 }
 	
 	return 0;
 }
 */
 /*
 int main()
 {
 	int arr[10],*p,i;
 	p=arr;
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",p++);
	 }
	 p=arr;//p已经移动到数组的末尾 
 	for(i=0;i<10;i++,p++)
 	{
 		printf("%d",*p);
	 }
	 printf("\n");
	 p=arr;//重新对p初始化 
	 for(i=0;i<10;i++)
	 {
	 	printf("%d",*p++);//*p++等价与*p p++； 
	 }
 	return 0;
 }
 */
 /* 
 int main()
 {
 	void swap(int arr[],int n);
 	int i,arr[10]={3,7,9,11,0,6,7,5,4,2};
 	swap(arr,10);//地址即使arr数组名 
 	for(i=0;i<10;i++)
 	{
 		printf("%d",arr[i]);
	 }
 	
 	return 0;
 }
 void swap(int arr[],int n)//void类型 
 {
 	int tmp;
 	int i;
 	for(i=0;i<(n/2);i++)
 	{
 		tmp=arr[i];
 		arr[i]=arr[n-1-i];
 		arr[n-1-i]=tmp;
 	 }
 	
 	
 	
 }*/
 //指针办法从小到大排序
 /* 
 int main()
 {
 	void swap(int *p,int n);
 	int arr[10]={3,7,9,11,0,6,7,5,4,2};
 	int *p=arr;
 	swap(p,10);
 	int i;
 	for(i=0;i<10;i++)
 	{
 		printf("%d ",*p++);
	 }
 	
 	return 0;
 }
 void swap(int *p,int n)
 {
 	int i,j,k,tmp;
 	for(i=0;i<n-1;i++)
 	{
 		k=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(*(p+j)>*(p+k))
 			k=j;
 			
		 }
		 if(k!=i)
		 {
		 	tmp=*(p+i);
		 	*(p+i)=*(p+k);
		 	*(p+k)=tmp;
		 	
		 }
 		
	 }
 	
 	
 }*/
 /* 
 int main()
 {
 	int arr[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
 	int *p=arr[0];//p是指向数组元素的指针变量 
 	for(p=arr[0];p<(arr[0]+12);p++)//arr[0]的基础数据类型是元素 arr[0]是p的初值 
	 {
	 	if((p-arr[0])%4==0)
	 	printf("\n");//这里的if语句与下面的语句不能换 
	 	printf("%d ",*p);
	  } 
 	
 	
 	return 0;
 }*/
 /*
 int main()
 {
    int arr[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4],i,j;
    p=arr;
    scanf("%d%d",&i,&j);
    printf("%d",*(*(p+i)+j));
    
 
 	return 0;
 	
 }*/
 /*
 int main()
 {
 	void search(float (*p)[4],int n);
 	void aver(float *p,int n);
 	void sear(float (*p)[4],int n);
 	float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
 	aver(*score,12);//求平均值对数组元素 float *p；*score的基础类型是数组元素 
 	sear(score,2);//对一个一维数组 float （*p)[4] score 的基础类型是一维数组
	search(score,3);
 	return 0;
 }
 void aver(float *p,int n)
 {
 	float *x=p,sum=0,aver=0;
 	for(;p<(x+12);p++)
 	{
 		sum=sum+*p;	
	 }
	 aver=sum/n;
	 printf("%5.2f\n",aver);	
 }
 void sear(float (*p)[4],int n)
 {
 	int i;
 	for(i=0;i<4;i++)
 	{
 		printf("%5.2f\t",*(*(p+n)+i));//打印float类型的数用%f 
	 }
	 printf("\n");
 }
 void search(float (*p)[4],int n)
 {
 	int i,j,flag;
 	for(i=0;i<n;i++)
 	{
 		flag=0;
 		for(j=0;j<4;j++)
 		{
 			if(*(*(p+i)+j)<60)
 			flag=1;	
		 }
		 if(flag==1)
		 {
		 	for(j=0;j<4;j++)
		 	{
		 		printf("%5.2f\t",*(*(p+i)+j));
			 }
		 	
		 }
		 printf("\n");
	 }
 	
 	
 }*/
 /*
 int main()
 {
 	char*string1="I love China!";
 	printf("%s\n",string1);
 	
 	char string2[]="I love China!";
 	printf("%s\n",string2);
 	
 	char*string3;
 	string3="I love China!";
 	string3="I am a student!";
 	printf("%s",string3);
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	char a[]="I am a boy.",b[20],*p1,*p2;
 	p1=a;p2=b;
 	for(;*p1!='\0';)
 	{
 		*p2=*p1;
 		p1++;
 		p2++;
	 }
 	printf("%s",b);
 	return 0;
 }*/
 
 
 /* 
  //不对 
 int main()
 {
 	void copy1(char*from,char*to);
 	void copy2(char*from,char*to);
 	char a[]="I am a student";
 	char b[]="you are a student";
 	char *from=a,*to=b;
 	copy1(from,to);
 	printf("%s",b);
 	return 0;
 }
 void copy1(char*from,char*to)
 {
 	while(*to!='\0')
 	to++;
 	while(*to=*from!='\0')
 	{
 		from++;
 		to++;
	 }
 }
 void copy2(char*from,char*to)
 {
 	while(*to=*from!='\0')
 	{
 		to++;
 		from++;
	 }
	 *to='\0';
 }
 
 */
 /*
 int main()
 {
 	float score[3][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
 	float *search(float(*pointer)[4],int k);
 	float *p;
 	int k,i;
 	scanf("%d",&k);
 	p=search(score,k);
 	for(i=0;i<4;i++)
 	{
 		printf("%5.2f\t",*(p+i));
	 }
 	
 	return 0;
 }
 float *search(float(*pointer)[4],int k)
 {
 	float *pt;
 	pt=*(pointer+k);
 	return (pt);
 	
 }*/
 /* 
 int main()
 {
 	void insert(char arr[]);
 	char arr[50];
 	scanf("%s",arr);
 	insert(arr);
 	printf("%s",arr);
 	return 0;
 }
 void insert(char arr[])
 {
 	int i;
 	for(i=strlen(arr);i>0;i--)
 	{
 		arr[2*i]=arr[i];//从'\0'开始复制 
 		arr[2*i-1]=' ';
	 }
 	
 }*/
 /*
 
 int main()
 {
 	void insert(char arr[]);
 	char arr[40];
 	scanf("%s",arr);
 	insert(arr);
 	printf("%s",arr);
 	
 	return 0;
 }
 void insert(char arr[])
 {
 	int i;
 	for(i=strlen(arr);i>0;i--)
 	{
 		arr[2*i]=arr[i];
 		arr[2*i-1]=' ';
	 }
 	
 }*/
 /*
 int main()
 {
 	void input(int num[],char name[10][8]);
 	void sort(int num[],char name[10][8]);
 	int num[10];
 	char name[10][8];
 	input(num,name);
 	sort(num,name);
 	
 	return 0;
 }
 void input(int num[10],char name[10][8])
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		printf("input NO:");
 		scanf("%d",&num[i]);
 		printf("input name:");
 		getchar();
 		gets(name[i]);
	 }
 	
 	
 }
 void sort(int num[10],char name[10][8])
 {
 	int i,j,min,temp1;
 	char temp2[8];
	 for(i=0;i<9;i++)
	 {
	 	min=i;
	 	for(j=i;j<10;j++)
	 	{
	 		if(num[j]<num[min])  min=j;
		 }
	 	if(min!=i)
	 	{
	 		temp1=num[i];
	 		num[i]=num[min];
	 		num[min]=temp1;
	 		strcpy(temp2,name[i]);
	 		strcpy(name[i],name[min]);
	 		strcpy(name[min],temp2);
				
		 }
	 	
	  } 
	   printf("\nresult\n");
			 for(i=0;i<10;i++)
			 {
			 	printf("%5d%10s\n",num[i],name[i]);
				 }
 }*/
 /*
 int main()
 {
 	void input(char name[10][8],int num[10] );
 	void sort(char name[10][8],int num[10]);
 	int num[10];
 	char name[10][8];
 	input(name,num);
 	sort(name,num);
 	
 	
 	return 0;
 }
 void input(char name[10][8],int num[10])
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		printf("input NO:");
 		scanf("%d",&num[i]);
 		printf("input name:");
 		getchar();
 		gets(name[i]);
 		
	  } 
 	
 	
 }
 void sort(char name[10][8],int num[10])
 {
 	int i,j,min,temp1;
 	char temp2[8];
 	for(i=0;i<9;i++)
 	{
 		min=i;
 		for(j=i;j<10;j++)
 		{
 			if(num[j]<num[min]) min=j;
		 }
		 if(min!=i)
		 {
		 	
		 	temp1=num[i];
		 	num[i]=num[min];
		 	num[min]=temp1;
		 	strcpy(temp2,name[i]);
		 	strcpy(name[i],name[min]);
		 	strcpy(name[min],temp2);
		 	
		 	
		 }
 		
	 }
 	for(i=0;i<10;i++)
 	printf("%5d%10s\n",num[i],name[i]);
 	
 	
 }*/
 /*
 int main()
 {
 	void convert(int n);
 	int number;
 	scanf("%d",&number);
 	if(number<0)
 	{
 		putchar('-');putchar(' ');
 		number=-number;
	 }
 	convert(number);
 	
 	return 0;
 }
 void convert(int n)
 {
 	int i;
 	if((i=n/10)!=0)
 	{
 		convert(i);
	 }
 	putchar(n%10+'0');//由数字3转化为字符3 putchar打印单个字符 
 	putchar(' ');
 }*/
 /*
 int main()
 {
 	void convert(int n);
 	int number;
 	scanf("%d",&number);
 	if(number<0)
 	{	
 		printf("-");
 		number=-number;
	 }
 	convert(number);
 	
 	
 	return 0;
 }
 void convert(int n)
 {
 	int i;
 	if((i=n/10)!=0)
 	{
 		convert(i);
	 }
 	putchar(n%10+'0');//加的是'0'不是'\0' 
 	putchar(' ');
 	
 }*/
 /* 
 int main()
 {
 	void swap(char *p1,char *p2);
 	char str1[20],str2[20],str3[20];
 	gets(str1);
 	gets(str2);
 	gets(str3);
 	if(strcmp(str1,str2)>0) swap(str1,str2);
 	if(strcmp(str1,str3)>0) swap(str1,str3);
 	if(strcmp(str2,str3)>0) swap(str2,str3);
 	printf("%s\n%s\n%s\n",str1,str2,str3);
 	return 0;
 }
 void swap(char *p1,char *p2)
 {
 	char temp[20];
 	strcpy(temp,p1);//strcpy函数会从p1指向的位置开始复制字符，直到遇到空字符（'\0'）为止，
	                     //然后将这些字符（包括空字符）复制到p2指向的位置。
 	strcpy(p1,p2);//用strcmp函数需要知道数组的起始位置  p1=&str str都可以 
 	strcpy(p2,temp);//p1 p2是指向字符数组的 指针 基础数据类型是元素 
    
 }*/
 /* 
 int main()
 {
 	void input(int *p);
	void find(int *p);
	void output(int *p);
	int number[30];
	input(number);
	find(number);
	output(number);
 	return 0;
 }
 void input(int *number)
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",number++);
	 }
 }
 void find(int *number)
 {
 	int *pmax,*pmin;
 	pmax=pmin=number;
 	int *p;//p是指针变量 
 	for(p=number+1;p<number+10;p++)//for 循环里可以使用指针控制 
 	{
 		if(*p<*pmin) pmin=p;
	 }
	int temp;
 	temp=number[0];
 	number[0]=*pmin;
 	*pmin=temp;
	 for(p=number+1;p<number+10;p++)
 	{
 		if(*p>*pmax) pmax=p;
	 }
 	temp=number[9];
 	number[9]=*pmax;
 	*pmax=temp;
 	
 }
 void output(int *number)
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		printf("%d   ",number[i]);//number作为一个指向number[20]的指针 仍可以用number[i]来引用数组元素 
 		
	 }	
 }*/
 /*
 int main()
 {
 	void move(int number[],int n,int m); 
 	int n,i,m;
 	scanf("%d",&n);//一共有多少位数 
 	int number[30];
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&number[i]);
	 }
 	scanf("%d",&m);//向后移动多少位数 
 	move(number,n,m);//以int number[] 为形式参传递值的时候将数组的首地址传递过去数 
 	for(i=0;i<n;i++)
 	{
 		printf("%d ",number[i]);
	 }
 	
 	
 	return 0;
 }/*
 void move(int number[30],int n,int m)
 {
 	int*p;
 	p=number;
 	int end,i;
 	for(i=0;i<m;i++)
 	{
 		end=*(number+n-1);//纪录最后一个数的时候 
 		for(p=number+n-1;p>number;p--)//p结束的位置是第2个元素 这里还会进入循环中 p最终移动到第1个元素位置去 
 		{
 			*p=*(p-1);//先后移动 //p>number不是p>=number 第一个元素也会得到处理 
		 }
 		*number=end;//将最后一个数复制到首位 
    }
 }
 */
 /* 
void move(int number[30],int n,int m)
{
	int end;
	int i,j;
	for(i=0;i<m;i++)
	{
		end=number[n-1];
		for(j=n-1;j>=0;j--)
		{
		     number[j+1]=number[j];	
		}
		number[0]=end;
		
		
	}
	
	
	
}
/*
 int main()
 {
 	void move(int number[30],int n,int m);
 	int number[30];
 	int m,n,i;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&number[i]);
	 }
 	scanf("%d",&m);
 	move(number,n,m);
 	for(i=0;i<n;i++)
 	{
 		printf("%d ",number[i]);
	 }
 	return 0;
 }
 
 void move(int number[30],int n,int m)
 {
 	int *p;
 	p=number;
 	int i,j,end;
 	for(i=0;i<m;i++)
 	{
 		end=number[n-1];
 		for(p=number+n-1;p>number;p--)
 		{
 			*p=*(p-1);	
		 }
 		*number=end;
 		
	 }
 	
 	
 }
 */
 /* 
 void move(int number[30],int n,int m)
 {
 	int temp[30];
 	int i;
 	for(i=0;i<m;i++)
 	{
 		temp[i]=number[n-m+i];//将后面的m个数复制到临时数组 
	 }
	 int *p,*p1;
	 p1=temp;
	 for(p=number+n-m-1;p>=number;p--)
	 {
	 	*(p+m)=*(p);
	 	
	 }
	 p=number;
	 for(;p<number+m;p++)//p<number+m 不是p<number+m-1 
	 {
	 	*p=*p1;
	 	p1++;
	 }
 	
 }
 
 void  move(int number[30],int n,int m)
 {
 	int i;
 	int temp[30];
 	for(i=0;i<m;i++)
 	{
 		temp[i]=number[n-m+i];
	 }
	 for(i=n-m-1;i>=0;i--)
	 {
	 	number[i+m]=number[i];
	 }
	 for(i=0;i<m;i++)
	 {
	 	number[i]=temp[i];
	 }
 	
 	
 }
 /*
 int main()
 {
 	int n,*p,i,num[30];
 	p=num;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		*(p+i)=i+1;
	 }
	 i=0;//
	 int k=0;
	 int m=0;
	 while(m<n-1)
	 {
	   	if(*(p+i)!=0)
	   	{
	   		k++;
	    }
	    i++;
	 	if(k==3)
	 	{
	 		*(p+i)=0;
	 		k=0;
	 		m++;
		 }
	
		if(i==n)
		{
		i=0;
		}
	 }
	 while(*p==0)  p++;
	 printf("%d",*p);
 	
 	return 0;
 }*/
 /*
int main()
 {
 	int num[30];
 	int *p,i,n,m,k;
 	p=num;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		*(p+i)=i+1;
	 }
	 m=0;
	 k=0;
	 i=0;
	 while(m<n-1)
	 {
	 	if(*(p+i)!=0)
	 	{
	 		k++;
		 }
		 i++;
		 if(k==3)
		 {
		 	k=0;
		 	*(p+i)=0;
		 	m++;
		 }
	 	if(i==n)  i=0;	
	 }
	 while(*p==0) p++;
	 printf("%d",*p);
 	
 	
 	return 0;
 }
 */
 /*
 int main()
 {
 	int lengh(char *p);
 	int len;
 	char str[39];
 	scanf("%s",str);
 	len=lengh(str);
 	printf("%d",len);
 	return 0;
 }
 int lengh(char *p)
 {
 	int n;
 	n=0;
 	while(*p!='\0')
 	{
 		n++;
 		p++;
	 }
 	
 	return (n);
 }*/
 /*
 int main()
 {
 	int len;
 	int lengh(char *p);
 	char str[30];
 	scanf("%s",str);
 	len=lengh(str);
 	printf("%d",len);
 	return 0;
 }
 int lengh(char *p)
 {
 	int n; n=0;
 	while(*p!='\0')
 	{
 		p++;
 		n++;
	 }
 	return (n);
 	
 	
 }*/
 /*
 int main()
 {
 	void copy(char *p1,char *p2,int m);
 	char str1[30],str2[30];
 	gets(str1);
 	int m;
 	scanf("%d",&m);
 	if(strlen(str1)<m)
 	{
 		printf("No\n");
	 }
 	else
 	{	
 		copy(str1,str2,m);
 		printf("%s",str2);
	 }
 	
 	
 	
 	return 0;
 }
 
 void copy(char *p1,char*p2,int m)
 {
 	int n;
 	n=0;
 	while(n<m-1)
 	{
 		n++;
 		p1++;
	 }
 	while(*p1!='\0')
 	{
 		*p2=*p1;
 		p1++;
 		p2++;	
	 }
 	*p2='\0';
 	
 	
 }
 */
 /*
 int main()
 {
 	void copy(char *p1,char*p2,int m);
 	int m;
 	char str1[30],str2[30];
 	gets(str1);
 	scanf("%d",&m);
 	if(strlen(str1)<m)
 	{
 		printf("NO\n");
 		
	 }
 	else
 	{
 		copy(str1,str2,m);
 		printf("%s",str2);
 		
	 }
 	
 	return 0;
 }
 void copy(char *p1,char *p2,int m)
 {
 	int n;
 	n=0;
 	while(n<m-1)
 	{
 		n++;
 		p1++;	
	 }
 	while(*p1!='\0')
 	{
 		*p2=*p1;
 		p1++;
 		p2++;
 		
	 }
 	
 	
 }*/
 
 /*
 int main()
 {
 	int upper=0,lower=0,digit=0,place=0,other=0,i=0;
 	char*p,s[30];
 	while((s[i]=getchar())!='\n')  i++;
 	p=s;
 	while(*p!='\n')
 	{
 		if(('A'<=*p)&&('Z'>=*p))
		 ++upper;
		 else if(('a'<=*p)&&('z'>=*p))
		 ++lower;
		 else if(*p==' ')
		 ++place;
		 else if((*p<='9')&&(*p>='0'))
		 ++digit;//统计出现次数的时候用++digit 
		 else
		 ++other;
		 p++;
 		
	 }
 	printf("%d %d %d %d %d ",upper,lower,place,digit,other);
 	
 	return 0;
 }*/
 /*
 int main()
 {
 	int upper=0,lower=0,digit=0,place=0,other=0;
 	int i=0;
 	char s[30],*p;
 	p=s;
 	while((s[i]=getchar())!='\n') i++;
 	while(*p!='\n')
 	{
 		if((*p>='A')&&(*p<='Z'))
 		++upper;
 		else if((*p>='a')&&(*p<='z'))
 		++lower;
 		else if((*p>='0')&&(*p<='9'))
        ++digit;
		else if(*p==' ')//==是当*p==' ' 
		++place;
		else
		++other;
		p++;
	 }
 	
 	printf("%d %d %d %d %d",upper,lower,digit,place,other); 
		 		
 	
 	return 0;
  } */
  
/*  
int main()
{
	void move(int *pointer);
	int a[3][3],*p,i;
    for(i=0;i<3;i++)
    {
    	scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]); 
	}
	p=&a[0][0];//p纪录第一个数组元素的地址&a[0][0]; 
	move(p);
	for(i=0;i<3;i++)
	{
		printf("%d %d %d \n",a[i][0],a[i][1],a[i][2]);
	}
	
	
	return 0;
}
 void move(int *p)
 {
 	int i,j,t;
 	for(i=0;i<3;i++)
 	{
 		for(j=i;j<3;j++)
 		{
 			t=*(p+3*i+j);//表示a中元素（首地址+行数*i+j） a[i][j] 
 			*(p+3*i+j)=*(p+3*j+i);
 			*(p+3*j+i)=t;
 			
 			
		 }
	 }
 	
 	
  } */
  /* 
  int main()
  {
  	void move(int *p);
  	int a[3][3];
  	int *p,i;
  	p=&a[0][0];//指向二维数组中的元素 
  	for(i=0;i<3;i++)
  	{
  		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	  }
  	move(p);
  	for(i=0;i<3;i++)
  	{
  		printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
	 }
  	
  	
  	return 0;
  }
  void move(int *p)
  {
  	int i,j,t;
  	for(i=0;i<3;i++)
  	{
  		for(j=i;j<3;j++)
  		{
  			t=*(p+3*i+j);
  			*(p+3*i+j)=*(p+3*j+i);
  			*(p+3*j+i)=t;	
  			
		  }
	  }
  	
  	
  	
  }*/
/*  
int main()
{
	void change(int *p);
	int a[5][5],*p,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		 } 
		
	}
	p=&a[0][0];
	change(p);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");//每隔5个打印一个换行符 
	}
	
	return 0;
}
void change(int *p)//传递一个数组元素的位置 基础数据类型使元素 
{
	int i,j;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(p+5*i+j)>*pmax)
			{
				pmax=p+5*i+j;//a[i][j] 
			}
		}
	 } 
	 
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		if(*(p+5*i+j)<*pmin)
			 {
			 	pmin=p+5*i+j;
			}	
		 }
	 }
	 int temp;
	 temp=*(p+12);
	 *(p+12)=*pmax;
	 *pmax=temp;
	 temp=*p;
	 *p=*pmin;
	 *pmin=temp;
	 pmin=p+1; 
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{    //排除最小的 
	 		if(  ( (p+5*i+j)!=p  ) &&   (  *(p+5*i+j)<*pmin   )        )
	         pmin=p+5*i+j;
			 
		 }
	 }
	 temp=*(p+4);
	 *(p+4)=*pmin;
	 *pmin=temp;
	 pmin=p+1;
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{  //排除最小的 和第二小的 
	 		if(  ( (p+5*i+j)!=p  ) &&  ( (p+5*i+j)!=(p+4) )  && ( *(p+5*i+j)<*pmin )        )
	 		pmin=p+5*i+j;
	 		
		 }
	 }
	 temp=*(p+20);
	 *(p+20)=*pmin;
	 *pmin=temp;
	 pmin=p+1;
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		if(  ((p+5*i+j)!=p ) && ( (p+5*i+j)!=(p+4)   )  && (  (p+5*i+j)!=(p+20)) && (  *(p+5*i+j)<*pmin )      )
	 		pmin=p+5*i+j;
	 		
		 }
	 	
	 }
	 temp=*(p+24);
	 *(p+24)=*pmin;
	 *pmin=temp; 
	 
	
}*/
/*
int main()
{
	struct Student
	{
		char name[20];
		char sex;
		int age;
		
	};//;
	
	struct Student e1,e2;
	e1.sex='F';
	e1.age=20;
	printf("%c,%d",e1.sex,e1.age);
	
	
	return 0;
}
*/
/* 
struct date
{
	int month;
	int year;
	int day;
	
};
struct student
{
   char name[20];
   char sex;
   struct date birthday;//birthday是struct date 类型	
	
};

int main()
{
    struct student e1;
	e1.birthday.year=1980;
	printf("%d",e1.birthday.year);//依次一级一级找到最低一级	
	
	return 0;
 } 

*/
/*
struct date
{
   int month;
   int day;
   int year;	
	
};
struct student
{
   char name[30];
   char sex;
   struct date birthday;
   char address[30];	
	
};

int main()
{
	
	struct student e1={"wangfan",'F',11,12,1980,"Beijing"
	};
	struct student stu[4]={{
	},
	};
	
	return 0;
}*/
/*
struct Date
{
	int year;
	int month;
	int day;
	
};
int main()
{
	struct Date date;
	int i,days;
	int day_lab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	days=0;
	for(i=0;i<date.month;i++)
	{
		days=days+day_lab[i];
	}
	days=days+date.day;
	if((date.year%4==0 &&date.year%100!=0 || date.year%400==0 ) && date.month>=3   )
	days=days+1;
	printf("%d",days);
	
	
	return 0;
}

*/
/*
struct Date
{
	int year;
	int month;
	int day;
};
int main()
{
    struct Date date;
	int i,days=0;
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	int month_lab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<date.month;i++)
	{
		days=days+month_lab[i];
	}
	days=days+date.day;
	if(  (date.year%4==0 && date.year%100!=0 || date.year%400==0)  && date.month>=3            )
	days=days+1;
	printf("%d",days);
	
	
		
	
}*/
/*
struct Student
{
	char num[6];
	char name[8];
	int score[4];
};
struct Student stu[5];
int main()
{
	void print(struct Student stu[6]);
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("NO:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("score %d:",j+1);
			scanf("%d",&stu[i].score[j]);
			
		}
		printf("\n");
	}
	
	print(stu);
	return 0;
}

void print(struct Student stu[6])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("%5s%10s",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("%9d",stu[i].score[j]);
		}
		printf("\n");
	}
	
	
	
}

*/
/* 
struct Student
{
	char num[6];//学号用字符数组 
	char name[8];//名字用字符数组 
	int score[4];//分数用整形数组 
	
};
int main()
{
	void print(struct Student stu[5]);
	struct Student stu[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("No:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)//for循环输入整形数组 
		{
			printf("score %d:",j+1);
			scanf("%d",&stu[i].score[j]);//&取地址符号 
		}
	   printf("\n");	
	}
	print(stu);
	
	return 0;
}
void print(struct Student stu[6])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("%5s %10s ",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("%d",stu[i].score[j]);
		}
		printf("\n");
	}
	
	
	
	
}

*/
/*
struct Student
{
	char num[6];
	char name[8];
	float score[3];
	float aver;
	
};
int main()
{
	struct Student stu[5];
	int i,j,maxi;
	float sum,max,average;
	for(i=0;i<5;i++)
	{
		printf("No:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)//for循环输入整形数组 
		{
			printf("score %d:",j+1);
			scanf("%f",&stu[i].score[j]);//&取地址符号 
		}
	   printf("\n");	
	}
	
	average=0;
	max=0;
	maxi=0;
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+stu[i].score[j];
		}
		stu[i].aver=sum/3;
		average=average+stu[i].aver;
		if(sum>max)
		{
			max=sum;
			maxi=i;
		}	
	}
	average=average/5;
	for(i=0;i<5;i++)
	{
		printf("%5s %10s",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("%d",stu[i].score[j]);
		
		}
			printf("%f\n",stu[i].aver);
	}
	printf("%f\n",average);
	printf("%5s %10s\n",stu[maxi].num,stu[maxi].name);
	for(j=0;j<3;j++)
	{
		printf("%f",stu[maxi].score[j]);
	}
	
	
	return 0;
}*/
/*
struct Student
{
	char num[6];
	char name[8];
	float score[3];
	float aver;
	
};
int main()
{
	struct Student stu[10];
	int maxi;
	float sum,max,average;
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("NO:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("score %d:",j+1);
			scanf("%f",&stu[i].score[j]);
			
		}
		printf("\n");
	}
	average=0;
	max=0;
	maxi=0;
	for(i=0;i<10;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+stu[i].score[j];
		}
		stu[i].aver=sum/3;
		average=average+stu[i].aver;
		if(sum>max)
		{
			maxi=i;
			max=sum;
		}
		average=average/2;
		
		
	}
	for(i=0;i<2;i++)
	{
		printf("%5s %5s ",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("%.2f",stu[i].score[j]);
		}
		printf("%.2f\n",stu[i].aver);
	}
	printf("%.2f\n",average);
	printf("%s %s",stu[maxi].num,stu[maxi].name);
	for(i=0;i<3;i++)
	{
		printf("%.2f",stu[maxi].score[j]);
	}
	
	
	return 0;
}
*/         //有问题

/*
struct Student
{
	int num;
	char name[20];
	float score;	
};
int main()
{
	struct Student stu[5]={
		{10100,"zhang",78},{10103,"wang",98.5},{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100}
	};
	int n=5;
	struct Student temp;//定义一个 struct student 类型的变量 
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(stu[j].score>stu[k].score)  k=j;
			
		}
		if(k!=i)
		{
			temp=stu[k];
			stu[k]=stu[i];
			stu[i]=temp;
			
		}
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%6d  %8s	 %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	}
	
	
	
	
	return 0;
}*/
/*
int main()
{
	int lengh(char *p);//一个返回一个整数的函数 
	int len;
	char str[30];
	scanf("%s",&str);
	len=length(str);
	printf("%d",len);	
}
 int lengh(char *p)
 {
 	//用这个办法纪录走过的字符个数 
 	
 	int n;
 	n=0;
 	while(*p!='\0')
 	{
 		n++;
 		p++;
	 }
	 return (n);
 }*/
  /*
 int main()
 {
 	void copy(char *p1,char *p2);//两个数组 两个指向字符数组的指针 
 	char str1[30],str2[30];
 	gets(str1);
 	int m;
 	scanf("%d",&m);
 	printf("%s",str2);
 	
 	return 0;
 }
 void copy(char *p1,char *p2)
 {
 	int n=0;//让指针移动放到m处 
 	while(n<m-1);
 	{
 		p1++;
 		n++;
	 }
 	
 	while(*p1!='\0')
 	{
 		*p2=*p1;
 		p1++;
 		p2++;
	 }
	 *p2='\0';//一定记得给数组加上'\0'; 
 	
 }*/
 
 /*
 struct Student 
 {
 	int num;
 	char name[20];
 	float score[3];
 	float aver;	
 };
 int main()
 {
 	void input(struct Student *p);
 	struct Student max(struct Student *p);
 	void print(struct Student stu);
 	struct Student stu[3],*p=stu;
 	input(p);
 	print(max(p));
 	
 	
 	return 0;
 }
 void input(struct Student *stu)
 {
 	int  i;
 	for(i=0;i<3;i++)
 	{
 		scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
 		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
 		
	 }
 	
 	
 }
 struct Student max(struct Student *stu)
 {
 	int i,maxi=0;
 	for(i=0;i<3;i++)
 	{
 		if(stu[i].aver>stu[maxi].aver)  maxi=i;
	 }
 	
 	return (stu[maxi]);
 }
 void print(struct Student stu)
 {
 	printf("%d%s%5.1f%5.1f%5.1f%6.2f",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);
 }*/
 /* 
 struct Student 
 {
 	int num;
 	char name[8];
 	float score[3];
 	float aver;
 	
 };
 int main()
 {
 	void input(struct Student *p);
 	struct Student max(struct Student *p);
 	void print(struct Student stu);
 	void sort(struct Student *p);
 	struct Student stu[3],*p;
 	p=stu;
 	input(p);
 	print(max(p));
 	sort(p);
 	return 0;
 }
 void input(struct Student *stu)
 {
 	int i;
 	for(i=0;i<3;i++)
 	{
 		scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//scanf z这个输入的地方不要加换行符； 
 		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	 }
 	
 	
 	
 }
 struct Student max(struct Student *stu)
 {
 	int i,maxi=0;
 	for(i=0;i<3;i++)
 	{
 		if(stu[i].aver>stu[maxi].aver) maxi=i;
	 }
 	return (stu[maxi]);
 	
 	
 }
 void print(struct Student stu)
 {
 	printf("%d%s%5.1f%5.1f%5.1f%6.1f\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);//printf可以在后面加换行符 
 }
 void sort(struct Student *stu)
 {
 	int n=3;
 	int i,j,k;
 	struct Student temp;
 	for(i=0;i<n-1;i++)
 	{
 		k=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(stu[j].aver>stu[k].aver)  k=j;
		 }
		 
		 if(k!=i)
		 {
		 	temp=stu[i];
		 	stu[i]=stu[k];
		 	stu[k]=temp;		 	
		 	
		 	
		 }
		 
		 
	 }
	 for(i=0;i<3;i++)
	 {
	 	printf("%d%s%5.2f\n",stu[i].num,stu[i].name,stu[i].aver);
	 }
 	
 	
 	
 }*/
 /*
 int main()
 {
 	void sort(char str[10][20]);
 	int i;
 	char str[10][20];
 	for(i=0;i<10;i++)
 	{
 		scanf("%s",str[i]);
	 }
	 sort(str);
	 for(i=0;i<10;i++)
	 {
	 	printf("%s\n",str[i]);
	 }
 	
 	
 	return 0;
 }
 void sort(char str[10][20])
 {
 	int n=10;
 	char temp[10];
 	int i,j,k;
 	for(i=0;i<n-1;i++)
 	{
 		k=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(strcmp(str[j],str[k])<0)  k=j;
 			
		 }
		 if(k!=i)
		 {
		 	strcpy(temp,str[k]);
		 	strcpy(str[k],str[i]);
		 	strcpy(str[i],temp);
		 }
	 }
 	
 	
 	
 	
 }*/
 /*
 int main()
 {
 	int al(char c);
 	int longest(char string[20]);
 	int i;
 	char line[100];
 	gets(line);
 	for(i=longest(line);al(line[i]);i++)
 	{
 		printf("%c",line[i]); 
	 }
 	
 	return 0;
  } 
  
int al(char c)
{

	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	return (1);
	else
	return (0);
}



int longest(char string[20])
{
	int i;
	int len=0;//已累计的单词数
	int lengh=0;//最长单词的长度
	int flag=1;//flag=0 表示未开始 flag=1 表示单词开始
	int point=0;//表示当前单词的起始位置
	int place=0;//表示最长单词的起始位置 
	for(i=0;i<=strlen(string);i++)
	{
		if(al(string[i]))
        {
        	if(flag)
        	{
        		point=i;
        		flag=0;
			}
			else
			len++;
        	
     	}		
		else
		{
			flag=1;
		    if(len>=lengh)
		    {
		    	lengh=len;
		    	place=point;
		    	
			}
			
			len=0;
			
		}
		
		
		
	}
	
	return (place);
	
}
*/
/* 
int main()
{
	char str[100];
	int al(char c);
	gets(str);
	int len=0,lengh=0,point=0,place=0,flag=1;
	int i;
	for(i=0;i<=strlen(str);i++)//i<=strlen(str) 保证最后一个单词也可以遍历 
	{
		if(al(str[i]))
		{
			if(flag)
			{
				flag=0;
				point=i;
			}
			else
			len++;
		}
		else
		{
			flag=1;
			if(len>=lengh)
			{
				lengh=len;
				place=point;
				
			}
			len=0;
			 //len=0要放在if语句的后面 
		}
		
		
		
	}
	//在循环结束时，由于len的值不为0（最后一个单词"dogs"的长度为4），
	//我们需要检查这是否是最长的单词。由于len = 4小于lengh = 5，所以不更新lengh和place。
	//也就是说如果i<stlen(str)而不是i<=strlen(str)的话 需要检查最后一个单词是不是最长的单词 
	for(i=place;al(str[i]);i++)//条件 
	{
	    printf("%c",str[i]);	
	}
	return 0;
}
int al(char c)
{
	if((c>='a'&&c<='z')|| (c>='A')&&(c<='Z'))
    return (1);
	else 
	return (0);	
	
}*/
/*
int main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	void bing(char *str1,char *str2);
	bing(str1,str2);
	printf("%s",str1);
	
	return 0;
}
void bing(char *str1,char *str2)
{
	while(*str1!='\0')
	{
		str1++;
	}
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str2='\0';
}

*/
//
/*
有一段文字（文字长度小于200），其中有若干整数。编写函数，找出其中的整数，存入一个数组中。



函数原型为：
int findint(char *s,int *a);
其中s表示带数字的字符串，a表示存整数的数组，返回值为字符串中的整数个数。字符串中只有大于等于0的整数。

编写主函数，输入字符串，调用函数识别整数，逆序输出它们。例如，输入字符串“The Wandering Earth exhibition at the China Science and Technology Museum in Beijing, April 4, 2019.”识别数字，输出“2019,4”。

输入：带空格字符串
输出：若干整数，用逗号隔开。


【输入输出样例】
输入：
he Wandering Earth exhibition at the China Science and Technology Museum in Beijing, April 4, 2019.


输出：
2019,4


int main()
{
	int find(char *p,int *a);
	char str[30];
	int a[20];
	gets(str);
    int n=find(str,a);
	int i,temp;
	for(i=0;i<(n/2);i++)//i<(n/2) 
	{
		temp=a[i];
		a[i]=a[n-1-i];//与a[n-1-i]交换 
		a[n-1-i]=temp;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
int find(char *p,int *a)
{
	int n=0; 
	int num=0;//这个数字的数值 
	while(*p!='\0')
	{
		if((*p>='0')&&(*p<='9'))
		{
			num=0;
			while((*p>='0')&&(*p<='9'))
			{
				num=num*10+(*p-'0');//字符数组中数字转换为整数
				p++;
			}
			n++;
			*a=num;
			a++;
			
		}
		else
		{
			p++;
			
		}
		
		
	}
  return (n);
	
	
}


//字符字符转换 
int main()
{
	void dig(int k,char str[30]);
	char str[30];
	int k;
	scanf("%d",&k);
    while(k!=-1)//从键盘输入数字 直到输入-1表示结束 
    {
    	dig(k,str);
    	printf("%s ",str);
    	scanf("%d",&k);
	}
	
	return 0;
}

void dig(int k,char str[30])
{
	int t=30;
	int i;//每次清零 
	for(i=0;i<t;i++)
	{
		str[i]='\0';
		
	}
	if((k>=0)&&(k<=9))
	{
		str[0]=k+'A';
		str[1]='\0';
		
	}
	else
	{
		char temp[30];
		int n=0;//纪录余数
		int i=0; 
		while(k>0)
		{
		    n=k%10;
		    temp[i]=n+'0';//将数字转化为字符 
		    k=k/10;
		    i++;
		}
		temp[i]='\0';
	    int j=0;//用于装置temp[]
	    char t;//中间数 
	    int len=strlen(temp);
		for(i=0;i<(len/2);i++)
		{
			t=temp[i];
			temp[i]=temp[len-1-i];
			temp[len-1-i]=t;
			
		 } 
		char *p=temp;
		i=0;//i为0 
		int num=0;
		while(*p!='\0')
		{
			num=10*(*p-'0')+(*(p+1)-'0');//将字符转为数字 
			if(num>=10 && num<=25 )
			{
				str[i]=num+'A';
				p=p+2;
				i++;
				
			}                
			else
			{
				str[i]=*p-'0'+'A';
				str[i+1]=*(p+1)-'0'+'A';
				i=i+2;
				p=p+2;
				
			}
			
		}
		str[i]='\0';//封上'\0'; 
		
	}
	
	
}





【问题描述】

从标准输入中输入一个N（N<=9）阶矩阵和一个M（M<=N）阶矩阵，判断矩阵M是否是N的子矩阵，若是则输出M在N中的起始位置，若不是则输出-1。若矩阵M能与N中某一区域完全相等，则称M是N的子矩阵。

【输入形式】

从标准输入读取矩阵。

第一行只有一个整数N，代表第一个矩阵的阶数。后续有N行输入，每行有N个以若干空格分隔的整数，代表该矩阵在该行上的所有元素。

输入完N阶矩阵后，再在下一行输入一个整数M，代表第二个矩阵的阶数。后续有M行输入，每行有M个以若干空格分隔的整数，代表该矩阵在该行上的所有元素。

【输出形式】

输出M在N中的起始位置，即N中的第几行第几列，两个数字用逗号","分隔（从第1行第1列开始计数，即：矩阵第一个元素的位置为：1,1。

若N有多个子矩阵与M矩阵完全相同，则输出首先找到的起始位置，即行最小的位置，若行相同，则为列最小的位置。

若M不是N的子矩阵，则输出-1。








int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int arr1[30][30],arr2[30][30],temp[30][30];//1消除行 2消除列 
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr2[i][j]=arr1[j][i];
		}
	}
	int s;//纪录一行中连续相等的数 
	int *p1;//指向行的一维数组 
	int t;//用来消除纪录 
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;)
		{     
			p1=&arr1[i][j];
	        s=0;
	        if(*p1==*(p1+1)  )
	        {
	        	int *start=p1;
			
		         while(*p1==*(p1+1) && p1<=&arr1[i][n-1])
	        	{
		        	p1++;
		    	    s++;
		        }
		       
		         if(s>=2)
	        	{
	        		printf("%d\n",s);
			          for(t=0;t<=s;t++)
			         {
			         	*(start+t)=0;
			       	 }
			         j=j+s;
		       }
		       else
		       {
		       	j=j+1;
			   }
		    
		    
	    	}
		    else
		    {
		    	j=j+1;
			}
		
		}
		
	 } 
	 int *p2; 
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<m;)
		{     
			p2=&arr2[i][j];
	        s=0;
	        if(*p2==*(p2+1)  )
	        {
	        	int *start=p2;
			
		         while(*p2==*(p2+1) && p2<=&arr2[i][m-1])
	        	{
		        	p2++;
		    	    s++;
		        }
		        //s的值比实际的数少了一 
		         if(s>=2)//s的值有讲究 
	        	{
	        		printf("%d\n",s);
			          for(t=0;t<=s;t++)//还有这里t的取值 
			         {
			         	*(start+t)=0;
			       	 }
			         j=j+s;
		       }
		       else
		       {
		       	j=j+1;
			   }
		    
		    
	    	}
		    else
		    {
		    	j=j+1;
			}
		
		}
		
	 } 
	
	
	
	 
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		temp[j][i]=arr2[i][j];
		 }
	 }
	 int output[30][30];
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		if(arr1[i][j]!=0 && temp[i][j]!=0)
	 		{
	 			output[i][j]=arr1[i][j];
			 }
	 		
	 		
		 }
	 }
	 for(i=0;i<m;i++) 
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%5d",output[i][j]);
		 }
		 printf("\n");
	 }
	
	
	
	return 0;
}




从标准输入中输入一个N（N<=9）阶矩阵和一个M（M<=N）阶矩阵，判断矩阵M是否是N的子矩阵，若是则输出M在N中的起始位置，若不是则输出-1。若矩阵M能与N中某一区域完全相等，则称M是N的子矩阵。

【输入形式】

从标准输入读取矩阵。

第一行只有一个整数N，代表第一个矩阵的阶数。后续有N行输入，每行有N个以若干空格分隔的整数，代表该矩阵在该行上的所有元素。

输入完N阶矩阵后，再在下一行输入一个整数M，代表第二个矩阵的阶数。后续有M行输入，每行有M个以若干空格分隔的整数，代表该矩阵在该行上的所有元素。

【输出形式】

输出M在N中的起始位置，即N中的第几行第几列，两个数字用逗号","分隔（从第1行第1列开始计数，即：矩阵第一个元素的位置为：1,1。

若N有多个子矩阵与M矩阵完全相同，则输出首先找到的起始位置，即行最小的位置，若行相同，则为列最小的位置。

若M不是N的子矩阵，则输出-1。











int main()
{
	int n,m;
	int arr1[30][30],arr2[30][30];
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	int flag=0;
	int p,q;
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<=n-m;j++)
		{
			if(arr1[i][j]==arr2[0][0])
			{
				flag=1;
				for(p=0;p<m;p++)
				{
					for(q=0;q<m;q++)
					{
					     if(arr2[p][q]!=arr1[i+p][j+q])
						 {
						     flag=0;
						     break;
					     }	
					}
				   if(flag==0)
				   {
				   	break;
				   }
				}
				
				
				
				 if(flag==1)
	        	{
			       printf("%d,%d\n",i+1,j+1);
			       break;
	        	}	
				
				
			}
			
			
		
		}
		if(flag==1)
		{
			break;
		}
		
	
	
		
	}
	if(i>(n-m)&&j>(n-m))
	printf("-1");
	
	
	
	return 0; 
}


编写一个程序，对输入的字符串s和t，求其最长的公共子字符串。
 【输入形式】
从屏幕分行读入串s和t。s和t由任意字符构成，长度都不超50个字符。输入数据确保只有唯一的最长公共子串。如果没有公共子串，打印No Answer

【输出形式】
输出串s和串t的最长公共子串。

算法提示：用一个int型的计数器记录当前匹配长度，用一个字符数组记录当前匹配子串，如果存在更长子串，则进行相应替换。
【输入样例】
 假设从屏幕输入以下内容： 

aabcdababce
12abcabcdace
【输出样例】：

abcda




int main()
{
	char str1[50],str2[50],max[50];
	int lengh=0,n=0,i,j;
	gets(str1);
	gets(str2);
	char *p1,*p2,*temp;
	p1=str1;
	p2=str2;
    for(i=0;i<strlen(str1);i++)
    {
    	p1=&str1[i];
    	for(j=0;j<strlen(str2);j++)
    	{
    		if(str2[j]==str1[i])
    		{
    			n=0;
    			p2=&str2[j];
    			while(*p1==*p2)
    			{
    				n++;
    				p1++;
    				p2++;
				}
    			if(n>lengh)
    			{
    				lengh=n;
    				temp=&str2[j];
    				for(i=0;i<lengh;i++)
    				{
    					max[i]=*temp;
    					temp++;
					}
					max[i]='\0';
    				
    				
				}
    			
    			
			}
    		
    		
		}
    	
    	
    	
	}
	printf("%s",max);
   
	
	return 0;
}

*/
/*
【问题描述】

编写一个程序，从键盘接收一个字符串，然后按照字符顺序从小到大进行排序，并删除重复的字符。
【输入形式】

用户在第一行输入一个字符串。
【输出形式】

程序按照字符(ASCII)顺序从小到大排序字符串，并删除重复的字符进行输出。
【样例输入】

badacgegfacb
【样例输出】

abcdefg
*/
/*
int main()
{
	char str[30];
	gets(str);
	int i,j,t=1;
	char temp[30];
	int n=strlen(str);
    int	flag=1;
    temp[0]=str[0];
	for(i=1;i<n;i++)
	{
		flag=1;
		for(j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
			flag=0;
		}
		if(flag)
		{
			temp[t]=str[i];
			t++;
		}
		
		
	}
	temp[t]='\0';
	int k;
	char s;
	n=strlen(temp);
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(temp[j]<temp[k])  k=j;
		}
		if(k!=i)
		{
			s=temp[i];
			temp[i]=temp[k];
			temp[k]=s;
			
		}
		
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",temp[i]);
		
	}
	
	
	return 0;
}


/*
int main()
{
	int arr[11]={1,4,6,9,13,16,19,28,40,100};
	int n;
	scanf("%d",&n);
	int i,j;
	int t;//纪录第几个元素开始arr[i]比n大 
	for(i=0;i<10;i++)
	{
		if(arr[i]>n)
		{
			t=i;
			break;
		}
		
		
	}
    for(i=9;i>=t;i--)
    {
    	arr[i+1]=arr[i];
    	
	}
	arr[t]=n;
	for(i=0;i<11;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
*/
/*
首先输入第一组整数，以一个空格分隔各个整数；然后在新的一行上输入第二组整数，以一个空格分隔，行末有回车换行。

【输出形式】

按从大到小顺序排序输出合并后的整数集（去掉在两组整数中都出现的整数，以一个空格分隔各个整数）。

【样例输入】

5 1 4 32 8 7 9 -6
5 2 87 10 1
【样例输出】

87 32 10 9 8 7 4 2 -6
【样例说明】

第一组整数为5   1   4   32   8   7   9   -6，第二组整数分别为5   2   87   10   1。将第一组和第二组整数合并（去掉在两组整数中都出现的整数5和1），并从大到小顺序排序后结果为87   32   10   9   8   7   4   2   -6。
 */ 
/*
int main()
{
	int arr[40],i,j;
	for(i=0;;i++)
	{
		scanf("%d",&arr[i]);
		if(getchar()=='\n')
		break;
	}
	i++;
	for(;;i++)
	{
		scanf("%d",&arr[i]);
		if(getchar()=='\n')
		break;
	}
    int len=i+1;
   
    int s,k;
    for(i=0;i<len-1;i++)
    {
    	k=i;
    	for(j=i+1;j<len;j++)
		{
			if(arr[j]>arr[k])  k=j;
		}
		if(k!=i)
		{
			s=arr[k];
			arr[k]=arr[i];
			arr[i]=s;
			
		}
		
	}
	
	int temp[30];
	int flag=1,t=1;
	temp[0]=arr[0];
	for(i=1;i<len;i++)
	{
		flag=1;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]==arr[i])
			flag=0;
		}
		if(flag)
		{
			temp[t]=arr[i];
			t++;
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d ",temp[i]);
		
	}

	return 0;
}
*/
/*
写一个程序，当在一个字符串中出现子串时就删除它。
【输入形式】

用户在第一行输入一个字符串，用户在第二行输入一个子串。
【输出形式】

程序在下一行输出删除其中所有子串后的字符串。如果字符串不包含子串则输出原字符串本身。
【样例输入】

 I am a boy!
 a
【样例输出】

 I m  boy!  
 */
/*
int main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	int len=strlen(str2);
	char *p1,*p2,*point;
	p1=str1;
	p2=str2;
	int flag=1;
	int i;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			flag=1;
			point=p1;
			while(*p2!='\0')
			{
				p1++;//错误的因为当str2走到最后一个字符串时*p2!='\0'进入循环 p2++ 后走到'\0  *p1!=*p2 不相等 flag=0； 
				p2++;
				if(*p1!=*p2)
				{              //先判断再++； 
					flag=0; 
					break;
				}
				
				
			}
			if(flag)
			{
				p1=point+len;
				p2=str2;
			}
		    else
		    {
		    	printf("%c",*point);
		    	p1=point+1;
		    	p2=str2;
			}
			
		}
		else
		{
			
			printf("%c",*p1);
			p1++;
		}
		
		
		
		
	 } 
	 
	
	
	
	return 0;
}
*/
/* 

int main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	int i,flag=1;
	char *p1=str1,*p2=str2;
	char *point;
	int len=strlen(str2);
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			point=p1;
			flag=1;
			while(*p2!='\0')
			{
			
				if(*p1!=*p2)
				{
					flag=0;
					break;
				}
				p1++;
				p2++;	
			}
			if(flag)
			{
				p1=point+len;
				p2=str2;
			}
			else
			{
				printf("%c",*point);
				p1=point+1;
				p2=str2;
				
			}
			
			
			
		}
		
		
		else
		{
			printf("%c",*p1);
			p1++;
		}
		
		
		
		
		
	}
	
	
	return 0;
}


*/
/* 
int main()
{
	void dig(int k,char str[30]);
	int k;
	char str[30];
	scanf("%d",&k);
	while(k!=-1)
	{
		dig(k,str);
		printf("%s",str);
		scanf("%d",&k);
		
	}
	
	
	return 0;
 } 
 void dig(int k,char str[30])
 {
 	int i,j;
    char temp[30];//纪录余数 
    char *p=temp;
    int t=0;
 	for(i=0;i<30;i++)
 	{
 		str[i]='\0';
	 }
	 if(k>=0&&k<=9)
	 {
	 	str[0]=k+'A';
	 	str[1]='\0';
	 }
 	else
 	{
 		t=0;//给temp[t]更新用 
 		while(k>0)
 		{
 			temp[t]=k%10+'0';
 			k=k/10;
 			t++;
		 }
 		temp[t]='\0';
 		char s;//临时存放temp[i] 
 		int len=strlen(temp);
 	    for(j=0;j<len/2;j++)
 	    {
 	    	s=temp[j];
 	    	temp[j]=temp[len-1-j];
 	    	temp[len-j-1]=s;
 	    	
 	    	
		  } 
		  i=0;//i=0的位置 
		  while(*p!='\0')
		  {
	
		  	int num=(*p-'0')*10+(*(p+1)-'0');
		  	if(num>=10 &&num<=25)
		  	{
		  		str[i]=num+'A';//数字+字符'A'即为字符 
		  		p=p+2;
		  		i++;
		  		
			  }
		  	else
		  	{
		  		str[i]=*p-'0'+'A';
		  		str[i+1]=*(p+1)-'0'+'A';
		  		i=i+2;
		  		p=p+2;
			  }
		  	 
		  	
		  	
		  	
		  }
 		  str[i]='\0';
 		
 		
 		
	 }
 	
 	
 	
 	
 }
*/

/*
int main()
{
	char str[30];
	int al(char c);
	gets(str);
	int len=0,lengh=0,point=0,place=0,flag=1;
	int i;
	for(i=0;i<=strlen(str);i++)
	{
		if(al(str[i]))
		{
			
			if(flag)
			{
				flag=0;
				point=i;
			}
			else
			{
			     len++;
			}
			
		}
		else
		{
			flag=1;
			if(len>lengh)
			{
				lengh=len;
				place=point;
			}
			len=0;
		}
		
		
		
	} 
	for(i=place;al(str[i]);i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}



int al(char c)
{
	if((c>='a'&& c<='z') ||  (c>='A' && c<='Z'))
	return (1);
	else
	return (0);
}
*/
/*
int main()
{
	int al(char c);
	char str[30];
	gets(str);
	int len=0,lengh=0,place=0,point=0,flag=1;
	int i;
	char *p=str;
	for(i=0;i<=strlen(str);i++)
	{
		if(al(str[i]))
		{
			
			if(flag)
			{
			    point=i;
				flag=0;
			}
			else
			{
				len++;
			}
			
			
		}
		else
		{
			flag=1;
			if(len>lengh)
			{
				lengh=len;
				place=point;
			}
			
			len=0;
			
		}
		
		
	}
	for(i=place;al(str[i]);i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}


int al(char c)
{
	if( (c>='a'&&c<='z') ||(c>='A'&& c<='Z'  )    )
	return (1);
	else
	return (0);
	
}
*/
/*
int main()
{
	int find(char *p,int *a);
	char str[30];
	int a[20];
	gets(str);
	int n=find(str,a);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
int find(char *p,int *a)
{
	int n=0;
	int num=0;
	while(*p!='\0')
	{
		if((*p>='0' )&& (*p<='9'))
		{
			num=0;
			while((*p>='0') && (*p<='9'))
			{
				num=num*10+(*p-'0');
				p++;
			}
			n++;
			*a=num;
			a++;
			
			
		}
		else
		{
			p++;
		}
		
		
		
		
	}
	
	
	return (n);
	
	
}
*/
/*
int main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	int i,j,len=0,t=0,lengh=0;
	char temp[30];
	char *p2,*p1,*point;
	for(i=0;i<strlen(str1);i++)
	{
	   p1=&str1[i];
	   for(j=0;j<strlen(str2);j++)
	   {
	   	 if(str2[j]==str1[i])
	   	 {
	   	 	len=0;
	   	 	p2=&str2[j];
	   	 	while(*p2==*p1)
	   	 	{
	   	        p1++;
	   	        p2++;
	   	        len++;
	   	 		
			}
	   	 	if(len>lengh)
	   	 	{
	   	 		lengh=len;
	   	 		for(t=0;t<lengh;t++)
	   	 		{
	   	 			temp[t]=str2[j];
	   	 			j++;
	   	 			
				}
				temp[t]='\0';
	   	 		
			}
	   	 	
	   	 	
		 }
	   	 
	   	
	   	
	   }
		
		
		
	}
	printf("%s",temp);
	
	
	
	
	
	return 0; 
 } 
*/
/*

int main()
{
	char str1[50],str2[50],max[50];
	int lengh=0,n=0,i,j;
	gets(str1);
	gets(str2);
	char *p1,*p2,*temp;
	p1=str1;
	p2=str2;
    for(i=0;i<strlen(str1);i++)
    {
    	p1=&str1[i];
    	for(j=0;j<strlen(str2);j++)
    	{
    		if(str2[j]==str1[i])
    		{
    			n=0;
    			p2=&str2[j];
    			while(*p1==*p2)
    			{
    				n++;
    				p1++;
    				p2++;
				}
    			if(n>lengh)
    			{
    				lengh=n;
    				temp=&str2[j];
    				for(i=0;i<lengh;i++)
    				{
    					max[i]=*temp;
    					temp++;
					}
					max[i]='\0';
    				
    				
				}
    			
    			
			}
    		
    		
		}
    	
    	
    	
	}
	printf("%s",max);
   
	
	return 0;
}

*/
/*
int main()
{
	char str1[30],str2[30],temp[30];
	gets(str1);
	gets(str2);
	int i,j,t,len=0,lengh=0;
	char *p1,*p2;
	for(i=0;i<strlen(str1);i++)
	{
		p1=&str1[i];
		for(j=0;j<strlen(str2);j++)
		{
			if(str1[i]==str2[j])
			{
				len=0;
				p2=&str2[j];
				while(*p1==*p2)
				{
					len++;
					p1++;
					p2++;
				}
				if(len>lengh)
				{
					t=0;
					lengh=len;
					for(t=0;t<lengh;t++)
					{
					    temp[t]=str2[j];
						j++;	
					}
					temp[t]='\0';
				}
				
				
			}
			
			
			
		}
		
		
		
		
		
	 } 
	
     printf("%s",temp);
	
	return 0;
}

*/
/*
int main()
{
	char str[30];
	gets(str);
	int len=strlen(str);
	char temp[30];
	int flag=1,i,j,t=1;
	temp[0]=str[0];
	for(i=1;i<len;i++)
	{
		flag=1;
		for(j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			temp[t]=str[i];
			t++;
		}	
		
	}
	char s;
	int n=strlen(temp);
	int k;
	for(i=0;i<n-1;i++)
	{
		k=i;
	     for(j=i+1;j<n;j++)
	     {
	     	if(temp[j]<temp[k])  k=j;
	    
		 }
		if(k!=i)
		{
			s=temp[i];
			temp[i]=temp[k];
			temp[k]=s;
			
		}
		
		
	}
	printf("%s",temp);
	
	
	return 0;
 } 

*/
/*
int main()
{
	int arr[40],i,j;
	for(i=0;;i++)
	{
		scanf("%d",&arr[i]);
		if(getchar()=='\n')
	    break;
		
	}
	i++;
	for(;;i++)
	{
		scanf("%d",&arr[i]);
		if(getchar()=='\n')
		break;
	}
	int len=i+1;
	int k,temp;
	for(i=0;i<len-1;i++)
	{
		k=i;
		for(j=i+1;j<len;j++)
		{
			if(arr[j]>arr[k])  k=j;
			
			
		}
		if(k!=i)
		{
			temp=arr[i];
			arr[i]=arr[k];
			arr[k]=temp;
			
		}
		
		
		
		
	}
	int output[40],flag=1;
	output[0]=arr[0];
	int t=1;
	for(i=1;i<len;i++)
	{
		flag=1;
		for(j=i-1;j>=0;j--)
		{
			if(arr[i]==arr[j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
		    output[t]=arr[i];
		    t++;
		}
		
		
		
	}
	for(i=0;i<t;i++)
	{
		printf("%d ",output[i]);
	}
	
	
	return 0;
}
*/
/*
int main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	char *p1=str1,*p2=str2,*point;
	int flag=1;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			flag=1;
			point=p1;
			while(*p2!='\0')
			{
				
				if(*p2!=*p1)
				{
					flag=0;
					break;	
				}
				p1++;
				p2++;
			}
		    if(flag)
		    {
		    	p2=str2;
			}
			else
			{
				printf("%c",*point);
				p2=str2;
				p1=point+1;
				
			}
			
			
			
		}
		else
		{
			printf("%c",*p1);
			p1++;
		}
		
		
		
		
		
		
		
		
		
	}
	
	
	
	return 0;
}

*/
/* 
单词频率统计
编写程序，输入一段文本，统计其中各单词出现的次数（单词不区分大小写），输出频率最高的前十个单词及其出现次数。若次数相同，按字典序排序。


输入：一段文本

输出：小于等于10行，每行是一个单词及出现次数，中间用一个英文冒号隔开，单词以小写形式出现。


【输入输出样例】
输入：
Xi boarded the destroyer Xining on Tuesday afternoon after inspecting the honor guards of the PLA Navy at a pier in the city of Qingdao


输出：
the:4
of:2
a:1
after:1
afternoon:1
at:1
boarded:1
city:1
destroyer:1
guards:1

*/

int main()
{
	char str[100][30];
	int count[100]; 
	int i=0,j;
	for(i=0;;i++)
	{
		scanf("%s",str[i]);
		if(getchar()=='\n')
		break;
	 } 
	int len=i+1;
	int t;//接受比较的值 
	int flag=1;
	char temp[100][30];
	strcpy(temp[0],str[0]);
	count[0]=1;
	int s=1;//更新temp[] 
	for(i=1;i<len;i++)
	{
	    flag=1;
		for(j=s-1;j>=0;j--)
		{
			t=strcmp(str[i],temp[j]);//与temp[j]比较 
			if(t==0)
			{
				flag=0;
				break;
			}
		 } 
		if(flag)
		{
			strcpy(temp[s],str[i]);
			count[s]=1;
		    s++;
			
		}
		else
		{
			count[j]++;
		}
		
		
	}
	temp[s][0]='\0';
	int k;
	int n;//临时存放count[] 
	char m[30];//临时存放temp[] 
	for(i=0;i<s-1;i++)
	{
		k=i;
		for(j=i+1;j<s;j++)
		{
			  k=j;
			
			
		}
		if(k!=i)
		{
		     n=count[i];
			 count[i]=count[k];
			 count[k]=n;
			 strcpy(m,temp[i]);
			 strcpy(temp[i],temp[k]);
			 strcpy(temp[k],m); 
			
			
			
		}
		
		
	}


	
	for(i=0;i<10;i++)
	{
		printf("%s %d\n",temp[i],count[i]);
	}
	
	
	
	return 0;
}


/* 
int main()
{
	char str[100][30];
	int count[100];
	int i,j;
	for(i=0;;i++)
	{
		scanf("%s",str[i]);
		if(getchar()=='\n')
		break;
	}
	int len=i+1;
	int flag=1;
	char temp[100][30];
	strcpy(temp[0],str[0]);
	count[0]=1;
	int s=1;//更新temp[] 纪录有多少个单词 
	int t;//纪录比较的值 
	for(i=1;i<len;i++)
	{
		flag=1;
		for(j=s-1;j>=0;j--)
		{
			t=strcmp(str[i],temp[j]); //与temp[j]作比较 
			if(t==0)
			{
				flag=0;
				break;
			}
			
			
		}
		if(flag)
		{
			strcpy(temp[s],str[i]);
			count[s]=1;
			s++;
			
		}
		else
		{
			count[j]++;
		}
		
    }
	int k;
	int n;
	char m[30];
	for(i=0;i<s-1;i++)
	{
		k=i;
		for(j=i+1;j<s;j++)
		{
			if(count[j]>count[k] || ( count[j]==count[k] && strcmp(temp[j],temp[k])<0 )   )
		     k=j;
		}
		if(k!=i)
		{
			n=count[i];
			count[i]=count[k];
			count[k]=n;
			strcpy(m,temp[i]);
			strcpy(temp[i],temp[k]);
			strcpy(temp[k],m);
			
			
			
		}
		
		
	}
	for(i=0;i<10;i++)
	{
		printf("%s %d\n",temp[i],count[i]);
	}
	
	
	
	
	return 0;
}

*/







