#include <iostream>

#include "Hash.hpp"
#include "hash/SHA256.hpp"
#include "hash/SHA224.hpp"
#include "hash/SHA512.hpp"

#define TEST(expr, msg)          \
if (expr) std::cout << "PASSED TEST [" << msg << "]\n"; \
else std::cout << "FAILED TEST [" << msg << "]\n"; 

int main()
{
  TEST(sha512("abc") == 0xddaf35a193617abacc417349ae20413112e6fa4e89a97ea20a9eeee64b55d39a2192992a274fc1a836ba3c23a3feebbd454d4423643ce80e2a9ac94fa54ca49f_hash, "Sha512 [SHORT]");
  TEST(sha512("abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu")==0x8e959b75dae313da8cf4f72814fc143f8f7779c6eb9f7fa17299aeadb6889018501d289e4900f7e4331b99dec4b5433ac7d329eeb6dd26545e96e55b874be909_hash,"Sha512 [LONG]");

}