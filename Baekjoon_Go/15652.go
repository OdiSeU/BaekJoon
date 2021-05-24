package main

import (
	"fmt"
	"strconv"
)

var N, M int

func solution(cnt int, bf int, seq string) {
	if cnt == M {
		fmt.Println(seq)
		return
	}
	for i := bf; i <= N; i++ {
		solution(cnt+1, i, seq+strconv.Itoa(i)+" ")
	}
}

func main() {
	fmt.Scanln(&N, &M)
	solution(0, 1, "")
}
