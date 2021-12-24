/*Name:Kaveh Masoudinia
Section 9 Exercise 2
Date:12/23/2021(1400/10/02)*/
#include <stdio.h>
#include <string.h>
struct employ{
    char Fname[100];
    char Lname[100];
    char id[100];
    char age[100];
    char Pnumber[100];
    char Eblong[100];
    char city[100];
};
struct employ l[100];
int n;
void scan();
void sort();
void show();

int main() {
   scan();
    sort();
    show();
    return 0;
}
void scan(){
    printf("How many employees do you want to enter?:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("Enter the employee's first and last name:\n");
        scanf("%s %s",l[i].Fname,l[i].Lname);
        printf("Enter the employee's id:\n");
        scanf("%s",l[i].id);
        printf("Enter the employee's age:\n");
        scanf("%s",l[i].age);
        printf("Enter the employee's phone number:\n");
        scanf("%s",l[i].Pnumber);
        printf("Enter the part to which the employee belongs:\n");
        scanf("%s",l[i].Eblong);
        printf("Enter the employee's city:\n");
        scanf("%s",l[i].city);
    }
}
void sort() {
    struct employ temp;
    int j, i;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++) {
            if (strcmp(l[j].city, l[j + 1].city) > 0) {
                temp = l[j];
                l[j] = l[j + 1];
                l[j + 1] = temp;
            }
        }
}
void show(){
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("\n%s\n %s\n %s\n %s\n %s\n %s\n %s", l[i].Fname,l[i].Lname,l[i].id,l[i].age,l[i].Pnumber,l[i].Eblong,l[i].city);
        printf("\n");
    }
}