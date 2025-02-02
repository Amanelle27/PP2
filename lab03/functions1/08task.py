def spy_game(nums):
    for i in range(0, len(nums)-2):
        if int(nums[i]) == 0 and int(nums[i+1]) == 0 and int(nums[i+2]) == 7:
            return True
    return False

nums = list((input("Enter digits separated by spaces: ").split()))
if spy_game(nums):
    print("If James Bond is the best secret agent in the world, then how does everyone know about him?")
else:
    print("No spies detected")