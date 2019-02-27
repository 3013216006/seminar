### 2018-10-31 ~ 2018-11-06

### **实验0**
**实验意图与方向**：在数据集中添加深度信息（重新制作数据集）

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

### **实验01**
**实验意图与方向**：在实验4的基础上，添加结构相似性为loss

**实验结果**：目前的总体准确率为：88.5-88.8%

**实验总结**：实验效果下降，可能是因为edge detection在总loss中的比重太大

---


### **实验1**
**实验意图与方向**：在实验0的基础上，调整权重

**实验结果**：目前的总体准确率为：89.5%

**实验总结**：实验效果稍有提高

---

### **实验2**
**实验意图与方向**：在实验01的基础上，调整权重

**实验结果**：目前的总体准确率为：88.8%

**实验总结**：实验效果持平，SSIM能够有效的提高边界检测的结果，但是不能够很好的提高分割的结果

---


### **实验3**
**实验意图与方向**：在实验0的基础上，在网络中加入中值滤波

**实验结果**：目前的总体准确率为：88.75%

**实验总结**：实验效果下降，因为在FCN中多次使用了均值池化，在一定程度少与均值池化有类似效果

---

### **实验4**
**实验意图与方向**：在实验0的基础上，进一步修改了数据集

**实验结果**：目前的总体准确率为：85%

**实验总结**：实验效果下降，主要是边界效果进一步下降

---

| 方法 | (full_reference) OA | (no_boundary)OA |
| ------ | ------ | ------ |
| ONE_7 | 0.869 | 0.898 |
| UCal5 |  0.871 | 0.901 |
| CASIA2 | 0.881 | 0.911 |
| NLPR3 |  0.882 | 0.912 |
| HUSTW5 | 0.886 | 0.916 |
| our |  0.895 | - |

---
|方法|imp_surf|building |low_veg|tree|car|clutter|
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
|HUSTW5|0.906 |0.947 |0.823 |0.892 |0.598 |0.288 |
|our|0.995|0.937|0.750|0.848|0.672|0.457|
|空洞卷积|0.855|0.879|0.919|0.895|0.671|0.647|







