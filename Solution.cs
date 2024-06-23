
using System;

public class Solution
{
    static readonly int IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE = -1;
    public int MinOperations(int[] input)
    {
        int countFlips = 0;

        for (int i = 0; i < input.Length; ++i)
        {
            if (input[i] == 1)
            {
                continue;
            }
            if (i + 2 > input.Length - 1)
            {
                return IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE;
            }
            input[i + 1] ^= 1;
            input[i + 2] ^= 1;
            ++countFlips;
        }

        return countFlips;
    }
}
