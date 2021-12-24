/*Name:Kaveh Masoudinia
Section 9 Exercise 3
Date:12/24/2021(1400/10/03)*/
#include<stdio.h>
#include<string.h>
struct address_t{
    char xx[100];
    char yy[100];
    char zz[100];
    char mm[100];
};
struct address_t x[100];
int main()
{
    int n,i,j;
    char s[20][50];
    printf("Enter how many do yo want import?\n");
    scanf("%d",&n);
    for(i=0;i < n;i++) {
        printf("Enter numbers:\n");
        scanf("%s %s %s %s", x[i].xx, x[i].yy, x[i].zz, x[i].mm);
    }
    for(i=0;i < n-1;i++)
        for(j=i+1;j < n;j++)
            if(strcmp(x[i].xx,x[j].xx)==0)
                printf("Machines %d and %d are on the same local network",i+1,j+1);
    return 0;
}