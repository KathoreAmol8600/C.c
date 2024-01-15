// Opreation of Circe ex Area,Daimeter ,Circumference
#include<Stdio.h>
int main()
{
    int R=0,D=0;
    float C=0,A=0;
    float Pi=3.14159;
    printf("Enter the Redius of Circle\n");
    scanf("%d",&R);
    D=(2*R);
    C=(R*(2*Pi));
    A=((R*R)*Pi);
    printf("Daimeter is %d\n",D);
    printf("Circumference is %f\n",C);
    printf("Area is %f\n",A);
    return 0;
}