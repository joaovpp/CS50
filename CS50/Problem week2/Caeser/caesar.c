#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check(char s[]);

int main(int argc, string argv[])
{
    // assures the user defines a correctable key
    string w = argv[1];
    if((argc != 2) || (check(w) == 1))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        int j = atoi(argv[1]);
        int l = 0;
        int k = 0;
        int c = 0;
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if ((s[i] >= 65) && (s[i] <= 90))
            {
                l = s[i] % 65;
                c = (j + l) % 26;
                k = 65 + c;
                printf("%c", k);
            }
            else if ((s[i] >= 97) && (s[i] <= 122))
            {
                l = s[i] % 97;
                c = (j + l) % 26;
                k = 97 + c;
                printf("%c", k);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
    }
    printf("\n");
}

int check(char s[])
{
    int j = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(isdigit(s[i]))
        {
            j = j + 0;
        }
        else
        {
            j = j + 1;
        }
    }
    return j;
}


