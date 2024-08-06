#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare a variable to hold the starting population size.
    int start;

    // Use a do-while loop to continuously prompt the user for a starting population size
    // until a valid input (greater than or equal to 9) is provided.
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Declare a variable to hold the end population size.
    int end;

    // Use a do-while loop to continuously prompt the user for an end population size
    // until a valid input (greater than or equal to the start population size) is provided.
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // Declare a variable to keep track of the number of years required for the population to reach the end size.
    int years = 0;

    // Use a while loop to simulate the population growth each year until the end size is reached or exceeded.
    while (start < end)
    {
        // In each year, the number of llamas born is the current population size divided by 3 (truncated)
        // and the number of llamas passed away is the current population size divided by 4 (truncated).
        start = start + (start / 3) - (start / 4);

        // After simulating each year, increment the years counter by 1.
        years++;
    }

    // After the while loop ends, print the number of years required for the population to reach the end size.
    printf("Years: %i\n", years);
}
