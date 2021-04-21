package main

import (
	"fmt"
	"math"
)

func main() {
	var R float64
	fmt.Scanln(&R)
	R *= R
	fmt.Printf("%f\n%f", R*math.Pi, R*2)
}
