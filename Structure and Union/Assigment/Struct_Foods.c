#include<stdio.h>
#include<conio.h>

int Cunt_food=0;
struct Foods
{
  int F_id;
  char F_Name[20];
  int F_Prise;
  char F_Categ[20];
};

void Add_food_Diteals(struct Foods obj2[],int size)                                 //01
{
  for(int i=0;i<size;i++)
  {
    printf("Enter the Inform Food-->%d\n",i+1);
    printf("Enter the Food Id\n");                 
    scanf("%d",&obj2[i].F_id);
    printf("Enter the name of food\n");                       
    fflush(stdin);
    gets(obj2[i].F_Name);
    printf("Enter the Food Prise\n");                 
    scanf("%d",&obj2[i].F_Prise);
    printf("Enter the Categery of food\n");                      
    fflush(stdin);
    gets(obj2[i].F_Categ);
    printf("\n");
  }

}

void Displey_food_Diteals(struct Foods obj2[],int size)                             //02
{
  for(int i=0;i<size;i++)
  {
    printf("the Inform Food-->%d\n",i+1);
    printf("id\t\t->%d\nName\t\t->%s\nPrise\t\t->%d\nCategery\t->%s",
    obj2[i].F_id,obj2[i].F_Name,obj2[i].F_Prise,obj2[i].F_Categ);
    printf("\n\n"); 
  }
   printf("\n"); 
}

void pries_100_to_500_Diteals(struct Foods obj2[],int size)                         //03
{
  for(int i=0;i<size;i++)
    {  
      if(obj2[i].F_Prise>=100&&obj2[i].F_Prise<=500)
      {
          printf("food Prise in bit 100 to 500 -->%d\n",i+1);
          printf("id\t\t->%d\nName\t\t->%s\nPrise\t\t->%d\nCategery\t->%s",
          obj2[i].F_id,obj2[i].F_Name,obj2[i].F_Prise,obj2[i].F_Categ);
         printf("\n\n"); 
      }
    }
    printf("\n"); 
}

int Search_Food_Id(int id,struct Foods obj2[],int size)                             //4->1     
{
  int flag=0;
  int index=0;
  for(int i=0;i<size;i++)
    {
      index++;
      if(id==obj2[i].F_id)
      {
        flag=1;
        break;
      }
    }
    void Displey_Food_Id();
    Displey_Food_Id(index,obj2,size);
 return flag;
}

void Displey_Food_Id(int id,struct Foods obj2[],int size)              
{
  for(int i=0;i<size;i++)
    {
      if(id==obj2[i].F_id)
      {
            printf("the Inform Food-->%d\n",i+1);
            printf("id\t\t->%d\nName\t\t->%s\nPrise\t\t->%d\nCategery\t->%s",obj2[i].F_id,obj2[i].F_Name,obj2[i].F_Prise,obj2[i].F_Categ);
            printf("\n");
      }
    }
}

void Update_Food(int id,struct Foods obj2[],int size)              
{
  for(int i=0;i<size;i++)
    {
      if(id==obj2[i].F_id)
      {
          printf("Enter the Inform Food-->%d\n",i+1);
          printf("Enter the Food Id\n");                            // id
          scanf("%d",&obj2[i].F_id);
          printf("Enter the name of food\n");                       // name
          fflush(stdin);
          gets(obj2[i].F_Name);
          printf("Enter the Food Prise\n");                            // id
          scanf("%d",&obj2[i].F_Prise);
          printf("Enter the Categery of food\n");                      // name
          fflush(stdin);
          gets(obj2[i].F_Categ);
          printf("\n");
      }
    }  
}
 
int Search_Food_Name(char Name[],struct Foods obj2[],int size)                       //4->2
{
  int flag=0,index=0,len1=0,len2=0;
  char *ptr=NULL;
   for(int i=0;Name[i]!='\0';i++)
   {
    len1++;
   }

  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Name;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }

     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Name[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
    if(flag==1)
    {
    Displey_Food_Id(index,obj2,size);
    }
  return flag;
}
 

int Search_Food_prise(int prise,struct Foods obj2[],int size)                        //4->3
{
  int flag=0;
  int index=0;
  int ret=0;
  for(int i=0;i<size;i++)
    {
      index++;
      if(prise==obj2[i].F_Prise)
      {
        flag=1;
        void Displey_Food_Id();
        Displey_Food_Id(index,obj2,size);
      }
    }
    return  flag;
}

int Search_food_Categaery(char Catg[],struct Foods obj2[],int size)                  //4->4
{
  int flag=0,index=0,len1=0,len2=0;
  char *ptr=NULL;
  for(int i=0;Catg[i]!='\0';i++)
   {
    len1++;
   }
  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Categ;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }
     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Catg[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
    if(flag==1)
    {
    Displey_Food_Id(index,obj2,size);
    }
  return flag;
}

