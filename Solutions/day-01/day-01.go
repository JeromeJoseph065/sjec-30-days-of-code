package main

import "fmt"

func main() {
	var a, b int64
	fmt.Scanf("%d%d", &a, &b)
	for ; a <= b; a++ {
		if a%3 == 0 {
			fmt.Println("Foo")
		} else if a%2 == 0 {
			fmt.Println("Bar")
		} else {
			fmt.Println("Baz")
		}

	}
}
