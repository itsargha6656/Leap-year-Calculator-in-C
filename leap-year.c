#include <stdio.h>

int main() {
//leap year 
int year;
printf("enter year\n");
scanf("%d",&year);
if(year % 4 == 0){
    if(year % 100 == 0){
        if(year % 400 == 0){
        printf("this is a leap year");
    }
    else {
        printf("its not a leap year");
    }
    
    }
    else {
        printf("this is a leap year");
    }
    
}

else {
    printf("this isn't a leap year");
}

    return 0;
}