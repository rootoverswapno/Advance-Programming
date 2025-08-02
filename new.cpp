#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

int main() {
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;

        // Connect to MySQL
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", ""); // No password by default

        con->setSchema("testdb");  // Use your DB

        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT * FROM users");

        while (res->next()) {
            std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name") << std::endl;
        }

        delete res;
        delete stmt;
        delete con;

    } catch (sql::SQLException &e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
