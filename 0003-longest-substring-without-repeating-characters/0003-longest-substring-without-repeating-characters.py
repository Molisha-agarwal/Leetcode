class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_index = [-1] * 256  # Character index map for ASCII characters
        n = len(s)
        left = 0
        max_length = 0

        for right in range(n):
            if char_index[ord(s[right])] != -1:  # If character is repeated
                left = max(char_index[ord(s[right])] + 1, left)
            
            char_index[ord(s[right])] = right  # Update last seen index
            max_length = max(max_length, right - left + 1)  # Update max length
        
        return max_length
