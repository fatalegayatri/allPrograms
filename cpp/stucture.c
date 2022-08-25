#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        int id;
        char name[7];
        /* data */
    } p;
    p.id = 24;
    struct person p1;
    p1.id = 34;
    p1.name[7] = "gaytri";
    printf("%d ,%s ", p1.id, p1.name[10]);

    strcpy(p.name, "gau");
    // p.name = "gayu";
    printf("%d", p.id);
    printf("%s", p.name);
    return 0;
}