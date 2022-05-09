import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String[] input = br.readLine().split(" ");
        int N = Integer.parseInt(input[0]);
        int M = Integer.parseInt(input[1]);
        bw.write(Bj_19944.solution(N, M));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_19944 {
        public static String solution(int N, int M) {
            if(M <= 2) return "NEWBIE!";
            if(M <= N) return "OLDBIE!";
            return "TLE!";
        }
    }
}