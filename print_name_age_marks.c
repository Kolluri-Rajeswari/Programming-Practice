#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float marks;
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter marks:");
    scanf("%f",&marks);

    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nMarks: %.2f", marks);

    return 0;
}