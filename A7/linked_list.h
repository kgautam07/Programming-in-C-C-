/*
CH-230-A
a7_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/

struct list{
	//link list storage
    int info;
    //link list pointer
    struct list *next;
};
    struct list *remov(struct list *my_list);
    struct list * push_front (struct list * my_list,int value );
    struct list *push_back(struct list *my_list, int value);
    void print_list (struct list * my_list);
    void dispose_list(struct list *my_list);