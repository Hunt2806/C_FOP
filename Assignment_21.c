#include <stdio.h>
#include <string.h>

int main() {
    char source_data[] = "This is the source data that will be copied.\n"
                         "Line 2: Hello, World!\n"
                         "Line 3: This program copies data without external files.\n"
                         "Line 4: Everything is hardcoded in the program.\n";
    
    char destination_data[500];
    
    int i = 0;
    while (source_data[i] != '\0') {
        destination_data[i] = source_data[i];
        i++;
    }
    destination_data[i] = '\0';  
    
    printf("SOURCE DATA\n");
    printf("%s\n", source_data);
    
    printf("Destination_Data_Copied\n");
    printf("%s\n", destination_data);
    
    if (strcmp(source_data, destination_data) == 0) {
        printf("Data copied successfully! Source and destination match.\n");
    } else {
        printf("Error: Data mismatch!\n");
        return 1;
    }
    
    return 0;
}