//
// Created by Rocco Wang on 16/4/7.
//

#include "myA_search.h")
#include <cmath>

myA_search::myA_search(Graph *graph, bool _DEBUG) : uniform_cost(graph) {
    title = "myA_search";
    calc = &myA_cost_calc;
    DEBUG = _DEBUG;
}

//返回的是当前结点到Bucharest的直线距离与Hirsova到Bucharest的直线距离的差
//仅能用于搜索到Hirsova的路径
int myA_search::myA_cost_calc(node current, string child, Graph *g) {
    return abs(g->getHeu(child) - g->getHeu("Hirsova"));
//    return current.cost - (g->getHeu(current.name) + 183) + g->getDis(current.name, child) + (g->getHeu(child) + 183);
}