package main

import (
    "fmt"
)

func main() {
    var a int
    fmt.Scan(&a)
    if(a % 2 == 0 && a > 0 && a != 2){
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}
