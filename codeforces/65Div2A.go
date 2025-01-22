package codeforces

import "fmt"

func Solve() {
    var a int
    fmt.Scan(&a)
    for a > 0 {
        var s string
        fmt.Scan(&s)
        if(len(s) > 10){
            fmt.Printf("%c%d%c\n", s[0], len(s)-2, s[len(s) - 1])
        }else {
            fmt.Println(s)
        }
        a--
    }
}
