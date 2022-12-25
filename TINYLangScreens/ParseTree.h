#pragma once

//
// Created by Mohamed Ali on 29-Nov-22.
//

#ifndef PARSER_PARSETREE_H
#define PARSER_PARSETREE_H

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <set>

class ParseTree {
private:
    int curPos;
    int line;
    int i;
    std::vector<std::string> tokensList;
    std::vector<int> tokensPerLine;
    std::vector<std::string> codeList;
    std::vector<std::string> errors;
    std::set<std::string> symbols;
    std::string curToken;
    std::string peekToken;
    class Node {
    public:
        std::string Data;
        std::vector<Node*> Children;
        Node();
        Node(std::string value) {
            Data = value;
        }
    };
    Node* rootNode;
    std::vector<Node*> createdNodes;
public:
    ParseTree(std::vector<std::string> tokens, std::vector<std::string> code, std::vector<int> tokensPerLine) {
        rootNode = new Node((std::string)"PROGRAM");
        this->tokensList = tokens;
        this->codeList = code;
        this->tokensPerLine = tokensPerLine;
        curPos = 0;
        line = 0;
        i = 0;
        nextToken();
    }
    ParseTree(ParseTree& orgTree) {
        rootNode = new Node("PROGRAM");
        rootNode->Children = orgTree.rootNode->Children;
        this->codeList = orgTree.codeList;
        this->tokensList = orgTree.tokensList;
    }
    ParseTree() {
        rootNode = new Node("PROGRAM");
        curPos = 0;
        line = 0;
        i = 0;
        nextToken();
    }
    ~ParseTree();
    std::vector<std::string> getErrors();
    void setAttributes(std::vector<std::string> tokenList,
        std::vector<std::string> codeList, std::vector<int> tokensPerLine);
    void nextToken();
    bool checkToken(std::string kind);
    bool match(std::string kind);
    bool isComparisonOperator();
    void errorDetection(std::string msg);
    void program();
    void statement(Node* parent, std::stack<Node*> s);
    void comparison(Node* parent);
    void expression(Node* currExpression);
    void term(Node* parent);
    std::string unary(Node* parent);
    std::string primary(Node* parent);
    void semiColon();
    void insertRead(Node* parent, std::string id);
    void insertWrite(Node* parent, Node* self);
    std::vector<Node*> insertIf(Node* parent);
    std::vector<Node*> insertRepeat(Node* parent);
    Node* insertAssign(Node* parent, std::string value);
    Node* insertExpression(Node* parent);
    Node* insertTerm(Node* parent);
    Node* insertUnary(Node* parent, std::string value);
    void insertPrimary(Node* parent, std::string value);
    Node* insertComparison(Node* parent);
};


#endif //PARSER_PARSETREE_H

