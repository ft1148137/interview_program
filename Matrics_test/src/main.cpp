#include"matrices.h"
#include"vector.h"
#include"iostream"
int main(int argc, char *argv[]){
    std::cout<<"start test programm"<<std::endl;
    matrices matrices_1_test({{1,3,1},{2,4,2},{3,3,3}});
    matrices matrices_2_test({{1,2,1},{2,2,2},{3,3,4}});
    matrices matrices_3_test({{1,2,1},{2,2,2}});

    Vector vector_1_to_test({1, 2 ,3});
    Vector vector_2_to_test({4, 5, 6});
    Vector vector_3_to_test({4, 5});

    std::vector<std::vector<double>> matrices_test_result;
    std::vector<double> vector_test_result;
    bool sucessful_flag;
    //error demension alarm
    vector_1_to_test.addation(vector_3_to_test.get_vector(),vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to add two vector"<<std::endl;
    }
    //add 2 vector
    sucessful_flag = vector_1_to_test.addation(vector_2_to_test.get_vector(), vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to add two vector"<<std::endl;
    }
    //multipucate 2 vector
    sucessful_flag = vector_1_to_test.multipucation(vector_2_to_test.get_vector(), vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate two vector"<<std::endl;
    }
    //multipucate vector and matrices
    sucessful_flag = vector_1_to_test.multipucation(matrices_1_test.get_matrices(), vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate vector and matrices"<<std::endl;
    }

    //add 2 matrices
    sucessful_flag = matrices_1_test.addation(matrices_2_test.get_matrices(),matrices_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrices_test_result.size(); i++){
            for(int j = 0; j < matrices_test_result[0].size(); j++){
                std::cout<<" "<<matrices_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to add two matrices"<<std::endl;
    }
    //error demension alarm
    sucessful_flag = matrices_1_test.multipucation(matrices_3_test.get_matrices(),matrices_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrices_test_result.size(); i++){
            for(int j = 0; j < matrices_test_result[0].size(); j++){
                std::cout<<" "<<matrices_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate two matrices"<<std::endl;
    }
    //multipucate 2 matrices
    sucessful_flag = matrices_1_test.multipucation(matrices_2_test.get_matrices(),matrices_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrices_test_result.size(); i++){
            for(int j = 0; j < matrices_test_result[0].size(); j++){
                std::cout<<" "<<matrices_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate two matrices"<<std::endl;
    }
    //multipucate  matrices and vector
    sucessful_flag = matrices_1_test.multipucation(vector_1_to_test.get_vector(),vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate matrices and vector"<<std::endl;
    }
   return 0;
}
