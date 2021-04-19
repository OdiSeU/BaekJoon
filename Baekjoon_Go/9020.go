package main

import (
	"fmt"
)

const MAX = 10000

var primes [MAX + 1]bool

func initPrimes() {
	primes[0], primes[1] = true, true
	for i := 2; i*i <= MAX; i++ {
		if !primes[i] {
			for j := i * i; j <= MAX; j += i {
				primes[j] = true
			}
		}
	}
}

func main() {
	var T, n int
	initPrimes()
	for fmt.Scanln(&T); T > 0; T-- {
		fmt.Scanln(&n)
		for i := n / 2; i > 1; i-- {
			if !primes[i] && !primes[n-i] {
				fmt.Println(i, n-i)
				break
			}
		}
	}
}
