#include<stdio.h>
#include<stdlib.h>
struct bit {unsigned char x:1;}l;
int uset[]={1,2,3,4,5,6,7,8,9},size=9;
void main()
{
void  readset(struct bit[],int n);
void printset(struct bit[]);
void  unionset(struct bit[],struct bit[],struct bit[]);
void interset(struct bit[],struct bit[],struct bit[]);
void difference(struct bit[],struct bit[],struct bit[]);
struct bit a[10]={0},b[10]={0},c[10]={0};
int n;
printf("no of elemets in set A=");
scanf("%d",&n);
readset(a,n);
printf("no of elemets in set B=");
scanf("%d",&n);
readset(b,n);
printf("set A is="),printset(a);
printf("set B is="),printset(b);
unionset(a,b,c);
printf("A U B="),printset(c);
interset(a,b,c);
printf("A intersect B="),printset(c);
difference(a,b,c);
printf("A -B="),printset(c);
}
void readset(struct bit a[],int n)
{
int i,x,k;
printf("enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
for(k=0;k<size;++k)
if (uset[k]==x)
{
a[k].x=1;
break;
}
}
return;
}
void printset(struct bit a[])
{
int k;
printf("{");
for(k=0;k<size;++k)
if (a[k].x==1)
printf ("%d,",uset[k]);
printf("}\n");
return;
}

void unionset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x | b[k].x;
return;
}

void interset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x & b[k].x;
return;
}

void difference(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
if(a[k].x==1)
c[k].x=a[k].x ^ b[k].x;
return;
}

