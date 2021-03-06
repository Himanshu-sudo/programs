nums = [1,2,3]
def backtrack(first = 0, curr = []):
    # if the combination is done
    # print(k , end=' ')
    if len(curr) == k:  
        output.append(curr[:])
        return
    for i in range(first, n):
        # add nums[i] into the current combination
        curr.append(nums[i])
        # use next integers to complete the combination
        backtrack(i + 1, curr)
        # backtrack
        curr.pop()

output = []
n = len(nums)
for k in range(n + 1):
    backtrack()
print(output)
