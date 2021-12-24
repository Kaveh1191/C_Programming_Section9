/*Name:Kaveh Masoudinia
Section 9 Exercise 4
Date:12/24/2021(1400/10/03)*/
#include <stdio.h>
#include <string.h>
int n;
struct travel_data{
    char des[100];
    char dis[100];
    char time[100];
    char direct[100];
};
void scan_travel_data();
void travel_data_compare();
struct travel_data l[100];
int main() {
scan_travel_data();
travel_data_compare();

}
void scan_travel_data(){

    printf("Enter how many data do yo want import:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("\nDestination:\n");
        scanf("%s",l[i].des);
        printf("Distance:\n");
        scanf("%s",l[i].dis);
        printf("Time:\n");
        scanf("%s",l[i].time);
        printf("Direction:\n");
        scanf("%s",l[i].direct);

    }
}
void travel_data_compare(){
    char ND[100];
    printf("Enter your destination:\n");
    scanf("%s",ND);
    for (int i = 0; i < n; ++i) {
        if(strcmp(ND,l[i].des)==0)
            printf("\n%s \n%s KM \n%s Hour \n%s",l[i].des,l[i].dis,l[i].time,l[i].direct);
    }

}