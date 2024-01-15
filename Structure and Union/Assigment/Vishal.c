#include<stdio.h>
int size_fod=0;
struct food                           
{
	int fid;
	char fname[20];
	int fprice;
	char fcat[20];
};

void addFoodDetails(struct food f[],int size)                                          
{
	
	for(int i=0; i<size; i++)
	{
		printf("\n Enter the Food Id, Food Name, Food price, food Category -->: %d\n", i+1);
		scanf("%d %s %d %s", &f[i].fid, &f[i].fname, &f[i].fprice, &f[i].fcat);	
	}	
	
}

void updatefood(int index,struct food f[],int size)                                        
{
	
	for(int i=0; i<size; i++)
	{
		if(f[i].fid==index)
		{
			printf("\n Enter the Food Id, Food Name, Food price, food Category -->: %d\n", i+1);
			scanf("%d %s %d %s", &f[i].fid, &f[i].fname, &f[i].fprice, &f[i].fcat);	
		}	  
    }
}
    
void displayFood(struct food f[], int size,int id)
{
	for(int i;f[i].fid==id;i++)
	{
		printf("\nThe Information Food--->%d", i+1);
		printf("\n Enter the Food Id, Food Name, Food price, food Category -->: %d\n", i+1);
		printf("%d %s %d %s", f[i].fid, f[i].fname, f[i].fprice, &f[i].fcat);	
			
	}
}
void showFoodDetails(struct food f[],int size)                                       
{
	printf("\nThe Food Details is %d:size",size);
	printf("\n Food Id\t Food Name\t Food price\t Food Category :\n ");
	
	for(int i=0; i<size; i++)
	{
	   printf("\n%d\t\t %s\t\t %d\t\t %s", f[i].fid, f[i].fname, f[i].fprice, f[i].fcat);	
	}	
	
}

void _100_to_500_Price(struct food f[],int size)                                         
{
	int flag=0;
	int index=0;
	for(int i=0; i<size; i++)
	{
		if(f[i].fprice>=100&&f[i].fprice<=500)
			{
				flag=1;
				index=i;
				break;
			}		
	}
	if(flag==0)
		{
			printf("\nThe Food Details is between range Not Found -_- ");
		}
	else
		{
			printf("\nThe Food details Whoose price range between 100 to 500 :");
			printf("\n Food Id\t Food Name\t Food price\t Food Category : ");
			printf("\n%d\t\t %s\t\t %d\t\t %s", f[index].fid, f[index].fname, f[index].fprice, f[index].fcat);	
		}

}

void searchId(struct food f[],int size,int sid)                                             
{
	int index=0;
	int flag=0;
	for(int i=0; i<2; i++)
	{	
		if(f[i].fid==sid)
		{
			flag = 1;
			index=i;
			break;	
		}	
    }
								    
    if(flag==0)
    {
    	printf("%d is not found...!!\n",sid);
	}
	else
	{
		printf("\n%d is Seccsefully found.-_-",sid);
		printf("\nThe Searched Food Deatails is :");	
		printf("\n Food Id\t Food Name\t Food price\t Food Category : ");
		printf("\n%d\t\t %s\t\t %d\t\t %s", f[index].fid, f[index].fname, f[index].fprice, f[index].fcat);	

	}			                
}

