
class Solution {

    private companion object {
        const val IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE = -1
    }

    fun minOperations(input: IntArray): Int {
        var countFlips = 0

        for (i in input.indices) {
            if (input[i] == 1) {
                continue
            }
            if (i + 2 > input.size - 1) {
                return IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE
            }
            input[i + 1] = input[i + 1] xor 1
            input[i + 2] = input[i + 2] xor 1
            ++countFlips
        }

        return countFlips
    }
}
