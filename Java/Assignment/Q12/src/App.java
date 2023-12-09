import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class App {
    public static void main(String[] args) throws Exception {
        String url="jdbc:mysql://localhost:3306/opju";
        String username="root";
        String password="rudraxcode";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection(url,username,password);
        Statement smt = con.createStatement();
        String sql2 = "insert into information values('63','Rudra','Kashyap','B.Tech','2')";
        String sql3 = "insert into information values('48','Prachi','Tripathi','B.Sc','2')";
        smt.addBatch(sql2);
        smt.addBatch(sql3);
        smt.executeBatch();
        con.close();
    }
}
