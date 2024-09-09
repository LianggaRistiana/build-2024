#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i = 10;

    // while loop
    while (i < 10)
    {
        printf("Hello World ke %d\n", i);
        i++;
    }

    // do while loop
    do
    {
        printf("Hello World ke %d\n", i);
        i++;
    } while (i < 10);

    // for loop
    for (i = 0; i < 10; i++)
    {
        printf("Hello World ke %d\n", i);
    }

    printf("nilai i saat diluar looping : %d\n", i);
    return 0;
}
