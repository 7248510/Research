#include <cstdio>
#include <stdlib.h>
#include <iostream>
//A program to speed up exploit development
//This program doesn't consider security measures!
//Run this as root
//chmod this program
//Stanfords review of assembly language and University of Alaska's online notes helped with asm
void disas()
{
	//Disables address space layout randomization, I'm running an Ubuntu VM(20.0.4 LTS) 
	system("sudo bash -c 'echo 0 > /proc/sys/kernel/randomize_va_space'");
}
int testasm()
{
	__asm__("movl %esp, %eax"); //movl stack pointer moves to stores the value of esp
	//Compiling on g++ will return no return statement error, I'm working on a fix	
}
int commandPerl()
{
        //I'm using Perl instead of Python, I haven't figured out how to input as many A's and output them into a program efficiently 
        std::string perlc,perlca,perlc2,perlv,quotes,quotes2,space,numofA,perlcx, newEcho;
        perlc = "perl -e";
	perlc2 = "print ";
	perlca = "A";
	perlcx = "x";
	quotes = '"';
	quotes2 = "'";
	space = " ";
	newEcho = " && echo";
	printf("Input the amount of A's you'd like ");
	std::cin >> numofA;
        std::cout << quotes << perlc << space << quotes2 << perlc2 << quotes << perlca << quotes << space << perlcx << space << numofA << quotes2 << quotes << "\n";
	std::cout << perlc << space << quotes2 << perlc2 << quotes << perlca << quotes << space << perlcx << space << numofA << quotes2 <<  newEcho << "\n";
	return 0;
	//Use case examples below
	//./programName "perl -e 'print "A" x 34'"
	//Error code displaying segement fault
	//The second output is a backup, some programs wont pass the A'S to the command line
	/*caleb@ubuntu:~/Research/Athena$ perl -e 'print "A" x 20' && echo
	 *AAAAAAAAAAAAAAAAAAAA
	 *caleb@ubuntu:~/Research/Athena$ 
	*/
}


int main()
{
	printf("Disabling aslr\n");
	printf("Your stack pointer is 0x%x\n",testasm()); //%x will yield the address without 0x  	
	commandPerl();
}

