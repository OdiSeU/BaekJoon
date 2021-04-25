package main

import (
	"fmt"
)

func main() {
	var N, T, C, P int
	fmt.Scanln(&N, &T, &C, &P)
	fmt.Println(((N - 1) / T) * C * P)
}
