const p = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const f = require('fs').readFileSync(p, 'utf-8').trim();

const [N, ...options] = f.split('\n');

console.log(solution(N, options));

function solution(N, options) {
    const commands = new Set();

    const tryAddCmd = (char) => {
        const cmd = char.toUpperCase();
        if (commands.has(cmd)) return false;
        commands.add(cmd);
        return true;
    };

    const wrapWithBrackets = (str, i) => {
        return str.slice(0, i) + `[${str[i]}]` + str.slice(i + 1);
    };

    const convert = (option) => {
        if (tryAddCmd(option[0])) {
            return wrapWithBrackets(option, 0);
        }

        for (let i = 1; i < option.length; i++) {
            if (option[i - 1] === ' ' && tryAddCmd(option[i])) {
                return wrapWithBrackets(option, i);
            }
        }

        for (let i = 0; i < option.length; i++) {
            if (option[i] !== ' ' && tryAddCmd(option[i])) {
                return wrapWithBrackets(option, i);
            }
        }

        return option;
    };

    return options.map(convert).join('\n');
}
