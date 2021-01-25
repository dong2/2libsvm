# svm-list

## 1. libsvm
台湾大学林智仁教授主页  
LIBSVM -- A Library for Support Vector Machines  
https://www.csie.ntu.edu.tw/~cjlin  
入门指南翻译  
https://blog.csdn.net/sinat_25857925/article/details/70052532  
应用手册翻译  
https://blog.csdn.net/pangpang1239/article/details/7483895  
libsvm使用方法  
https://blog.csdn.net/yushupan/article/details/78998128  
测试数据  
https://www.csie.ntu.edu.tw/~cjlin/papers/guide/data/  
网友blog  
https://www.cnblogs.com/zhizhan/tag/svm/  
性别预测小例子  
https://blog.csdn.net/zilongreco/article/details/41390385?utm_medium=distribute.pc_relevant_download.none-task-blog-baidujs-1.nonecase&depth_1-utm_source=distribute.pc_relevant_download.none-task-blog-baidujs-1.nonecase  
应用示例  
NhamSiangliulueYeung-PredictingModeOfTransportFromIphoneAccelerometerData.pdf  
https://www.baidu.com/link?url=WVMH-GPPwkBHcykH7qupVhxY_lKtMVTMzXoHKW1njvAmUOP6sMCZeoCIo37VzdhbR6HyAcag-Y2SMUbzb0JrBVU-hW7SwhBOJ0egYqLPC9xtKdx1TrzKPAj-B4lUoJW-jBseLm3elkSWxbPGiz7FzgK9pZghUfiuBtim-RtpZHa&wd=&eqid=cf5ced2f00021277000000066005595e  
libsvm回归  
http://blog.sina.com.cn/s/blog_5980835e0100drwx.html  
phraug/phraug2数据转换  
https://github.com/zygmuntz/phraug  
https://github.com/zygmuntz/phraug2  

### libsvm动手实践
简单应用  
./svm-train test.1  
./svm-scale test.1  
./svm-scale -l -1 -u 1 -s test.1.model.range test.1 > test.1.model.scale  
./svm-scale -s test.1.model.range test.1 > test.1.model.scale  
./svm-predict test.1 test.1.model test.1.predict  
python easy.py test.1.model test.1 test.11  

简单实例化  
python libsvm2csv.py test.1 test.11 4  
python csv2libsvm.py test.11 test.111  
test.111应该还原成test.1  

    
## 2. svmlight
康奈尔大学Thorsten Joachims教授的主页  
http://svmlight.joachims.org/  
  
  
## 3. 第三方参考文献  
https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/svmtutorial.pdf  
https://www.cse.unr.edu/~bebis/CS479/  
https://www.cnblogs.com/dong1/p/14043892.html  

