#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1
#define SIGSEGV	14 // the same as T_PGFLT

// mprotect usage
#define PROT_WRITE          0x002   // Writeable
#define PROT_READ           0x004   // User

typedef void (*sighandler_t)(int);

typedef struct
{
	uint addr; // Should be an address
	uint type; // Should be a protection level
} siginfo_t;

#endif
