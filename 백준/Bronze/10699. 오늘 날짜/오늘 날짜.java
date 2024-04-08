import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.time.LocalDate;
public class Main {

	public static void main(String[] args) {
		LocalDate now = LocalDate.now();
		
		 DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd");
		 String formatedNow = now.format(formatter);
		 System.out.println(formatedNow);
		 

	}

}
