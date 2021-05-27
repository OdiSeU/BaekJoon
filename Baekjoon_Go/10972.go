package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func min(a, b int) int {
	if a > b {
		return b
	} else {
		return a
	}
}

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N int
	fmt.Fscan(reader, &N)
	seq := make([]string, N)

	for i := 0; i < N; i++ {
		fmt.Fscan(reader, &seq[i])
	}

	std := N - 2
	for std >= 0 && seq[std] > seq[std+1] {
		std--
	}
	fmt.Fprintf(writer, "%d\n", std)
	if std < 0 {
		fmt.Fprint(writer, "-1")
	} else {
		swap := false
		for i := 1; i <= (N-std)/2; i++ {
			fmt.Fprintf(writer, "%s %s\n", seq[std], seq[N-i])
			if !swap && seq[std] < seq[N-i] {
				seq[std], seq[N-i] = seq[N-i], seq[std]
				swap = true
			}
			seq[std+i], seq[N-i] = seq[N-i], seq[std+i]
		}
		fmt.Fprint(writer, strings.Join(seq, " "))
	}
}
