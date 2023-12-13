package main

import (
	"fmt"
	"sort"
)

func main() {

	var ages = []int{40, 20, 15}
	sort.Ints(ages)
	fmt.Println(ages)

	// finds integer at index AFTER you've sorted the array
	var index = sort.SearchInts(ages, 40)
	fmt.Println(index)

	var names = []string{"Fabx", "SSUPII", "Hashkell"}
	sort.Strings(names)
	fmt.Println(names)
}
