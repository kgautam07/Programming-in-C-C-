/*
CH-230-A
a7_p2.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

// defining a doubly linked list
struct list{
	char info;
	struct list* after;
	struct list* before;
};

// to enter character to the beginning of list
struct list* push_front(struct list* linkedlist, char value){
	
	struct list* newel;
	newel = (struct list*)malloc(sizeof(struct list));
	if (newel == NULL){
		printf("Error allocating memory\n");
		return linkedlist;
	}

	newel->info = value
;
	newel->after = linkedlist;
	newel->before = NULL;
	if (linkedlist != NULL)
		linkedlist->before = newel;

	//making new element the first
	linkedlist = newel;

	return linkedlist;
}

// to remove all elements with the given character from the list
struct list* remove_char(struct list* linkedlist, char c){
	if (linkedlist== NULL)
		return linkedlist;

	
	struct list *remove, *cursor = linkedlist;
	int index = 0; 

	while (cursor != NULL){
		if (cursor->info == c){
			
			if (cursor->after == NULL){
				cursor->before->after = cursor->after;
			}
			
			if (cursor->before == NULL){
				linkedlist= cursor->after;
				cursor->after->before = cursor->before;
			}
			
			if (cursor->before != NULL && cursor->after != NULL){
				cursor->after->before = cursor->before;
				cursor->before->after = cursor->after;
			}
			
			remove = cursor;
			cursor = cursor->after;
			free(remove);
			index++;
			
		}
		else{
			cursor = cursor->after;
		}
	}

	if (index == 0)
		printf("The element is not in the list!\n");

	return linkedlist;
}

// to print the current list
void print_forward(struct list* linkedlist){
	struct list* cursor;

	if (linkedlist== NULL){
		printf("List is empty... Nothing to print...");
		return;
	}

	for (cursor = linkedlist;
	 cursor != NULL; cursor = cursor->after){
		printf("%c ", cursor->info);
	}
	printf("\n");
}


// to print the elements of the list backwards
void print_reverse(struct list* linkedlist){
	struct list* cursor, * last;

	if (linkedlist== NULL){
		printf("List is empty... Nothing to print...");
		return;
	}

	cursor = linkedlist;
	last = cursor;
	while (cursor != NULL){
		last = cursor;
		cursor = cursor->after;
	}

	cursor = last;
	while (cursor != NULL){
		printf("%c ", cursor->info);
		cursor = cursor->before;
	}

	printf("\n");
}

// to empty list and free the momory
void dispose_list(struct list* linkedlist){
	struct list* cursor;
	cursor = linkedlist->after;

	
	while (cursor != NULL){
		cursor = linkedlist->after;
		free(linkedlist);
		linkedlist= cursor;
	}
	free(linkedlist); //free memory
}

int main(){
	struct list* myList = NULL;

	while (1){
		int integer; //integer entered from keyboard
		scanf(" %d", &integer);
		char Ch; //character entered from keyboard

		switch (integer){
			// add the character to the list to the beginning of the list
		case 1:
			scanf(" %c", &Ch);
			myList = push_front(myList, Ch);
			break;

			// remove all elements with the given character from the list
		case 2:
			scanf(" %c", &Ch);
			myList = remove_char(myList, Ch);
			break;

			// print the current list
		case 3:
			print_forward(myList);
			break;

			// print the elements of the list backwards
		case 4:
			print_reverse(myList);
			break;

			//empty the list, free the memory and quit the execution
		case 5:
			dispose_list(myList);
			exit(0);
			break;
			
		default:
			break;

		}
	}

	return 0;
}