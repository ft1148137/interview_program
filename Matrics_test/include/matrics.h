#include <vector>
class matrics{
public:
    matrics(std::vector<std::vector<double>>& matrics_input);
    bool addation(std::vector<std::vector<double>>& addation_matrics, std::vector<std::vector<double>>& result_matrics);
    bool multipucation(std::vector<std::vector<double>>& multipucation_matrics,std::vector<std::vector<double>>& result_matrics);
    bool multipucation(std::vector<double>& multipucation_vector,std::vector<double>& result_vector);
    std::vector<std::vector<double>> get_matrics();
private:
    int size_matrics[2];
    std::vector<std::vector<double>> matrics_;
};
