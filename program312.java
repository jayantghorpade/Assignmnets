import java.util.*;
class StringX
{
    public int Count(String str)
    {
        int iCnt=0;
        char Arr[]=str.toCharArray();
        for(int i=0;i<Arr.length;i++)
        {
            if(str.charAt(i)>='a' && str.charAt(i)<='z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class program312
{
    public static void main(String args[])
    {
        int iret=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String elemnts :");
        String str=sc.nextLine();
        StringX obj=new StringX();
        iret=obj.Count(str);
        System.out.println("String count is :"+iret);
        
    }
}