package main

/*
 * Date: 2018-11-9
 *
 * Description:
 * Demo to show init() and main() sequence of execution. Below is the order of
 * execution:
 * 1. Import statements executed.
 * 2. All variables and constants gets initialised
 * 3. init() gets executed, if there are multiple inits defined, they are
 *    executed in the order they are writtern.
 * 4. main() executed, main can be only one. No multiple definations allowed
 *    for main()
 */

import "fmt"

var WhatIsThe = AnswerToLife()

func AnswerToLife() int {
    fmt.Println("Calling AnswerToLife().")
    return 42
}

func init() {
    fmt.Println("Calling init().")
    WhatIsThe = 1
}

func init() {
    fmt.Println("Calling init() - 2.")
    WhatIsThe = 0
}

func main() {
    fmt.Println("Calling main().")
    if WhatIsThe == 0 {
        fmt.Println("It's all a lie.")
    }
}


/*
 * Output:
 * ---------------------------
 * Calling AnswerToLife().
 * Calling init().
 * Calling init() - 2.
 * Calling main().
 * It's all a lie.
 */
