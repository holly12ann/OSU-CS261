
/****************************************************************************************
 Author:Holly Switzer
 Date:6/8/17
 Description:This file will run the store program
 ***************************************************************************************/

#include <iostream>
using namespace std;
#include "Store.hpp"
int main()
{
    Product caramelCandy("001", "candy", "caramel and milk candy", 2.50, 50);
    Product fancyMilk("002", "Almond Milk", "unsweetened, from real almonds", 3.00, 3);
    Product cheeseCake("003", "cheesecake", "fruit and cheese, fresh cake", 10.00, 1);
    Product toothpaste("004", "Crest Toothpaste", "Mint Flavor", 3.50, 30);
    Product goat("005", "live goat", "great goat", 100.50, 1);
    Product robot("006", "giant robot", "big hero", 7000, 2);
    Store myStore;
    Customer bob("bob", "001", false);
    Customer totoro("totoro", "002", true);
    
    myStore.addMember(&bob);
    myStore.addMember(&totoro);
    
    myStore.addProduct(&caramelCandy);
    myStore.addProduct(&fancyMilk);
    myStore.addProduct(&cheeseCake);
    myStore.addProduct(&toothpaste);
    myStore.addProduct(&goat);
    myStore.addProduct(&robot);
    
    cout << endl << "------------------- TEST 1 --------------------" << endl;
    cout << "Searching for \"Milk\" keyword... " << endl;
    cout << "Expected: 2 matches - candy and Almond Milk " << endl << endl;
    myStore.productSearch("Milk");
    
    cout << endl << "------------------- TEST 2 --------------------" << endl;
    cout << "Searching for \"MILK\" keyword... " << endl;
    cout << "Expected: no matches" << endl << endl;
    myStore.productSearch("MILK");
    
    cout << "------------------- TEST 3 --------------------" << endl;
    cout << "Trying to add to cart using invalid member id..." << endl;
    myStore.addProductToMemberCart("003", "202");
    cout << endl << "Trying to add to cart using invalid product id..." << endl;
    myStore.addProductToMemberCart("203", "001");
    
    cout << endl << "------------------- TEST 4 --------------------" << endl;
    cout << "Adding to cart Almond Milk, Cheesecake and Toothpaste..." << endl;
    myStore.addProductToMemberCart("002", "001");
    myStore.addProductToMemberCart("003", "001");
    myStore.addProductToMemberCart("004", "001");
    cout << endl << "Checking out..." << endl << endl;
    cout << "Expected: Subtotal: 16.5, Shipping: 1.15, Total: 17.65 " << endl << endl;
    myStore.checkOutMember("001");
    
    cout << endl << "------------------- TEST 5 --------------------" << endl;
    cout <<  "Trying to add to cart a cheesecake which should be out of stock..." << endl;
    myStore.addProductToMemberCart("003", "001");
    
    cout << endl << "------------------- TEST 6 --------------------" << endl;
    cout << "Adding to cart 1 candy..." << endl;
    myStore.addProductToMemberCart("001", "001");
    cout << endl << "Checking out..." << endl << endl;
    cout << "Expected: Subtotal: 2.5, Shipping: 0.17, Total: 2.67 " << endl << endl;
    myStore.checkOutMember("001");
    
    cout << endl << "------------------- TEST 7 --------------------" << endl;
    cout << "Adding to cart 2 live goats and almond milk..." << endl;
    myStore.addProductToMemberCart("005", "001");
    myStore.addProductToMemberCart("005", "001");
    myStore.addProductToMemberCart("002", "001");
    cout << endl << "Checking out..." << endl << endl;
    cout << "Expected: 1 of the 2 goats should be out of stock" << endl;
    cout << "Should print \"Sorry, product #005, live goat\", is no longer available" << endl;
    cout << "Expected: Subtotal: 103.5, Shipping: 7.24, Total: 110.74 " << endl << endl;
    myStore.checkOutMember("001");
    
    cout << endl << "------------------- TEST 8 --------------------" << endl;
    cout << "Adding to cart of a Premium customer 4 candies and 2 toothpastes..." << endl;
    myStore.addProductToMemberCart("001", "002");
    myStore.addProductToMemberCart("001", "002");
    myStore.addProductToMemberCart("001", "002");
    myStore.addProductToMemberCart("001", "002");
    myStore.addProductToMemberCart("004", "002");
    myStore.addProductToMemberCart("004", "002");
    cout << endl << "Checking out Premium member..." << endl << endl;
    cout << "Expected: Subtotal: 17, Shipping: 0, Total: 17 " << endl << endl;
    myStore.checkOutMember("002");
    
    cout << endl << "------------------- TEST 9 --------------------" << endl;
    cout << "Customer 1 adds giant robot to cart..." << endl;
    myStore.addProductToMemberCart("006", "001");
    cout << "Meanwhile, Customer 2 buys all the remaining giant robots..." << endl;
    myStore.addProductToMemberCart("006", "002");
    myStore.addProductToMemberCart("006", "002");
    cout << endl << "Checking out for Customer 2..." << endl;
    cout << "Expected: Subtotal: 14000, Shipping: 0, Total: 14000" << endl << endl;
    myStore.checkOutMember("002");
    cout << endl << "Then Customer 1 tries to check out..." << endl;
    cout << "Expected: Should print \"Sorry, product #006, giant robot\", is no longer available" << endl;
    cout << "Expected: Subtotal: 0, Shipping: 0, Total: 0" << endl << endl;
    myStore.checkOutMember("001");
    
    cout << endl << "------------------- TEST 10 --------------------" << endl;
    cout << "Quantities remaining:" << endl;
    cout << "caramelCandy - Expected: 45, Actual: " << myStore.getProductFromID("001")->getQuantityAvailable() << endl;
    cout << "fancyMilk - Expected: 1, Actual: " << myStore.getProductFromID("002")->getQuantityAvailable() << endl;
    cout << "cheeseCake - Expected: 0, Actual: " << myStore.getProductFromID("003")->getQuantityAvailable() << endl;
    cout << "toothpaste - Expected: 27, Actual: " << myStore.getProductFromID("004")->getQuantityAvailable() << endl;
    cout << "goat - Expected: 0, Actual: " << myStore.getProductFromID("005")->getQuantityAvailable() << endl;
    cout << "robot - Expected: 0, Actual: " << myStore.getProductFromID("006")->getQuantityAvailable() << endl;
    
    return 0;
}
