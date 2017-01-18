#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
/*
int fd = socket(AF_INET, SOCK_DGRAM,0);
	struct sockaddr_in add = {AF_INET, htons(9000),inet_addr("127.0.0.1")};
*/
int main () {
	int ssid, csid;
	struct sockaddr_in serv_addr, cli_addr;
	char buffer[100];	
	ssid = socket(AF_INET, SOCK_STREAM, 0);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(5000);
	bind(ssid, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
	listen(ssid, 5);
	int counter = 0;
	while(1) {
		int len = sizeof(cli_addr);
		csid = accept(ssid, (struct sockaddr *)&cli_addr, &len);
		counter++;
		int pid = fork();
		if(pid == 0) {
			while(1) {
				printf("%d\n", counter);
				recv(csid, buffer, 100, 0);
				send(csid, buffer, 100, 0);
			}
		}
		else close(ssid);
	}
	return 0;
}
