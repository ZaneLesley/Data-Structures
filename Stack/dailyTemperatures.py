from typing import List


class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = []
        i = 1
        x = list(reversed(temperatures))
        t = x.pop()
        print(x)
        while x:
            for n in range(len(x)):
                print(f"{t} while looking at {x[n]}")
                if (n + 1) >= len(x):
                    result.append(0)
                    t = x.pop()
                    i = 1
                    break
                if t < x[n]:
                    result.append(i)
                    t = x.pop()
                    i = 1
                    break
                else:
                    i += 1

        result.append(0)
        return result


if __name__ == "__main__":
    print(Solution.dailyTemperatures(self=Solution, temperatures=[30,40,50,60]))
