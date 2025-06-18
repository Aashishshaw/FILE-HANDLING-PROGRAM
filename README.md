# FILE-HANDLING-PROGRAM 

*company name: CODETECH IT SOLUTIONS 
* NAME : AASHISH SAW
* INTERN ID : CITS0D398
* DOMAIN : C LANGUAGE
* DURATION : 4 WEEKS
* MENTOR : NEELA SANTOSH

* DESCRIPTION :
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  #TASK1 : This project is a menu-driven C program that performs basic file handling operations such as creating, writing, appending, and reading a file. It was written as a practical hands-on exercise to deepen my understanding of how file I/O works in the C programming language. The program is interactive and allows users to enter file names and perform different actions through a simple text-based menu.

🔧 Features
Create a new file

Write content to a file (overwrites existing content)

Append new data to an existing file

Read and display contents of a file

Console-based interface with clear prompts

💻 Tools & Technologies Used
Language: C (Standard I/O Library)

Compiler: GCC (via Code::Blocks and also tested on Linux)

IDE/Text Editor: Primarily written using VS Code, and tested on Code::Blocks and Ubuntu terminal

Platform: Cross-platform — tested on both Windows and Linux (Ubuntu)

📚 Development Approach
This project was written completely from scratch based on concepts learned from textbooks, online documentation, and self-practice. I invested time to understand how each file mode (w, a, r) functions, how to use functions like fopen(), fgets(), fputs(), and fgetc() properly, and how to handle input buffer issues in C. Debugging was done manually, and I experimented with edge cases such as non-existent files, empty files, and large input strings.

🧠 Use Case
This code is designed for students and beginners who are learning about file systems and want to see how file input and output works in C. It provides a practical implementation that can be expanded into more advanced tools like simple file editors, configuration readers, or logging utilities. 

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#TASK2 : In this program, I wanted to learn and show how to work with files in the C programming language. I wrote code that does different file operations like creating a file, writing data to it, reading the data, adding more data at the end, updating part of the file, and finally deleting the file.

How I wrote this code:

I used the standard input/output library (stdio.h) because it has all the tools needed for file handling in C.

I created separate functions for each type of file operation. This makes the program easier to understand and organize.

For writing to the file, I opened the file in "w" mode, which creates a new file or overwrites an existing one.

For reading, I opened the file in "r" mode and read the file character by character.

To add more data at the end, I used "a" mode to append without deleting existing content.

For updating, I opened the file in "r+" mode, which allows both reading and writing, and I used fseek() to move to the start of the file to overwrite the first line.

I checked after each file open if the file was successfully opened or not, and printed error messages when it failed.

At the end, I used the remove() function to delete the file.

Tools and concepts I used:

File handling functions like fopen(), fclose(), fprintf(), fgetc(), fseek(), and remove().

File modes ("w", "r", "a", "r+") to control how files are opened and accessed.

File pointers to read from and write to files.

Error checking to make sure the file operations are successful.

What this code does:

This program helps anyone who is learning C programming to understand how to perform basic file operations. It shows how to write data to files, read it back, add more data, update existing data, and delete files. These are important skills for creating programs that need to save and manage data persistently.
