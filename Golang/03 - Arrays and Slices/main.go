/*
	 How to declare and use an array:

		var name [size]type = [size]type{elements}
		or
		var name = [size]type{elements}

		len is an instruction that returns the size of an array. you don't have to use it to print array contents, it just indicates the size of the array

		Arrays use a fixed size, slices don't. to make a slice declare an array and leave the size brackets empty
*/

package main

import (
	"fmt"
)

func main() {

	//var array [3]int = [3]int{1, 2, 3}
	var array = [3]int{4, 5, 6}
	var array2 = [2]string{"Fabxx", "Fab"}

	fmt.Print("Array elements:", array, "\n", "Array size: ", len(array), "\n",
		"Array elements:", array2, "\n", "Array size:", len(array2), "\n\n")

	//accessing array element

	array2[0] = "Fab1"
	fmt.Print("Name changed: ", array2[0], "\n",
		"Array content: ", array2, "\n")

	//slice
	var myslice = []int{1, 5, 7}
	var myslice2 = []int{9, 12, 13}

	// append data to slice, we can add data since size is not fixed. Returns a new slice. We can also merge slices.

	myslice = append(myslice, 40)

	fmt.Print("Edited slice: ", myslice, "\n")

	myslice = append(myslice, myslice2...)

	fmt.Print("Merged slice: ", myslice, "\n")

	// get elements from array range. NOTE: includes from 0:4-1 elements. gets from 0:3 then stops at 4
	var myrange = myslice[0:4]

	// get everything from the array starting from a number, and viceversa
	var myrange2 = myslice[3:]
	var myrange3 = myslice[:5]

	fmt.Print(myrange, "\n", myrange2, "\n", myrange3, "\n")

	// can also append to a range

	myrange = append(myrange, 1)

}
