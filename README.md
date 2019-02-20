A small utility which allows compile time encryption and run time decryption of strings.
Encryption/Decryption schemes are supplied by the user.

example usage:
```c
// encrypt string during compilation time
auto decrypted_string = EncryptString("hello world");
static_assert(sizeof(decrypted_string) > 0, "");

// decrypt string during run time
auto encrypted_string = DecryptString(decrypted_string);
std::cout << "run time decrypted: " << encrypted_string << std::endl;
```
