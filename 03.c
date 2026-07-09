#include <stdio.h>

int main()
{
    int age;
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your name is %s and your age is %d", name, age);

    return 0;
}