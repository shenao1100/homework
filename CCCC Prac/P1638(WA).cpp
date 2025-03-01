#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>
struct rstSt {
    int start;
    int end;
};
int main() {
    int paint_count = 0, author = 0;

    std::cin >> paint_count >> author;
    int author_paint_count[author + 1] = {0};
    int paint[paint_count] = {0};
    for (int i = 0; i < paint_count; i++) {
        std::cin >> paint[i];
        author_paint_count[paint[i]]++;
    }
    int cover = 0, tmp_start = 1, tmp_end = 1, tmp_length = 0;
    //std::vector<std::vector<int>> result_list;
    std::vector<int> temp_list;
    std::vector<rstSt> rst;
    std::unordered_set<int> has_been_selected;
    for (int i = 0; i < paint_count; i++) {
        if (has_been_selected.find(paint[i]) == has_been_selected.end()) {
            has_been_selected.insert(paint[i]);
            cover++;
        }
        temp_list.push_back(paint[i]);

        std::vector<int> tmp = temp_list;
        //std::cout << "NEW TURN" << std::endl;
        int stop = 0;
        for (long long b = tmp.size() - 1; b > stop; b--) {
            //std::cout << tmp[b] << std::endl;
            if (temp_list.size() >= 2 && temp_list[0] == tmp[b]) {
                //std::cout << "clear " << tmp[b] << std::endl;
                temp_list.erase(temp_list.begin());
                tmp_start++;
                stop++;
            }else {
                break;
            }

        }


        if (cover == author) {
            //result_list.push_back(temp_list);
            temp_list.clear();
            rstSt rstStruct = rstSt();
            rstStruct.start = tmp_start;
            rstStruct.end = i+1;
            rst.push_back(rstStruct);
            tmp_start = i+2;
            cover = 0;
            has_been_selected.clear();
        }
    }
    tmp_start = 0;
    tmp_end = 0;
    tmp_length = 0;
    for (int i = 0; i < rst.size(); i++) {
        if (rst[i].end - rst[i].start < tmp_length || tmp_length == 0) {
            tmp_start = rst[i].start;
            tmp_end = rst[i].end;
            tmp_length = rst[i].end - rst[i].start;
        }
    }
    std::cout << tmp_start << " " << tmp_end << std::endl;

    return 0;
}