class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """ 
        # Dictionary to map Roman numerals to their integer values
        roman_values = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        total = 0
        prev_value = 0
        
        # Loop through each character in the string
        for char in s:
            current_value = roman_values[char]
            
            # If current value is greater than the previous one, subtract twice the previous value
            if current_value > prev_value:
                total += current_value - 2 * prev_value
            else:
                total += current_value
            
            prev_value = current_value
        
        return total
