#include <stdio.h>
#include <stdlib.h>

int main()
{
    double thegoal, hourpay, hours;
    int days, holidays;

    printf("What is your money goal?\n");
    scanf("%lf", &thegoal);
    printf("How much do you earn money in a hour?\n");
    scanf("%lf", &hourpay);
    printf("How many hours do you work in a day?\n");
    scanf("%lf", &hours);
    printf("How many days do you work in a week?\n");
    scanf("%d", &days);
    printf("Do you have any holidays in a year?\nIf there is how many days is it?\n");
    scanf("%d", &holidays);

    double a, b, c ,d;
    a = hourpay * hours;
    b = (days*52) - holidays;
    c = a*b;
    d = thegoal / c;
    printf("You need %.2lf years", d);

    return 0;

}
