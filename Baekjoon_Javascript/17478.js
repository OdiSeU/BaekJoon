const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (n) => {
    const bot = (n, depth) => {
        chat = '_'.repeat(4*depth) + '"재귀함수가 뭔가요?"\n';
        if(depth == n) {
            chat += '_'.repeat(4*depth) + '"재귀함수는 자기 자신을 호출하는 함수라네"\n';
        }
        else {
            chat += '_'.repeat(4*depth) + '"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n';
            chat += '_'.repeat(4*depth) + '마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n';
            chat += '_'.repeat(4*depth) + '그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."\n';
            chat += bot(n, depth+1);
        }
        chat += '_'.repeat(4*depth) + '라고 답변하였지.\n'
        return chat;
    }

    return '어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n' + bot(n, 0);
}

console.log(solution(+input));