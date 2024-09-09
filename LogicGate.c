# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    a = 1;
    b = 0;

    // Dalam bahasa C, operator logika AND dilambangkan dengan && dan operator logika OR dilambangkan dengan ||.
    int andOperatpr = a&&b; 
    int orOperator = a||b;


    printf("RESULT OF AND : %d\n",andOperatpr);
    printf("RESULT OF OR : %d",orOperator);
    return 0;
}
