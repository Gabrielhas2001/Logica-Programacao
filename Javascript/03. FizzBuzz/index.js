function number(n) {
    let counter = 1;

    while (counter <= n) {
        if (counter % 5 == 0 && counter % 3 == 0) {
            console.log("FizzBuzz")
        } else if (counter % 3 == 0 && counter % 5 != 0) {
            console.log("Fizz")
        } else if (counter % 5 == 0 && counter % 3 != 0) {
            console.log("Buzz")
        } else {
            console.log(counter)
        }
        counter++
    }

}

number(15);