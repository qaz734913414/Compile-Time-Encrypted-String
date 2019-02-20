#include "EncryptedString.h"

int main() {
  // encrypt string during compilation time
  auto decrypted_string = EncryptString("hello world");
  static_assert(sizeof(decrypted_string) > 0, "");
  
  // decrypt string during run time
  auto encrypted_string = DecryptString(decrypted_string);
  std::cout << "run time decrypted: " << encrypted_string << std::endl;
}
