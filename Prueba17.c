// Prueba de socket simple
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h>

int main(){
	int packet_socket;
	packet_socket = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
	if (packet_socket == -1){
		perror("Error al abrir");
		exit(1);
	}else{
        perror ("exito al abrir");
	}
    close (packet_socket);
}