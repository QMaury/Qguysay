#include <stdio.h>

int main(int argc, char *argv[]) {
        int i = 1;
        if(argv[i] == NULL) 
                argv[i] = "ERROR! NO ARGUMENTS PROVIDED!";
	printf("\n        %s\n", argv[i]);
        printf("       /\n      /\n   0   \n  \\|   \n   |\\\n   |  \n  / \\\n");
        
        return 0;
}
