#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using std::string, std::cout;

void show(std::vector<string> options);
bool option_chose(int opt);

int main(int argc, char *argv[]) {

  int opt;
  do {
    std::vector<string> options = {
        "",
        "op2",
        "op3",
    };
    show(options);
    cout << "Selecione uma opção.\n";
    std::cin >> opt;
    if (!option_chose(opt))
      break;
  } while (opt != 0);

  return 0;
}

void show(std::vector<string> options) {
  int i = 1;
  for (auto elem : options) {
    cout << i << ". " << elem << "\n";
    i++;
  }
}

bool option_chose(int opt) {
  switch (opt) {
  case 1:
    cout << "1\n";
    break;
  case 2:
    cout << "2\n";
    break;
  case 3:
    cout << "3\n";
    break;
  default:
    cout << "Invalid option\n";
    return false;
  }
  return true;
}
