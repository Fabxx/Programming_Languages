/* in GO there's mainly the for loop */

package main

import (
	"fmt"
)

func main() {

	for x := 0; x < 5; x++ {
		fmt.Println("Value of x:", x)
	}

	var y = 0

	for y < 5 {
		fmt.Println("Value of y:", y)
		y++
	}

	var names = []string{"Fabxx", "SSUPII", "Hashkell"}

	for i := 0; i < len(names)-1; i++ {
		fmt.Println(names[i])
	}

	/* We can use range keyword with two indexes, i takes the position, j is the string
	NOTE: if you don't want to use the index value, replace index with _ (underscore)*/
	for index, strings := range names {
		fmt.Println(index, strings)

	}

}
