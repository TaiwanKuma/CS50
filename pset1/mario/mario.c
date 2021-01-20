#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int count;

    do
    {
        count = get_int("Height:");

    }
    while (count < 1 || count >= 9);//check input number > 1

    for (int column = 0 ; column < count; column++)
    {

        for (int dots = 0 ; dots < (count - column - 1); dots++) //count how much dots in this row
        {
            printf(" ");
        }

        for (int oppo = 0; oppo < 2; oppo++)// add opposite mario function
        {
            for (int hash = 0; hash < column + 1; hash++) //count how much hash in this row
            {
                printf("#");
            }

            if(oppo < 1 )
            {

                printf("  ");

            }
        }

        printf("\n");

    }

}