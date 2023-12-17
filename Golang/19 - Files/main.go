/* Shows how to write structs or single vars into a file.*/

package main

import (
	"fmt"
	"os"
)

type data struct {
	a         float32
	b         int
	s         string
	filename  string
	extension string
}

func main() {

	structure := data{
		a:         2.0,
		b:         10,
		s:         "string",
		filename:  "file",
		extension: ".txt",
	}

	//Get struct data into slice as an array of bytes, WriteFile requires byte type.
	structData := []byte{byte(structure.a), byte(structure.b)}


	//check if file already exists
	if os.OpenFile() == nil

	err := os.WriteFile(structure.filename+structure.extension, structData, 0644)

	 {

	}
	if err != nil {
		fmt.Println("failed to write to file: ", err)
	}
}
