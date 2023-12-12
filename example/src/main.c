#include <stdio.h>
#include <unistd.h>

#include "uv.h"

int main(int argc, char **argv) {
  char *version;

  version = (char *)uv_version_string();

  printf("libuv version is %s\n", version);
  return 0;
}