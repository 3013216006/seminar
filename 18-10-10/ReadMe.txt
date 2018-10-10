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

