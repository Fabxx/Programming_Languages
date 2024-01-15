/* Similar to dictionary, we can have maps of different types in go. In the square brackets we have to reference the value with the
   first type. When assignin a value we need to give  a matching type of the second type*/

package main

import "fmt"

func main() {

	var menu = map[int]string{
		1: "name",
		2: "surname",
	}

	fmt.Println(menu[1])

	var menu2 = map[string]int{
		"Fabxx":  14,
		"SSUPII": 20,
	}

	fmt.Println(menu2["Fabxx"])

	for index, value := range menu {
		fmt.Println(index, value)
	}

	menu[1] = "Fab"
}
