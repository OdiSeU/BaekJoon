package main

import (
	"bufio"
	"fmt"
	"os"
)

var dp [21][21][21]int

func w(a, b, c int) int {
	if a <= 0 || b <= 0 || c <= 0 {
		return 1
	} else if a > 20 || b > 20 || c > 20 {
		return w(20, 20, 20)
	} else if a < b && b < c {
		if dp[a][b][c] == 0 {
			dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
		}
		return dp[a][b][c]
	} else {
		if dp[a][b][c] == 0 {
			dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
		}
		return dp[a][b][c]
	}
}

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var a, b, c int
	for true {
		fmt.Fscan(reader, &a, &b, &c)
		if a == -1 && b == -1 && c == -1 {
			break
		}
		fmt.Fprintf(writer, "w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c))
	}
}
