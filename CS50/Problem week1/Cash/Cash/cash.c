#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        // Aks the user to inform the change owed
        dollars = get_float("Change owed: ");
    }
    // it won't stop until the change owed is 0
    while (dollars < 0);
    int cents = round(dollars * 100);
    int result;
    for (result = 0; cents > 0; result++)
    {
        if (cents >= 25)
        {
            cents = cents - 25;
        }
        else if ((cents >= 10) && (cents < 25))
        {
            cents = cents - 10;
        }
        else if ((cents >= 5) && (cents < 10))
        {
            cents = cents - 5;
        }
        else if ((cents >= 1) && (cents < 5))
        {
            cents = cents - 1;
        }
    }
    printf("%i\n", result);
}



