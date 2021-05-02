package main

import (
	"fmt"
)

func main() {
	var n1, n2, n12 int
	fmt.Scanln(&n1, &n2, &n12)
	fmt.Println((n1+1)*(n2+1)/(n12+1) - 1)
}
