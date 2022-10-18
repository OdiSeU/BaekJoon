const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const ipToNum = (ip) => {
    let n = 0n;
    for(let x of ip.split('.')) {
        n <<= 8n;
        n |= BigInt(x);
    }
    return n;
}

const numToIp = (num) => {
    let ip = [,,,];
    for(let i = 3; i >= 0; i--) {
        ip[i] = num % (256n);
        num >>= 8n;
    }
    return ip.join('.');
}

const solution = (ips) => {
    const ipNums = ips.map(v => ipToNum(v));
    let subnet = 0n;
    
    for(let bit = 1n << 31n; bit; bit >>= 1n) {
        let check = true;
        
        for(let i = 1; i < ipNums.length; i++) {
            if((ipNums[0] & bit) !== (ipNums[i] & bit)) {
                check = false;
                break;
            }
        }
        
        if(check) subnet |= bit;
        else break;
    }

    const network = ipNums[0] & subnet;

    return `${numToIp(network)}\n${numToIp(subnet)}`;
}

console.log(solution(input.slice(1)))