#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[3];
    int max=0,min=0;

    for(int i=0;i<3;i++){
        printf("Enter title author price of book %d:\n",i+1);
        scanf("%s %s %f",b[i].title,b[i].author,&b[i].price);
        if(b[i].price > b[max].price) max=i;
        if(b[i].price < b[min].price) min=i;
    }

    printf("\nMost Expensive: %s by %s, Rs %.2f\n",
           b[max].title,b[max].author,b[max].price);
    printf("Lowest Priced: %s by %s, Rs %.2f\n",
           b[min].title,b[min].author,b[min].price);
    return 0;
}
