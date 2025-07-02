/*
 ============================================================================
 Name        : FileOperations.c
 Author      : Your Name
 Description : A C Program Demonstrating Various File Operations
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "file_demo.txt"
#define MAX_LINE_LENGTH 256

// Function prototypes
void createFile();
void writeToFile();
void appendToFile();
void readFile();
void clearFile();
void displayMenu();

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                writeToFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                readFile();
                break;
            case 5:
                clearFile();
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}

// Displays menu options
void displayMenu() {
    printf("\n=========== FILE OPERATIONS MENU ===========\n");
    printf("1. Create New File (if not exists)\n");
    printf("2. Write to File (overwrite existing content)\n");
    printf("3. Append to File\n");
    printf("4. Read File\n");
    printf("5. Clear File Content\n");
    printf("6. Exit\n");
    printf("============================================\n");
}

// Create file if it doesn't exist
void createFile() {
    FILE *file = fopen(FILENAME, "a"); // a mode creates the file if it doesn't exist
    if (file == NULL) {
        perror("Error creating file");
        return;
    }
    fclose(file);
    printf("File '%s' is ready for use.\n", FILENAME);
}

// Overwrite existing content in the file
void writeToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    int n;
    char line[MAX_LINE_LENGTH];
    printf("How many lines do you want to write? ");
    scanf("%d", &n);
    getchar(); // Clear newline from buffer

    printf("Enter %d lines:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, MAX_LINE_LENGTH, stdin);
        fputs(line, file);
    }

    fclose(file);
    printf("Data written to '%s' successfully.\n", FILENAME);
}

// Append new data to existing file content
void appendToFile() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    int n;
    char line[MAX_LINE_LENGTH];
    printf("How many lines do you want to append? ");
    scanf("%d", &n);
    getchar(); // Clear newline

    printf("Enter %d lines to append:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, MAX_LINE_LENGTH, stdin);
        fputs(line, file);
    }

    fclose(file);
    printf("Data appended to '%s' successfully.\n", FILENAME);
}

// Read and display the file content
void readFile() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("\n--- Contents of '%s' ---\n", FILENAME);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n--- End of File ---\n");

    fclose(file);
}

// Clear file content (by opening it in "w" mode without writing)
void clearFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error clearing file content");
        return;
    }
    fclose(file);
    printf("File '%s' has been cleared.\n", FILENAME);
}
