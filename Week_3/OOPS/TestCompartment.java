abstract class Compartment{
    public abstract String notice();
}

class FirstClass extends Compartment{
    @Override
    public String notice() {
        return "This is a First class compartment ";
    }
}
class Ladies extends Compartment{
    @Override
    public String notice() {
        return "This is a Ladies compartment ";
    }
}

class General extends Compartment{
    @Override
    public String notice() {
        return "This is a General compartment ";
    }
}

class Luggage extends Compartment{
    @Override
    public String notice() {
        return "This is a Luggage compartment ";
    }
}
public class TestCompartment
{
    public static void main(String[] args)
    {
        Compartment [] arr= new Compartment[10];
        for (int i = 0; i < 10; i++) {
            int rnum = (int) (Math.random() * 4)+1;
            if(rnum ==1){
                arr[i] = new FirstClass();
            }
            else if(rnum ==2){
                arr[i] = new Ladies();
            }
            else if(rnum ==3){
                arr[i] = new General();

            }
            else{
                arr[i] = new Luggage();
            }
        }
        for (int i = 0; i < 10; i++) {
            System.out.println( arr[i].notice());
        }
    }
}
