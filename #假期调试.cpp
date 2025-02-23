#include<stdio.h>
#include<math.h> 
#include<string.h>
/*//Ò» 
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%d b=%d",&a,&b);
	scanf("%f %e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf ("a=%d b=%d c=%f d=%f c1=%c c2=%c",a,b,x,y,c1,c2);
	
	
	return 0;
}
 */
 /*//¶þ 
 int main()
 {
 	char c1='C',c2='h',c3='i',c4='n',c5='a';
 	c1=c1+4;
 	c2=c2+4;
 	c3=c3+4;
 	c4=c4+4;
 	c5=c5+4;
 	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
 	
 	
 	return 0;
  } 
  
 */
 /*
 int main()
 {
     int a,b,c;
	 scanf("%d%d%d",&a,&b,&c);
	 if(a<b)
	 {
	 	if(b<c)
	 	{
	 		printf("max=%d",c);
		 }
	     else
	     {
	     	printf("max=%d",b);
		 }
	 
	 	
	 }
	 
	else
	{
		if(a<c)
		printf("max=%d",c);
		else
		printf("max=%d",a);
		
		
		
	}
 	
 	
 	
 	return 0;
  } 
  
  */
 /* 
int main()
{
   int a,b,c,temp,max;
   scanf("%d%d%d",&a,&b,&c);
   temp=(a>b)?a:b;
   max=(temp>c)?temp:c;	
	printf("max=%d",max);
	
	return 0;
}
  
  */
 /* 
int main()
{
	int i,k;
	scanf("%d",&i);
	while(i>1000)
	{
		scanf("%d",&i);
	}
	k=sqrt(i);
	printf("%d",k);
	
	return 0;
}
  
  */
  
 /* 
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
	{
	  y=x;
	}
	else 
	if(x<10)
	{
		y=2*x-1;
	}
    else
    {
    	y=3*x-11;
	}
	printf("%d",y);
	
	return 0; 
 } 
*/
/*
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
	{
		y=-1;
	}
	else
	if(x=0)
	{
		y=0;
	}
	else
	{
		y=1;
	}
	printf("%d",y);
	return 0;
  }  
  */
/* 
int main()
{
  	float score;
  	char grade;
  	scanf("%f",&score);
  	while(score>100||score<0)
  	{
  		scanf("%f",&score);
	  }
  	switch((int)(score/10))
  	{
  		
  		case 10:
  		case 9:grade='A';break;
		case 8:grade='B';break;
		case 7:grade='C';break;
		case 6:grade='D';break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:grade='E';break;
  		
	  }
	  printf("%c",grade);
	  
	  return 0;
  	
}
 */
 /*
int main()
{
 	int a,n,i,sn=0;
 	scanf("%d%d",&a,&n);
 	int tn=a;
 	for(i=1;i<=n;i++)
 	{
 		sn=sn+tn;
 		tn=tn*10+a;
	 }
 	printf("%d\n",sn);
 	
 	
 	
	return 0;
} 
  
 */
 /*
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int i;
 	double sn=0,tn=1;
 	for(i=1;i<=n;i++)
 	{
 		sn=sn+tn;
 		tn=tn*(i+1);
	 }
 	
 	printf("%22.15e\n",sn);
 	
 	
  } 
  
 */
 /*
int main()
{
	double sn1=0,sn2=0,sn3=0;
	int n1=100,n2=50,n3=10;
	double i;
	for(i=1;i<=n1;i++)
	{
		sn1=sn1+i;
	}
	for(i=1;i<=n2;i++)
	{
		sn2=sn2+i*i;
		
	}
	for(i=1;i<=n3;i++)
	{
		
		sn3=sn3+1/i;
	}
	printf("%.6f\n",sn1+sn2+sn3);
	return 0;
 } 
  
  */
/*  
int main()
{
	int i;
	double a=2,b=1,tn=2,sn=0;
	double temp=0;
	for(i=1;i<=20;i++)
	{
		sn=sn+tn;
		temp=a;
		a=a+b;
		b=temp;
		tn=a/b;
	}
	
     printf("%f\n",sn);	
	
}
 */
