class FizzBuzz {
private:

    int n;
    std::mutex mtx;
    std::condition_variable cv;
    int i = 1;

public:
    FizzBuzz(int n) {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        while(true)
        {
            std::unique_lock<mutex> lk(mtx);
            cv.wait(lk, [&]{ return ((i%3==0 && i%5!=0) || i>n); });
            if(i>n)return;

            printFizz();

            i++;

            lk.unlock();
            cv.notify_all();
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        while(true)
        {
            std::unique_lock<mutex> lk(mtx);
            cv.wait(lk, [&]{ return ((i%5==0 && i%3!=0 )|| i>n); });
            if(i>n)return;

            printBuzz();

            i++;

            lk.unlock();
            cv.notify_all();
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
    void fizzbuzz(function<void()> printBuzz) {
        while(true)
        {
            std::unique_lock<mutex> lk(mtx);
            cv.wait(lk, [&]{ return ((i%3==0 && i%5==0 )|| i>n); });
            if(i>n)return;

            printBuzz();

            i++;

            lk.unlock();
            cv.notify_all();
        }

    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while(true)
        {
            std::unique_lock<mutex> lk(mtx);
            cv.wait(lk, [&]{ return ((i%3!=0 && i%5!=0 )|| i>n); });

            if(i>n)return;

            printNumber(i);
            i++;

            lk.unlock();
            cv.notify_all();
        }
    }
};
