#include <stdio.h>

int main() {
    char filename[256]; 
    FILE *file;        


    scanf("%255s", filename);  

    file = fopen(filename, "r");

    if (file) {

        printf("そのファイルは存在します。\n");
        fclose(file);  
    } else {
        printf("そのファイルは存在しま。\n");
    }

    return 0;
}