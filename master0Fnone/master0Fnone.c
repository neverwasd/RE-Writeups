#include <stdio.h>

void decryptFlag(char *dest) {
    int i;
    char encryptedFlag[] = {
        0x06, 0xc6, 0xe7, 0x97,
        0x86, 0xf7, 0xd3, 0xb6,
        0x95, 0x56, 0x46, 0xe7,
        0xd3, 0x36, 0x86, 0xd0
    };

    for (i = 0; i < 16; i++) {
        dest[i] = ((encryptedFlag[i] & 0xff) >> 4 | (encryptedFlag[i] & 0xff) << 4) ^ 0xd;
    }

    return;
}

int main() {
    char decryptedFlag[16];

    decryptFlag((char *)&decryptedFlag);
    printf("\ndecrypted flag: %s\n\n", decryptedFlag);
 
    return(0);
}
