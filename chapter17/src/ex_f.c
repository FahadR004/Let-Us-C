#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct library {
	int accession_num;
	char title[100];
	char author[50];
	int price;
	int issued; // flag indicating book issued or not
};

void add_book(struct library lib[MAX_BOOKS]);
void get_all_books_info(struct library lib[MAX_BOOKS]);
void get_author_books(struct library lib[MAX_BOOKS]);
void get_book_title(struct library lib[MAX_BOOKS]);
void get_total_count();
void get_acc_num_books(struct library lib[MAX_BOOKS]);

int book_count = 0;
int acc_number = 1;

int main() {
	int user_input;
	struct library lib[MAX_BOOKS];

	while (1) {
		printf("Welcome to the library: \n");
		printf("1) Add book information \n");
		printf("2) Display book information \n");
		printf("3) List all books of given author \n");
		printf("4) List the title of specified book \n");
		printf("5) List the count of books in the library \n");
		printf("6) List the book in the order of accession number \n");
		printf("7) Exit\n");

		printf("Enter your choice here: ");
		scanf("%d", &user_input); // Taking in the \n as well and leaving it in the input buffer so that fgets doesn't read it

		while (getchar() != '\n'); // Clearing input buffer

		if (user_input == 7){
			printf("Exited!\n");
			break;
		}
		switch (user_input) {
			case 1: 
				add_book(lib);
				break;
			case 2:
				get_all_books_info(lib);
				break;
			case 3:	
				get_author_books(lib);
				break;
			case 4:	
				get_book_title(lib);  
				break;
			case 5:
				get_total_count();
				break;
			case 6:
				get_acc_num_books(lib);
				break;
			default:
				printf("Invalid input! Please try again!\n");
		}

	}
	return 0;
}

void add_book(struct library lib[MAX_BOOKS]) {
	int issue_count;
	if (book_count == 99) {
		printf("Maximum book count reached! Can't add more books!\n");
		return;
	}
	printf("Enter book info for accession number %d: \n", acc_number);
	lib[book_count].accession_num = acc_number;
	
	printf("Enter title: ");
	// scanf("%s", lib[book_count].title);
	if (fgets(lib[book_count].title, sizeof(lib[book_count].title), stdin) == NULL) {
		printf("Failed to read input stream!\n");
		return;
	} else {
		lib[book_count].title[strcspn(lib[book_count].title, "\n")]  = '\0'; // Removing newline character from fgets input
	}

	printf("Enter author: ");
	// scanf("%s", lib[book_count].author);
	if (fgets(lib[book_count].author, sizeof(lib[book_count].author), stdin) == NULL) {
		printf("Failed to read input stream!\n");
		return;
	} else {
		lib[book_count].author[strcspn(lib[book_count].author, "\n")] = '\0'; 
	}

	printf("Enter price: ");
	scanf("%d", &lib[book_count].price);

	printf("Enter whether book is issued or not (1/0): ");
	scanf("%d", &lib[book_count].issued);

	while (getchar() != '\n'); // Removing new line characters

	printf("Book added!\n");
	acc_number++;
	book_count++;
}

void get_all_books_info(struct library lib[MAX_BOOKS]) {
	int i;
	printf("--- BOOKS INFO ----\n");
	if (book_count == 0) {
		printf("There are currently no books in the library \n");
		return;
	}
	for (i = 0; i < book_count; i++) {
		printf("Accession Number: %d\n", lib[i].accession_num);
		printf("Title: %s\n", lib[i].title);
		printf("Author: %s\n", lib[i].author);
		printf("Price: %d\n", lib[i].price);
		printf("Book Issued: %s\n", lib[i].issued ? "Yes": "No");
		printf("----------------------------------\n");
	}
}

void get_author_books(struct library lib[MAX_BOOKS]) {
	int i, flag;
	char author[50];
	if (book_count == 0) {
		printf("There are currently no books in the library \n");
		return;
	}
	printf("Enter author: ");
	// scanf("%s", author);
	if (fgets(author, sizeof(author), stdin) == NULL) {
		printf("Failed to read input stream!\n");
		return;
	} else {
		author[strcspn(author, "\n")] = '\0'; 
	}
	printf("Books of the author %s are:\n", author);
	for (i = 0; i < book_count; i++) {
		if (strcasecmp(lib[i].author, author) == 0) {
			printf("Title: %s\n", lib[i].title);
			printf("Accession Number: %d\n", lib[i].accession_num);
			printf("Price: %d\n", lib[i].price);
			printf("Book Issued: %s\n", lib[i].issued ? "Yes": "No");
			flag = 1;
		}
		printf("\n");
	}
	if (!flag)
		printf("No books for this author found!\n");
	else 
		printf("-------------------------------\n\n");
}

void get_book_title(struct library lib[MAX_BOOKS]) {
	int i, accession_num, flag = 0;
	if (book_count == 0) {
		printf("There are currently no books in the library \n");
		return;
	}
	printf("Enter accession number to get the book title: ");
	scanf("%d", &accession_num);
	for (i = 0; i < book_count; i++) {
		if (lib[i].accession_num == accession_num) {
			printf("Title: %s\n", lib[i].title);
			flag = 1;
			break;
		}
		printf("\n");
	}
	if (flag == 0) {
		printf("Book with accession number %d not found!\n", accession_num);
	}
}

void get_total_count() {
	if (book_count == 0)
		printf("There are currently no books in the library \n");
	else 
		printf("The total number of books in the library are: %d\n\n", book_count);
}

void get_acc_num_books(struct library lib[MAX_BOOKS]) {
	int i;
	if (book_count == 0) {
		printf("There are currently no books in the library \n");
		return;
	}
	printf("--- BOOKS INFO IN ORDER OF ACCESSION NUMBER ----\n");
	for (i = 0; i < book_count; i++) {
		printf("Accession Number: %d\n", lib[i].accession_num);
		printf("Title: %s\n", lib[i].title);
		printf("Author: %s\n", lib[i].author);
		printf("Price: %d\n", lib[i].price);
		printf("Book Issued: %s\n", lib[i].issued ? "Yes": "No");
		printf("----------------------------------\n");
	}
}