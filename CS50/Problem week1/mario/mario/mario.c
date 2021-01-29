// Create a Mario pyramid from 1 to 8 lines

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask the user to inform the height (from 1 to 8)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // Defines the line and the number of blocks
    for (int i = 1; i <= height; i++)
    {
        // defines the number of spaces to print before the blocks
        for (int w = height - 1; w >= i; w--)
        {
            printf(" ");
        }
        // Print the blocks
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
