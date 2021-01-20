#include<cs50.h>
#include<stdio.h>

int main(void)
{
    string name = get_string("What is your name?"); //get user name
    printf("hello, %s\n", name); //print hello and user name
}