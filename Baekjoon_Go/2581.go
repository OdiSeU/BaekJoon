package main

import (
	"fmt"
)

func getPrimes(from int, to int) []int {
	var primes []int
	i := 2
	nums := make([]bool, to+1)
	for ; i*i <= to; i++ {
		if !nums[i] {
			if from <= i {
				primes = append(primes, i)
			}
			for j := i * i; j <= to; j += i {
				nums[j] = true
			}
		}
	}
	for ; i <= to; i++ {
		if !nums[i] && from <= i {
			primes = append(primes, i)
		}
	}
	return primes
}

func main() {
	var M, N, sum int
	fmt.Scan(&M, &N)
	primes := getPrimes(M, N)
	for _, v := range primes {
		sum += v
	}
	if sum == 0 {
		fmt.Println(-1)
	} else {
		fmt.Printf("%d\n%d", sum, primes[0])
	}
}
