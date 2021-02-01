# libsvm

## 1. 台湾大学林智仁教授主页    
LIBSVM -- A Library for Support Vector Machines  
https://www.csie.ntu.edu.tw/~cjlin  
svm_tutorial  
https://www.csie.ntu.edu.tw/~piaip/svm/svm_tutorial.html  
sample  
https://www.csie.ntu.edu.tw/~cjlin/papers/guide/data/  
explained  
http://bytesizebio.net/2014/02/05/support-vector-machines-explained-well/  

## 2. libsvm动手实践
a. 简单应用  
./svm-train test.1  
./svm-scale test.1  
./svm-scale -l -1 -u 1 -s test.1.model.range test.1 > test.1.model.scale  
./svm-scale -s test.1.model.range test.1 > test.1.model.scale  
./svm-predict test.1 test.1.model test.1.predict  

b. 工具脚本应用  
检查数据  
python checkdata.py test.1  
优选参数Best c=8192.0, g=0.5 CV rate=97.1    
python grid.py test.1   
一步配置到位(其对grid.py、svm-train、svm-scale和svm-predict都进行了调用)  
python easy.py test.1  

c. 简单实例化  
数据格式转换  
python libsvm2csv.py test.1 test.11 4  
python csv2libsvm.py test.11 test.111  
test.111应该还原成test.1  

d. demo  
https://github.com/clysto/libsvm-demo  
性别预测小例子  
https://blog.csdn.net/zilongreco/article/details/41390385?utm_medium=distribute.pc_relevant_download.none-task-blog-baidujs-1.nonecase&depth_1-utm_source=distribute.pc_relevant_download.none-task-blog-baidujs-1.nonecase  
增加个linux下的Makefile  
https://files.cnblogs.com/files/dong1/svmregress.tar.gz 

e. svm.h里的几个接口都很容易用
svm_train
svm_save_model
svm_load_model
svm_predict
实际应用时直接加载model, 然后predict就行, 训练模型才需要配置参数，也可以不配置，默认也行. 

f. http://cs229.stanford.edu/proj2008/NhamSiangliulueYeung-PredictingModeOfTransportFromIphoneAccelerometerData.pdf  
  
## 3. 第三方参考文献  
tutorial-for-libsvm-c  
https://stackoverflow.com/questions/8122227/tutorial-for-libsvm-c  
https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/svmtutorial.pdf    
https://www.cse.unr.edu/~bebis/CS479/   

## 4. 串口模组
JY61资料下载  
下载地址:http://download.wit-motion.com/download/JY61/JY61.rar  
把上面链接粘贴到浏览器直接下载（推荐使用）  
百度网盘资料下载  
百度网盘链接：https://pan.baidu.com/s/1faXCw7hHhxHU7g4CVXy9aw  
验证码：3q0s  

