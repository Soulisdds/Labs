	#include <stdio.h>
    #include <stdlib.h>
	int *array3;

	    int  main(int argc, char**argv){
	    printf("argc = %d\n",argc);
		array3  = malloc( (argc -1 ) * sizeof(int));
	for (int fill = 0 ; fill < (argc -1); fill++){
	  array3[fill] 	  = atoi (argv[fill +1]);
   	  printf("array3[%2d] = %3d\n",fill,array3[fill]);
	     }
	void free( void *array3);
    return 0;
    }

