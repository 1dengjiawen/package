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
		printf("�޸�"); 
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
 		defaut:printf("����");
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
		defaut:printf("����");
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
		printf("����"); 
	}
	else
		printf("��������"); 
	
	return 0;
}
*/
/*
int mian()
{
	int year,leap;
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0)
	printf("����");
	else
	printf("��������");
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
	printf("�������");
	
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
	printf("�������");
	
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
 	return 0;//�����10�� 
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
 		scanf("%d",&arr[i]);//��Ҫ����ȡ��ַ�� 
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
 			if(a[i+1]>a[i])//��������ұ��б�ǰ���������Ͱ�������ǰ���� 
			 {
			 	t=a[i];
			 	a[i]=a[i+1];
				a[i+1]=t; 	
			 }                             //�Ӵ�С���� 
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
		if(n%3==0)//n�ĳ�ֵ��0��������3�����ֺ�ʹ��з� 
	    printf("\n");
		for(j=0;j<=2;j++,n++)//j��n֮���ö��Ÿ��� 
		{
			printf("%5d",a[i][j]);
		//	if(n%3==0)
	    //    printf("\n");
			b[j][i]=a[i][j];
		}
	}
	printf("\n"); //��ʱn��ֵΪ6����ѭ�������Լ����������һ�� 
	printf("%d\n",n);//����������¼��������ֵĸ��� 
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
	printf("%d\t%d",row,colum);  //����� 10     2,1 
	                           //ָ����10 �ڵ�3�е�2�� 
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
	char a[]="i am happy"; //�������ĳ�����11 ����/0 
	char b[5][4]={{'m'},{'a'},{'c'},{"c"},{"edd"}};
	int i,j;
	for(i=0;i<11;i++)
	{
		printf("%c\n",a[i]);//��� i a m h a p p y���ַ���ʽ 
	}
	printf("%s\n",a);//��� i am happy ���ַ�����ʽ 
	for(i=0;i<5;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		printf("%c",b[i][j]);//ֻ�� ��%c����ʽ����ſ������b����������Ԫ�� 
		}
	}
	return 0;
}*/
/* 
int main()
{
	char str[]="china\nbeijing"; 
	char str1[]="china beijing";
	puts(str);//����\0�ַ���ֹͣ��� 
	char c[10];
	gets(c);//�Իس�����Ϊ����
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
	//strcat����ʵ��
	while(str1[i]!=0)
	{
		printf("%c",str1[i]);
		i++;
	}
	return 0;
}///������
*/
/*
int main()
{
	char str1[30]={"people's republic of "};
	char str2[]={"china"};
	strcpy(str1,str2);//���н����china 
	strcpy(str1,"people");//ע���������������� 
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
 	for(i=0;(c=string[i]!='\0');i++)//��'\0'; 
 	{
 		if(string[i]==' ')//������ 
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
	int k;//��С�������� 
	for(i=0;i<n-1;i++)
	{
		k=i;//���浱ǰ��С�� 
		for(j=i+1;j<n;j++)
		{
			if(arr[k]>arr[j]);//���ǰ��������ں������
			{
			   k=j;//�ҳ���С���� 
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
void sort(int a[],int n)//�Ӵ�С���� 
{
   int i,j,k,t;
   for(i=0;i<n-1;i++)
   {
   	k=i;//��¼���� 
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
	scanf("%d",&n);//ע��ȡ��ַ�� 
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
	scanf("%d",&n);//ȡ��ַ�� 
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
	int f,g,h,i,j;//ȡ�� 
	f=n/10000;
	g=(int)(n-f*10000)/1000; 
	h=(int)(n-f*10000-g*1000)/100;
	i=(int)(n-f*10000-g*1000-h*100)/10;
	j=(int)(n-f*10000-g*1000-h*100-i*10)/1;
	switch(place)
	{
		case 5:printf("%d %d %d %d %d\n",e,d,c,b,a);break;//��Ҫ����break 
		case 4:printf("%d %d %d %d\n",e,d,c,b);break;
		case 3:printf("%d %d %d\n",e,d,c);break;
		case 2:printf("%d %d",e,d);break;
		case 1:printf("%d",e);break;
	}
	switch(place)
	{
		case 5:printf("%d %d %d %d %d\n",j,i,h,g,f);break;//��Ҫ����break 
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
	int a,n,i=1;//i������¼ѭ������ 
	scanf("%d%d",&a,&n);
	//sn���ڼ�¼�ܺ� 
	int count=0;
	int tn=a,sn=0;
	while(i<=n)
	{
	   sn=sn+tn;
	   tn=tn*10+a;
	   i++;	//ע������ĳ�ʼ������ i����ֵӦ��Ϊ n+1 ��1��n+1  ����n��ѭ�� 
	   count++;//count��ֵΪn ��0��n����n��ѭ�� 
	 } 
	printf("%d",sn);
	printf("%d %d",i,count);
	return 0;
 } */
 /*
 int main()
 {
 	double sn=0;
 	int n,i=1,tn=1;//n����ѭ������ 
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
	double k,sn1=0,sn2=0,sn3=0;//���������Ϊdouble���� 
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
	printf("%f",sn1+sn2+sn3);//double����������%f����ʽ��� 
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
		sn=0;//ÿһ�ζ�Ҫ��sn���� 
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
		for(j=1;j<=3-i;j++)//���3���ո� 
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
int main()//�Ӵ�С���� 
{
	int arr[30]={1,16,5,98,23,119,18,75,65,81};
	int i,j,k,t,n=10;
	for(i=0;i<=n-1;i++)//i��0��ʼ������ĵ�һλԪ�ؿ�ʼ ֱ�����һ��Ԫ�� 
	{
		k=i;
		for(j=i+1;j<=n-1;j++)//j��i�����Ԫ�ؿ�ʼ�� ֱ�����һ��Ԫ�� 
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
		break;//�ҵ���Ҫ��ʱ���� 
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
//�������
int main()
{
	int arr[]={8,6,5,4,1};
	int n=5,i,t;
	for(i=0;i<n/2;i++)//������� ��iС��n/2 
	{
	    t=arr[i];
	    arr[i]=arr[n-1-i];//��arr[i]λ�õ�����arr[n-1-i]λ�õ������� 
	    arr[n-1-i]=t;
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } */
 
 /* 
 //�������
 int main()
 {
 	int arr[10][10];
 	int n=10,i,j;
 	for(i=0;i<n;i++)
 	{
 		arr[i][i]=1;//ʹ���� ��ֵΪ1 
 		arr[i][0]=1;
 		
	 }
 	for(i=2;i<n;i++)//�ӵ����п�ʼ���� 
 	{
 	    for(j=1;j<=i-1;j++)
		 {
		 	arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
	     }	
	}
 	for(i=0;i<n;i++)//�ȸ�ֵ�ڴ�ӡ 
 	{
 		for(j=0;j<=i;j++)
 		{
 			printf("%6d",arr[i][j]);
		 }
		 printf("\n");//��ӡ\n 
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
	flag=1;//�������ǰ��� 
  	for(t=0;t<4;t++)
  	{
  		if(max>arr[t][m])//if ���治�ӷֺ� 
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
 	for(i=2;i<=k;i++)//С�ڵ���sqrt(k) 
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
 //������� 
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
 	printf("%s",str2);//gets�����ǿ������������ ��������getchar��ʱ���м䲻���пո� 
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
 	for(i=0;i<n;i++)//������д��for(i=0;str1[i]!='\0') 
 	{
 	   if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='I'||str1[i]=='i'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
		{
			str2[j]=str1[i];
			j++;
		}	
 		str2[j]='\0';//ע���Լ�����'\0' 
 		
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
 				point=i;//��point��¼��ǰ���ʵ���ʼλ�ã� 
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
				place=point;//place��¼Ŀǰ����ַ� 
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
 	int flag=1;//��¼�����Ƿ�ʼ
	int place=0;//��¼��ĵ��ʵĿ�ʼλ��
	int lengh=0;//��¼Ŀǰ����ʵĳ���
	int len=0,point;//len��¼��ǰ���ʵĳ��ȣ�point��¼��ǰ���ʵĿ�ʼλ�� 
 	for(i=0;i<=strlen(str1);i++)//<=strlen(str1) ����<strlen(str1) Ҫ����'\0'�ж����һ���ַ��Ƿ���� 
 	{
 		if(al(str1[i]))
 		{
 			if(flag)
 			{               //am 
 				point=i;
 				flag=0;//�����µ��ʺ�flag��Ϊ0 
 				len++;
			 }
			 else
			    len++; 
 			
		 }
 		else//��һ�����ʵĳ���ͳ������ 
 		{
 			flag=1;//ͳ����֮��flag��1 
 			printf("%d\n",len);
 			if(len>=lengh)
			 {
			 	lengh=len;
			 	place=point;
			 	len=0;//��len�ĳ��ȹ��� 
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
 float a_stu[10],a_cour[5];//a_courÿ�ſε�ƽ���ɼ� a_stuÿ��ѧ����ƽ���ɼ� 
 int r,c;
 int main()
 {
    void input(void);
	void aver_stu(void);//ÿ��ѧ��ƽ���� 
	void aver_cour(void);//ÿ�ſ�ƽ����
	float highest();//�ҵ���ߵķ��� 
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
	h=highest();//���ú����ĸ�ʽ�Ǻ����������ݵĵ�ַ�� 
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
 	    a_cour[i]=sum/10.0;//sum��float���͵� a_cour��float���͵����� 
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
 				c=j+1;//r,c��ȫ�ֱ��� 
			 }
		 }
 		
	 }
 	
 	return(high);
 }*/
 /*�ı�ָ������ָ���� 
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
 void swap(int *p1,int *p2)//��Ҫ����void 
 {
 	int tmp;
 	tmp=*p1;//��ָ��Ϊ��� �ı�a,b��ֵ 
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
 void exchange(int *p1,int *p2,int *p3)//���ݵ������ Ҳ����ָ�� 
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
 	for(p=arr;p<(a+10);p++)//��ʼ��p=arr ����Χp<(a+10) ;a��p�ĳ�ֵ 
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
	 p=arr;//p�Ѿ��ƶ��������ĩβ 
 	for(i=0;i<10;i++,p++)
 	{
 		printf("%d",*p);
	 }
	 printf("\n");
	 p=arr;//���¶�p��ʼ�� 
	 for(i=0;i<10;i++)
	 {
	 	printf("%d",*p++);//*p++�ȼ���*p p++�� 
	 }
 	return 0;
 }
 */
 /* 
 int main()
 {
 	void swap(int arr[],int n);
 	int i,arr[10]={3,7,9,11,0,6,7,5,4,2};
 	swap(arr,10);//��ַ��ʹarr������ 
 	for(i=0;i<10;i++)
 	{
 		printf("%d",arr[i]);
	 }
 	
 	return 0;
 }
 void swap(int arr[],int n)//void���� 
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
 //ָ��취��С��������
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
 	int *p=arr[0];//p��ָ������Ԫ�ص�ָ����� 
 	for(p=arr[0];p<(arr[0]+12);p++)//arr[0]�Ļ�������������Ԫ�� arr[0]��p�ĳ�ֵ 
	 {
	 	if((p-arr[0])%4==0)
	 	printf("\n");//�����if������������䲻�ܻ� 
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
 	aver(*score,12);//��ƽ��ֵ������Ԫ�� float *p��*score�Ļ�������������Ԫ�� 
 	sear(score,2);//��һ��һά���� float ��*p)[4] score �Ļ���������һά����
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
 		printf("%5.2f\t",*(*(p+n)+i));//��ӡfloat���͵�����%f 
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
  //���� 
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
 		arr[2*i]=arr[i];//��'\0'��ʼ���� 
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
 	putchar(n%10+'0');//������3ת��Ϊ�ַ�3 putchar��ӡ�����ַ� 
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
 	putchar(n%10+'0');//�ӵ���'0'����'\0' 
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
 	strcpy(temp,p1);//strcpy�������p1ָ���λ�ÿ�ʼ�����ַ���ֱ���������ַ���'\0'��Ϊֹ��
	                     //Ȼ����Щ�ַ����������ַ������Ƶ�p2ָ���λ�á�
 	strcpy(p1,p2);//��strcmp������Ҫ֪���������ʼλ��  p1=&str str������ 
 	strcpy(p2,temp);//p1 p2��ָ���ַ������ ָ�� ��������������Ԫ�� 
    
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
 	int *p;//p��ָ����� 
 	for(p=number+1;p<number+10;p++)//for ѭ�������ʹ��ָ����� 
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
 		printf("%d   ",number[i]);//number��Ϊһ��ָ��number[20]��ָ�� �Կ�����number[i]����������Ԫ�� 
 		
	 }	
 }*/
 /*
 int main()
 {
 	void move(int number[],int n,int m); 
 	int n,i,m;
 	scanf("%d",&n);//һ���ж���λ�� 
 	int number[30];
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&number[i]);
	 }
 	scanf("%d",&m);//����ƶ�����λ�� 
 	move(number,n,m);//��int number[] Ϊ��ʽ�δ���ֵ��ʱ��������׵�ַ���ݹ�ȥ�� 
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
 		end=*(number+n-1);//��¼���һ������ʱ�� 
 		for(p=number+n-1;p>number;p--)//p������λ���ǵ�2��Ԫ�� ���ﻹ�����ѭ���� p�����ƶ�����1��Ԫ��λ��ȥ 
 		{
 			*p=*(p-1);//�Ⱥ��ƶ� //p>number����p>=number ��һ��Ԫ��Ҳ��õ����� 
		 }
 		*number=end;//�����һ�������Ƶ���λ 
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
 		temp[i]=number[n-m+i];//�������m�������Ƶ���ʱ���� 
	 }
	 int *p,*p1;
	 p1=temp;
	 for(p=number+n-m-1;p>=number;p--)
	 {
	 	*(p+m)=*(p);
	 	
	 }
	 p=number;
	 for(;p<number+m;p++)//p<number+m ����p<number+m-1 
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
		 ++digit;//ͳ�Ƴ��ִ�����ʱ����++digit 
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
		else if(*p==' ')//==�ǵ�*p==' ' 
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
	p=&a[0][0];//p��¼��һ������Ԫ�صĵ�ַ&a[0][0]; 
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
 			t=*(p+3*i+j);//��ʾa��Ԫ�أ��׵�ַ+����*i+j�� a[i][j] 
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
  	p=&a[0][0];//ָ���ά�����е�Ԫ�� 
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
		printf("\n");//ÿ��5����ӡһ�����з� 
	}
	
	return 0;
}
void change(int *p)//����һ������Ԫ�ص�λ�� ������������ʹԪ�� 
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
	 	{    //�ų���С�� 
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
	 	{  //�ų���С�� �͵ڶ�С�� 
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
   struct date birthday;//birthday��struct date ����	
	
};

int main()
{
    struct student e1;
	e1.birthday.year=1980;
	printf("%d",e1.birthday.year);//����һ��һ���ҵ����һ��	
	
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
	char num[6];//ѧ�����ַ����� 
	char name[8];//�������ַ����� 
	int score[4];//�������������� 
	
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
		for(j=0;j<3;j++)//forѭ�������������� 
		{
			printf("score %d:",j+1);
			scanf("%d",&stu[i].score[j]);//&ȡ��ַ���� 
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
		for(j=0;j<3;j++)//forѭ�������������� 
		{
			printf("score %d:",j+1);
			scanf("%f",&stu[i].score[j]);//&ȡ��ַ���� 
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
*/         //������

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
	struct Student temp;//����һ�� struct student ���͵ı��� 
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
	int lengh(char *p);//һ������һ�������ĺ��� 
	int len;
	char str[30];
	scanf("%s",&str);
	len=length(str);
	printf("%d",len);	
}
 int lengh(char *p)
 {
 	//������취��¼�߹����ַ����� 
 	
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
 	void copy(char *p1,char *p2);//�������� ����ָ���ַ������ָ�� 
 	char str1[30],str2[30];
 	gets(str1);
 	int m;
 	scanf("%d",&m);
 	printf("%s",str2);
 	
 	return 0;
 }
 void copy(char *p1,char *p2)
 {
 	int n=0;//��ָ���ƶ��ŵ�m�� 
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
	 *p2='\0';//һ���ǵø��������'\0'; 
 	
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
 		scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//scanf z�������ĵط���Ҫ�ӻ��з��� 
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
 	printf("%d%s%5.1f%5.1f%5.1f%6.1f\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);//printf�����ں���ӻ��з� 
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
	int len=0;//���ۼƵĵ�����
	int lengh=0;//����ʵĳ���
	int flag=1;//flag=0 ��ʾδ��ʼ flag=1 ��ʾ���ʿ�ʼ
	int point=0;//��ʾ��ǰ���ʵ���ʼλ��
	int place=0;//��ʾ����ʵ���ʼλ�� 
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
	for(i=0;i<=strlen(str);i++)//i<=strlen(str) ��֤���һ������Ҳ���Ա��� 
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
			 //len=0Ҫ����if���ĺ��� 
		}
		
		
		
	}
	//��ѭ������ʱ������len��ֵ��Ϊ0�����һ������"dogs"�ĳ���Ϊ4����
	//������Ҫ������Ƿ�����ĵ��ʡ�����len = 4С��lengh = 5�����Բ�����lengh��place��
	//Ҳ����˵���i<stlen(str)������i<=strlen(str)�Ļ� ��Ҫ������һ�������ǲ�����ĵ��� 
	for(i=place;al(str[i]);i++)//���� 
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
��һ�����֣����ֳ���С��200����������������������д�������ҳ����е�����������һ�������С�



