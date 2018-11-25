#ifndef SUDOKU_HPP
#define SUDOKU_HPP

#include <string>
#include <vector>
#include <map>
#include <set>

using std::string;
using std::vector;
using std::map;
using std::set;

class sudoku {
    private:
        string digits;
        string rows;
        string cols;
        vector<string> squares;
        vector<vector<string>> unitlist;
        map<string, vector<vector<string>>> units;
        map<string, set<string>> peers;
    public:
        sudoku();
        void display_unitlist();
        void display_units();
        void display_peers();
        map<string, string> grid_values(string);
        map<string, string> parse_grid(string);
        bool assign(map<string, string>&, string, string);
        bool eliminate(map<string, string>&, string, string);
};
#endif