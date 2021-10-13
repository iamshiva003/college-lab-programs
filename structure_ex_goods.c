#include <stdio.h>

int main()
{
    struct goods
    {
        char name[10];
        char date[15];
        int code,qty,price;
    };
    struct goods s[15];
    int i,n;
    printf ("enter the no of goods:\n");
    scanf ("%d",&n);
    printf ("Details of the goods\n");
    for (i=0;i<n;i++)
    {
        printf ("enter the name of goods:");
        scanf ("%s",s[i].name);
        printf ("Enter the name of code:");
        scanf ("%d",&s[i].code);
        printf ("enter the quantity:");
        scanf ("%d",&s[i].qty);
        printf ("enter the price:");
        scanf ("%d",&s[i].price);
        printf ("enter the manufacturing date:");
        scanf ("%s",s[i].date);
    }
    printf ("Goods info\n");
    printf ("code\tname\t\tquantity\tprice\tdate\n");
    for (i=0;i<n;i++)
    {
        printf ("%d\t%s\t\t%d\t\t%d\t%s\n",s[i].code,s[i].name,s[i].qty,s[i].price,s[i].date);
    }
    return 0;
}
