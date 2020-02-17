#include <vector>
#include <iostream>
class Vector{
public:
    Vector(std::vector<double> vector_input);
    std::vector<double> get_vector();
    bool addation(std::vector<double> vector_addation,std::vector<double>& vector_result);
    bool multipucation(std::vector<std::vector<double>> matrics_multipucation,std::vector<double>& vector_result);
    bool multipucation(std::vector<double> vector_multipucation,std::vector<double>& vector_result);
private:
    std::vector<double> vector_;
};
