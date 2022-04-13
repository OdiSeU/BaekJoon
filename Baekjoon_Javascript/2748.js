let input = require('fs').readFileSync('/dev/stdin').toString();

const fibo = (n) => {
    if(n < 2) return n;
    let a = 0n, b = 1n;
    for(let i = 2; i <= n; i++)
        [a, b] = [b, a+b];

    return b.toString();
}

console.log(fibo(+input));