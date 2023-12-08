import java.sql.*;

public class App {
    public static void main(String[] args) throws Exception {
        String url="jdbc:mysql://localhost:3306/opju";
        String username="root";
        String password="rudraxcode";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection(url,username,password);
        Statement smt = con.createStatement();
        String sql2 = "insert into Student_info values('Rudra Kashyap',63,'CSE','2','7415678322','rgeneral@gmail.com','Raigarh')";
        String sql3 = "insert into Student_info values('Om Chilbule',48,'CSE','2','7985412568','chilbule@gmail.com','Raigarh')";
        smt.addBatch(sql2);
        smt.addBatch(sql3);
        smt.executeBatch();
        ResultSet rs = smt.executeQuery("Select * from Student_info");
        while(rs.next()){
            System.out.println(rs.getInt(2)+rs.getString(1)+rs.getString(3)+rs.getString(4)+rs.getString(5)+rs.getString(6)+rs.getString(7));
        }
        con.close();
    }
}
