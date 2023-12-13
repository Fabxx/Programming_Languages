/*
Standard library packages: https://pkg.go.dev/std

if we need a package we can add it into the import section. Here is an example with the string package that gives us
methods for comparisons, and so on.
*/
package main

import (
	"fmt"
	"strings"
)

func main() {
	var mystring = "hello world"
	fmt.Println(strings.Contains(mystring, "world"))
	//find a specific substring in your string, and replace it, return a copy of the string
	fmt.Println(strings.ReplaceAll(mystring, "hello", "hi"))
	//not edited after replace
	fmt.Println(mystring)

	//finds the starting index number of the first char
	fmt.Println(strings.Index(mystring, "o"))
}
