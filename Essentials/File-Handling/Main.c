#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    FILE *file_ptr;
    char firstName[12];
    file_ptr = fopen("./Hello.txt", "w");

    if (file_ptr == NULL)
    {
        printf("Error Occured while creating the file.");
        exit(1);
    }

    printf("Please, Enter your name: \n");
    scanf("%s", &firstName[0]);

    fprintf(file_ptr, "%s", firstName);

    fclose(file_ptr);
    printf("File is created\n");
    return 0;
}
