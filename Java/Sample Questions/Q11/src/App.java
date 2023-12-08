import java.sql.*;

public class App {
    public static void main(String[] args) throws Exception {
        String url="jdbc:mysql://localhost:3306/opju";
        String username="root";
        String password="rudraxcode";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection(url,username,password);
        Statement smt = con.createStatement();
        String sql2 = "insert into q11 values('GFG','123','afsd','fa','57242887',2)";
        String sql3 = "insert into q11 values('gi','123','2@gmail.com','87/12','9517564',3)";
        String sql4 = "insert into q11 values('gi','abc','3@gmail','87/12','9517564',4)";
        String sql5 = "insert into q11 values('dita','123','1@gmail.com','82/11','9966445522',5)";
        String sql6 = "insert into q11 values('hari','123','har@gmail.com','oyur','456123789',6)";
        smt.addBatch(sql2);
        smt.addBatch(sql3);
        smt.addBatch(sql4);
        smt.addBatch(sql5);
        smt.addBatch(sql6);
        smt.executeBatch();
        con.close();
    }
}
