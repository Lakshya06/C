#include <stdio.h>

int main()
{   

    int today_day, today_month, today_year;

    printf("Enter today's date: ");
    scanf("%d/%d/%d", &today_day, &today_month, &today_year);

    int days;
    // printf("%d %d %d", today_day, today_month, today_year);

    days = today_year*365;

    if(today_month%2==0 && today_month != 2)
    {
        days += 30*today_month;
    }

    else if(today_month%2==0 && today_month == 2)
    {

        days += 
    }

    days += today_day;

    printf("%d", days);

    return 0;
}