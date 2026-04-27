import java.util.*;

class AL
{
    static public void main(String[]args)
    {
        ArrayList<String> a = new ArrayList<>();
        a.add("Hello");
        a.add(0, "World");
        

        for(int i = 0; i < a.size(); i ++)
        {
            System.out.println(a.get(i));
        }
        a.remove(0);

        System.out.println("# of elements: " + a.size());

    }
}
