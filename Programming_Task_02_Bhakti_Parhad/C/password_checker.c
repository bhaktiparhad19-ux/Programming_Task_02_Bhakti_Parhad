#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];

    int hasUpper = 0;
    int hasDigit = 0;
    int score = 0;

    printf("Enter Password: ");
    scanf("%s", password);

    for(int i = 0; password[i] != '\0'; i++)
    {
        if(isupper(password[i]))
            hasUpper = 1;

        if(isdigit(password[i]))
            hasDigit = 1;
    }

    if(strlen(password) >= 8)
        score++;

    if(hasUpper)
        score++;

    if(hasDigit)
        score++;

    if(score == 3)
        printf("Strong Password");
    else if(score == 2)
        printf("Moderate Password");
    else
        printf("Weak Password");

    return 0;
}