/* We can handle the package scope to get functions and variables from other .go files

NOTE: you need to run all go files to make it work. simply run go run *, or you can separately write the file names.
*/

package main

import "fmt"

func main() {
	hello()
	fmt.Println(a)
}
