### 2018-10-24 ~ 2018-10-31
### **论文阅读1**
**题目**：Richer Convolutional Features for Edge Detection

**作者**：Yun Liu Ming-Ming Cheng Xiaowei Hu Kai Wang1 Xiang Bai

**简介** ：CVPR2017 && TPAMI2019

**技术要点** ：
- 使用richer convolutional features, 实现了一个新的更加好的边界检测网络

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/rcf.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/rcfres.png)

- 使用了新的loss计算方法

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/loss.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/loss2.png)


**代码链接**：[代码](https://github.com/yun-liu/rcf)

**数据集**： BSDS500数据集和NYUD数据集

**原文实验效果**：现阶段最好
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/rcfres-2.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/rcfres-3.png)

---
### **论文阅读2**
**题目**：Holistically-Nested Edge Detection

**作者**：Saining Xie， Zhuowen Tu

**简介** ：ICCV2015


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/h.png)

**技术要点** ：

- 整体图片的训练和预测

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/net.png)

	+ 用了类平衡交叉熵函数

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/loss3.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/loss4.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/loss5.png)

- 多尺度多层级的特征学习


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/multi.png)


**数据集**： BSDS500数据集

**原文实验效果**：

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/res.png)


---


### **实验00**

**实验意图与方向**：修改FCN网络结构
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/fcn.jpg)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/edgefcn.jpg)

**实验结果**：总体准确率86.35%

### **实验01**
**实验意图与方向**：修改loss，提高准确度
将edge detection的loss从原来的交叉熵修改该为SSIM+交叉熵

**实验结果**：迭代100轮后达到总体准确率81.89%


**实验总结**：

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/1o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/1.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/2o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/2.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/3o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/3.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/4o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/4.png)
---

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/0e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/0oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/0e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/1e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/1oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/1e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/2e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/2oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/2e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/3e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/3oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/3e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/4e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/4oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/4e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/5e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/5oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/5e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/6e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/6oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/6e.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1022/7e.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/7oe.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-24/1024/7e.png)

---




### **实验1**
**实验意图与方向**：在实验00基础上添加SSIM的loss

**实验结果**：总体准确率84.9%

**实验总结**：实验效果下降

---

### **实验2**
**实验意图与方向**：在实验00的基础上，修改网络添加RCF

**实验结果**：总体准确率为：85.23%

**实验总结**：实验效果无明显改善

---

### **实验3**
**实验意图与方向**：在实验01的基础上，修改网络添加RCF

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/net2.png)

**实验结果**：

总体准确率为：81.77%

**实验总结**：实验效果与该网络最好效果相差不多



![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/2.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/2o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/2e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/3.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/3o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/3e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/4.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/4o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/4e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/5.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/5o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/5e.png)


![image](https://github.com/3013216006/seminar/blob/master/18-10-31/6.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/6o.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/6e.png)

---

### **实验4**
**实验意图与方向**：在实验00的基础上，在数据集中添加深度信息（重新制作数据集）

**实验结果**：目前的总体准确率为：89.1-89.3%

**实验总结**：实验效果有提升，需要进一步思考如何更好的应用深度信息

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/0image.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/0gt.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/0res.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/17image.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/17gt.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/17res.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/3image.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/3gt.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/3res.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/4image.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/4gt.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/4res.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/19image.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/19gt.png)
![image](https://github.com/3013216006/seminar/blob/master/18-10-31/1101/19res.png)

---

### **实验5**
**实验意图与方向**：在实验4的基础上，添加结构相似性为loss

**实验结果**：目前的总体准确率为：88.5-88.8%

**实验总结**：实验效果下降，可能是因为edge detection在总loss中的比重太大

---

### **实验6**
**实验意图与方向**：在实验4的基础上，修改成论文阅读1中的loss

**实验结果**：目前的总体准确率为：27%

**实验总结**：没有收敛


---

### **论文阅读1**
**题目**：Direction-aware Spatial Context Features for Shadow Detection

**作者**：Xiaowei Hu, Lei Zhu, Chi-Wing Fu, Jing Qin, Pheng-Ann Heng

**简介** ：CVPR2018

**技术要点** ：
- 使用空间RNN提高阴影检测结果

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/srnn1.png)

- loss使用weighted cross entropy

- 网络结构

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/srnn3.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/srnn4.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/srnn2.png)

**数据集**：  SBU Shadow Dataset, UCF Shadow Dataset

**原文实验效果**：在两个阴影检测数据机上都取得了最好的结果，并有很大的提升

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/srnnres.png)

---
### 其他
**screen 的使用方法**
- screen -S yourname -> 新建一个叫yourname的session
- screen -ls -> 列出当前所有的session
- screen -r yourname -> 回到yourname这个session
- screen -d yourname -> 远程detach某个session
- screen -d -r yourname -> 结束当前session并回到yourname这个session



![image](https://github.com/3013216006/seminar/blob/master/18-10-31/screen-ls.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/screen.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/screen-s.png)

![image](https://github.com/3013216006/seminar/blob/master/18-10-31/screen-ls2.png)
