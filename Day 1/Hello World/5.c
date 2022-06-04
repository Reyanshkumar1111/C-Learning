int main()
{
    printf("Hello World 11");
    return 0;
}
// #include<stdio.h> is not necessary for the printf and scanf function.

//#include<stdio.h>

int main()
{
    char a[25];
    printf(" Enter your string : ");
    scanf("%[^\n]s",a);    // gets(a);
    printf("                     %s",a);
   
    return 0;
}