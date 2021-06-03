package main

import (
	"fmt"
)

func main() {
	var ur, tr, uo, to int
	fmt.Scan(&ur, &tr, &uo, &to)
	fmt.Print(56*ur + 24*tr + 14*uo + 6*to)
}
