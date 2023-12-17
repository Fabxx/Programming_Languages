/*  Associate functions to struct objects. THese functions can only be called by the used struct object.

As showed below, i associated the function "values" to "mystruct", and in main i can call that function
only through mystruct object.

NOTE: you don't need to create another object based on my struct like the previous example.
*/

package main

import "fmt"

type mystruct struct {
	a int
}

func (structure mystruct) values() {
	structure.a = 10
	fmt.Println(structure.a)
}

func main() {
	mystruct.values(mystruct{})

	/* alternatively can init struct object and call through object, the code above makes a mystruct{} init in place
	   i'd recommend the second way since you don't istantiate another struct copy for every method.
	   We will see this in the next chapter of pointer structs too.*/

	structure := mystruct{}

	structure.values()
}
