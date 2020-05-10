import java.io.*;
public class byte_stream {

	public static void main(String args[]) throws IOException {
	      FileInputStream in = null;
	      FileOutputStream out = null;

	      try {
	         in = new FileInputStream("inp.txt");
	         out = new FileOutputStream("out.txt");

	         int n;
	         while ((n = in.read()) != -1) {
	            out.write(n);
	         }
	      }
	      catch(Exception e)
	      {
	    	  e.printStackTrace();
	    	  System.out.println("Exception");
	      }
	      finally {
	    	  try {
	         if (in != null) {
	            in.close();
	         }
	         if (out != null) {
	            out.close();
	         }
	    	  }
	    	  catch(Exception e)
	    	  {
	    		  e.printStackTrace();
	    	  }
	      }
	   }
	}
