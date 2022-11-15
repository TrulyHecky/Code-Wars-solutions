std::vector<int> incrementer(std::vector<int> nums) {
    for (int i = 0, len = nums.size(); i < len; ++i)
        nums[i] = (nums[i] + i + 1) % 10;
    return nums;
}
