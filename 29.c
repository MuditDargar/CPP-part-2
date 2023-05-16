#include <stdio.h>
#include <stdlib.h>
#define MEMORY_SIZE 100
// Memory block structure
typedef struct {
 int start_address;
 int size;
} memory_block;
// Memory block array
memory_block memory[MEMORY_SIZE];
// Initialize memory array
void init_memory() {
 int i;
 for (i = 0; i < MEMORY_SIZE; i++) {
 memory[i].start_address = -1;
 memory[i].size = -1;
 }
}
// Allocate memory using first-fit strategy
int first_fit(int request_size) {
 int i, j, start_address = -1;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 start_address = i;
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size) { // Check if block is large enough
 memory[i].start_address = i;
 memory[i].size = request_size;
 return i;
 }
 i = j - 1;
 }
 }
 return -1; // Not enough free memory
}
// Allocate memory using best-fit strategy
int best_fit(int request_size) {
 int i, j, start_address = -1, smallest_size = MEMORY_SIZE;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size && j - i < smallest_size) { // Check  if block is large enough and smallest

 start_address = i;
 smallest_size = j - i;
 }
 i = j - 1;
 }
 }
 if (start_address != -1) {
 memory[start_address].start_address = start_address;
 memory[start_address].size = request_size;
 }
 return start_address;
}
// Allocate memory using worst-fit strategy
int worst_fit(int request_size) {
 int i, j, start_address = -1, largest_size = -1;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size && j - i > largest_size) { // Check if block is large enough and largest

 start_address = i;
 largest_size = j - i;
 }
 i = j - 1;
 }
 }
 if (start_address != -1) {
 memory[start_address].start_address = start_address;
 memory[start_address].size = request_size;
 }
 return start_address;
}
// Deallocate memory block
void deallocate(int start_address) {
 int i;
 for (i = start_address; i < start_address + memory[start_address].size; 
i++) {
 memory[i].start_address = -1;
 memory[i].size = -1;
 }
}
// Print memory block
void print_memory() {
 int i;
 printf("Memory Block:\n");
 for (i = 0;i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) {
 printf("[ ]"); // Free memory block
 } else {
 printf("[X]"); // Allocated memory block
 }
 }
 printf("\n\n");
}
int main() {
 init_memory();
 // Allocate memory using first-fit strategy
 printf("First-Fit Allocation:\n");
 int addr1 = first_fit(5);
 int addr2 = first_fit(10);
 int addr3 = first_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
// Deallocate memory blocks
 printf("Deallocate block 2\n");
 deallocate(addr2);
 print_memory();
 printf("\n");
// Allocate memory using best-fit strategy
 printf("Best-Fit Allocation:\n");
 addr1 = best_fit(5);
 addr2 = best_fit(10);
 addr3 = best_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
// Deallocate memory blocks
 printf("Deallocate block 3\n");
 deallocate(addr3);
 print_memory();
 printf("\n");
// Allocate memory using worst-fit strategy
 printf("Worst-Fit Allocation:\n");
 addr1 = worst_fit(5);
 addr2 = worst_fit(10);
 addr3 = worst_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
 return 0;
}

