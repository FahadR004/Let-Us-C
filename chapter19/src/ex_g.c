#include <stdio.h>
#include <stdlib.h>

#define SOURCE "docs/sample.txt"
#define CIPHER_O "docs/encrypted_o.txt"
#define DECRYPTED_O "docs/decrypted_o.txt"
#define CIPHER_S "docs/encrypted_s.txt"
#define DECRYPTED_S "docs/decrypted_s.txt"

void encrypt_offset(FILE *fs, FILE *ft);
void decrypt_offset(FILE *fs, FILE *ft);
void encrypt_sub(FILE*fs, FILE *ft, char *rev_ascii);
void decrypt_sub(FILE*fs, FILE *ft, char *rev_ascii);

int main() {
	int i;
	char rev_ascii[128];
	FILE *fs, *fco, *fcs, *fdo, *fds;
	
	for (i = 127; i >= 0; i--) {
		char c = i;
		rev_ascii[127-i] = c;
	}

	fs = fopen(SOURCE, "r");
	fco = fopen(CIPHER_O, "w+");
	fcs = fopen(CIPHER_S, "w+");
	fdo = fopen(DECRYPTED_O, "w+");
	fds = fopen(DECRYPTED_S, "w+");

	if (fs == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	if (fco == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	if (fcs == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	if (fdo == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	if (fds == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}


	encrypt_offset(fs, fco);
	rewind(fs);
	rewind(fco);
	
	decrypt_offset(fco, fdo);
	rewind(fdo);
	rewind(fdo);

	encrypt_sub(fs, fcs, rev_ascii);
	rewind(fs);
	rewind(fcs);

	decrypt_sub(fcs, fds, rev_ascii);
	rewind(fcs);
	rewind(fds);


	fclose(fs);
	fclose(fco);
	fclose(fcs);
	fclose(fdo);
	fclose(fds);

	return 0;
}

void encrypt_offset(FILE* fs, FILE* ft) {
	char ch;
	while (1) {
		ch = fgetc(fs);
		if (ch == EOF) 
			break;
		ch++;
		fputc(ch, ft);
	}
}

void decrypt_offset(FILE* fs, FILE* ft) {
	char ch;
	while(1) {
		ch = fgetc(fs);
		if (ch == EOF) 
			break;
		ch--;
		fputc(ch, ft);

	}
}

void encrypt_sub(FILE* fs, FILE *ft, char *rev_ascii) {
 	int ch_ascii;
 	char ch;
 	while (1) {
 		ch = fgetc(fs);
  		if (ch == EOF)
 			break;
 		ch_ascii = ch;
 		ch = rev_ascii[ch_ascii];
 		fputc(ch, ft);
 	}
}

void decrypt_sub(FILE* fs, FILE *ft, char *rev_ascii) {
 	int ch_ascii;
 	char ch;
 	while (1) {
 		ch = fgetc(fs);
 		if (ch == EOF)
 			break;
 		ch_ascii = ch;
 		ch = rev_ascii[ch_ascii];
 		fputc(ch, ft);
 	}
}
