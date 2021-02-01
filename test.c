#include <string.h>
#include <iostream>
#include "svm.h"

int main(){
    
    struct svm_model *model = svm_load_model("./test.model");

    double result;
	//predict 身高180cm, 体重85kg
	svm_node xnode[3];
	xnode[0].index = 1;
	xnode[0].value = 161;
	xnode[1].index = 2;
	xnode[1].value = 85;
	xnode[2].index = -1;
	result = svm_predict(model, xnode);
	std::cout<<result<<" "<<std::endl;
	//predict 身高161cm,体重50kg
	xnode[0].index = 1;
	xnode[0].value = 180;
	xnode[1].index = 2;
	xnode[1].value = 40;
	xnode[2].index = -1;
	result = svm_predict(model, xnode);
	std::cout<<result<<" "<<std::endl;
 
    return 0;
}
