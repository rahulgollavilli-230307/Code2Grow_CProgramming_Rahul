G. Rahul
AP25110090193
#include<stdio.h>
#include<string.h>
int main()
{
    int ID[10],quantities[10],count=0,choice;
    float prices[10];
    char names[10][50];
    while (1)
    {
        printf("\n1.add product \n2.show products \n3.inventory info \n4.search by ID \n5.exit\n");
        printf("choose(1-5):");
        scanf("%d",&choice);
        if(choice == 1)
        {
            if(count<10)
            {
                printf("enter product ID:");
                scanf("%d",&ID[count]);
                printf("enter name:");
                getchar();
                fgets(names[count],50,stdin);
                names[count][strcspn(names[count],"\n")] = '\0';
                printf("enter quantity:");
                scanf("%d",&quantities[count]);
                printf("enter price:");
                scanf("%f",&prices[count]);
                count++;
            }
            else
            {
                printf("product limit reached:\n");
            }
        }
        else if(choice == 2)
        {
            if(count == 0)
            {
                printf("no products:\n");
            }
            else
            {
               printf("ID,name,qty,price\n");
               for(int i=0;i<count;i++)
               {
                printf("%d%s%d%.2f\n",ID[i],names[i],quantities[i],prices[i]);
               }
            }
        }
        else if(choice == 3)
        {
            float total_value=0,max_value=0,min_value=999;
            int max_index=0,min_index=0;
            for(int i=0;i<count;i++)
            {
                float val=quantities[i]*prices[i];
                total_value+= val;
                if(val>max_value)
                {
                    max_value=val;
                    max_index=i;
                }
                if(val<min_value)
                {
                    min_value=val;
                    min_index=i;
                }
            }  
            printf("total inventory value:%.2f\n",total_value);
            printf("most valuable product:%s(ID:%d)\n",names[max_index],ID[max_index]);
            printf("least valuable product:%s(ID:%d)\n",names[min_index],ID[min_index]);
        }
        else if(choice == 4)
        {
            int searchID,found=0;
            printf("enter ID to search:");
            scanf("%d",&searchID);
            for(int i=0;i<count;i++)
            {
                if(ID[i]==searchID)
                {
                    printf("found:%s,quantity:%d,price:%.2f\n",names[i],quantities[i],prices[i]);
                    found=1;
                }
            }
            if(found==0)
            printf("product is not found:\n");
        }
        else if(choice == 5)
        {
            printf("goodbye:\n");
            break;
        }
        else
        {
            printf("invalid choice,try again:\n");
        }
    }
    return 0;
}
