/* Shows how to write structs or single vars into a file.


os.OpenFile takes:

-The file name in the same or different folder
-System flag for permissions on the file, in this case is READ ONLY
-file mode inside the filesystem


in this basic example i just create a file without checking if it exists already.

NOTE: encoding/binary package can only write fixed-size variables inside a struct. the size must be precise in the type
      (cannot write int, only int8, int16 and so on. Cannot write strings)

	  here i use encoding/json.

NOTE 2: To write struct data, the variables of the struct must begin with a uppercase letter, or else they won't be exported.
        also using uppercase letter makes the vars visible on other packages, increasing the scope.


NOTE 3: to write single variables, just use file.Method() to the corresponding value you're trying to write.
*/

package main

import (
	"encoding/json"
	"fmt"
	"io/fs"
	"os"
)

type data struct {
	Value float32
}

func fileOps() {

	structure := data{
		Value: 2.0,
	}

	file, fileError := os.Create("file.txt")

	if fileError != nil {
		fmt.Println(fileError)
	} else {
		os.OpenFile(file.Name(), os.O_RDWR, fs.FileMode(os.O_RDWR))
		//Marhal Indent gives automatic indentation in json style inside the files.
		dataEnc, err := json.MarshalIndent(structure, "", " ")

		if err != nil {
			fmt.Println(err)
		} else {
			err := os.WriteFile(file.Name(), dataEnc, fs.FileMode(os.O_RDWR))

			if err != nil {
				fmt.Println("Error: ", err)
			} else {
				file.Close()
			}

		}

	}

}

func main() {

	fileOps()

}
