#include <stdio.h>
int main(){
    char time[6];
    int hour, minute;
    printf("Please enter the 24-hour time: ");
    scanf("%2d:%2d", &hour, &minute);
    if(hour > 12){
        hour -= 12;
        printf("%d:%02d PM\n", hour, minute);
    }
    else if (hour == 12){
        printf("%d:%02d PM\n", hour, minute);
    }
    else if (hour == 0){
        hour += 12;
        printf("%d:%02d AM\n", hour, minute);
    }
    else{
        printf("%d:%02d AM\n", hour, minute);
    }
    return 0;
}
