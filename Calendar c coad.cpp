#include <stdio.h>
#include<conio.h>
#include<windows.h>



int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}


int getNumberOfDays(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        return 29;
    else
        return daysInMonth[month - 1];
}


void displayCalendar(int month, int year) {
    int i, j;
    int startingDayOfWeek;
    int totalDays;

    // Determine the starting day of the week
    startingDayOfWeek = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

    // Get the number of days in the month
    totalDays = getNumberOfDays(month, year);

    // Display the calendar header
    printf("  ------------%s-------------\n", month == 1 ? "January" :
                                                 month == 2 ? "February" :
                                                 month == 3 ? "March" :
                                                 month == 4 ? "April" :
                                                 month == 5 ? "May" :
                                                 month == 6 ? "June" :
                                                 month == 7 ? "July" :
                                                 month == 8 ? "August" :
                                                 month == 9 ? "September" :
                                                 month == 10 ? "October" :
                                                 month == 11 ? "November" : "December");
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    
    for (i = 0; i < startingDayOfWeek; i++) {
        printf("     ");
    }


    for (i = 1, j = startingDayOfWeek; i <= totalDays; i++, j++) {
        printf("%5d", i);
        if (j % 7 == 6) {
            printf("\n");
        }
    }


    if (j % 7 != 0) {
        printf("\n");
    }
}

int main() {
    int month, year;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    displayCalendar(month, year);

    return 0;
}
