
#include<stdio.h>
void menu()
{
    int c;
    printf("\nEnter your choice---------\n1.to enter new contact\t2.to delete\t3.to sort by group\n4.display\t5.to enter new group\t0.to Exit\n-->");
    scanf("%d",&c);
    while(1)
    {


        switch(c)
        {
            case 1:readnew();
            break;
            case 2:deletecont();
            break;
            case 3:sortbyg();
            break;
            case 4:display();
            break;
            case 5:readgroupnew();
            break;
            case 0:return;
            default:printf("Invalid choice\nPLEASE RETRY\n");
        }
        printf("\n\nEnter your choice---------\n1.to enter new contact\t2.to delete\t3.to sort by group\n4.display\t5.to enter new group\t0.to Exit\n-->");
        scanf("%d",&c);
    }
}
