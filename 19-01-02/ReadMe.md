### 2018-12-27 ~ 2019-01-02

### **实验1**
**实验意图与方向**：直接使用预测结果和ground truth的边界进行loss计算
**实验结果**： 85.82%

|实验内容|OA(%)|
|-----|-----|
|FCN|84.92|
|FCN+半卷积层|84.76|
|MTFCN+半卷积层+上层信息|85.21|
|MTFCN+半卷积层|85.42|
|MTFCN+半卷积层(sigmoid)|85.47|
|FCN+半卷积层+GT-edge-loss|85.82|



### **论文阅读**
**题目**：SentiGAN: Generating Sentimental Texts via Mixture Adversarial Networks
**作者**：

**论文出发点**：
在自然语言生成领域，GAN 所产生的不同情感文本通常存在质量差、缺乏多样性和模式崩溃的问题

**主要内容**：
 - 提出了一个新的框架 SentiGAN 来生成多样性的、高质量的、具有不同情感类别的文本。

![image](https://github.com/3013216006/seminar/blob/master/19-01-02/str.jpg)

 - 提出了一个新的基于惩罚的目标函数，让 SentiGAN 的每个生成器都能为特定情感标签产生多样性的文本。
 ![image](https://github.com/3013216006/seminar/blob/master/19-01-02/lam.jpg)

