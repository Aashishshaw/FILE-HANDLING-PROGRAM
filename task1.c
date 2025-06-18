#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define FILENAME "user_data.txt"

void createAndWriteFile();
void appendToFile();
void readFile();
void clearScreen();

int main() {
    int choice;

    do {
        printf("\n======= File Operations Menu =======\n");
        printf("1. Create and Write to File\n");
        printf("2. Append to File\n");
        printf("3. Read File\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        getchar();  // clear newline from input buffer

        switch (choice) {
            case 1:
                createAndWriteFile();
                break;
            case 2:
                appendToFile();
                break;
            case 3:
                readFile();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void createAndWriteFile() {
    FILE *file = fopen(FILENAME, "w");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int n;
    char line[MAX_LINE_LENGTH];

    printf("How many lines do you want to write to the file? ");
    scanf("%d", &n);
    getchar();  // clear newline from input buffer

    printf("Enter %d lines of text:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, MAX_LINE_LENGTH, stdin);
        fputs(line, file);
    }

    fclose(file);
    printf("File '%s' created and written successfully.\n", FILENAME);
}

void appendToFile() {
    FILE *file = fopen(FILENAME, "a");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int n;
    char line[MAX_LINE_LENGTH];

    printf("How many lines do you want to append? ");
    scanf("%d", &n);
    getchar();  // clear newline from input buffer

    printf("Enter %d lines of text to append:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, MAX_LINE_LENGTH, stdin);
        fputs(line, file);
    }

    fclose(file);
    printf("Data appended successfully to '%s'.\n", FILENAME);
}

void readFile() {
    FILE *file = fopen(FILENAME, "r");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;
    printf("\n--- Contents of '%s' ---\n\n", FILENAME);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    printf("\n--- End of File ---\n");
}
