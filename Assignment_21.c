#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *destination_file;
    char ch;

    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        printf("Error opening source file\n");
        exit(1);
    }

    destination_file = fopen("destination.txt", "w");
    if (destination_file == NULL) {
        printf("Error opening destination file\n");
        fclose(source_file);
        exit(1);
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully!\n");

    return 0;
}