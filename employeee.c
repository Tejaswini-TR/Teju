#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float esal;
};
int main(){
int j,i;
printf("enter the number of employees:");
scanf("%d",&j);
for(i=1;i<=j;i++)
{
struct emp e;
printf("Enter Employee detail \n");
printf("Emp phNo. :-\t");
scanf("%d",&e.eno);
printf("Emp Name :-\t");
scanf("%s",&e.ename);
printf("Emp salary :-\t");
scanf("%f",&e.esal);
printf("\n \n");
}
return 0;
}
