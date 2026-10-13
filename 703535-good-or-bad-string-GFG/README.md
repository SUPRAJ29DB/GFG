# [Good or Bad String](https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1)
## Easy
Given a string s composed of lowercase alphabets and the wildcard character '?', where '?' can be replaced by any lowercase alphabet, classify the string as "BAD" if it is possible to replace every '?' with some lowercase letter such that the resulting string contains more than 3 consonants together or more than 5 vowels together. Otherwise, the string is classified as "GOOD".
Return true if the string is GOOD, and false if the string is BAD.
Examples:
Input: s = "aeioup??"Output: trueExplanation: No matter how the '?' characters are replaced, the string can never contain more than 3 consonants together or more than 5 vowels together, so it is GOOD.
Input: s = "bcd?"Output: falseExplanation: Replacing '?' with any consonant (for example, "bcdb") creates 4 consonants together, exceeding the limit of 3. Since such a replacement exists, the string is BAD.
