/* getting ints/floats from string type. To do so simply init a buffer and get input from that buffer, remove the \n char with
   trim space and then create two vars that store the int/float number and the error type if happens.*/

package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {

	reader := bufio.NewReader(os.Stdin)

	age, err := reader.ReadString('\n')

	ageTrimmed := strings.TrimSpace(age)

	checkIfNum, err := strconv.ParseFloat(ageTrimmed, 64)

	if err != nil {
		fmt.Println("Not a number, retry: ", err)
	} else {
		fmt.Println("Retrived number from string: ", checkIfNum)
	}

}
