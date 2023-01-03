package main

import "fmt"

func main() {
	name := ""
	fmt.Print("Name : ")
	fmt.Scanf("%s", &name)
	if name == "" {
		fmt.Println("Hello, SJEC!")
	} else {
		fmt.Println("Hello,", name)
	}
}
