package main

import (
	"fmt"
)

func main() {
	var n, i int
	fmt.Scanln(&n)
	for i = 666; n != 0; i++ {
		for j := i; j != 0; j /= 10 {
			if j%1000 == 666 {
				n--
				break
			}
		}
	}
	fmt.Println(i - 1)
}