����ԭ��Ϊ��
int findint(char *s,int *a);
����s��ʾ�����ֵ��ַ�����a��ʾ�����������飬����ֵΪ�ַ����е������������ַ�����ֻ�д��ڵ���0��������

��д�������������ַ��������ú���ʶ������������������ǡ����磬�����ַ�����The Wandering Earth exhibition at the China Science and Technology Museum in Beijing, April 4, 2019.��ʶ�����֣������2019,4����

���룺���ո��ַ���
����������������ö��Ÿ�����


���������������
���룺
he Wandering Earth exhibition at the China Science and Technology Museum in Beijing, April 4, 2019.


�����
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
		a[i]=a[n-1-i];//��a[n-1-i]���� 
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
	int num=0;//������ֵ���ֵ 
	while(*p!='\0')
	{
		if((*p>='0')&&(*p<='9'))
		{
			num=0;
			while((*p>='0')&&(*p<='9'))
			{
				num=num*10+(*p-'0');//�ַ�����������ת��Ϊ����
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


//�ַ��ַ�ת�� 
int main()
{
	void dig(int k,char str[30]);
	char str[30];
	int k;
	scanf("%d",&k);
    while(k!=-1)//�Ӽ����������� ֱ������-1��ʾ���� 
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
	int i;//ÿ������ 
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
		int n=0;//��¼����
		int i=0; 
		while(k>0)
		{
		    n=k%10;
		    temp[i]=n+'0';//������ת��Ϊ�ַ� 
		    k=k/10;
		    i++;
		}
		temp[i]='\0';
	    int j=0;//����װ��temp[]
	    char t;//�м��� 
	    int len=strlen(temp);
		for(i=0;i<(len/2);i++)
		{
			t=temp[i];
			temp[i]=temp[len-1-i];
			temp[len-1-i]=t;
			
		 } 
		char *p=temp;
		i=0;//iΪ0 
		int num=0;
		while(*p!='\0')
		{
			num=10*(*p-'0')+(*(p+1)-'0');//���ַ�תΪ���� 
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
		str[i]='\0';//����'\0'; 
		
	}
	
	
}





������������

�ӱ�׼����������һ��N��N<=9���׾����һ��M��M<=N���׾����жϾ���M�Ƿ���N���Ӿ������������M��N�е���ʼλ�ã������������-1��������M����N��ĳһ������ȫ��ȣ����M��N���Ӿ���

��������ʽ��

�ӱ�׼�����ȡ����

��һ��ֻ��һ������N�������һ������Ľ�����������N�����룬ÿ����N�������ɿո�ָ�������������þ����ڸ����ϵ�����Ԫ�ء�

������N�׾����������һ������һ������M������ڶ�������Ľ�����������M�����룬ÿ����M�������ɿո�ָ�������������þ����ڸ����ϵ�����Ԫ�ء�

�������ʽ��

���M��N�е���ʼλ�ã���N�еĵڼ��еڼ��У����������ö���","�ָ����ӵ�1�е�1�п�ʼ���������������һ��Ԫ�ص�λ��Ϊ��1,1��

��N�ж���Ӿ�����M������ȫ��ͬ������������ҵ�����ʼλ�ã�������С��λ�ã�������ͬ����Ϊ����С��λ�á�

��M����N���Ӿ��������-1��








int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int arr1[30][30],arr2[30][30],temp[30][30];//1������ 2������ 
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
	int s;//��¼һ����������ȵ��� 
	int *p1;//ָ���е�һά���� 
	int t;//����������¼ 
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
		        //s��ֵ��ʵ�ʵ�������һ 
		         if(s>=2)//s��ֵ�н��� 
	        	{
	        		printf("%d\n",s);
			          for(t=0;t<=s;t++)//��������t��ȡֵ 
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




�ӱ�׼����������һ��N��N<=9���׾����һ��M��M<=N���׾����жϾ���M�Ƿ���N���Ӿ������������M��N�е���ʼλ�ã������������-1��������M����N��ĳһ������ȫ��ȣ����M��N���Ӿ���

��������ʽ��

�ӱ�׼�����ȡ����

��һ��ֻ��һ������N�������һ������Ľ�����������N�����룬ÿ����N�������ɿո�ָ�������������þ����ڸ����ϵ�����Ԫ�ء�

������N�׾����������һ������һ������M������ڶ�������Ľ�����������M�����룬ÿ����M�������ɿո�ָ�������������þ����ڸ����ϵ�����Ԫ�ء�

�������ʽ��

���M��N�е���ʼλ�ã���N�еĵڼ��еڼ��У����������ö���","�ָ����ӵ�1�е�1�п�ʼ���������������һ��Ԫ�ص�λ��Ϊ��1,1��

��N�ж���Ӿ�����M������ȫ��ͬ������������ҵ�����ʼλ�ã�������С��λ�ã�������ͬ����Ϊ����С��λ�á�

��M����N���Ӿ��������-1��











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


��дһ�����򣬶�������ַ���s��t��������Ĺ������ַ�����
 ��������ʽ��
����Ļ���ж��봮s��t��s��t�������ַ����ɣ����ȶ�����50���ַ�����������ȷ��ֻ��Ψһ��������Ӵ������û�й����Ӵ�����ӡNo Answer

�������ʽ��
�����s�ʹ�t��������Ӵ���

�㷨��ʾ����һ��int�͵ļ�������¼��ǰƥ�䳤�ȣ���һ���ַ������¼��ǰƥ���Ӵ���������ڸ����Ӵ����������Ӧ�滻��
������������
 �������Ļ�����������ݣ� 

aabcdababce
12abcabcdace
�������������

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
������������

��дһ�����򣬴Ӽ��̽���һ���ַ�����Ȼ�����ַ�˳���С����������򣬲�ɾ���ظ����ַ���
��������ʽ��

�û��ڵ�һ������һ���ַ�����
�������ʽ��

�������ַ�(ASCII)˳���С���������ַ�������ɾ���ظ����ַ����������
���������롿

badacgegfacb
�����������

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
	int t;//��¼�ڼ���Ԫ�ؿ�ʼarr[i]��n�� 
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
���������һ����������һ���ո�ָ�����������Ȼ�����µ�һ��������ڶ�����������һ���ո�ָ�����ĩ�лس����С�

�������ʽ��

���Ӵ�С˳����������ϲ������������ȥ�������������ж����ֵ���������һ���ո�ָ�������������

���������롿

5 1 4 32 8 7 9 -6
5 2 87 10 1
�����������

87 32 10 9 8 7 4 2 -6
������˵����

��һ������Ϊ5   1   4   32   8   7   9   -6���ڶ��������ֱ�Ϊ5   2   87   10   1������һ��͵ڶ��������ϲ���ȥ�������������ж����ֵ�����5��1�������Ӵ�С˳���������Ϊ87   32   10   9   8   7   4   2   -6��
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
дһ�����򣬵���һ���ַ����г����Ӵ�ʱ��ɾ������
��������ʽ��

�û��ڵ�һ������һ���ַ������û��ڵڶ�������һ���Ӵ���
�������ʽ��

��������һ�����ɾ�����������Ӵ�����ַ���������ַ����������Ӵ������ԭ�ַ�������
���������롿

 I am a boy!
 a
�����������

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
				p1++;//�������Ϊ��str2�ߵ����һ���ַ���ʱ*p2!='\0'����ѭ�� p2++ ���ߵ�'\0  *p1!=*p2 ����� flag=0�� 
				p2++;
				if(*p1!=*p2)
				{              //���ж���++�� 
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
    char temp[30];//��¼���� 
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
 		t=0;//��temp[t]������ 
 		while(k>0)
 		{
 			temp[t]=k%10+'0';
 			k=k/10;
 			t++;
		 }
 		temp[t]='\0';
 		char s;//��ʱ���temp[i] 
 		int len=strlen(temp);
 	    for(j=0;j<len/2;j++)
 	    {
 	    	s=temp[j];
 	    	temp[j]=temp[len-1-j];
 	    	temp[len-j-1]=s;
 	    	
 	    	
		  } 
		  i=0;//i=0��λ�� 
		  while(*p!='\0')
		  {
	
		  	int num=(*p-'0')*10+(*(p+1)-'0');
		  	if(num>=10 &&num<=25)
		  	{
		  		str[i]=num+'A';//����+�ַ�'A'��Ϊ�ַ� 
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
����Ƶ��ͳ��
��д��������һ���ı���ͳ�����и����ʳ��ֵĴ��������ʲ����ִ�Сд�������Ƶ����ߵ�ǰʮ�����ʼ�����ִ�������������ͬ�����ֵ�������


���룺һ���ı�

�����С�ڵ���10�У�ÿ����һ�����ʼ����ִ������м���һ��Ӣ��ð�Ÿ�����������Сд��ʽ���֡�


���������������
���룺
Xi boarded the destroyer Xining on Tuesday afternoon after inspecting the honor guards of the PLA Navy at a pier in the city of Qingdao


�����
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
	int t;//���ܱȽϵ�ֵ 
	int flag=1;
	char temp[100][30];
	strcpy(temp[0],str[0]);
	count[0]=1;
	int s=1;//����temp[] 
	for(i=1;i<len;i++)
	{
	    flag=1;
		for(j=s-1;j>=0;j--)
		{
			t=strcmp(str[i],temp[j]);//��temp[j]�Ƚ� 
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
	int n;//��ʱ���count[] 
	char m[30];//��ʱ���temp[] 
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
	int s=1;//����temp[] ��¼�ж��ٸ����� 
	int t;//��¼�Ƚϵ�ֵ 
	for(i=1;i<len;i++)
	{
		flag=1;
		for(j=s-1;j>=0;j--)
		{
			t=strcmp(str[i],temp[j]); //��temp[j]���Ƚ� 
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







