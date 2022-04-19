import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][2];
        for(int i = 0; i < n; i++) {
            String[] s = br.readLine().split(" ");
            arr[i][0] = Integer.parseInt(s[0]);
            arr[i][1] = Integer.parseInt(s[1]);
        }
        bw.write(Bj_2563.solution(n, arr)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_2563 {
        public static int solution(int n, int[][] arr) {
            boolean[][] board = new boolean[101][101];
            int answer = 0;
            
            for(int i = 0; i < n; i++) {
                for(int x = arr[i][0]; x < arr[i][0] + 10; x++) {
                    for(int y = arr[i][1]; y < arr[i][1] + 10; y++) {
                        if(!board[x][y]) {
                            board[x][y] = true;
                            answer++;
                        }
                    }
                }
            }

            return answer;
        }
    }
}
