# STD::VECTOR
# DYNAMIC ARRAY BACKED BY CONTIGUOUS MEMORY
- std::vector is implemented as a dynamic array: it stores elements in contiguous memory, like a plain array (T[]). It is a concrete data structure.
- When it runs out of capacity, it allocates a larger block, copies existing elements, and deallocates the old one.
- Memory allocation typically doubles capacity, making functions like push_back amoritzed O(1) -- if resize is called, it could cost O(N).
- In C++, defined in <vector> and belongs to std namespace.
- It’s a template class, meaning you can store any type: primitives, structs, classes, even other containers (e.g., vector<vector<int>>).
# WHY USE?
- It supports random access and cache efficiency.
- Allows fast (O(1)) random access via the subscript operator (vec[i]) or .at(i).
- Because elements are stored contiguously, it’s cache-friendly — faster traversal than, say, linked lists.
- However, insertions or deletions in the middle or front are O(n), since all subsequent elements must be shifted.
- Vectors also **manage memory and capacity automatically.**
- Automatically handles memory allocation/deallocation — no need for manual new/delete.
- Tip: Use .reserve(n) if you know how many elements you’ll need to avoid reallocation.
- Key methods:
  - push_back(n) - add the element n to the end
  - .pop_back() – remove from end
  - .insert(idx, n) – insert n at a specific index
  - .erase(idx) – remove specific index
  - .clear() – remove all elements
  - .size() and .capacity() – check current size vs allocated space
  - .resize(n) - changes the vector’s size to n: fills with default values if larger, truncates if smaller.
  - .capacity() - returns the total allocated space (in elements) before a resize is needed.
  - .reserve(n) - pre-allocates space for at least n elements, avoiding future reallocations.
  - emplace_back(args...) - constructs a new element in-place at the end using constructor args (faster than push_back() in some cases).
  - And way more methods...
# WHEN TO USE? WHEN TO AVOID?
- When you need fast indexed access (vec[i])
- You need a resizable array and don’t want to manage memory yourself
- You primarily insert/remove from the end
- You want cache-efficient iteration (e.g., in tight loops)
- You can predict the number of elements --> reserve(n)
- Avoid when you frequently insert/delete in the middle or front --> use deque or a list (links will be added)
- Avoid when you need stable pointers or references
  - Reallocation (when capacity grows) invalidates all pointers, references, and iterators, which is dangerous if you store raw pointers or references to vector elements.
- Avoid when you need a very large, fragmented memory usage.
  - Vector allocates one large block of contiguous memory. If memory is fragmented, this might fail.
  - Segmented memory handles gigabyte-scale dynamic structures better than vector.
- Avoid when you need custom memory management.
  - Vector has its own allocator and memory management. If you need full control over allocation (e.g., memory pools), you may want custom containers (template class) or allocator-aware structures.






