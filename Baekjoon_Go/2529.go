package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	k       int
	check   []bool
	isFound bool
	signs   string
)

func bt(seq string, save *string) {
	if len(seq) == k+1 {
		isFound = true
		*save = seq
		return
	}
	i := seq[len(seq)-1]
	var c int
	if signs[len(seq)-1] == '<' {
		c = 1
	} else {
		c = -1
	}
	for ; '0' <= i && i <= '9'; i += byte(c) {
		if isFound == true {
			return
		}
		if check[i-'0'] == false {
			check[i-'0'] = true
			bt(seq+string(i), save)
			check[i-'0'] = false
		}
	}
}

func solution(from, to int, where *string) {
	isFound = false
	check = make([]bool, 10)
	var c int
	if from < to {
		c = 1
	} else {
		c = -1
	}
	for i := from; i != to+c; i += c {
		if isFound == true {
			break
		}
		check[i] = true
		bt(string(i+'0'), where)
		check[i] = false
	}
}

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var c, min, max string
	fmt.Fscan(reader, &k)
	for i := 0; i < k; i++ {
		fmt.Fscan(reader, &c)
		signs += c
	}
	solution(9, 0, &max)
	solution(0, 9, &min)
	fmt.Fprintf(writer, "%s\n%s", max, min)
}
