#include <iostream>
#include <vector>

class CustomVector{
    private:
     std::vector<int> vector;
    public:
     CustomVector(){vector.reserve(4);}
     virtual ~CustomVector() {}

     void custom_pushBack(int tmp){
         if (tmp == 5) std::cout << "tmp is 5" << std::endl;
         vector.push_back(tmp%2);
     }

     void custom_popBack(){
         vector.pop_back();
     }

     size_t custom_size(){
         std::cout<<"size vector "<< vector.size() << std::endl;
         return   vector.size();
     }

     size_t custom_cappacity(){
         std::cout << "vecotr capacity: " << vector.capacity() << " vecotr sizeof: " <<  sizeof(vector) << std::endl;
         return sizeof(vector);
     }
};


int main(){

    CustomVector vector;
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(5);
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(3);
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(8);
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(10);
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(5);
    vector.custom_size();
    vector.custom_cappacity();
    vector.custom_pushBack(1);
    vector.custom_size();
    vector.custom_cappacity();


    return -1;
}
