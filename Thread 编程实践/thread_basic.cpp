
// 1. 启动线程
// 知识点： thread join jooinable detach std::ref()

#include <thread>
#include <stdio.h>
#include <iostream>
using namespace std;

void worker(int a, string& str){

    printf("hello thread. %d \n", a);

    this_thread::sleep_for(chrono::milliseconds(1000));
    printf("worker Done. \n");

    str = "reference string";

}


int main(){
    // 完整启动线程案例
    // thread t(func, args...)
    // thread t(worker);

    string param;

    thread t(worker, 666, ref(param));  //引用传递 std::ref()

    // thread t;

    // 等待线程结束
    // t.join();
    // 1. t.join() 如果不加，会在析构时提示异常，出现core dumped
    //    只要线程t启动了，就必须要join()

    // 2. 若线程t没有启动，去执行t.join(),会异常
    //    只要线程t没有启动，一定不能join()

    // t.detach();  // 分离线程，取消管理权，使得线程称为野线程，不建议使用

    // 3. 野线程，不需要join(), 线程交给系统管理，程序退出后，所有线程才退出

    if(t.joinable()){  // 如果可以join(), 那就join()

        t.join();  // 等待线程结束
    }

    cout << param << endl;

    // this_thread::sleep_for(std::chrono::milliseconds(2000));
   
    printf("Done. \n");

    return 0;
}