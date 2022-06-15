#include <stdio.h>

typedef struct struct1
{
	int a, b;
} struct1;

/*NOTE: you have to copy the struct data in another function where you have to work on it
or else the data will be destroyed. In this case we copy the data in main with recalling the struct */

//reading and writing without returning
void fill_struct(struct1 str)
{
	scanf("%d %d", &str.a, &str.b);
}

void read_struct(struct1 str)
{
	printf("Direct Read: %d\n%d", str.a, str.b);
}

//reading with returning variable in struct, with returni you can print only one variable!
int read_struct_return(struct1 str)
{
	return str.a;
}

//returning whole structure to print multiple data in another function or main

struct1 return_whole(struct1 str)
{
	scanf("%d %d", &str.a, &str.b);
	return str;
}

//if the struct is a pointer, you can do like so
struct1 *return_whole_pointer(struct1 *str)
{
	scanf("%d %d", &str->a, &str->b);
	return str; 
}

int main()
{
	struct1 str;

	fill_struct(str);
	read_struct(str);
	str.a = NULL, str.b = NULL; //emptying struct.

	scanf("%d", &str.a);
	//reading value "a" in struct via return
	printf("Struct return: %d\n",  read_struct_return(str));
	str.a = NULL;
	
	//printing after filling with return_whole.
	return_whole(str);
	printf("%d\n%d", str.a, str.b);
	
	//copying memory from function struct into main struct since parameter is pointer.
	return_whole_pointer(&str); 
	printf("%d\n%d", str.a, str.b);
	

	printf("%d\n%d\n", str.a, str.b);
	printf("%d", read_struct_return(str));

	//we can do all these operations via a struct pointer in amin too, just change the . into ->.
	return (0);
}