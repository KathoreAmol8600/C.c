#include<stdio.h>
#include<math.h>
int Fact=1;
int Rev_num=0;
int veriabal=0;

int find_Area_cir(int Re_cir)
{
   int Ans=3.14*(Re_cir*Re_cir);
   return Ans;
}

int find_AreaofRec(int l,int w)
{
   return l*w;
}

float find_Areaof_Train(int B,int H )
{
    return (B*H)/2;
}

int find_Subt(int N1,int N2)
{
   return N2-N1;
}

int find_Div(int N1,int N2)
{
   return N2%N1;
}

int find_Mul(int N1,int N2)
{
   return N2*N1;
}

int find_Facto(int ino)
{
	if(ino!=0)
	{
		Fact=Fact*ino;
		find_Facto(--ino);
	}
	return Fact;
}

  int Reveers_num(int ino)
{
	if(ino!=0)
	{
		veriabal=ino%10;
		Rev_num=Rev_num*10+veriabal;
		ino=ino/10;
		Reveers_num(ino);
	}
	return Rev_num;
}

int Check_Pailendrom(int ino)
{
  	if(ino!=0)
	{
		veriabal=ino%10;
		Rev_num=Rev_num*10+veriabal;
		ino=ino/10;
		Reveers_num(ino);
	}
	return Rev_num;
}
int fain_max(int Arr[],int size)
{
    int Ans=0;
    int max=0;
    // printf("%d",Arr[1]);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(Arr[i]>Arr[j])
            {
                Ans=Arr[i];
            }
        }
        if(Ans>max)
        {
        max=Ans;  
        }
    }
      return max;
  }


int main()
{
	int ino=123;
	int ino2=20;
    int red_cir=5;
    int iAns=0;
    int ret=0;
    int size=5;
    int Arr[]={1,86,3,4,65};

    int find_Area_cir(int);
    iAns=find_Area_cir(red_cir);
    printf("Area of Circle=%d\n",iAns);
    
//Area of rect
    int lenght=10;
    int width=10;
    iAns=find_AreaofRec(lenght,width);
    printf("Area of Reac=%d\n",iAns);
    
//Area of Trangal
    int base=5;
    int Height=4;
    float fAns=0;
    fAns=find_Areaof_Train(base,Height);
    printf("Area of Reac=%f\n",fAns);
    
//find Subtraction
    iAns= find_Subt(ino,ino2);
    printf("Area of Reac=%d\n",iAns);
  
     //find Divition
    iAns= find_Div(ino,ino2);
    printf("Divition is =%d\n",iAns);
 
// Find Multilpliction
    iAns=find_Mul(ino,ino2);
    printf("Multiplcation is =%d\n",iAns);

// Fained Factorial...
    iAns= find_Facto(5);
    printf("Factoreal of num ia  =%d\n",iAns);
      
//   fained the Reverde number
    iAns=Reveers_num(ino);
    printf("Revrese number is  =%d\n",iAns);
        
    int ino3=121;
    int ino4=34;
    iAns=Check_Pailendrom(ino4);
    if(iAns==ino4)
        {
            printf(" number is Pailendrom num \n");
        }
    else{  
            printf(" number is not Pailendrom num \n");
        }
    
    ret= fain_max(Arr,size);
    printf("Max Ee]lemnt Of Arry%d\n",ret);

      return 0;
    
}
