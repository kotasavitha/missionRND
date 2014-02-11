 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int x,int *y);
void main()
{
int *a,*b,*c;
int i,n1,n2,n3,j;
clrscr();
printf("enter first array size\n");
scanf("%d",&n1);
printf("second array size");
scanf("%d",&n2);
n3=n1+n2;
printf("\n enter the elements",n1);
a=(int *)malloc(n1 *sizeof(int));
b=(int *)malloc(n2 *sizeof(int));
c=(int *)malloc(n3 *sizeof(int));
for(i=1;i<=n1;i++)
scanf("%d",&a[i]);
printf("\n enter  elements",n2);
for(j=1;j<=n2;j++);
scanf("%d",&b[j]);
display(n2,b);
display(n1,a);
display(n3,c);
while(n1!=0&&n2!=0)
{
	if(a[n1]>b[n2])
	{
	c[n3]=a[n1];
	n1--;
	n3--;
	}
	else
	{
	c[n3]=b[n2];
	n3--;
	n2--;
	}
}
	if(n2==0)
	{
	while(n1!=0)
	{
	c[n3]=a[n1];
	n1--;
	n3--;
	}
	}
	for(k=0;k<n3;k++)
        printf("%d",c[k]);
	
	if(n3%2==0)
	printf("median is %f",(a[n3/2]+a[n3/2+1])/2);
	else
	printf("median is %f",a[n3/2]);

getch();

}
void display(int n,int *y)
{
 int i;
printf("array elements");
for(i=1;i<=n;i++)
printf("%d,",y[i]);
}