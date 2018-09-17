### 2018-09-10 ~ 2018-09-16

###  **实验1**

**实验意图与方向**：遥感图像语义分割

**实验来源**：使用论文[Tiramisu](https://arxiv.org/abs/1611.09326)的方法；

- 代码地址[github](https://github.com/HasnainRaz/FC-DenseNet-TensorFlow)

**实验基础**：

- 已有成果 \ 结果
	+ FCN OA(63%)

- 已有数据 \ 可下载到的数据
	+ 甲方给的
	+ ISPRS[数据说明下载地址](http://www2.isprs.org/commissions/comm2/wg4/vaihingen-2d-semantic-labeling-contest.html)

**实验结果**：
总体准确率为：62.07%
<figure class="third">
    <img src="1.png"><img src="1o.png"><img src="1s.png">
</figure>

###  **实验2**

**实验意图与方向**：在实验1的基础上增加crf

**实验来源**：使用论文[Tiramisu](https://arxiv.org/abs/1611.09326)的方法，使用crf改进；

- 代码地址[github](https://github.com/HasnainRaz/FC-DenseNet-TensorFlow)
- Tensorflow CRF[link](https://www.tensorflow.org/api_guides/python/contrib.crf)

**思路 \ 改进概述**：主要思路是因为看到这样的实验结果，以及deeplab的想法
<figure class="half">
    <img src="27.png"><img src="27o.png">
</figure>

**实验基础**：

- 已有成果 \ 结果
	+ Tiramisu OA(62%)

- 已有数据 \ 可下载到的数据
	+ 甲方给的
	+ ISPRS[数据说明下载地址](http://www2.isprs.org/commissions/comm2/wg4/vaihingen-2d-semantic-labeling-contest.html)

**实验结果**：
总体准确率为：62.54%
<figure class="third">
    <img src="27.png"><img src="27crf.png"><img src="27o.png">
</figure>


---

