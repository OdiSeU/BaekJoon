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
	set := make(map[int]bool)
	fmt.Scanln(&N, &M)
	for i := 0; i < N; i++ {
		fmt.Scan(&n)
		set[n] = true
	}
	N = 0
	for k, _ := range set {
		nums = append(nums, k)
		N++
	}
	sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})
	solution(0, 0, "")
}
