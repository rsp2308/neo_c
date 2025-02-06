
#include <stdio.h>
int main()
{
    int book;
    printf("Enter the number of books: ");
    scanf("%d", &book);
   

    if (book == 3)
    {
        printf("No books required");
    }
    else if (book == 2)
    {
        printf("1 book required");
    }
    else
    {
        printf("2 books required");
    }
    // printf("%s", (book == 3) ? "No books required" : (book == 2) ? "1 book required" : "2 books required"); using terniarty operator
    return 0;
}