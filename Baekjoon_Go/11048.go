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

	var N, M int

	fmt.Fscan(reader, &N, &M)
	var maze [][]int
	maze = append(maze, make([]int, M))
	for r := 0; r < N; r++ {
		maze = append(maze, make([]int, M))
		for c := 0; c < M; c++ {
			fmt.Fscan(reader, &maze[r][c])
			if r > 0 && c > 0 {
				maze[r][c] += max(maze[r-1][c], maze[r][c-1])
			} else if r > 0 {
				maze[r][c] += maze[r-1][c]
			} else if c > 0 {
				maze[r][c] += maze[r][c-1]
			}
		}
	}
	fmt.Fprintf(writer, "%d", maze[N-1][M-1])
}
