#include <stdlib.h>
#include <iostream>
class ParHeaders {
 public:
  std::string setid;
  int packets;
  int recovery_block;
  int recoverable_files;
  int other_files;
  int block_size;
  int data_blocks;
  long int data_size;
  int chunk_size;
  
  ParHeaders(void);

};
