#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Aks the user for his name
    string name = get_string("What is your name?\n");
    // Prints Hello with the user name
    printf("Hello, %s\n", name);
}

