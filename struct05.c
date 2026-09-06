#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee e[n];
    int max=0;

    for(int i=0;i<n;i++){
        printf("Enter id name salary of emp %d:\n",i+1);
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
        if(e[i].salary > e[max].salary) max=i;
    }

    printf("\nHighest Salary Employee:\nID:%d Name:%s Salary:%.2f\n",
           e[max].id,e[max].name,e[max].salary);
    return 0;
}
