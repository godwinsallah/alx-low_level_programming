#include "main.h"
char *_strstr(char *haystack, char *needle)
{
    int i = 0;

    while (haystack[i] != '\0')
    {
        int j = 0;
        int match = 1;

        while (needle[j] != '\0')
        {
            if (haystack[i + j] != needle[j])
            {
                match = 0;
                break;
            }
            j++;
        }

        if (match)
            return &haystack[i];

        i++;
    }

    return NULL;
}
