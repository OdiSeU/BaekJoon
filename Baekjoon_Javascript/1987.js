const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (board) => {
    const checks = Array(26).fill(0);
    let answer = 0;
    const ctoi = (c) => c.charCodeAt() - 65;
    const dfs = (depth, r, c) => {
        checks[ctoi(board[r][c])] = 1;
        answer = Math.max(answer, depth);
        if(board[r-1]?.[c] && !checks[ctoi(board[r-1][c])]) dfs(depth+1, r-1, c);
        if(board[r]?.[c-1] && !checks[ctoi(board[r][c-1])]) dfs(depth+1, r, c-1);
        if(board[r+1]?.[c] && !checks[ctoi(board[r+1][c])]) dfs(depth+1, r+1, c);
        if(board[r]?.[c+1] && !checks[ctoi(board[r][c+1])]) dfs(depth+1, r, c+1);
        checks[ctoi(board[r][c])] = 0;
    };

    dfs(1, 0, 0);

    return answer;
}

console.log(solution(input.slice(1)));