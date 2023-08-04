////////////////////////////////////////////
//Print String on user input numbar time
// 2
//jai ganesh
//jai ganesh
// using updeater and filter
////////////////////////////////////////////
 //////////////////////////////////////////////////////////////
 //print String
 // with 5 time
 //intreact with user
 ///////////////////////////////////////////////////////////////

 #include<stdio.h>
 void Displey(int ino)
{
    if(ino==0)         //Filter
    {
        return 0;
    }
    if(ino<0)         //Updetor
    {
        ino=-ino;
    }
    int i=0;
    for(i=1;i<=ino;i++)
    {
        printf("jai Ganesg....");
    }

}

 int main()
 {  
    int ino=0;
    printf("Enter the numbar :");
    scanf("%d",&ino);

    Displey(ino);

    return 0;
 }