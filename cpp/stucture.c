#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        int id;
        char name[10];
        /* data */
    } p;
    p.id = 24;
    strcpy(p.name, "gau");
    // p.name = "gayu";
    printf("%d", p.id);
    printf("%s", p.name);
    return 0;
}