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

CoupleNet网络结构

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/CN2.png)

- 最上面这条支路就是原本的R-FCN；
- 中间这条支路是用来encode global info的，对于一个region proposal，依次通过 RoI Pooling，k x k的conv以及1 x 1 conv；
- 最下面的支路是用来encode context prior的，对于一个region proposal，首先选择以这个proposal为中心，面积是原来2倍的proposal，一样依次通过RoI Pooling，k x k conv以及1 x 1 conv；
- 最后把local FCN和Global FCN的结果couple起来，作者选择的是先各自通过1x1conv调整激活值的scale，然后对应位置元素相加，最后通过一个softmax进行分类；


**代码链接**：[tshizys的代码](https://github.com/tshizys/CoupleNet)，python版本


**数据集**：COCO数据集和VOC数据集

**原文实验效果**：VOC2007和VOC2010上与R-FCN的对比：比R-FCN mAP高但是速度有所降低。

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/CN3.png)

---

### 2018-09-27 ~ 2018-10-10

### **实验1**
**实验意图与方向**：

**实验结果**：迭代100轮后达到总体准确率81.64%

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83.png)
![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83o.png)

![image](https://github.com/3013216006/seminar/blob/master/18-09-27/83m.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-10/83.png)

**实验总结**：

---

### **实验2**
**实验意图与方向**：在实验1的基础上，加深了网络层数

**实验结果**：

迭代50轮后达到总体准确率81.47%

**实验总结**：实验效果有所提升


 ### Paper1
 **U-Net: Convolutional Networks for Biomedical Image Segmentation**
present a net and traning strategy
 - net like the u
 [tmp](img='architecture_U-net')
 - ?

 ### Paper2
 **SegNet: A Deep Convolutional Encoder-Decoder Architecture for Image Segmentation**
 based on FCN add the Max-pooling Idices in the decoder filters

all result imporved a bit than FCN

dataset: CamVid road scenes


### Paper3
** DeepLab: Semantic Image Segmentation with Deep Convolutional Nets, Atrous Convolution, and Fully Connected CRFs **

##### contribute:
 - atrous convolution
 - propose atrous spatial pyramid pooling
 - combining methods from DCNNs and probabilistic graphical models.

##### pooling:
 - LargeFOV single branch, r = 12
 - ASPP-S four branch r={2,4,8,12}
 - ASPP-L four branch r={6,12,18,24}

### Paper4
** Fully Convolutional Networks for Semantic Segmentation **


### Paper5
** ENet: A Deep Neural Network Architecture for Real-Time Semantic Segmentation **

目的：快，小
方法：上来就先下采样，然后使用1*1投影 卷积 1*1增加维度


dataset: CamVid, Cityscapes and SUN datasets

### Paper6
** LinkNet: Exploiting Encoder Representations for Efficient Semantic Segmentation **

be faster by using block which is [1*1,m,m/4]->[3*3,m/4*m/4]->[1*1,m/4,n]

### Paper7
** Densely Connected Convolutional Networks **

using the dense block
by using x_l = H_l(x_l-1) + x_l-1

### Paper8
** **

### Paper9
** MULTI-SCALE CONTEXT AGGREGATION BY DILATED CONVOLUTIONS **

### Paper10
PixelNet: Towards a General Pixel-Level Architecture
**dataset**：NYU-v2 depth dataset BSDSdataset


### Paper11
ICNet for Real-Time Semantic Segmentation
on High-Resolution Images

