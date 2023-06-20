#include <iostream>
#include <vector>

class ShoppingCart {
private:
  std::vector<std::string> items;

public:
  void addItem(const std::string& item) {
    items.push_back(item);
  }

  void displayItems() {
    for (const auto& item : items) {
      std::cout << item << std::endl;
    }
  }
};

int main() {
  ShoppingCart cart;
  cart.addItem("Laptop");
  cart.addItem("Mouse");
  cart.displayItems();

  return 0;
}

