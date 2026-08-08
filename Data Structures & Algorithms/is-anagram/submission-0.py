from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sf = Counter(s)
        tf = Counter(t)

        if sf == tf:
            return True
        
        return False
        