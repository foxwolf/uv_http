#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "uv.h"


int64_t num = 0;

void my_idle_cb(uv_idle_t* handle)
{
    num++;
    if (num >= 1000) {
        printf("idle stop, num = %ld\n", num);
        uv_idle_stop(handle);
    }
}

int main(int argc, char** argv) {
  char* version;

  version = (char*)uv_version_string();

  printf("libuv version is %s\n", version);

  uv_idle_t idler;

  uv_idle_init(uv_default_loop(), &idler);
  printf("idler  num=%ld\n", num);
  uv_idle_start(&idler, &my_idle_cb);
  uv_run(uv_default_loop(), UV_RUN_DEFAULT);

  // uv_loop_t* loop = malloc(sizeof(uv_loop_t));
  // uv_loop_init(loop);

  // uv_run(loop, UV_RUN_DEFAULT);

  printf("quit...\n");

  // uv_loop_close(loop);
  // free(loop);

  return 0;
}