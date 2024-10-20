package main

import (
	"fmt"
	"strings"
)

func main() {
    var a, b string
    fmt.Scan(&a, &b)
    a = strings.ToLower(a)
    b = strings.ToLower(b)
    
    if a == b {
        fmt.Print(0)
        return
    }

    for i := 0; i < len(a); i++ {
        if a[i] < b[i] {
            fmt.Println(-1)
            return
        } else if a[i] > b[i] {
            fmt.Println(1)
            return
        }
    }
}
