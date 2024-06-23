
package main

import "fmt"

const IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE = -1

func minOperations(input []int) int {
    countFlips := 0

    for i := range input {
        if input[i] == 1 {
            continue
        }
        if i + 2 > len(input) - 1 {
            return IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE
        }
        input[i + 1] ^= 1
        input[i + 2] ^= 1
        countFlips++
    }

    return countFlips
}
