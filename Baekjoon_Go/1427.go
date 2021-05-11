package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strings"
)

func main() {
	reader, writer := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N string
	fmt.Fscan(reader, &N)
	str := strings.Split(N, "")
	sort.Slice(str, func(i, j int) bool {
		return str[i] > str[j]
	})
	fmt.Fprintln(writer, strings.Join(str, ""))
}
