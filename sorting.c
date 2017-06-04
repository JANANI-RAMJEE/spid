//Ramjee,107116072
#include<stdio.h>
int main()
{
int s,i,j,temp,a[20];
printf("Enter no. of elements");
scanf("%d",&s);
printf("Enter the elements");
for(i=0;i<s;i++)
scanf("%d",&a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
}
}
printf("Sorted array ");
for(i=0;i<s;i++)
printf(" %d",a[i]);
return 0;
}
//Janani,107116072

