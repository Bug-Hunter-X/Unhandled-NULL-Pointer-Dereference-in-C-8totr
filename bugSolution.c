int main() {
  int x = 10;
  int *ptr = &x; 
  if (ptr != NULL) { 
    *ptr = 20; 
  }
  else {
    // Handle NULL pointer case appropriately (e.g., print an error message, return an error code)
    fprintf(stderr, "Error: Pointer is NULL\n"); 
    return 1;
  }
  printf("%d", x); 
  return 0;
}