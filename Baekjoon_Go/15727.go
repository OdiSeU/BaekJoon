package main

import (
	"fmt"
	"math"
)

func main() {
	var L float64
	fmt.Scanln(&L)
	fmt.Println(math.Ceil(L / 5))
}
