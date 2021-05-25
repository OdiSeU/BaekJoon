package main

import (
	"fmt"
	"sort"
	"strconv"
)

var (
	N, M int
	nums []int
)

func solution(cnt int, bf int, seq string) {
	if cnt == M {
		fmt.Println(seq)
		return
	}
	for i := bf; i < N; i++ {
		solution(cnt+1, i, seq+strconv.Itoa(nums[i])+" ")
	}
}

func main() {
	var n int
	fmt.Scanln(&N, &M)
	for i := 0; i < N; i++ {
		fmt.Scan(&n)
		nums = append(nums, n)
	}
	sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})
	solution(0, 0, "")
}
