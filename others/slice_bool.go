package main

/*
 * Date: 2017-12-17
 *
 * Description:
 * Slice and bool demo in goLang.
 */

import "fmt"

func main() {
  var s[]string
  t := "string_0"

  // Append in slice
  s = append(s, t)
  s = append(s, "string_1")
  s = append(s, "string_2")
  s = append(s, "string_3")
  s = append(s, "string_4")
  fmt.Println("%v", s) // [string_0 string_1 string_2 string_3 string_4]

  // Delete an item from slice
  idx := 1
  s[idx] = s[len(s) - 1]
  s = s[:len(s) - 1]
  fmt.Println("%v", s) // [string_0 string_4 string_2 string_3]

  idx = 3;
  s = append(s[:idx], s[idx + 1:]...)
  fmt.Println("%v", s) // [string_0 string_4 string_2]

  // Bool datatype
  var flag bool
  flag = false
  if flag {
    fmt.Println("Flag is true")
  } else {
    fmt.Println("Flag is false")
  }
}
