#include "matrices.h"
#include "iostream"
matrices::matrices(std::vector<std::vector<double>> matrices_input){
   //check matrices
    size_matrices[1] = matrices_input.size();//row
    size_matrices[0] = matrices_input[0].size();//cols
    for(int i = 0; i< size_matrices[1];i++){
        if(size_matrices[0] != matrices_input[i].size()){
            std::cout<<"input is not a matriccs"<<std::endl;
            return;
        }
    }
    matrices_ = matrices_input;
}

std::vector<std::vector<double>> matrices::get_matrices(){
    return matrices_;
}

bool matrices::addation(std::vector<std::vector<double>> addation_matrices, std::vector<std::vector<double>>& result_matrices){
    //check_demension
    if (size_matrices[0] != addation_matrices[0].size()){
        std::cout<<"matrices size is not same,can not make addation"<<std::endl;
        return 0;
    }
    if (size_matrices[1] != addation_matrices.size()){
        std::cout<<"matrices size is not same,can not make addation"<<std::endl;
        return 0;
    }
    result_matrices = std::vector<std::vector<double>>(size_matrices[1], std::vector<double>(size_matrices[0]));
    //addation matrices
    for(int i = 0; i<size_matrices[1]; i++){
        for(int j = 0; j<size_matrices[0]; j++){
          result_matrices[i][j] = matrices_[i][j] + addation_matrices[i][j];
        }
    }
    return 1;

}

bool matrices::multipucation(std::vector<std::vector<double>> multipucation_matrices,std::vector<std::vector<double>>& result_matrices){
    //check_demension
    if (size_matrices[0] != multipucation_matrices.size()){
        std::cout<<"matrices size does not match ,can not make multipucation"<<std::endl;
        return 0;
    }
    // multipucation matrices
    result_matrices = std::vector<std::vector<double>>(size_matrices[1], std::vector<double>(multipucation_matrices[0].size()));
    for(int i = 0; i < size_matrices[1]; i++){
        for(int j = 0; j < multipucation_matrices[0].size(); j++){
            result_matrices[i][j] = 0;
            for(int p = 0; p < size_matrices[0]; p++){
            result_matrices[i][j] += matrices_[i][p]*multipucation_matrices[p][j];
            }
        }
    }
        return 1;
}

bool matrices::multipucation(std::vector<double> multipucation_vector,std::vector<double>& result_vector){
    //check_demension
    if (size_matrices[0] != multipucation_vector.size()){
        std::cout<<"vector size does not match ,can not make multipucation"<<std::endl;
        return 0;
    }
    // multipucation vector
    result_vector = std::vector<double>(size_matrices[1],0.0);
    for(int i = 0; i < size_matrices[1]; i++){
        result_vector[i] = 0;
        for(int j = 0; j < size_matrices[0]; j++){
            result_vector[i] += matrices_[i][j]*multipucation_vector[j];
        }
    }
    return 1;
}
