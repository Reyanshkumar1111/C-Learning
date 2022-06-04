#include<stdio.h>

int main()
{
    char s[25];
    scanf("%[^\n]s",s); // This will help to print till \n does not occur otherwise it will terminate when space will come.
    printf("%s",s);

    return 0;
}

/* #include<stdio.h>

int main()
{
    char s[25];
    gets(s);
    printf("%s",s);

    return 0;
} */