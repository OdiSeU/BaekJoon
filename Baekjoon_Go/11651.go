package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N, x, y int
	fmt.Fscan(reader, &N)
	var points = make([][]int, N)
	for i := 0; i < N; i++ {
		fmt.Fscan(reader, &x, &y)
		points[i] = []int{x, y}
	}
	sort.Slice(points, func(i, j int) bool {
		if points[i][1] == points[j][1] {
			return points[i][0] < points[j][0]
		} else {
			return points[i][1] < points[j][1]
		}
	})
	for i := range points {
		fmt.Fprintln(writer, points[i][0], points[i][1])
	}
}
