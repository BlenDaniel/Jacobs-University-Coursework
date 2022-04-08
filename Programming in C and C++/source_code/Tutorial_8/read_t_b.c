#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *outin;
	char val, nr1, nr2;
	outin = fopen("out_in.txt", "w+");
	if (outin == NULL) {
		printf("Error while opening file!");
		exit(1);
	}
	val = 65;
	fwrite(&val, sizeof(char), 1, outin);
	fseek(outin, 0, SEEK_SET);
	fscanf(outin, "%c", &nr1);
	printf("Value read with fscanf = %d\n", nr1);
	fseek(outin, 0, SEEK_SET);
	fread(&nr2, sizeof(char), 1, outin);
	printf("Value read with fread = %d\n", nr2);
	fclose(outin);
}
