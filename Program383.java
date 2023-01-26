import java.util.*;
class Pattern
{
    public char Arr[];
    public Pattern(String s)
    {
        Arr=s.toCharArray();
    }
    public void PatternDisplay()
    {
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr.length;j++)
            {
                if(i>=j)
                {
                System.out.print(Arr[j]+"\t");
            }
            }
        System.out.println();
        }
    }

}
class Program383
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string please :");
        String str=sc.nextLine();
        Pattern obj=new Pattern(str);
        obj.PatternDisplay();
    }
}