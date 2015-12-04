typedef struct
{
	char nickname[256];
	char words[256];
} massage;


massage get_msg();
void show_msg(massage msg);
void send_msg(massage msg,int fd);
massage get_msg(char * nickname)
{
	massage msg;
	strcpy(msg.nickname,nickname);	
	scanf("%s",msg.words);
	return msg;
}
void show_msg(massage msg)
{
	printf("%s:\t%s\n",msg.nickname,msg.words);
}
void send_msg(massage msg,int fd)
{
	write(fd,&msg,sizeof(msg));
}
