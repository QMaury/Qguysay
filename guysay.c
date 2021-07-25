/* Guysay.c
 * this program is to get a stickman to echo a given phrasea
 * QMaury
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char phrase[50];
	printf("What shall the guy say? \t");
	fgets(phrase, 50, stdin);
	phrase[strlen(phrase)-1] = '\0';

	printf("\n");
	printf("        %s\n", phrase);
	printf("       /\n");
	printf("      /\n");
	printf("   0   \n");
	printf("   |   \n");
	printf("  /|\\ \n");
	printf("   |  \n");
	printf("  / \\\n");
	return 0;
}
