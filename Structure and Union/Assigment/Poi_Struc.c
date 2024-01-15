#include<stdio.h>
#include<stdlib.h>
struct Plyer
{
    int id;
    char Name[10];
    int run;
}obj1;
void main()
{
   struct Plyer *p;
   int size=2;
   p=(struct Plyer*)malloc(sizeof(Plyer)*size);
   for(int i=0;i<size;i++)
   {
    scanf("%d %s %d",&p[i].id,&p[i].Name,&p[i].run);
   }

//    for(int i=0;i<size;i++)
//    {

//    }
}