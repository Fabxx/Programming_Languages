/* Boolean Algebra usage. Continue keyword basically skips the current loop cicle and goes to the next one.
   Useful if you need to skip further instructions.*/

package main

import "fmt"

func main() {

	age := 20

	fmt.Println(age < 25, age > 21)

	if age < 18 {
		fmt.Println("Age is lower than 18")
	} else if age > 18 {
		fmt.Println("Age is bigger than 18")
	} else {
		fmt.Println("Age matches 18")
	}

	names := []string{"Fabxx", "SSUPII", "Hashkell"}

	for index, strings := range names {
		if index < 2 && strings != names[2] {
			fmt.Println("Skipping...")
			continue
		}
		fmt.Println("String is:", names[index])
	}
}
