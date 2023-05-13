#include<stdio.h>
#include <stdlib.h>


//creation of file...
void createFile() {
FILE *file;
char file_Name[100];
printf("Enter the name of the file you want to create: ");
scanf("%s",&file_Name);
file = fopen(file_Name, "w");
if (file == NULL) {
printf("Error creating file.\n");
return;
}
printf("File created successfully.\n");
fclose(file);
printf("Continue to the next action\n");
}

//writing in a file...
void writeFile() {
FILE *file;
char writefileName[100];
char content[1000];
printf("Enter the name of the file you want to write: ");
scanf("%s", &writefileName);
file = fopen(writefileName, "w");
if (file == NULL) {
printf("Error opening file.\n");
return;
}
printf("Enter the content to write (max 1000 characters):\n");
scanf(" %[^\n]", &content);
fprintf(file, "%s\n", content);
printf("Content written to the file.\n");
fclose(file);
printf("Continue to the next action\n");
}

//reading in a file...
void readFile() {
FILE *file;
char fileName[100];
char content[1000];
printf("Enter the name of the file you want to read: ");
scanf("%s",&fileName);
file = fopen(fileName, "r");
if (file == NULL) {
printf("Error opening file.\n");
return;
}
printf("File content:\n");
while (fgets(content, sizeof(content), file) != NULL) {
printf("%s", content);
}
fclose(file);
printf("Continue to the next action\n");
}

//appending in a file...
void appendFile() {
FILE *file;
char writefileName[100];
char content[1000];
printf("Enter the name of the file you want to write: ");
scanf("%s", &writefileName);
file = fopen(writefileName, "a");
if (file == NULL) {
printf("Error opening file.\n");
return;
}
printf("Enter the content to write (max 1000 characters):\n");
scanf(" %[^\n]", &content);
fprintf(file, "%s\n", content);
printf("Content written to the file.\n");
fclose(file);
printf("Continue to the next action\n");
}

//deleting a file...
void deleteFile() {
char fileName[100];
printf("Enter the name of the file you want to delete: ");
scanf("%s",&fileName);
if (remove(fileName) == 0) {
printf("File deleted successfully.\n");
} else {
printf("Error deleting file.\n");
}
printf("Continue to the next action\n");
}

//main code
int main() {
int n;
printf("\nInstitute of Engineering and Management\n");
printf("File Management System created by AYANAVO TALUKDAR.\n");
while (1) {
printf("\nSelect an option:\n");
printf("1. Create a File\n");
printf("2. Write to a File\n");
printf("3. Read a File\n");
printf("4. Append to a File\n");
printf("5. Delete a File\n");
printf("6. Exit\n");
printf("Enter the exact number of above options: ");
scanf("%d", &n);
switch (n) {
case 1:
    createFile();
    break;
case 2:
    writeFile();
    break;
case 3:
    readFile();
    break;
case 4:
    appendFile();
    break;
case 5:
    deleteFile();
    break;
case 6:
    printf("Thank you for using our file management system portal!!!\n");
    return 0;
default:
    printf("Give a proper option number.");
    break;
}
}
return 0;
}