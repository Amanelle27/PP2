def histogram(nums):
    for x in nums:
        for i in range(0, int(x)):
            print('*', end = '')
        print()

nums = list(input("Enter numbers separated by spaces: ").split())
histogram(nums)