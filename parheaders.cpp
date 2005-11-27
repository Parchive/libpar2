#include "parheaders.h"

ParHeaders::ParHeaders(void) {
  packets = -1;
  recovery_block = -1;
  recoverable_files = -1;
  other_files = -1;
  block_size = -1;
  data_blocks = -1;
  data_size = -1;
  setid = "";
  chunk_size = -1;
}
