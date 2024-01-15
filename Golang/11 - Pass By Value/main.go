/* Pass by value makes copies of variables and stores them into other variables, unlike pointers where you reference the same memory address instead
   of copying. If we want to update the referenced variable, we have to return with the function that we are using, then assign the returned value.

 NOTE: it is better to use pointers to reference values unless we stricly need copies of values.  */

package main

import "fmt"

func changeString(x string) string {
	x = "mystring"
	return x
}

/*
in cases of maps, slices and functions we add values in this way, adding memory blocks.

	in all other cases (arrays, structs, vars ecc) it makes a copy, leaving the defined one in main unchanged
*/
func changeMap(y map[int]string) {
	y[1] = "Another"
}

func main() {

	var strings = "second"
	// we are updating x, not "strings", making a copy in x
	changeString(strings)
	fmt.Println(strings)

	strings = changeString(strings)
	fmt.Println(strings)

	mymap := map[int]string{
		0: "first",
	}

	changeMap(mymap)

	fmt.Println(mymap)
}
