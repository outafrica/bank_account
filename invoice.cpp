#include "invoice.h"
using namespace std;


int main(){

    Invoice invoice{"part001", "Test Part 001", 10, 250};

    invoice.getInvoiveAmount();
}