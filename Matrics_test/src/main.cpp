#include"matrics.h"
#include"vector.h"
#include"iostream"
int main(int argc, char *argv[]){
    std::cout<<"start test programm"<<std::endl;
    matrics matrics_1_test({{1,3,1},{2,4,2},{3,3,3}});
    matrics matrics_2_test({{1,2,1},{2,2,2},{3,3,4}});
    matrics matrics_3_test({{1,2,1},{2,2,2}});

    Vector vector_1_to_test({1, 2 ,3});
    Vector vector_2_to_test({4, 5, 6});
    Vector vector_3_to_test({4, 5});

    std::vector<std::vector<double>> matrics_test_result;
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
    //multipucate vector and matrics
    sucessful_flag = vector_1_to_test.multipucation(matrics_1_test.get_matrics(), vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate vector and matrics"<<std::endl;
    }

    //add 2 matrics
    sucessful_flag = matrics_1_test.addation(matrics_2_test.get_matrics(),matrics_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrics_test_result.size(); i++){
            for(int j = 0; j < matrics_test_result.size(); j++){
                std::cout<<" "<<matrics_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to add two matrics"<<std::endl;
    }
    //error demension alarm
    sucessful_flag = matrics_1_test.multipucation(matrics_3_test.get_matrics(),matrics_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrics_test_result.size(); i++){
            for(int j = 0; j < matrics_test_result.size(); j++){
                std::cout<<" "<<matrics_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate two matrics"<<std::endl;
    }
    //multipucate 2 matrics
    sucessful_flag = matrics_1_test.multipucation(matrics_2_test.get_matrics(),matrics_test_result);
    if(sucessful_flag == true){
        std::cout<<"[";
        for(int i = 0; i < matrics_test_result.size(); i++){
            for(int j = 0; j < matrics_test_result.size(); j++){
                std::cout<<" "<<matrics_test_result[i][j];
            }
            std::cout<<",";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate two matrics"<<std::endl;
    }
    //multipucate  matrics and vector
    sucessful_flag = matrics_1_test.multipucation(vector_1_to_test.get_vector(),vector_test_result);
    if(sucessful_flag == true){
        std::cout<<"[ ";
        for(int i = 0; i < vector_test_result.size();i++){
            std::cout<<vector_test_result[i]<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
    else{
        std::cout<<"failed to multipucate matrics and vector"<<std::endl;
    }
   return 0;
}
