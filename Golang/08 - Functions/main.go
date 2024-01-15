package main

import (
	"fmt"
)

func print(a int) {
	fmt.Println("Hello from function with number:", a)
}

func printarg(mystring string, names []string) {
	fmt.Println("Printing string content:", mystring)
	fmt.Println("Printing filled names:", names)

}

/* reference function from another function. f is a function that takes int as an argument.
   for every number in the array, we call the function that we pass in main
   So this will pass to a our array of ints*/

func reference(numbers []int, f func(int)) {
	for _, value := range numbers {
		f(value)
	}
}

// function returning a type must have the type written outside the argument section
func returningfunc(a int) int {
	return a
}

// multiple value return
func doubleret() (string, int) {

	return "hello", 1
}

func main() {

	newstring := "Fabxx"
	mynames := []string{"Fabxx", "SSUPII", "Haskell"}

	print(4)
	printarg(newstring, mynames)
	reference([]int{1, 2, 3}, print)
	fmt.Println(returningfunc(5))

	value := returningfunc(5)
	fmt.Println(value)
	fmt.Println(doubleret())
}
