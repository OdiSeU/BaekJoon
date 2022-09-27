const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (s1, s2) => {
    let len1 = s1.length, len2 = s2.length;
    let dp = Array.from(Array(len1+1), ()=>Array(len2+1));

    for(let i = 0; i <= len1; i++) dp[i][0] = 0;
    for(let i = 0; i <= len2; i++) dp[0][i] = 0;
    
    for(let i = 1; i <= len1; i++) {
        for(let j = 1; j <= len2; j++) {
            if(s1[i-1] === s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[len1][len2];
}

console.log(solution(input[0], input[1]));