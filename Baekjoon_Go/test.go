package main

import "fmt"

type Date struct {
	// 소문자로 private field 설정
	year  int
	month int
	day   int
}

func (d *Date) SetYear(year int) {
	d.year = year
}

func main() {
	date := Date{}
	// date.year = 2021    // error 발생
	date.SetYear(2021)
	fmt.Println(date)
}
