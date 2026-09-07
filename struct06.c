#include <stdio.h>

struct Date {
    int d,m,y;
};

int countDays(struct Date dt){
    int days = dt.y*365 + dt.d;
    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<dt.m-1;i++) days += monthDays[i];
    // leap year adjustment
    days += (dt.y/4 - dt.y/100 + dt.y/400);
    if(dt.m<=2 && ((dt.y%4==0 && dt.y%100!=0) || dt.y%400==0)) days--;
    return days;
}

int main() {
    struct Date d1,d2;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d%d%d",&d2.d,&d2.m,&d2.y);

    int diff = countDays(d2) - countDays(d1);
    if(diff<0) diff = -diff;

    printf("Difference = %d days\n",diff);
    return 0;
}
