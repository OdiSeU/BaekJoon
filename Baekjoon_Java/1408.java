import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String from = br.readLine();
        String to = br.readLine();

        
        bw.write(Bj_1408.solution(from, to));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_1408 {
        public static int dateToTime(String date) {
            int time = 0, mult = 3600;

            for(String s : date.split(":")) {
                time += mult * Integer.parseInt(s);
                mult /= 60;
            }

            return time;
        }

        public static String timeToDate(int time) {
            int[] times = new int[3];

            for(int i = 0, div = 3600; i < 3; i++, div /= 60) {
                times[i] = time / div;
                time %= div;
            }

            return format(times[0]) + ":" + format(times[1]) + ":" + format(times[2]);
        }

        public static String format(int time) {
            return time > 9 ? time+"" : "0"+time;
        }

        public static String solution(String from, String to) {
            int day = 24 * 3600;
            int time = dateToTime(to) - dateToTime(from) + day;
            
            return timeToDate(time % day);
        }
    }
}