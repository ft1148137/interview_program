#include "matrics.h"
#include "iostream"
matrics::matrics(std::vector<std::vector<double>> matrics_input){
   //check matrics
    size_matrics[1] = matrics_input.size();//row
    size_matrics[0] = matrics_input[0].size();//cols
    for(int i = 0; i< size_matrics[1];i++){
        if(size_matrics[0] != matrics_input[i].size()){
            std::cout<<"input is not a matriccs"<<std::endl;
            return;
        }
    }
    matrics_ = matrics_input;
}

std::vector<std::vector<double>> matrics::get_matrics(){
    return matrics_;
}

bool matrics::addation(std::vector<std::vector<double>> addation_matrics, std::vector<std::vector<double>>& result_matrics){
    //check_demension
    if (size_matrics[0] != addation_matrics[0].size()){
        std::cout<<"matrics size is not same,can not make addation"<<std::endl;
        return 0;
    }
    if (size_matrics[1] != addation_matrics.size()){
        std::cout<<"matrics size is not same,can not make addation"<<std::endl;
        return 0;
    }
    result_matrics = std::vector<std::vector<double>>(size_matrics[1], std::vector<double>(size_matrics[0]));
    //addation matrics
    for(int i = 0; i<size_matrics[1]; i++){
        for(int j = 0; j<size_matrics[0]; j++){
          result_matrics[i][j] = matrics_[i][j] + addation_matrics[i][j];
        }
    }
    return 1;

}

bool matrics::multipucation(std::vector<std::vector<double>> multipucation_matrics,std::vector<std::vector<double>>& result_matrics){
    //check_demension
    if (size_matrics[0] != multipucation_matrics.size()){
        std::cout<<"matrics size does not match ,can not make multipucation"<<std::endl;
        return 0;
    }
    // multipucation matrics
    result_matrics = std::vector<std::vector<double>>(size_matrics[1], std::vector<double>(multipucation_matrics[0].size()));
    for(int i = 0; i < size_matrics[1]; i++){
        for(int j = 0; j < multipucation_matrics[0].size(); j++){
            result_matrics[i][j] = 0;
            for(int p = 0; p < size_matrics[0]; p++){
            result_matrics[i][j] += matrics_[i][p]*multipucation_matrics[p][j];
            }
        }
    }
        return 1;
}

bool matrics::multipucation(std::vector<double> multipucation_vector,std::vector<double>& result_vector){
    //check_demension
    if (size_matrics[0] != multipucation_vector.size()){
        std::cout<<"vector size does not match ,can not make multipucation"<<std::endl;
        return 0;
    }
    // multipucation vector
    result_vector = std::vector<double>(size_matrics[1],0.0);
    for(int i = 0; i < size_matrics[1]; i++){
        result_vector[i] = 0;
        for(int j = 0; j < size_matrics[0]; j++){
            result_vector[i] += matrics_[i][j]*multipucation_vector[j];
        }
    }
    return 1;
}
