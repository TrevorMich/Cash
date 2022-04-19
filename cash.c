#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    //variables
    float c;
    int quarter = 25;
    int dime = 10;
    int nickle = 5;
    int penny = 1;
    int n = 0;

    //prompt user for change owed
    do
    {
        c = get_float("change owed: ");
    }
    while (c < 0);

    //round changeowed to the nearest penny
    int change = round(c * 100);

    //count change in quarter
    while (quarter <= change)
    {
        change = change - quarter;
        n++;
    }

    //count change in dimes
    while (dime <= change)
    {
        change = change - dime;
        n++;
    }

    //count change in nickle
    while (nickle <= change)
    {
        change = change - nickle;
        n++;
    }

    //count change in penny
    while (penny <= change)
    {
        change = change - penny;
        n++;
    }

    //print number of change
    printf("change is: %i\n", n);
}