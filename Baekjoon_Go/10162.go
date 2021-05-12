package main

import (
	"fmt"
)

func main() {
	var T int
	fmt.Scanln(&T)
	if T%10 == 0 {
		A := T / 300
		T %= 300
		B := T / 60
		T %= 60
		C := T / 10
		fmt.Println(A, B, C)
	} else {
		fmt.Println(-1)
	}
}
