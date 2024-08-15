#include <stdio.h>
#define FLAG_LEN 16

void generate_flag(char *dest) {
        unsigned int au_flag[] = {      // byte order is automatically reversed
                0x97e7c606,
                0xb6d3f786,
                0xe7465695,
                0xd08636d3
        };
        
        // cast as unsigned char * for our bitwise operations
        unsigned char *pc_flag = (unsigned char *)au_flag;

        // decryption routine
        for (int i = 0; i < FLAG_LEN; i++) {
                dest[i] = (pc_flag[i] >> 4 | pc_flag[i] << 4) ^ 0xd;
        }

        return;
}

int main() {
        char sz_flag[FLAG_LEN] = {0};

        generate_flag((char *)&sz_flag);
        printf("decrypted flag: %s\n", sz_flag);

        return(0);
}
