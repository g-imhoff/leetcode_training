class Solution:
    def countTime(self, time: str) -> int:
        result: int = 1

        if time[0] == "?":
            if time[1] != "?" and int(time[1]) >= 4:
                result = 2
            else: 
                result = 3
        if time[1] == "?": 
            if time[0] != "?" and int(time[0]) == 2:
                result *= 4
            else: 
                result = min(result * 10, 24)

        if time[3] == "?":
            result *= 6
        if time[4] == "?":
            result *= 10

        return result
