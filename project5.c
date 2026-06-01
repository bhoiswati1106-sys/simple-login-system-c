#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[20];

    //Correct login details
    char correctUsername[]="swati";
    char correctPassword[]="1108";

    printf("=== LOGIN SYSTEM ===\n");

    // Input username
    printf("Enter Username: ");
    scanf("%s",username);

    // Input password
    printf("Enter Password: ");
    scanf("%s",password);

    // Check username and password
    if (strcmp(username, correctUsername)==0 && strcmp(password, correctPassword)==0) 
    {
        printf("\nLogin Successful!\n");
        printf("Welcome %s\n", username);
    }

    else
    {
        printf("\nInvalid Username or Password!\n");
    }

    return 0;
    
}