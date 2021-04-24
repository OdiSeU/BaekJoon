package main

import (
	"fmt"
)

func main() {
	var a, c [3]int
	fmt.Scanln(&a[0], &a[1], &a[2])
	fmt.Scanln(&c[0], &c[1], &c[2])
	fmt.Println(c[0]-a[2], c[1]/a[1], c[2]-a[0])
}
