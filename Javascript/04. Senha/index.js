const passwords = ['hello', 'chargeR', 'pass123'];
const common_words = ['hello', '123', 'password', 'xyz', '999'];

for (let i = 0; i < passwords.length; i++) {
    let isWeak = false;
    for (let j = 0; j < common_words.length; j++) {
        if (passwords[i].toLowerCase().includes(common_words[j].toLowerCase())) {
            isWeak = true;
            break;
        }
    }
    if (isWeak) {
        console.log("weak");
    } else {
        console.log("strong");
    }
}
