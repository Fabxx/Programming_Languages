/* Initialize a buffer that reads the input, then call that reader buffer to get what you need. Similar to Java.
   THe buffer can be initialized in specific buffers where to listen for data. IN this case is stdin.

   NOTE: this is needed only for strings, for numbers you can just do:

   var num int/float64/float32

   fmt.Scan(num).

   if argument is already pointer no need to put &

   if a pointer is empty you must initialize with the * symbol, like showed below with str.

   Docs: https://pkg.go.dev/fmt#hdr-Printing
*/

package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func getInput(number *int) {
	fmt.Scan(number)
}

func getString(str *string) {
	reader := bufio.NewReader(os.Stdin)
	//first var is the string, second var is the returned error by function
	*str, _ = reader.ReadString('\n')
}

func main() {

	var num int
	mystring := ""
	fmt.Println("insert number")
	getInput(&num)
	fmt.Println(num)

	getString(&mystring)
	fmt.Println(strings.TrimSpace(mystring))
}
