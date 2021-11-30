import java.util.Scanner;

public class colorful
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();
        int tlen = t.length(), j = 0;
        for (int i = 0; i < tlen; i++)
        {
            if (t.charAt(i) == s.charAt(j))
                j++;
        }
        System.out.println(j + 1);
    }
}
