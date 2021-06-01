package main

import (
	"fmt"
)

func main() {
	var s rune
	fmt.Scanf("%c", &s)
	fmt.Printf("%d", s-'가'+1)
}
