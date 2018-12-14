### 2018-12-07 ~ 2018-12-14
### **论文阅读1**
**题目**：RDFNet: RGB-D Multi-level Residual Feature Fusion for Indoor Semantic Segmentation

**作者**：Seong-Jin Park,Ki-Sang Hong,Seungyong Lee

**简介** ：ICCV2017

**技术要点** ：
在原来RGB的基础上融合了深度信息。

主要的融合方式有以下几种：
![image](https://github.com/3013216006/seminar/blob/master/18-12-14/rhfs.png)


本文是在refinenet的基础上修改的的，下图分别是本文方法RDFnet和Refinenet的网络结构图

![image](https://github.com/3013216006/seminar/blob/master/18-12-14/rdf1.png)

![image](https://github.com/3013216006/seminar/blob/master/18-12-14/refinenet.png)

在refinenet中核心部分结构如下：

![image](https://github.com/3013216006/seminar/blob/master/18-12-14/refinet.png)

在这个核心部分中的三个重要组成部分

![image](https://github.com/3013216006/seminar/blob/master/18-12-14/refinenet2.png)


**代码链接**：[代码](https://github.com/yun-liu/rcf)

**数据集**： NYUDv2和SUN RGBD

**原文实验效果**：都比refinenet好
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/res.png)

实验效果对比图
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/show.png)



---

### **实验1**
**实验意图与方向**：将原来的网络修改成RDFnet
**实验结果**：
迭代100轮后达到总体准确率17.04%

**实验总结**：应该网络哪里有问题

---
### **实验2**
**实验意图与方向**：在实验1的基础上修改RDFnet中网络CRP
**实验结果**：
迭代100轮后达到总体准确率39.34%

**实验总结**：仍然在Debug

---
### **实验3**
**实验意图与方向**：修改网络中，特征融合的方式，即修改add，改为concat
**实验结果**：
迭代100轮后达到总体准确率87.65%

**实验总结**：实验效果没有提升

---

### **论文阅读2**
**题目**：Depth-aware CNN for RGB-D Segmentation

**作者**：Weiyue Wangand Ulrich Neumann

**简介** ：ECCV2018

**作者单位**: University of Southern California, Los Angeles, California


**技术要点** ：

depth-aware convolution and depth-aware average pooling

**depth-aware convolution**:

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/gs2.png)

其中


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/gs3.png)

这样看不明白，对比原始的卷积的表达式：

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/gs1.png)

**depth-aware average pooling**:



![image](https://github.com/3013216006/seminar/blob/master/18-10-31/gs5.png)


同样这样看不明白，对比原始的池化的表达式：

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/gs5.png)

**代码链接**：[代码](https://github.com/yun-liu/rcf)

**数据集**： NYUDv2和SUN RGBD

**原文实验效果**：还没refinenet好。。
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/res2.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/res3.png)



