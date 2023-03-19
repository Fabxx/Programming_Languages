#include <stdio.h>

/*We can also use the index in a for iteration to access a specific element, and not always follow the linear element.
 in this case we are accessing odd elements.
 Output:
Number i choose: 0      position: 0
Number i choose: 3      position: 3
Number i choose: 6      position: 6
Number i choose: 9      position: 9*/
int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	
	for (size_t i = 0; i < 10; i++)
	{
		if (i+(i*2) > 10) {
			break;
		}
		printf("Number i choose: %d\tposition: %ld\n", a[i+(i*2)], i+(i*2));
	}
	

	return (0);
}