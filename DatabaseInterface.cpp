
#include "DatabaseInterface.h"
#include <stdio.h>
using namespace std;

int DatabaseInterface::EstablishConnection()
{
    // Connect to the sample database.
    const char* db = 0, *server = 0, *user = 0, *pass = "";
    db = "lincoln";
    server = "localhost";
    user = "goat";


    conn = mysqlpp::Connection(false);
    if (conn.connect(db, server, user, pass))
    {
        // ~~~This is example code:
        // Retrieve a subset of the sample stock table set up by resetdb
        // and display it.
        /*
        mysqlpp::Query query = conn.query("select item from stock");
        if (mysqlpp::StoreQueryResult res = query.store())
        {
            cout << "We have:" << endl;
            for (size_t i = 0; i < res.num_rows(); ++i)
            {
                cout << '\t' << res[i][0] << endl;
            }
        }
        else
        {
            cerr << "Failed to get item list: " << query.error() << endl;
            return 1;
        }*/

        return 0;
    }
    else
    {
        cerr << "DB connection failed: " << conn.error() << endl;
        return 1;
    }


}

void DatabaseInterface::InsertString()
{



}