int searchName(char Sname[],struct food f[],int size)
{
  	int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
   	for(int i=0;Sname[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

	for(int i=0;i<size;i++)                           // 
	{
		index++;
		ptr=f[i].fname;
		len2=0;
		
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
		{
			len2++;
		}

			if(len1==len2)                            // two strinf smae or not 
			{	 
				for(int k=0;k<=len2;k++)                  // cheraectoer  check
					{
						if(ptr[k]==Sname[k])
						{
							flag=1;
						}
						else
						{
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
		searchId(f,size,index);
	}
	return flag;
}

void searchPrice(int sprice,struct food f[],int size)
{
	int flag=0;
	int index=0;
	for(int i=0; i<size; i++)
	{	
		if(sprice==f[i].fprice)
		{
			flag = 1;
			index =i;
			break;	
		}	
    }
    if(flag==0)
    {
    	printf("%d price is not found...!!-_-\n",sprice);
	}
	else
	{
		printf("\n%d is Seccsefully found.-_-",sprice);
		printf("\nThe Searched Food price Deatails is :");	
		printf("\n Food Id\t Food Name\t Food price\t Food Category : ");
		printf("\n%d\t\t %s\t\t %d\t\t %s", f[index].fid, f[index].fname, f[index].fprice, f[index].fcat);	
	}	
}

void searchCategory(char scat[],struct food f[],int size)
{
	int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
  	
   	for(int i=0;scat[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

  for(int i=0;i<size;i++)                           // 
  {
			index++;
			ptr=f[i].fcat;
			len2=0;
			
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
		{
			len2++;
		}

		if(len1==len2)                            // two strinf smae or not 
		{	 
			for(int k=0;k<=len2;k++)                  // cheraectoer  check
			{
				if(ptr[k]==scat[k])
				{
				   flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}else
		{
			flag=0;
		}

		if(flag==1)
		{
	     	break;
		}
  }
    if(flag==1)
    {
   		searchId(f,size,index);
    }

}

void updateId(struct food f[],int size,int sid)                                                 
{

	int index=0;
	int flag=0;
		for(int i=0; i<size; i++)
		{	
			if(f[i].fid==sid)
			{
				flag = 1;
				index=i;
				break;	
			}	
	    }
								    
	    if(flag==0)
	    {
	    	printf("%d is not found...!! -_- \n",sid);
		}
		else
		{
			printf("\n%d is Seccsefully found.-_-",sid);
			printf("\nEnter the Food Deatails ForUpdate :");	
			printf("\nEnter the Food Id, Food Name, Food price, food Category For Update --> : ");
			scanf("%d %s %d %s", &f[index].fid, &f[index].fname, &f[index].fprice, &f[index].fcat);
    	}
    	if(flag==1)
		{
    		printf("\nThe Updated Food Deatails is :");	
			printf("\n Food Id\t Food Name\t Food price\t Food Category : ");
			for(int i=0; i<size; i++)
			{
					printf("\n%d\t\t %s\t\t %d\t\t %s", f[i].fid, f[i].fname, f[i].fprice, f[i].fcat);	
			}	
		}	                	
}

int updateName(char Sname[],struct food f[],int size)
{
    int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
   	for(int i=0;Sname[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

  for(int i=0;i<size;i++)                                  // 
  {
	    index++;
	    ptr=f[i].fname;
	    len2=0;
    	
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
	    {
	    	len2++;
	    }

     	if(len1==len2)                            // two strinf smae or not 
     	{	 
        	for(int k=0;k<=len2;k++)                  // cheraectoer  check
         	{
            	if(ptr[k]==Sname[k])
           		{
              		flag=1;
            	}
				else
				{
              		flag=0;
              		break;
                }
         	}
        }
	   else
	   	{
        	flag=0;
    	}

        if(flag==1)
        {
          	break;
		}
    }

		if(flag==1)
		{
			updatefood(index,f,size);
			showFoodDetails(f,size);
	    }
	return flag;
}

void updatePrice(int sprice,struct food f[],int size)
{
	int flag=0;
	int index=0;
	for(int i=0; i<size; i++)
	{	
		if(sprice==f[i].fprice)
		{
			flag = 1;
			index = i;
			break;	
		}	
    }
    
    if(flag==0)
    {
    	printf("%d price is not found...!!-_-\n",sprice);
	}
	else
	{
		printf("\n%d is Seccsefully found.-_-",sprice);
		printf("\nEnter the Food Deatails for Update:");	
		printf("\nEnter the Food Id, Food Name, Food price, food Category For Update --> : ");
		scanf("%d %s %d %s", &f[index].fid, &f[index].fname, &f[index].fprice, &f[index].fcat);
	}
	
	if(flag==1)
		{
			printf("\nThe Updated Food Deatails is :");	
			printf("\n Food Id\t Food Name\t Food price\t Food Category : ");
			for(int i=0; i<size; i++)
			{
				printf("\n%d\t\t %s\t\t %d\t\t %s", f[i].fid, f[i].fname, f[i].fprice, f[i].fcat);	
			}	
		}		
}

int updateCategory(char scat[],struct food f[],int size)
{
	int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
   	for(int i=0;scat[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

  for(int i=0;i<size;i++)                                  // 
  {
	    index++;
	    ptr=f[i].fcat;
	    len2=0;
    	
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
	    {
	    	len2++;
	    }

     	if(len1==len2)                            // two strinf smae or not 
     	{	 
        	for(int k=0;k<=len2;k++)                  // cheraectoer  check
         	{
            	if(ptr[k]==scat[k])
           		{
              		flag=1;
            	}
				else
				{
              		flag=0;
              		break;
                }
         	}
        }
	    else
	   	{
        	flag=0;
    	}

        if(flag==1)
        {
          	break;
		}
 }

		if(flag==1)
		{
			updatefood(index,f,size);
			showFoodDetails(f,size);
	    }
	return flag;
}

void  delate_Index(int sid,struct food f[],int size)                     
{
		// int fid;
	// char fname[20];
	// int fprice;
	// char fcat[20];
	 printf("\n Record is %d\n",size_fod);
  for(int i=0;i<size;i++)
   {
        if(f[i].fid==sid)
        { 
			 
            for(int j=i;j<size-1;j++)
            {
                f[j]=f[j+1];
            }
        }
    }
    //    printf("\n Record is \n");
	 size_fod--;
    showFoodDetails(f,size_fod);
}

void DelateByName(char Sname[],struct food f[],int size)
{
 int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
   	for(int i=0;Sname[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

  for(int i=0;i<size_fod;i++)                                  // 
  {
     	
	    index++;
	    ptr=f[i].fname;
	    len2=0;
    	
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
	    {
	    	len2++;
	    }

     	if(len1==len2)                            // two strinf smae or not 
     	{	 
        	for(int k=0;k<=len2;k++)                  // cheraectoer  check
         	{
            	if(ptr[k]==Sname[k])
           		{
              		flag=1;
            	}
				else
				{
              		flag=0;
              		break;
                }
         	}
        }
	   else
	   	{
        	flag=0;
    	}

        if(flag==1)
        {
          	break;
		}
    }
	printf("%d",index);
	delate_Index(index,f,size_fod);

}
void  delatePrise(int sid,struct food f[],int size)                          
{

 printf("\n Record is %d\n",size_fod);
  for(int i=0;i<size;i++)
   {
        if(f[i].fprice==sid)
        { 
			 
            for(int j=i;j<size-1;j++)
            {
                f[j]=f[j+1];
            }
        }
    }
	size_fod--;
    showFoodDetails(f,size_fod);
}

void DelateByCat(char Scateg[],struct food f[],int size)
{
 int flag=0,index=0,len1=0,len2=0;
  	char *ptr=NULL;
   	for(int i=0;Scateg[i]!='\0';i++)                          // user name count len1
	{	
	    len1++;
	}

  for(int i=0;i<size_fod;i++)                                  // 
  {
     	
	    index++;
	    ptr=f[i].fcat;
	    len2=0;
    	
		for(int j=0;ptr[j]!='\0';j++)              // structer nsme count len2           
	    {
	    	len2++;
	    }

     	if(len1==len2)                            // two strinf smae or not 
     	{	 
        	for(int k=0;k<=len2;k++)                  // cheraectoer  check
         	{
            	if(ptr[k]==Scateg[k])
           		{
              		flag=1;
            	}
				else
				{
              		flag=0;
              		break;
                }
         	}
        }
	    else
	   	{
        	flag=0;
    	}

        if(flag==1)
        {
          	break;
		}
    }
	printf("%d",index);
	delate_Index(index,f,size_fod);

}
//..........................................................................................................................
void main()
{
	int i, flag=0;
	int ino=0, ino1=0, ino2=0;
	int choice;
    int size;
	
	int sid, len, index=0, sprice;
	char Sname[20],scat[20];
	char *name1=NULL;
	char *cat1=NULL;
	
	printf("\nEnter the Food Qunatity Size : ");
	scanf("%d",&size_fod);
	struct food f[size_fod]; 
	
	printf("\n_____-_-Menu Driven Program-_-_____");
	printf("\n1 Add Food Details : ");
	printf("\n2 Display all Food details : ");
	printf("\n3 Display the food details whose price range between 100 to 500 :");
	printf("\n4 Search Food Details : ");
	printf("\n5 Update Food Details : ");
	printf("\n6 Delete Food Details : ");
	printf("\n7 Exist");
	
	do
	{
		printf("\n\nEnter the main choise : ");
		scanf("%d", &choice);
		switch(choice)                                                                  //   main switch case
    	{
		 case 1:
		 addFoodDetails(f,size_fod);
		 break;	
		 
		 case 2:
		 showFoodDetails(f,size_fod);
		 break;	
		 
		 case 3:
	     _100_to_500_Price(f,size_fod);
		 break;	
		 
		 case 4:
	         	    printf(" -_- Welcome Again -_- ");
					printf("\n Search Food Details By Following Options : ");
					printf("\n1 Search Food By Id : ");
					printf("\n2 Search Food By name : ");
					printf("\n3 Search Food By price : ");
					printf("\n4 Search Food By category : ");
			do{
					
						printf("\n\nEnter the choice for search : ");
						scanf("%d", &ino);
					
					switch(ino)                                                           //search switch case
					{
						    case 1:
					    		printf("\nEnter the Search Id : ");
								scanf("%d", &sid);
								searchId(f,size_fod,sid);
							break;
							
							case 2:
	                            printf("\nEnter the Name to search : ");
								fflush(stdin);
								gets(Sname);
	                            searchName(Sname,f,size_fod);
							break;
							
							case 3:
								printf("\nEnter the price to search: ");
								scanf("%d", &sprice);
								searchPrice(sprice,f,size_fod);
							break;
							
							case 4:
								printf("\nEnter the category to search : ");
								fflush(stdin);
								gets(scat);
								searchCategory(scat,f,size_fod);
							break;
							
							default:
								printf("Exist from search");
					}
			 }while(ino!=5);
		 break;	
		 
		 case 5:
				printf(" -_- Welcome Again -_- ");
				printf("\n Update Food Details By Following Options : ");
				printf("\n1 Update Food By Id : ");
				printf("\n2 Update Food By name : ");
				printf("\n3 Update Food By price : ");
				printf("\n4 Update Food By category : ");
			   do{
					printf("\n\nEnter the choice for Update : ");
					scanf("%d", &ino1);
					switch(ino1)                                                                       //update switch case
					{
						    case 1:
					    		printf("\nEnter the Search Id for update : ");
								scanf("%d", &sid);
								updateId(f,size_fod,sid);
							break;
							
							case 2:
	                            printf("\nEnter the Name to search for update : ");
								fflush(stdin);
								gets(Sname);
	                            updateName(Sname,f,size_fod);
							break;
							
							case 3:
								printf("\nEnter the price to search for update : ");
								scanf("%d", &sprice);
								updatePrice(sprice,f,size_fod);
							break;
							
							case 4:
								printf("\nEnter the category to search for update : ");
								fflush(stdin);
								gets(scat);
								updateCategory(scat,f,size_fod);
							break;
							
							default:
								printf("Exist from search");
					}
			   }while(ino1!=5);
             break;
        
	       case 6: 
		    do{
                printf("You can Delate Food diteles using this option\n");
          
                printf(" 1--> Food Id\n");
                printf(" 2--> Food Nmae\n");
                printf(" 3--> Food Prise\n");
                printf(" 4--> Food Categarey\n");
                printf(" 5--> Exsit...\n");
                
                printf("Enter the option for dealate\n");
                 scanf("%d",&ino2);
                switch(ino2)
                {
                    // f,size,sid
                    // Sname,f,size
                    case 1:
                    printf("Enter the index for Delate");
                    scanf("%d",&sid);
                    delate_Index(sid,f,size_fod);
                    break;
                   
                    case 2:
                    printf("\nEnter the Name to search for Delate : ");
					fflush(stdin);
					gets(Sname);
	                DelateByName(Sname,f,size_fod);
                    break;

                    case 3:
                      //   delatePrise
				    printf("Enter the prise for Delate");
                    scanf("%d",&sprice);
                    delatePrise(sprice,f,size_fod);
                    break;

                    case 4:
                     //    DelateByCat
				    printf("\nEnter the Categ to search for Delate : ");
					fflush(stdin);
					gets(scat);
	                DelateByCat(scat,f,size_fod);
                    break;

                    default:
                    printf("Exsit form Delate.......\n");
                
                
                }
           }while(ino2!=5);
           break;
		   default:
           printf("Exsit hear form delate.......\n");
        }
	}while(choice!=0);
}
