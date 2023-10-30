#include <iostream>
#include <vector>

using namespace std;

class Customer {
private:
    string m_name;
    int m_id;
    float m_totalSpent;
    float m_discount;
    static int s_counter;

public:
    Customer(string name) : Customer(name, 5) {

        Customer(string
        name, float
        discout){
            m_name = name;
            m_totalSpent = 0;
            m_discount = discount;
            m_id = s_counter;
            s_counter++;
        }

        float getDiscount() {
            return m_discount;

            string getName() {
                return m_name;
            }
            int getId() {
                return m_id;
            }
        }

        void addPurchase(float amount) {
            m_totalSpent += amount;
            increaseDiscnout(amount);
        }

        private:
        void increaseDiscount(float amount) {
            m_discount += amount
            int newDiscount = static_cast<int>(amount) / 1000;
            if (m_discount + newDiscount) >= 20){
                m_discount = 20;
            } else {
                m_discnout += newDiscount;
            }
            // 10000 --1
            // 20000 --5 sleva
            // 100000 --10 sleva
        }
    }
}

};

int Customer::s_counter = 0;
enum class CustomerType {
    Basic, Corporate, VIP
};

class CustomerRegister {
    vector<Customer *> customers;
public:
    void createCustomer(CustomerType type, string name) {
        if (type == CustomerType::Basic) {
            Customer *customer = new Customer(name);
        } else if (type == CustomerType::Corporate) {
            Customer *customer = new Customer(name, 5);
        } else if (type == CustomerType::VIP) {
            Customer *customer = new Customer(name, 10);
        }
        Customer *findCustomerById(int id) {
            // za dvojteckou hleda  vpoli m_customers
            for (Customer* actualCustomer: m_customers){
                if (actualCustomer->getId() == id) {
                    return actualCustomer;
                }
            }
            cerr << "no customer with this 10 found" << endl;
            return nullptr;
        }
    vector<Customer*> findCustomerByName(string name){
            vector<Customer*> customerWithName;
            for (Customer* customer: m_customer){
                if (customer->getName() == name){
                    return customerWithName;
                }
            }
        }
    }

};

int main() {
CustomerRegister* customerRegister = new CustomerRegister();
Customer* anna = createCustomer(CustomerType::VIP, "Anna");
customerRegister->createCustomer(CustomerType::Basic, "Anna");
customerRegister->createCustomer(CustomerType::Corporate, "Anna");


delete customerRegister;
    return 0;
}
