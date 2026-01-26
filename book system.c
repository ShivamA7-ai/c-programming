#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book books[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== Book Record System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();   // clear input buffer

        if (choice == 1) {
            // Add a book
            if (count >= MAX) {
                printf("Book list is full!\n");
                continue;
            }

            printf("Enter title: ");
            fgets(books[count].title, 100, stdin);
            books[count].title[strcspn(books[count].title, "\n")] = 0;

            printf("Enter author: ");
            fgets(books[count].author, 100, stdin);
            books[count].author[strcspn(books[count].author, "\n")] = 0;

            printf("Enter year: ");
            scanf("%d", &books[count].year);
            getchar();

            count++;
            printf("Book added successfully!\n");
        }

        else if (choice == 2) {
            // Display all books
            if (count == 0) {
                printf("No books available.\n");
                continue;
            }

            printf("\n===== Book List =====\n");
            for (int i = 0; i < count; i++) {
                printf("\nBook %d:\n", i + 1);
                printf("Title : %s\n", books[i].title);
                printf("Author: %s\n", books[i].author);
                printf("Year  : %d\n", books[i].year);
            }
        }

        else if (choice == 3) {
            // Search a book
            char searchTitle[100];
            printf("Enter title to search: ");
            fgets(searchTitle, 100, stdin);
            searchTitle[strcspn(searchTitle, "\n")] = 0;

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].title, searchTitle) == 0) {
                    printf("\nBook Found!\n");
                    printf("Title : %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);
                    printf("Year  : %d\n", books[i].year);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