void Up_Food_Id(int f_id,struct Foods obj2[],int size)                               // 5->1
{
  int index=0;
  for(int i=0;i<size;i++)
    {
      index++;
      if(f_id==obj2[i].F_id)
      {
        Update_Food(index,obj2,size);
        break;
      }
    }
}

int Up_Food_Name(char Name[],struct Foods obj2[],int size)                           //5>2
{
 int flag=0,index=0,len1=0,len2=0;
 char *ptr=NULL;
  for(int i=0;Name[i]!='\0';i++)
   {
    len1++;
   }
   
  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Name;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }

     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Name[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
  printf("%d",index);
    if(flag==1)
    {
    Update_Food(index,obj2,size);
    }
  return flag;
}

int Up_Food_prise(int prise,struct Foods obj2[],int size)                            //5->3
{
  int flag=0;
  int index=0;
  for(int i=0;i<size;i++)
    {
      index++;
      if(prise==obj2[i].F_Prise)
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
     Update_Food(index,obj2,size);
   return flag;
}

int Up_food_Categaery(char Catg[],struct Foods obj2[],int size)                      //5->4
{
  int flag=0,index=0,len1=0,len2=0;
  char *ptr=NULL;
  for(int i=0;Catg[i]!='\0';i++)
   {
    len1++;
   }

  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Categ;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }

     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Catg[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
    if(flag==1)
    {
   Update_Food(index,obj2,size);
    }
  return flag;
}

void  delate_Index(int index,struct Foods obj2[],int size)                           //6->1
{
  for(int i=0;i<size;i++)
   {
 
        if(obj2[i].F_id==index)
        {

            for(int j=i;j<size;j++)
            {
                obj2[j]=obj2[j+1];
            }
        }
    }
    printf("\n Record is \n");
    --Cunt_food;
    Displey_food_Diteals(obj2,Cunt_food);
}

int De_Food_Name(char Name[],struct Foods obj2[],int size)                           //6->2
{
  int flag=0,index=0,len1=0,len2=0;
  char *ptr=NULL;
  for(int i=0;Name[i]!='\0';i++)
   {
    len1++;
   }

  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Name;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }
     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Name[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
    if(flag==1)
    {
      delate_Index(index,obj2,size);
    }
  return flag;
}

void De_Food_prise(int Uprise,struct Foods obj2[],int size)                          //6->3
{
   for(int i=0;i<size;i++)
    {
          if(obj2[i].F_Prise==Uprise)
          {
        
              for(int j=i;j<size;j++)
              {
                  obj2[j]=obj2[j+1];
              }
          }
      }
  printf("\n Record is \n");
  --Cunt_food;
  Displey_food_Diteals(obj2,Cunt_food);
}

int De_Food_Categ(char Catg[],struct Foods obj2[],int size)                          //6->4
{
  int flag=0,index=0,len1=0,len2=0;
  char *ptr=NULL;
  for(int i=0;Catg[i]!='\0';i++)
   {
    len1++;
   }
 
  for(int i=0;i<size;i++)
  {
    index++;
      ptr=obj2[i].F_Categ;
      len2=0;
    for(int j=0;ptr[j]!='\0';j++)
    {
     len2++;
    }

     if(len1==len2)
      { 
        for(int k=0;k<=len2;k++)
          {
            if(ptr[k]==Catg[k])
            {
              flag=1;
            }else{
              flag=0;
              break;
            }
          }
      }else{
          flag=0;
        }

        if(flag==1)
        {
          break;
        }
  }
    if(flag==1)
    {
      delate_Index(index,obj2,size);
    }
  return flag;
}
    
//........................................................................................................

void main()
{
    int  iopt=1,lc=0,f_prise=0;
    int id_num=0,ret=0;
    char Name[20];
    char Catg_F[20];
    int Did=0;

    printf("\n\n''''''''''>>>>>>>>>>>>>>....Welocome in Sof_T FoodTeck....<<<<<<<<<<<<<<<<<''''''''''\n\n");
    printf("ENter the Total No of Foods");
    scanf("%d",&Cunt_food);
   struct Foods obj1[Cunt_food];
    do 
    {
      if(lc==0)
      {
          printf(" 1--> Add All Food details\n");
          printf(" 2--> Displey All Food details\n");
          printf(" 3--> Displey_pries_100_to_500\n");
          printf(" 4--> Search_Food\n");
          printf(" 5--> Update_Food Detailels\n");
          printf(" 6--> Delate Food Detailes\n");
          printf(" 0--> Exsit Hear..........\n");
          lc++;
      }
      printf("Enter the main option\n");
      scanf("%d",&iopt);
      switch(iopt)
      {
          

          case 1: 
          Add_food_Diteals(obj1,Cunt_food);
          break;

          case 2:
          Displey_food_Diteals(obj1,Cunt_food);
          break;

          case 3:
          pries_100_to_500_Diteals(obj1,Cunt_food);
          break;

          case 4:
          printf("oll option to Search Food\n");
          do 
            {
                printf(" \n1--> Serch_Food Id\n");
                printf(" 2--> serch_Food Nmae\n");
                printf(" 3--> serch_Food Prise\n");
                printf(" 4--> serch_FoodFood Categarey\n");
                printf(" 5--> Exsit...\n");
                
            printf("Enter the option for search\n");
            scanf("%d",&iopt);
                switch(iopt)
                {
                    case 1:
                   
                    printf("Enter Foods Id ");
                    scanf("%d",&id_num);
                    ret=Search_Food_Id(id_num,obj1,Cunt_food);
                    if(ret==1)
                    printf("%d-->found\n\n",id_num);
                    else
                    printf("F_Id %d-->Not found..!!!\n\n",id_num);
                    break;
                  
                     
                    case 2:
                    printf("Enter the Nmae of Food\n");
                    fflush(stdin);
                    gets(Name);
                    ret=Search_Food_Name(Name,obj1,Cunt_food);
                    if(ret==1)
                    printf("found it\n");
                    else
                    printf("Not found it\n");
                    break;

                    case 11:
                    printf("Enter Foods Id ");
                    scanf("%d",&id_num);
                    Displey_Food_Id(id_num,obj1,Cunt_food);
                    break;

                    case 3:
                    printf("Enter Foods prise ");
                    scanf("%d",&f_prise);
                    ret=Search_Food_prise(f_prise,obj1,Cunt_food);
                    if(ret==1)
                    printf("found\n\n");
                    else
                    printf(" Not found it\n\n");
                    break;

                    case 4:
                    printf("Enter the CAtg of Food\n");
                    fflush(stdin);
                    gets(Catg_F);
                    ret=Search_food_Categaery(Catg_F,obj1,Cunt_food);
                    if(ret==1)
                    printf("found it\\n");
                    else
                    printf("Not found it\n\n");
                    break;

                    default:
                    printf("Exsit form Search.......\n");
                }
            }
            while(iopt!=5);      
            break;

          case 5:
          printf("oll option for Update food Detaiels\n");
          do 
            {
                printf(" 1--> Update_Food Id\n");
                printf(" 2--> Update_Food Nmae\n");
                printf(" 3--> Update_Food Prise\n");
                printf(" 4--> Update_Food Categarey\n");
                printf(" 5--> Exsit...\n");
                
            printf("Enter the option for Update\n");
            scanf("%d",&iopt);
                switch(iopt)
                {
                    case 1:
                    printf("Enter the Food id for Update\n");
                    scanf("%d",&id_num);
                    Up_Food_Id(id_num,obj1,Cunt_food);
                    break;
                   
                    case 2:
                    printf("Enter the Nmae of Food for Update\n");
                    fflush(stdin);
                    gets(Name);
                    Up_Food_Name(Name,obj1,Cunt_food);
                    break;

                    case 3:
                    printf("Enter the Food prise for Update\n");
                    scanf("%d",&f_prise);
                    Up_Food_prise(f_prise,obj1,Cunt_food);
                    break;

                    case 4:
                    printf("Enter the CAtg of Food for Update \n");
                    fflush(stdin);
                    gets(Catg_F);
                    ret=Up_food_Categaery(Catg_F,obj1,Cunt_food);
                    if(ret==1)
                    printf("found it\\n");
                    else
                    printf("Not found it\n\n");

                    default:
                    printf("Exsit for Update......\n");
                }
            }
            while(iopt!=5);   
          break;

          case 6:
           printf("You can Delate Food diteles using this option\n");
          do 
            {
                printf(" 1--> Food Id\n");
                printf(" 2--> Food Nmae\n");
                printf(" 3--> Food Prise\n");
                printf(" 4--> Food Categarey\n");
                printf(" 5--> Exsit...\n");
                
            printf("Enter the option for dealate\n");
            scanf("%d",&iopt);
                switch(iopt)
                {
                    case 1:
                    printf("Enter the index for Delate");
                    scanf("%d",&Did);
                    delate_Index(Did,obj1,Cunt_food);
                    break;
                   
                    case 2:
                    printf("Enter the Nmae of Food\n");
                    fflush(stdin);
                    gets(Name);
                    ret=De_Food_Name(Name,obj1,Cunt_food);
                    if(ret==1)
                    printf("delate ...\n");
                    else
                    printf("not Delate\n");
                    break;

                    case 3:
                    printf("Enter the prise for Delate");
                    scanf("%d",&f_prise);
                    De_Food_prise(f_prise,obj1,Cunt_food);
                    break;

                    case 4:
                    printf("Enter the CAtg of Food for Update \n");
                    fflush(stdin);
                    gets(Catg_F);
                    ret=De_Food_Categ(Catg_F,obj1,Cunt_food);
                    if(ret==1)
                    printf("found it\\n");
                    else
                    printf("Not found it\n\n");
                    break;

                    default:
                    printf("Exsit form Delate.......\n");
                }
            }
            while(iopt!=5);   
            break;
          printf("Exsit hear.......\n");
      }
    }
    while(iopt!=0);     
}
