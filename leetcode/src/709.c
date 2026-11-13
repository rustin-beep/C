#include <string.h>
#include <ctype.h>

char *toLowerCase(char *str)
{
    for (int i = 0; i < strlen(str); i++) str[i] = tolower(str[i]);
    return str;
}
