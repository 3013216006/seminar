### 2018-09-27 ~ 2018-10-10

### **实验1**
**实验意图与方向**：修改loss，提高准确度
将edge detection的loss从原来的交叉熵修改该为SSIM

**实验结果**：迭代100轮后达到总体准确率80.123%


**实验总结**：

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/34.jpg)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/34o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/34.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/35.jpg)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/35o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/35.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/42.jpg)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/42o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/42.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/43.jpg)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/43o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/43.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/54.jpg)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/54o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/54.png)

---

### **实验2**
**实验意图与方向**：在实验1的基础上，进一修改loss，
将edge 的特产体哦那的loss修改为SSIM+交叉熵

**实验结果**：
迭代100轮后达到总体准确率81.16%

**实验效果图**

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/0o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/0.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/0oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/0e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/2o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/2.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/2oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/2e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/3o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/3.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/3oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/3e.png)

**实验总结**：
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/res.jpg)


---
### **实验3**
**实验意图与方向**：在实验1的基础上，进一修改修改网络结构

**实验结果**：
迭代100轮后达到总体准确率81.69%

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/vsi.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/0o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/0.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/0oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/0e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/1o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/1.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/1oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/1e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/2o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/2.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/2oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/2e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/3o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/3.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/3oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-17/1018/3e.png)

**实验效果图**

---

### 论文阅读笔记
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

---
### Paper12
