import java.util.*;
class StringX
{
   public String s; 
   public StringX(String str)
   {
    s=str;
   }

  protected int  countSmall()
  {
    int smallChar=0;
    char Arr[]=s.toCharArray();
    for(int i=0;i<Arr.length;i++)
    {
        if(s.charAt(i)>='a' && (s.charAt(i)<='z'))
        {
            smallChar++;
        }
}
    return smallChar;
}

protected int countCpital()
{
    int CapChar=0;
    char Arr[]=s.toCharArray();
    for(int i=0;i<Arr.length;i++)
    {
        if(s.charAt(i)>='A' && (s.charAt(i)<='Z'))
        {
                CapChar++;
        }
}
return CapChar++;
}
}
class Derived extends StringX
{
    public Derived(String s)
    {
        super(s);
    }
    public int CountDiff()
    {
        int i=countSmall();
        int j=countCpital();
        int ans=0;
        ans=i-j;
        return ans;
    }
}
class program313
{
    public static void main(String args[])
    {
        int iret=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String elemnts :");
        String str=sc.nextLine();

        Derived obj=new Derived(str);
        iret=obj.CountDiff();
        System.out.println(iret);
        
        
    }
}