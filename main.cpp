#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using std::string, std::cout;

void show(std::vector<string> options);
void option_chose(int opt);

int main(int argc, char *argv[]) {

  int opt;
  do {
    std::vector<string> options = {
        "op1",
        "op2",
        "op3",
    };
    show(options);
    cout << "Selecione uma opção. (Use 0 para sair)\n";
    std::cin >> opt;
    option_chose(opt);
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

inline void option_chose(int opt) {
  switch (opt) {
  case 0:
    break;
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
    cout << "Opção invalida\n";
    break;
  }
}
