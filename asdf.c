#include <stdlib.h>
#include <stdlib.h>

int main() 
{  
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf ("Enter a color: ");
    scanf("%s", color);
    printf ("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf ("Enter a celebrity: ");
    scanf("%s", celebrity);
    printf ("Roses are %s\n");
    printf ("%s are blue\n");
    printf ("I love %s\n");

    return 0;
} 