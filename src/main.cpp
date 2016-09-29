#include <iostream>
#include "helper.h"
#include "../my_inc/myadd.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
  MyAdd add_obj;
  long op[2] = {0, 0};
  FILE *fp;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int count = 0;

  fp = fopen(argv[1], "r");
  if (!fp)
    return 1;

  while ((read = getline(&line, &len, fp)) != -1 && count < 2) {
    count++;
    op[count - 1] = strtol(line, NULL, 0);
  }

  fclose(fp);
  if (line)
    free(line);

  std::cout << "Addition Result:" << add_obj.add(op[0],op[1]) << std::endl;
}
