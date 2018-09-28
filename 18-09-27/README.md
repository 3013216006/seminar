### 2018-09-17 ~ 2018-09-26


###  **回顾实验0**

**实验意图与方向**：在实验5的基础上增加网络层数

**实验结果**：总体准确率为：78.92%（结果OA=24.83%）

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/7s.png)
![image](https://github.com/3013216006/seminar/blob/master/18-09-27/7o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-09-27/7.png)
---


### **实验1**
**实验意图与方向**：在实验0模型输出的结果中添加中值滤波

**实验结果**：
总体准确率为：79.4%

**实验总结**：实验效果并没有明显的提升

---

### **实验2**
**实验意图与方向**：在实验0的基础上，在网络的开始添加中值滤波

**实验结果**：总体准确率为：81.93%

**实验总结**：实验效果明显提升

---

### **实验3**
**实验意图与方向**：在实验2的基础上，在模型输出时添加中值滤波

**实验结果**：

总体准确率为：82.09%

**实验总结**：实验效果有所提升

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83.png)
![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83o.png)

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83b.png)
![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83m.png)

---
### **论文阅读1**
**题目**：R-FCN: Object Detection via Region-based Fully Convolutional Networks

**作者**：代季峰，何恺明，孙剑

**简介** ：NIPS2016

**技术要点** ：为了解决在POI池化后的平移不变性，提出position-sensitive pooling。

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/rfcn2.png)

**代码链接**：[代季峰的代码](https://github.com/daijifeng001/R-FCN)，Matlab版本

[作者推荐的代码])(https://github.com/YuwenXiong/py-R-FCN) python版本

**数据集**：COCO数据集和VOC数据集

**原文实验效果**：VOC2007和VOC2010上与Faster R-CNN的对比：R-FCN比Faster RCNN好！

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/rfcn1.png)

---
### **论文阅读2**
**题目**：CoupleNet:Coupling Global Structure with Local Parts for Object Detection

**作者**：Yousong Zhu, Chaoyang Zhao, Jinqiao Wang(中科院nlpr实验室)

**简介** ：ICCV2017

**技术要点** ：给R-FCN添加了全局信息

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/CN1.png)

给CoupleNet网络结构

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/CN2.png)


**代码链接**：[tshizys的代码](https://github.com/tshizys/CoupleNet)，python版本


**数据集**：COCO数据集和VOC数据集

**原文实验效果**：VOC2007和VOC2010上与R-FCN的对比：比R-FCN mAP高但是速度有所降低。

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/CN3.png)



