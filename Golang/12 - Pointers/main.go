/* Pointers point to a memory address, which then contains a value. THese can be used to pass arguments as references to update vars and so on, without
   making a copy in memory. We can change the memory address of a var so that it will contain the value we want from an argument.

	If a var is declared as a pointer, you don't need the & symbol, because you are already calling it's memory address,
	and if you need to see its value you just call it with the * symbol.

	If a var is declared normally wihtout being a pointer, you need to add the & symbol to view the memory address, if you give nothing,
	you will already seek the actual value of the variable.
*/

package main

import "fmt"

func variable(x *int) {
	*x = 10
}

func main() {
	x := 5
	//stores the address of x, where 10 is stored. a is implicitly a *int
	a := &x
	fmt.Println("Memory address of x: ", &x)
	fmt.Println("Address of a: ", a)

	/*dereferencing pointer to access actual value stored in a.
	  to print a pointer with its value you have to use the * symbol */
	fmt.Println("Value of a: ", *a)

	// updating memory address of x by reference
	fmt.Println("value of x: ", x)
	variable(&x)
	fmt.Println("Value of x after update:", x)

}
