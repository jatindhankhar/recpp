//Demos a few algorithm in C++
# include <iostream>
# include <algorithm>
int main()
{
std::vector<std::string> words = {"When","I","Get","Older","I'll","be","stronger"};
std::cout<<"Words having length less than 4 "<<std::count_if(begin(words),end(words),[](std::string s){ return (s.size() <= 4); })<<std::endl;
std::vector<int> nums = {1,2,4,5,6,7,8};
std::cout<<"Returns true if any one of the element in range is even "<<std::any_of(begin(nums),end(nums),[](int i){ return i%2 == 0;})<<std::endl; // 1 means true;std::vector<int> gen(10);
//Iota fills the container from starting upto size
std::vector<int> gen(10);
std::iota(begin(gen),end(gen),1);
for(auto i : gen) std::cout<<i<<" ";std::cout<<std::endl;
}
