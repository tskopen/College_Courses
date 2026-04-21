// By Marius Silaghi, FIT
// June, 15 2004
// Example parsing arguments using package "mcs" implementing standard UNIX "getopt" for JAVA


import net.ddp2p.common.util.GetOpt;

class Example_GetOpt_New_With_NET {

     public static void main(String[]args){
 	char c;
 	while((c=GetOpt.getopt(args, "fc:d"))!=GetOpt.END){
 	    switch(c){
 	    case 'f': System.out.println("f"); break;
 	    case 'c': System.out.println("c "+GetOpt.optarg); break;
 	    case 'd': System.out.println("d"); break;
 	    case GetOpt.END: System.out.println("-1"); break;
 	    case '?': System.out.println("?:"+GetOpt.optopt); return;
 	    default:
 		 System.out.println("Error: "+c);
 		 return;
 	    }
 	}
 	if (GetOpt.optind<args.length)
 	    System.out.println("OPTS:"+args[GetOpt.optind]);
     }

}
