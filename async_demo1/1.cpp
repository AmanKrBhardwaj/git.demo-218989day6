#include <iostream>
#include <future>
/*
     A     B    C

     optiom 1: one after the other. Always complete one thing
     before starting the next task

     Name - Single thread technique
     ////////////////////////////////////////////////////////

     option 2: I will complete all task in such a way tha i "practically
     start all of them at the same time" but keep juggling them based 
     on some criteria

     Name- Multi-thread approach
     ///////////////////////////////////////////////////////////

     option 3 : map number of tasks amongst number of available "workers"

     Nmae - Parallel execution
     ////////////////////////////////////////////////////////////

     option 4 : Start a task. Either delegate it to another worker or do it yourself
     after some time.

     If someone else is doing a task, monitor it, wait for their worl to be done,
     take follow-up actions accordingly

     Name - Asynchronous execution
*/

/*
    2 tasks
    calculate factorial of 5
    calculate square of a number given by the user 
*/
int square(std::future<int>& ft) {

    std::cout << "Hello from square. I hsve started my work !\n";
    int number=ft.get();
    return number * numberl;

}
int factorial(int number){
    if(number < 0){
        throw std::runtime_error("negative number error!");
    }

}
int factorial(int number){
    if(number == 0 || number == 1){
        retun 1;
    }
    else {

    }
}

int main(){
    std::promise<int> pr;
    std::future<int> ft =pr.get_future();
    std::future<int> result_ft = std::async(std::launch::async, &square, std::ref(ft))

    std::cout << factorial(5);
    std::cout << "Result of factorial is: " <<result_ft.get();
}