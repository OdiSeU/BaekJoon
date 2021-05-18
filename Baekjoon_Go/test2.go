package main

import "fmt"

type MyInterface interface {
	Method1()
	Method2(int)
	Method3() string
}

type MyType int

func (m MyType) Method1() {
	fmt.Println("method1 called")
}
func (m MyType) Method2(i int) {
	fmt.Println("method2 called with", i)
}
func (m MyType) Method3() string {
	fmt.Println("method3 called")
	return "method3"
}

func main() {
	var itf MyInterface
	itf = MyType(2)
	itf.Method1()
	itf.Method2(123)
	fmt.Println(itf.Method3())
}
