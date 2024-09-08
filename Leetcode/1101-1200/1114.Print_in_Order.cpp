class Foo {
public:
    int count;

    std::mutex mtx;
    condition_variable cv;

    Foo() {
        count = 0;
    }

    void first(function<void()> printFirst) {
        std::unique_lock<std::mutex> lk(mtx);
        cv.wait(lk, [this]{return count == 0;});

        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        count+=1;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        std::unique_lock<std::mutex> lk(mtx);
        cv.wait(lk, [this]{return count == 1;});
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        count+=1;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
        std::unique_lock<std::mutex> lk(mtx);
        cv.wait(lk, [this]{return count == 2;});
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        count+=1;
    }
};
