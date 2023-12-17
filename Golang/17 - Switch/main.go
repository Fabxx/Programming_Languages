/* Switch cases are useful for menu behaviors, or to let the code run specific instructions when a case that we expect happen

default falls back to the standard case where all cases don't happen.
*/

package main

import (
	"fmt"
)

func main() {

	var number int
	fmt.Scanf("%d", &number)

	switch number {
	case 1:
		fmt.Println("1")
	case 2:
		fmt.Println("2")
	default:
		fmt.Println("10")
	}

}
