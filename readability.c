#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
float count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt for text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    float words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    float l = ((letters / words) * 100);
    int s = ((sentences / words) * 100);
    int x = round(0.0588 * l - 0.296 * s - 15.8);

    // Print the grade level
    if (x < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (x > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", x);
    }
}

int count_letters(string text)
{
    // Return the number of letters in text

    int alpha = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            alpha++;
        }
    }

    return alpha;
}

float count_words(string text)
{
    float blank = 0;

    // Return the number of words in text

    for (int j = 0; j < strlen(text); j++)
    {
        if (isblank(text[j]))
        {
            blank++;
        }
    }
    return blank + 1;
}

int count_sentences(string text)
{
    int punct = 0;
    // Return the sentences of words in text
    for (int k = 0; k < strlen(text); k++)
    {
        if (text[k] == '.' || text[k] == '?' || text[k] == '!')
        {
            punct++;
        }
    }

    return punct;
}
