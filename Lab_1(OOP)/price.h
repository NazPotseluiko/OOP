#ifndef PRICE_H
#define PRICE_H

struct Price {
    int hryvnias;
    int kopecks;
};

Price add(const Price& a, const Price& b);
Price multiply(const Price& price, int quantity);
Price roundPrice(const Price& price);

#endif