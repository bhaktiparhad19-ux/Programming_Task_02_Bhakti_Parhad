#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[20];

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    if(strcmp(username, "admin") == 0 &&
       strcmp(password, "password123") == 0)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Invalid Credentials");
    }

    return 0;
}