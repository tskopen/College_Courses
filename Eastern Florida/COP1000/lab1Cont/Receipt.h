using namespace std;
class Receipt
{
    private:
        int itemNumber;
        string itemType;
        double itemPrice;
        int orderNumber;
        double taxRate = 0.05;

    public:
        void setItemNumber(int itemNumber);
        
        void setItemPrice(double itemPrice);
        
        int getItemNumber();

        void print();
};

        void Receipt::setItemNumber(int newItemNumber)
        {
            itemNumber = newItemNumber;
        }
        
        int Receipt::getItemNumber()
        {
            return itemNumber;
        }
        
        void Receipt::setItemPrice(double newItemPrice)
        {
            itemPrice = newItemPrice;
        }

void Receipt::print()
{
    cout << " ****** RECEIPT ******" << endl 
         << itemNumber << ": $" << itemPrice << endl 
         << "Tax: $" << (itemPrice * taxRate) << endl 
         << "Total: $" << ((itemPrice * taxRate) + itemPrice) << endl
         << "***** THANK YOU *****" << endl;
}