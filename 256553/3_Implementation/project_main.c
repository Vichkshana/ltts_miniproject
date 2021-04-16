#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pharmacy.h"
int main()
{
    int choice,c;     
    char mname[10][20]={"Crocin","Calpol","Dolo","Amlong","Senna","Volini","Flagyl","Aciloc","Digene","Avil"};
    int m_item_code[10]={1,2,3,4,5,6,7,8,9,10};
    int m_stock[10]={100,100,100,100,25,30,40,100,100,100};
    float m_unit_price[10]={3,2.5,3.5,1,50,25,40,5,7,4};      	
    for(int i=0;i<10;i++)
    {
        strcpy(m[i].name,&mname[i][0]);
	    m[i].item_code=m_item_code[i];
	    m[i].stock=m_stock[i];
	    m[i].unit_price=m_unit_price[i];
	}

    do
    {
        printf("Enter\n1 - Bill generation \n2 - Display list of medicines\n3 - Check stock\n4 - Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                bill();
                break;
            }
	        case 2:
            {
                display();
                break;
            }
	        case 3:
            {
                checkstock();
                break;
            }
	        case 4:
            {
                exit(0);
            }
	
        }
        printf("\nTo Continue with other Options Enter 1 Else any other number");
        scanf("%d",&c);
    }while(c==1);  

}
