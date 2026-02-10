#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mAsdf3a(char *pcPassword)
{
    int iResult;
    size_t iPasswordLength;
    ulong ulIndex;

    iPasswordLength = strlen(pcPassword);
    iResult = -1;
    for (ulIndex = 0; (int)ulIndex < (int)iPasswordLength; ulIndex = ulIndex + 1) {
        if ((ulIndex & 1) == 0) {
            iResult = pcPassword[ulIndex] + 3;
        }
        else {
            iResult = pcPassword[ulIndex] + -7;
        }
        printf("%c", (char)iResult);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    mAsdf3a(argv[1]);
    return 0;
}