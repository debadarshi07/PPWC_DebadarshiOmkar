#include <stdio.h>
#include <arpa/inet.h>

int main() {
    struct sockaddr_in servaddr;
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(16); // Convert to network byte order

    printf("Port in network byte order=%d\n", servaddr.sin_port);
    printf("Port in host byte order=%d\n", ntohs(servaddr.sin_port)); // Convert back to host byte order

    return 0;
}

/*

Output:
Port=16

Reason:
The sin_port field directly holds the integer value 16, and printf displays it as-is without interpreting it in terms of byte order.
Correct Usage for Network Communication:
To use the sin_port field correctly for network communication, the port number should be converted to network byte order using htons. For example:


Corrected Output:
Port in network byte order=4096   // Raw value in network byte order
Port in host byte order=16        // Converted back to host byte order
*/