#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0;

    while (s[i] != '\0')
    {
        int j = 0;
        int found = 0;

        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }

        if (!found)
            break;

        i++;
    }

    return i;
}
