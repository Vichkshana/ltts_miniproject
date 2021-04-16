#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"C:\Users\Vichkshana\Downloads\ltts_miniproject (2)\ltts_miniproject\3_Implementation\inc\pharmacy.h"

void bill()
{
    int no_of_items,k=0;
    float amount;
    int code,i,quantity,flag;
    printf("enter no.of items: ");
    scanf("%d",&no_of_items);
    char b[no_of_items][20];
    float p[no_of_items];
    int q[no_of_items];
    while(no_of_items--)
    {
        flag=0;
        printf("\nEnter item code:");
        scanf("%d",&code);
        for(i=0;i<10;i++)
        {
            if(m[i].item_code==code)
            {
                flag=1;
                int c;
                printf("\nName :%s\t\t Price=%.2f\t\t\n",m[i].name,m[i].unit_price);
                printf("Enter 1 if you want to purchase %s\n ",m[i].name);
                scanf("%d",&c);
                if(c==1)
                {
                    printf("\nEnter quantity :");
                    scanf("%d",&quantity);
                    if(m[i].stock>quantity)
                    {
                        m[i].stock-=quantity;
                        //stock();
                        amount+=quantity*m[i].unit_price;
	
	                    strcpy(&b[k][0],m[i].name);
	                    q[k]=quantity;
	                    p[k]=m[i].unit_price;
	                    k++; 
                    }
                    else
                    {
                        printf("Please enter quantity below available quantity\n");
                    }
                }
                break;
            }
        }
        if(flag==0)
        {
            printf("Item not available\n");
        }
    }
    printf("\n-----------------------------BILL-------------------------------\n");
	printf("Name\t\t Price\t\t Quantity\t\t Rate\n");
    for(i=0;i<k;i++)
    {
		
        printf("%s\t\t %.2f\t\t %d \t\t\t %.2f\n",&b[i][0],p[i],q[i],p[i]*q[i]);
    }
	
    printf("The total bill amount is %.2f\n",amount);

}

int display()
{
    printf("Code\t\t Name\t\t Price\n");    
    for(int i=0;i<10;i++)
    {
        printf("%d\t\t %s\t\t %.2f\n",m[i].item_code,m[i].name,m[i].unit_price);
        
    }
    return 0;
}

int checkstock()
{
    printf("Name\t\t Quantity\n");    
    for(int i=0;i<10;i++)
    {
        printf(" %s\t\t %d\n",m[i].name,m[i].stock);
        
    }
    return 0;
}




