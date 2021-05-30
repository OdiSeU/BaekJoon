package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	ans      = 123456789
	N, total int
	r, c     []int
)

func min(a, b int) int {
	if a > b {
		return b
	} else {
		return a
	}
}

func abs(n int) int {
	if n < 0 {
		return -n
	} else {
		return n
	}
}

func bt(last, diff int) {
	ans = min(ans, abs(diff))
	for i := last + 1; i < N; i++ {
		bt(i, diff-r[i]-c[i])
	}
}

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	fmt.Fscan(reader, &N)
	r = make([]int, N)
	c = make([]int, N)
	var cost int
	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ {
			fmt.Fscan(reader, &cost)
			r[i] += cost
			c[j] += cost
			total += cost
		}
	}
	bt(-1, total)
	fmt.Fprintf(writer, "%d", ans)
}
