/* Guysay.c
 * this program is to get a stickman to echo a given phrasea
 * QMaury
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
        int i;
        ++i;
        if(argv[i] == NULL) {
                argv[i] = "ERROR! NO ARGUMENTS PROVIDED!";
        }
	printf("\n");
	printf("        %s\n", argv[i]);
	printf("       /\n      /\n   0   \n  \\|   \n   |\\\n   |  \n  / \\\n");
}
