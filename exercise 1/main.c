/*Name:Kaveh Masoudinia
Section 9 Exercise 1
Date:12/23/2021(1400/10/02)*/
#include <stdio.h>


void scan();
void show();

struct date_tM {
    char day[3];
    char month[3];
    char year[5];
};
struct date_tM le[100];

struct date_tP {
    char day[3];
    char month[3];
    char year[5];
};
struct date_tP len[100];

struct tank_t {
    char tankCap[10];
    char currentFl[10];
};
struct tank_t leen[100];


struct auto_t {
    char make[50];
    char model[50];
    char odometer[10];
};
struct auto_t lenn[100];

int main() {
    scan();
    show();
    return 0;
}
void scan(){
    int n;
    printf("How many cars do you enter?\n");
    scanf("%d",&n);
    for (int i = 0; i < n ; ++i) {

        printf("Enter the name of the manufacturer:\n");
        scanf("%s",lenn[i].make);
        printf("Enter the car model:\n");
        scanf("%s",lenn[i].model);
        printf("Enter the mileage of the car:\n");
        scanf("%s",lenn[i].odometer);
        printf("Enter the date of manufacture of the car:\n");
        scanf(" %s %s %s",le[i].day,le[i].month,le[i].year);
        printf("Date of purchase of the car:\n");
        scanf(" %s %s %s",len[i].day,len[i].month,len[i].year);
        printf("Enter the capacity of the car tank:\n");
        scanf("%s",leen[i].tankCap);
        printf("Enter the current fuel level:\n");
        scanf("%s",leen[i].currentFl);
    }
}
void show(){
    int n=1;
    for (int i = 0; i < n ; ++i) {
        printf("Car manufacturer:\n%s",lenn[i].make);
        printf("\nCar model:\n%s",lenn[i].model);
        printf("\nmileage of the car:\n%s",lenn[i].odometer);
        printf("\ndate of manufacture of the car:\n%s/%s/%s",le[i].day,le[i].month,le[i].year);
        printf("\nDate of purchase of the car:\n%s/%s/%s",len[i].day,len[i].month,len[i].year);
        printf("\ncapacity of the car tank:\n%s",leen[i].tankCap);
        printf("\ncurrent fuel level:\n%s",leen[i].currentFl);
    }

}