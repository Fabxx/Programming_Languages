/* Example of variable declaration and usage.
for a list of types check this source: https://go.dev/tour/basics/11

	Main difference between print and prinf:

	print allows to print a variable in the middle of a string without using % and the char to indicate the type, but you have to write var in the middle of the strings.

	printf allows to do C style formatting, you have to write % and the char corresponding to the var type, but you can write all vars at the end.

	sprint, sprintf, sprintln allows us to save a string into a variable just like C function.

	Same thing between scan and scanf
*/

package main

import "fmt"

func main() {

	//declaration types
	var name = "Fabx"
	var name1 string = "Fabxx"
	
	/*Declaration with implicit type, similar to "auto" in C++ but there is no type written.
	  it determines the type from the data assigned. NOTE: once created if you need to reassign the variable
	  you  just need to type name3 = "something", the := syntax is used only for initialization*/
	name3 := "string"
	
	// creating uninitialized var. This is the only syntax that allows it, with both var and typename
	var name2 string

	/*you can use Println which prints the next strings on a new line each variable, but for each var a new Println instruction is
	  required. instead inside print you can use \n directly.*/
	fmt.Print("Printing my name:", name, "\n", name1, "\n", name2, "\n", name3, "\n")

	//using printf like C formatting, a "\n" can also be put as an argument and needs a %v
	fmt.Printf("My name is: %v \n", name)

	name2 = fmt.Sprint("returned string\n")
	fmt.Print(name2)
}
