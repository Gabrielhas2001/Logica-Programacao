const nums = [1, 2, 3, 4, 5];

let newItem = [];

newItem[0] = nums[0];

for (let i = 1; i < nums.length; i++) {
    newItem[i] = nums[i] + newItem[i - 1];
}

console.log(newItem);
