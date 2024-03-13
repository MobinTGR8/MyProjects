// current time in GMT.
package labproblemset07;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.TimeZone;

public class Q5 {
      public static void main(String[] args) {
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        sdf.setTimeZone(TimeZone.getTimeZone("GMT"));
        String currentTimeInGMT = sdf.format(new Date());
        System.out.println("Current time in GMT: " + currentTimeInGMT);
    }
}
