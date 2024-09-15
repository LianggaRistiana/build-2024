#include <stdio.h>

int main(int argc, char const *argv[])
{
    int firstNumber = 1;

    if (firstNumber%2 == 0)
    {
        printf("Bilangan genap\n");
    }
    else
    {
        printf("Bilangan ganjil\n");
    }


    int month = 1;
    switch (month)
    {
    case 1:
        printf("Januari\n");
        break;
    case 2:
        printf("Februari\n");
        break;
    default:
        printf("Buka kalender\n");
        break;
    }

    // switch (month)
    // {
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 8:
    // case 10:
    // case 12:
    //     printf("31 tanggal\n");
    //     break;
    // case 4:
    // case 6:
    // case 9:
    // case 11:
    //     printf("30 tanggal\n");
    //     break;
    // default:
    //     printf("Buka kalender\n");
    //     break;
    // }


    return 0;
}