/* 
 int main()
 {
 	double tn=100,sn=100;
 	int i;
 	for(i=1;i<=9;i++)
 	{
 	   tn=tn/2;
 	   sn=sn+tn*2;
	 }
 	printf("%f %f",sn,tn/2);
 	
 	
 	return 0;
  } 
  */
  
 /*
 int main()
 {
 	int i=1,j;
 	int s;int n; 
 	for(n=2;n<=1000;n++)
 	{
 		s=0;
 		for(i=1;i<n;i++)
 		{
 			if(n%i==0)  s=s+i;
		 }
 		if(s==n)
 		{
 			printf("%d  ",n);
 			for(i=1;i<n;i++)
 			{
 				if(n%i==0) 
				 printf ("%d ",i);
			 }
 			
 			
		 }
 		
 		printf("\n");
	 }
 	
 	
 	
 	return 0;
  } 
  
  
  */
  /*
int main()
{
	int x1=1,x2;
	int day=9;
	while(day>0)
	{
		x2=(x1+1)*2;
		x1=x2;
		day--;
	}
	
	printf("%d
	",x2);
	
	
	return 0;
 } 
  
  */
  /*
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<(3-i);j++)
		{
			printf(" ");
		}
		for(j=0;j<(2*i+1);j++)
		{
			printf("*");
		}
		for(j=0;j<(3-i);j++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<(i+1);j++)
		{
			printf(" ");
		}
		for(j=0;j<(3-i)*2-1;j++)
		{
			printf("*");
		}
		for(j=0;j<(i+1);j++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}
  
  
  */
  /*
int main()
{
	int i,j,max,temp;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	for(i=0;i<n-1;i++)
	{
	   max=i;
	   
	   for(j=i+1;j<n;j++)
	   {
	   	  if(arr[j]>arr[max])  max=j;
	   	  temp=arr[max];
	   	  arr[max]=arr[i];
	   	  arr[i]=temp;
	   }
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
  */
/*  
int main()
{
	int arr[5]={8,6,5,4,1};
	int i,n=5,temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
  */
  /*
int main()
{
	int i,j,arr[10][10];
	for(i=0;i<10;i++)
	{
		arr[i][i]=1;
		arr[i][0]=1; 
	 } 
	for(i=2;i<10;i++)
	{
		for(j=1;j<=(i-1);j++)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d
			    ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
  
  */
  /*
 int main()
 {
 	int i,j;
 	int arr[4][5];
 	int flag;
 	for(i=0;i<4;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			scanf("%d",&arr[i][j]);
		 }
	 }
	 
	int max,maxj;
 	for(i=0;i<4;i++)
 	{
 		max=arr[i][0];
 		maxj=0;
 		for(j=0;j<5;j++)
 		{
 			if(arr[i][j]>max)
 			{
 				maxj=j;
 				max=arr[i][j];
			 }
		 }
		 flag=1;
		 for(j=0;j<4;j++)
		 {
		 	if(max>arr[j][maxj])
		 	{
		 		flag=0;
		 		break;
			 }
		 }
		 if(flag)
		 {
		 	printf("%d %d %d",i,maxj,max);
		 }
		 
		 
		 
		 
		 
	 }
 	
 	
 	
 	return 0;
  } 
  
  */
 /* 
int main()
{
	int i,j,upp=0,low=0,dig=0,space=0,oth=0;
	char text[3][80];
	for(i=0;i<3;i++)
	{
		gets(text[i]);
		for(j=0;j<80  && text[i][j]!='\0';j++)
		{
			if(text[i][j]>='A'&&text[i][j]<='Z')
			upp++;
			else if(text[i][j]>='a'&&text[i][j]<='z')
			low++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
			dig++;
			else if(text[i][j]==' ')
			space++;
			else
			oth++;
			
		}
		
	}
	printf("%d %d %d %d %d",upp,low,dig,space,oth);
	
	return 0;
}
  
  */
  /*
void convert(int arr[3][3])
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
		
	}
	
	
	
	
 } 
int main()
{
  	int arr[3][3];
  	int i,j;
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			scanf("%d",&arr[i][j]);
		  }
	  }
  	convert(arr);
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			printf("%d",arr[i][j]);
		  }
		  printf("\n");
	  }
  	
  	return 0;

 }
  
  */
  
 /* 
void inverse(char str[100])
{
	int i,temp,n;
	n=strlen(str);
	for(i=0;i<strlen(str)/2;i++)
	{
		temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	
	
	
 } 
int main()
{
	char str[100];
	gets(str);
	inverse(str);
    int i;
    printf("%s",str);
	
	
	return 0;
}
*/

  
  
  
  
  
  
  
