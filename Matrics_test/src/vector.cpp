#include "vector.h"

Vector::Vector(std::vector<double> vector_input){
     vector_ = vector_input;
}

std::vector<double> Vector::get_vector(){
    return vector_;
}

bool Vector::addation(std::vector<double> vector_addation, std::vector<double>& vector_result){
    //check_demension
    if (vector_addation.size() != vector_.size()){
        std::cout<<"Vector size is not same,can not make addation"<<std::endl;
        return 0;
    }
    // Vector addation
    vector_result = std::vector<double>(vector_.size(),0.0);
    for (int i = 0; i< vector_addation.size(); i++){
        vector_result[i] = vector_addation[i] + vector_[i];
    }
    return 1;
}

bool Vector::multipucation(std::vector<std::vector<double>> matrices_multipucation, std::vector<double> &vector_result){
    //check_demension
    std::cout<<"notice a vector * matrices is actually vector' * matrices"<<std::endl;
    if (vector_.size() != matrices_multipucation.size()){
       std::cout<<"matrices size does not match ,can not make multipucation"<<std::endl;
       return 0;
    }
    // Vector Multipucation
    vector_result = std::vector<double>(vector_.size(),0.0);
    for(int i = 0; i < matrices_multipucation[0].size(); i++){
       vector_result[i] = 0;
       for(int j = 0; j < vector_.size(); j++){
          vector_result[i] += matrices_multipucation[j][i] * vector_[j];

       }
    }
    return 1;
}

bool Vector::multipucation(std::vector<double> vector_multipucation,std::vector<double> &vector_result){
    //check_demension
    if (vector_multipucation.size() != vector_.size()){
        std::cout<<"Vector size is not same,can not make addation"<<std::endl;
        return 0;
    }
    // Vector Multipucation
    vector_result = std::vector<double>(vector_.size(),0.0);
    for (int i = 0; i< vector_multipucation.size(); i++){
        vector_result[i] = vector_multipucation[i] * vector_[i];
    }
    return 1;
}
