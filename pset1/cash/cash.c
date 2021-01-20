#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
    int cent_25 = 0;
    int cent_10 = 0;
    int cent_05 = 0;
    int cent_01 = 0;
    float dollars = 0;

    do
    {
        dollars = get_float("Change owed:");
    }
    while (dollars < 0); //check input number > 0

    int cent = round(dollars * 100);

    if (cent >= 25) // 25 cent count
    {
        cent_25 = cent / 25;
        cent = cent % 25;
    }

    if (cent >= 10) // 10 cent count
    {
        cent_10 = cent / 10;
        cent = cent % 10;
    }

    if (cent >= 5) // 5 cent count
    {
        cent_05 = cent / 5;
        cent = cent % 5;
    }

    if (cent >= 1) // 1 cent count
    {
        cent_01 = cent / 1;
    }

    printf("%d\n", cent_25 + cent_10 + cent_05 + cent_01);
}