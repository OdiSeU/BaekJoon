const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const Node = function (from, to, cost) {
    this.from = from;
    this.to = to;
    this.cost = cost;
}

const solution = (edges, N) => {
    const dist = Array(N).fill(987654321);
    dist[0] = 0;
    for(let _ = 0; _ < N; _++) {
        for(let e of edges) {
            if (dist[e.from] + e.cost < dist[e.to]) {
				dist[e.to] = dist[e.from] + e.cost;
			}
        }
    }
    for(let e of edges) {
        if (dist[e.from] + e.cost < dist[e.to]) {
            return 'YES';
        }
    }
    return 'NO';
}

let idx = 0;
let TC = +input[idx++];
let N, M, W, S, E, T;
let answers = [];

while(TC--) {
    [N, M, W] = input[idx++].split(' ').map(v => +v);
    let edges = [];
    
    while(M--) {
        [S, E, T] = input[idx++].split(' ').map(v => +v);
        edges.push(new Node(S-1, E-1, T));
        edges.push(new Node(E-1, S-1, T));
    }
    
    while(W--) {
        [S, E, T] = input[idx++].split(' ').map(v => +v);
        edges.push(new Node(S-1, E-1, -T));
    }
    
    answers.push(solution(edges, N));
}

console.log(answers.join('\n'));