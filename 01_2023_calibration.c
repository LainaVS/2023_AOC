/**************************************
 * Advent of Code 2023
 * Day 1: Decoding the Calibration Doc
 * ************************************
 *
 ***************************************/
#include <stdio.h>

int main(int argc, char **argv) {
    char *filename = "01temp.txt";
    FILE *inputFilePtr;

    if (argc < 2) {
        inputFilePtr = fopen(filename, "w");
        char buff[400];
        while(fgets(buff, 400, stdin) != NULL) {
            fprintf(inputFilePtr, "%s", buff);
        }
        fclose(inputFilePtr);
    }
    if (argc > 1)
        filename = argv[1];

    inputFilePtr = fopen(filename, "r");
    
    // work

    fclose(inputFilePtr);
    return 0;
}