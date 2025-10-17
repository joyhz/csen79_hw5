/*
 * Names: Yuto Fraley, Theodore Griffin - Jones, Michael Tiburcio, Joy Zhu
 * Emails: yfraley@scu.edu, tgriffinjones@scu.edu, mtiburcio@scu.edu, jhzhu@scu.edu
 * recipe for containers using C-style array
 */
#ifndef BAG_H
#define BAG_H
namespace csen79 {

class Bag {
    static constexpr size_t DATASIZE = 1000;    // array size
public:
    using Data = int;   // create an alias for the data
    Bag(): data{0} {}

    // rule of 5
    ~Bag() = default;
    Bag(const Bag &);
    Bag(Bag &&);
    Bag &operator=(const Bag &);
    Bag &operator=(Bag &&rhs);

    // access functions
    const Data &getData(const int) const;
    void setData(const int, const Data &);
    void enQ(const Data &);
    Data deQ();
    void print() const;
    bool isEmpty() const;
    bool isFull() const;
    std::size_t size() const;

private:
    // data storage
    Data data[DATASIZE];
};

}
#endif // BAG_H
