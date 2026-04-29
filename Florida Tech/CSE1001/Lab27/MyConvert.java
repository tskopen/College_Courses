public class MyConvert 
{
    public static void printHelp() 
    {
        System.out.println("\tUsage: java MyConvert [-c centimeters|-i inches|-m meters|-f feet]");
        System.out.println("\t\t-C // convert to centimeters (cm)");
        System.out.println("\t\t-F // convert to centimeters (cm/(12*2.54))");
        System.out.println("\t\t-I // convert to centimeters (cm/2.54)");
        System.out.println("\t\t-M // convert to centimeters (cm/100)");
        System.out.println("\t\t-h // display this help message");
    }

    public static void main (String[]args) 
    {
        double input_in_centimeters = 0;
        boolean inputProvided = false;
        boolean desired_cm = false, desired_in = false, desired_ft = false, desired_m = false;
        char c;

        while ( (c = GetOpt.getopt(args, "hi:c:f:m:ICFM")) != GetOpt.END)
        {
            switch(c)
            {
                case 'c': inputProvided = true; input_in_centimeters = Double.parseDouble(GetOpt.optarg)*1; break;
                case 'i': inputProvided = true; input_in_centimeters = Double.parseDouble(GetOpt.optarg)*2.54; break;
                case 'f': inputProvided = true; input_in_centimeters = Double.parseDouble(GetOpt.optarg)*12; break;
                case 'm': inputProvided = true; input_in_centimeters = Double.parseDouble(GetOpt.optarg)*12*2.54; break;

                case 'C': desired_cm = true; break;
                case 'I': desired_in = true; break;
                case 'F': desired_ft = true; break;
                case 'M': desired_m = true; break;

                case '?': 
                case ':':
                    System.out.println("Error parsing command line!");
                    printHelp();
                    System.exit(1);
                break;

                case 'h':
                    printHelp();
                    System.exit(0);
                break;
            }
        }

        if (!inputProvided) 
        {
            System.out.println("Input is UNKNOWN");
            printHelp();
        }
        if (desired_cm) 
        {
            System.out.println("Centimeters: "+input_in_centimeters);
        }
        if (desired_m) 
        {
            System.out.println("Meters: "+(input_in_centimeters / 100));
        }
        if (desired_in) 
        {
            System.out.println("Inches: "+input_in_centimeters/2.54);
        }
        if (desired_ft) 
        {
            System.out.println("Feet: "+input_in_centimeters/(12*2.54));
        }
            

    }
}