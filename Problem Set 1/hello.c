#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //Gets the name from the user
    string name = get_string("Whats's your name?\n");
    
    //Prints out the salutation plus the name
    printf("hello, %s\n", name);
}
