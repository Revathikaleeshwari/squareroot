#include<stdio.h>
int main()
{
int x1,x2,y1,y2,z;
printf("Enter the value x and y:\n");
scanf("%d%d%d",&x1,&x2,&y1,&y2);
z=((x1+x2)*(x1+x2))+((y1+y2)*(y1+y2));
printf("square root value is %d\n",z);
scanf("%d",&z);
return 0;
}
