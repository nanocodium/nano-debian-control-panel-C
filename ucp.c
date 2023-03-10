#include <stdio.h>
#include <stdlib.h>
int main (){
	int choice;
	system("clear");
	printf("Nano Debian Control Panel 0.1\n");
	printf("\n1. Get dependencies\n2. Download minecraft 1.19.3 server\n3. Edit eula.txt\n4. run server with 4gb of ram\n5. run server with 8gb of ram\n");
	printf("Type a number and hit enter: ");
	scanf(" %d", &choice);	
	switch (choice) {
		case 1:
		system("sudo apt install openjdk-17-jre");
		int choice = 0;
		break;
		case 2:
		system("mkdir mc_server && cd mc_server && wget https://piston-data.mojang.com/v1/objects/c9df48efed58511cdd0213c56b9013a7b5c9ac1f/server.jar ");
		break;
		case 3:
		system("cd mc_server && java -jar server.jar nogui");
		system("cd mc_server && nano ./eula.txt");
		break;
		case 4:
		system("cd mc_server && java -Xms4G -Xmx4G -jar server.jar");
		break;
		case 5:
		system("cd mc_server && java -Xms8G -Xmx8G -jar server.jar");
		break;
	}
	return 0;	
}
