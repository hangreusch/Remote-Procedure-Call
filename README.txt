This is a program using RPC (Remote Procedure Calls). The server can concurrently handle request (sorting an array of numbers) 
from multiple clients at the same time. I use Solaris machine as a server, and Linux machines as clients. 

To run my RPC program, please follow these steps:

1/ on server side (Solaris), run command:
./sorting_server

2/ on client side (Linux), run command:
make -f makefile.sorting

then run command:
./sorting_client IP_address_server
I tested my program on server name Lincoln, its IP address is:
140.158.128.6, so the command must be:
./sorting_client 140.158.128.6

3/output:
on server side, output is execution time. 
on client side, output is sorted array (by quick sort), and execution time.
the execution time on server side and client side are the same

