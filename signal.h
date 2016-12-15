#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1

typedef void (*sighandler_t)(int);

#define SIGSEGV  14 //--BOW-->>
#define PROT_NONE 0x000
#define PROT_READ 0x001
#define PROT_WRITE 0x003
typedef struct
{
	uint addr;
	uint type;
} siginfo_t; //--BOW-->>

#endif
