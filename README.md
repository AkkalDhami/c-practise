# Dynamic memory allocation in C

It is a core concept for managing memory at runtime rather than at compile time.

Instead of declaring fixed-size variables or arrays, you request memory from the heap as needed.

---

C provides functions in <stdlib.h> to allocate and manage memory dynamically :

- `malloc()` → allocate memory (uninitialized)
- `calloc()` → allocate memory (initialized to zero)
- `realloc()` → resize allocated memory
- `free()` → release allocated memory

---

### 1. malloc() — Memory Allocation

Allocates a block of memory of given size.

```c
int *ptr;
ptr = (int *)malloc(5 * sizeof(int));
```

- Allocates memory for 5 integers
- Returns NULL if allocation fails
- Memory contains garbage values

---

### 2. calloc() — Contiguous Allocation

Allocates memory and initializes it to zero.

```c
int *ptr;
ptr = (int *)calloc(5, sizeof(int));
```

- Allocates memory for 5 integers
- All values initialized to 0

---

### 3. realloc() — Resize Memory

Changes size of previously allocated memory.

```c
ptr = (int *)realloc(ptr, 10 * sizeof(int));
```

- Expands or shrinks memory
- May move memory to a new location

---

### 4. free() — Deallocate Memory

Releases allocated memory back to the system.

```c
free(ptr);
ptr = NULL;
```

---

## Example Program

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entered Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
```