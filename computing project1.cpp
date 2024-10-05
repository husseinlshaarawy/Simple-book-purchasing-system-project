#include<stdio.h>
#define booksnum 5
#define PRICE_E 5
#define PRICE_A 10
int main(){
	char type;
	int numbooks;
	int bookchoice;
	int total=0;
	char *books[booksnum] = {"hush","silent patient","caraval","a good girl guide to murder","the school of the good an the evil"};
	printf("choose one option\n");
	printf(" E for english\n");
	printf(" A for arabic\n");
	scanf("%c",&type);
	printf("Enter number of books\n");
	scanf("%d",&numbooks);
	for (int i = 0; i < numbooks; i++) {
        printf("choose your required books\n");
        for (int j = 0; j < booksnum; j++) {
            printf("%d) %s\n", j+1, books[j]);
        }
        scanf("%d", &bookchoice); 
		if (type == 'E') {
            total += PRICE_E;
        } else if (type == 'A') {
            total += PRICE_A;
        } else {
            printf("Invalid book type!\n");
        }
    }

    printf("Your total= %d$\n", total);

    return 0;
        
	
	
}


