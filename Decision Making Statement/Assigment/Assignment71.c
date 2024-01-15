#include<stdio.h>
#include<math.h>
void main()
{
    int ino,d1,d2,d3,Ans=0;;
    printf("Enter the Numbar...\n");
    scanf("%d",&ino);
    int Num=ino;

    d1=ino%10;    
    Ans=Ans+d1*d1*d1;
    ino=ino/10;
    printf("%d\n",d1);      // 1 digit

    d2=ino%10;     
    Ans=Ans+d2*d2*d2;
    ino=ino/10;
    printf("%d\n",d2);      // 2 nd digit

    d3=ino%10;     
    Ans=Ans+d3*d3*d3;
    ino=ino/10;
    printf("%d\n",d3);     // 3 nd digit

if(Num==Ans)
{
    printf("this is Armstrong numbar=%d\n",Ans);
}else{
    printf("this is not Armstrong Numbar");
}
}