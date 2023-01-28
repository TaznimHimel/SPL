#include <stdio.h>
struct personal
{
    char name[20];
    int day;
    char month[10]; //
    int year;
    float salary;
};
int main()
{
    struct personal person;
    printf("Enter the person's name: ");
    scanf("%s", person.name);
    printf("Enter the date of joining (dd-month name-yyyy): ");
    scanf("%d %s %d", &person.day, person.month, &person.year);
    printf("Enter the salary: ");
    scanf("%f", &person.salary);
    printf("\nPerson's Information:\n");
    printf("Name: %s\n", person.name);
    printf("Date of Joining: %d %s %d\n", person.day, person.month,
           person.year);
    printf("Salary: %.2f\n", person.salary);
    return 0;
}