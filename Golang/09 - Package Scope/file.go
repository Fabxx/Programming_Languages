/*this file takes the same package as the referenced go file, each file is a package on its own.
  we can reference global vars/structs in this way. But no local vars/structs tied to a function.*/

package main

import "fmt"

var a = 10

func hello() {
	fmt.Println("Hello from file")
}
