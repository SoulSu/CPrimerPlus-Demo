#include <stdio.h>

typedef struct StudentLinked
{
	int id;
	char *name;

	struct StudentLinked * next;	
}linked;


linked *get_next(linked *o);
linked *get_next(linked *o)
{
	return o->next;
}

linked * add(linked *o,linked *n);
linked * add(linked *o,linked *n)
{
	o->next = n;
	return o; 
}

void print_all(linked *o);
void print_all(linked *o)
{
	linked *next = o;
	do{
		printf("my id is =>%d  name =>%s\n", next->id, next->name);
		next = next->next;
	}while(next != NULL);
}

int main(int argc, char const *argv[])
{

	linked su = {id:1,name:"soul"};

	linked sxd = {id:2,name:"sxd"};

	add(&su, &sxd);

	print_all(&su);
	
	return 0;
}