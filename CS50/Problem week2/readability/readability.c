#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int count_letters(char s[]);
int count_word(char s[]);
int count_sentence(char s[]);

int main(void)
{
    string s = get_string("Text: ");
    float w = count_word(s);
    float l = count_letters(s);
    float j = count_sentence(s);
    float L = 100 * l / w;
    float S = 100 * j / w;
    float index = (0.0588 * L - 0.296 * S - 15.8);
    int i = round(index);
    if (i < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (i >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", i);
    }
}


int count_letters(char s[])
{
    int letters = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            letters++;
        }
        else if (isupper(s[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_word(char s[])
{
    int words = 1;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isspace(s[i]))
        {
            words++;
        }
    }
    return words;
}

int count_sentence(char s[])
{
    int sentence = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 33)
        {
            sentence++;
        }
        else if (s[i] == 46)
        {
            sentence++;
        }
        else if (s[i] == 63)
        {
            sentence++;
        }
    }
    return sentence;
}
