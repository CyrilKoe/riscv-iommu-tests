#ifndef PLATFORM_H
#define PLATFORM_H

#define MEM_BASE    (0x80000000)
#define MEM_SIZE    (0x10000000)

// Base address of the IOMMU Programming Interface
#define IOMMU_BASE_ADDR            0x2000a000ULL

#define printf noprintf
int noprintf (const char * format, ...);

#endif
