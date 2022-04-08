#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test = 0;
	std::cin>>test;
	while(test--){
	    int num_of_friends = 0;
	    std::cin>>num_of_friends;
	    int divide = num_of_friends/4;
	    int rem = num_of_friends%4;
	    if(rem == 0){
	        std::cout<<divide<<std::endl;
	    }
	    else{
	        std::cout<<divide+1<<std::endl;
	    }
	}
	return 0;
}
