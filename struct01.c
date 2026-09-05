#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int marks[5];
    int credits[5];
};

// function to convert marks into grade points
int gradePoint(int marks) {
    if(marks >= 90) return 10;
    else if(marks >= 80) return 9;
    else if(marks >= 70) return 8;
    else if(marks >= 60) return 7;
    else if(marks >= 50) return 6;
    else if(marks >= 40) return 5;
    else if(marks >= 30) return 4;
    else return 0; // fail
}

int main() {
    struct Student s;
    int total = 0, totalCredits = 0;
    float avg, gpa = 0;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter 5 marks:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&s.marks[i]);
        total += s.marks[i];
    }

    printf("Enter 5 credits:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&s.credits[i]);
        totalCredits += s.credits[i];
        gpa += gradePoint(s.marks[i]) * s.credits[i];
    }

    avg = total/5.0;
    gpa /= totalCredits;

    printf("\nName: %s\nAge: %d\nTotal: %d\nAverage: %.2f\nGPA: %.2f\n",
           s.name,s.age,total,avg,gpa);
    return 0;
}
