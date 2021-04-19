package main

import (
	"fmt"
)

const MAX = 246912

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
	var n, cnt int
	initPrimes()
	for {
		fmt.Scanln(&n)
		if n == 0 {
			return
		}
		cnt = 0
		for i := n + 1; i <= n*2; i++ {
			if !primes[i] {
				cnt++
			}
		}
		fmt.Println(cnt)
	}
}
