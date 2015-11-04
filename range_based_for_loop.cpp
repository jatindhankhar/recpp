# include <iostream>
# include <vector>
# include <iterator>
int main()
{
    std::vector<int> arr  = {1,34,6,77};
    //Traditional looping
    std::cout<<"Good old loops \n";
    for(int i=0;i<arr.size();i++)
        std::cout<<arr[i]<<" ";std::cout<<std::endl;
    //Use iterators
    std::cout<<"Use iterators \n";
    for(std::vector<int>::iterator it = begin(arr);it != end(arr); ++it)
     std::cout<<(*it)<<" ";std::cout<<std::endl;
    //Use auto
    std::cout<<"Use auto \n";
    for(auto it = std::begin(arr); it != std::end(arr) ; it++)
    std::cout<<(*it)<<" ";std::cout<<std::endl;

    //Mind Blown
    std::cout<<"Range based loops \n";
    for(auto it : arr) std::cout<<it<<" ";std::cout<<std::endl;
}
