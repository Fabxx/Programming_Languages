/* definition of structures and custom types. To access struct members this is the syntax:

variable := structname{
	//init vars here with comma
}

unlike C, we can't directly access members of a struct by just typing structname.var, they have to be accessed by its object.

So in this case i can't do mystruct.a but i have to do initStruct.a. The struct object is initialized as a copy of the struct
we can also return that object if we need it, or pass it as a pointer. If it is not returned or passed by reference, the struct copy
will be  discarded after the function exits.
*/

package main

import "fmt"

type mystruct struct {
	a int
	b string
	c float32
}

func values() {
	initStruct := mystruct{
		a: 10,
		b: "name",
		c: 1.0,
	}

	fmt.Println(initStruct.a)
	fmt.Println(initStruct.b)
	fmt.Println(initStruct.c)
}

func main() {
	values()
}
