package main

import (
	"bufio"
	"fmt"
	"os"
)

func max(a, b int) int {
	if a < b {
		return b
	} else {
		return a
	}
}

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N, time, money int
	fmt.Fscan(reader, &N)
	dp := make([]int, N+1)

	for i := 1; i <= N; i++ {
		fmt.Fscan(reader, &time, &money)
		if i+time-1 <= N {
			dp[i+time-1] = max(dp[i+time-1], dp[i-1]+money)
		}
		dp[i] = max(dp[i], dp[i-1])
	}
	fmt.Fprintf(writer, "%d", dp[N])
}
