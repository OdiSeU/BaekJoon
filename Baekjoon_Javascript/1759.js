// https://www.acmicpc.net/problem/1759

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const lines = file.split('\n');

const [L, C] = lines[0].split(' ').map(Number);
const characters = lines[1].split(' ');

console.log(solution(characters, L, C));

function solution(characters, L, C) {
    const countVowel = (str) => (str.match(/[aeiou]/g) || []).length;

    const permutations = getPermutations(characters.sort(), L).map((v) => v.join(''));
    const filtered = permutations.filter((p) => {
        const vowel = countVowel(p);
        return 1 <= vowel && vowel <= L - 2;
    });

    return filtered.join('\n');
}

function getPermutations(arr, n) {
    let result = [];
    if (n === 1) return arr.map((v) => [v]);
    for (let i = 0; i < arr.length; i++) {
        let rest = arr.slice(i + 1);
        let concat = getPermutations(rest, n - 1).map((v) => [arr[i], ...v]);

        result.push(...concat);
    }
    return result;
}
