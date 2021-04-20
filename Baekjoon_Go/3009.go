package main

import (
	"fmt"
)

func main() {
	var ansx, ansy int
	var x [3]int
	var y [3]int
	for i := 0; i < 3; i++ {
		fmt.Scanln(&x[i], &y[i])
	}
	if x[0] == x[1] {
		ansx = x[2]
	} else if x[0] == x[2] {
		ansx = x[1]
	} else {
		ansx = x[0]
	}
	if y[0] == y[1] {
		ansy = y[2]
	} else if y[0] == y[2] {
		ansy = y[1]
	} else {
		ansy = y[0]
	}
	fmt.Println(ansx, ansy)
}
