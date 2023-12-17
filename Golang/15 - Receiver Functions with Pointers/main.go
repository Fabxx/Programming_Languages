/* Pointers are useful to not make excessive copies of objects in memory, in Go the pointer is automatically
   dereferenced for us, so we don't have to write something like (*structure).a = something or similar.

   Then to call a function that is associated with a struct pointer, you need the following syntax:

   (&struct{}).function()

   This is needed because we have to remove ambiguity for the compiler to make what we are calling addressable, by default
   directly calling a receiver function that has a pointer is not addressable for the compiler.

   However, this still doesn't pass the struct values to the main function and makes a copy, so when we call it in this way,
   a will be 0. We need to make a variable that is initialized to the struct pointer, and then call the functions so we can
   reference the address of the structure and will not make copies.

*/

package main

import "fmt"

type mystruct struct {
	a int
}

func (structure *mystruct) values() {
	structure.a = 10
}

func (structure *mystruct) returned() int {
	return structure.a
}

func main() {
	test := &mystruct{}
	test.values()
	fmt.Println(test.returned())

}
