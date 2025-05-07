#include "price.h"


Price add(const Price& a, const Price& b) {
    int total_kopecks = (a.hryvnias + b.hryvnias) * 100 + a.kopecks + b.kopecks;
    return { total_kopecks / 100, total_kopecks % 100 };
}

Price multiply(const Price& price, int quantity) {
    int total_kopecks = (price.hryvnias * 100 + price.kopecks) * quantity;
    return { total_kopecks / 100, total_kopecks % 100 };
}

Price roundPrice(const Price& price) {
    int total_kopecks = price.hryvnias * 100 + price.kopecks;
    int remainder = total_kopecks % 10;
    if (remainder < 5) {
        total_kopecks -= remainder;
    }
    else {
        total_kopecks += (10 - remainder);
    }
    return { total_kopecks / 100, total_kopecks % 100 };
}