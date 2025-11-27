#include <stdio.h>

struct Farmer
{
    char name[50];
    int income;
    long long int income_cert;
    char id[20];
    long long int aadhar_no;
};

int main()
{
    int n, i, j;
    struct Farmer farmers[100], temp;

    printf("Enter number of farmers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for farmer %d\n", i + 1);

        printf("Farmer Name: ");
        scanf(" %[^\n]", farmers[i].name); 

        printf("Aadhar No (12 digits): ");
        scanf("%lld", &farmers[i].aadhar_no); 
        printf("Farmer ID: ");
        scanf("%s", farmers[i].id);

        printf("Income Certificate No (By Tahsildar): ");
        scanf("%lld", &farmers[i].income_cert);

        printf("Income of Farmer: ");
        scanf("%d", &farmers[i].income);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (farmers[i].income > farmers[j].income)
            {
                temp = farmers[i];
                farmers[i] = farmers[j];
                farmers[j] = temp;
            }
        }
    }

    printf("\n======= Farmer Information (Sorted by Increasing Income) =======\n");
    for (i = 0; i < n; i++)
    {
        printf("\nFarmer %d\n", i + 1);
        printf("Farmer Name                         	  : %s\n", farmers[i].name);
        printf("Aadhar No                           		  : %lld\n", farmers[i].aadhar_no);
        printf("Farmer ID                           		  : %s\n", farmers[i].id);
        printf("Income Certificate No (By Tahsildar): %lld\n", farmers[i].income_cert);
        printf("Income of Farmer                    	  : %d\n", farmers[i].income);
        printf("-------------------------------------------------------------------\n");
    }

    return 0;
}
