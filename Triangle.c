#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x1,x2,x3,y1,y2,y3,m1,m2;
float d1,d2,d3;
//clrscr();
printf("enter the values of x1,x2,x3");
scanf("%d%d%d",&x1,&x2,&x3);
printf("enter the values of y1,y2,y3 \n");
scanf("%d%d%d",&y1,&y2,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y1)/(x3-x1);
if(m1==m2)
printf("cannot form a triangle \n");
else
//printf("they are the cordinates of the triangle \n");
{
d1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("the value of d1=%f",d1);
d2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
printf("the value of d2=%f",d2);
d3=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
printf("the value of d3=%f",d3);
if(d1=d2)
{
if(d2=d3)
printf("equilateral trianle \n");
else
printf("isosceles trianle \n");
}
else
printf("scalene triangle");

getch();
}

}