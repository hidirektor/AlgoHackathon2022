let arr = [];

function prime(n) {
    for (let a=2 ; a < 500; a++) {
        if (n%a == 0 && a!=n) return false;
        if (a == 499) return true;
    }
}

function perfectNum(p) {

    if (prime(Math.pow(2,p) - 1) && prime(p)) {
        let n = Math.pow(2,p-1) * (Math.pow(2,p) - 1)
        if (n < 500)  {
            return n;
        } else return false;
    } else return false;
}

for (let b = 2; b < 500; b++) {
    if (prime(b) && perfectNum(b)) arr.push(perfectNum(b))
}

console.log(arr);