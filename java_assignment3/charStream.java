import java.io.*;
public class char_stream {

	 public static void main(String args[]) throws IOException {
	      FileReader in = null;
	      FileWriter out = null;

	      try {
	         in = new FileReader("inp.txt");
	         out = new FileWriter("out.txt");

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
	      finally
	      {
	    	  try
	    	  {
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
