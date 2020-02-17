#include <vector>
class matrices{
public:
    matrices(std::vector<std::vector<double>> matrices_input);
    bool addation(std::vector<std::vector<double>> addation_matrices, std::vector<std::vector<double>>& result_matrices);
    bool multipucation(std::vector<std::vector<double>> multipucation_matrices,std::vector<std::vector<double>>& result_matrices);
    bool multipucation(std::vector<double> multipucation_vector,std::vector<double>& result_vector);
    std::vector<std::vector<double>> get_matrices();
private:
    int size_matrices[2];
    std::vector<std::vector<double>> matrices_;
};
