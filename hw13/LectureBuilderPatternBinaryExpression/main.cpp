using namespace std;
#include <cstdlib>
#include <string>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "ExpBuilder.h"
#include "ExpParser.h"

int main(int argc, char** argv) {
    ExpBuilder builder;
    ExpParser parser;
    parser.setBuilder(&builder);
    parser.parse("(((30+500)*70)-(600/50))");
    Node* root = builder.getExpression();
    root->print();
    return 0;
}