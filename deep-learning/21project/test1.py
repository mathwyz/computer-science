# coding:utf-8
#从tensorflow.examples.tutorials.mnist引入模块
from tensorflow.examples.tutorials.mnist import input_data
# 从MNIST_data/中读取MNIST数据
mnist=input_data.read_data_set("MNIST_data/",one_hot=True)


#查看训练数据大小
print(mnist.train.images.shape)
print(mnist.train.labels.shape)

#查看验证数据大小
print(mnist.validation.images.shape)
print(mnist.validation.labels.shape)

#查看测试数据大小
print(mnist.test.images.shape)
print(mnist.test.labels.shape)

#　打印出第０张图片的向量表示
print(mnist.train.images[0,:])


# 将mnist数据集合提取出来，并保存为图片文件

from tensorflow.examples.tutorials.mnist import input_data
import scipy.misc
import os

# 读取MNIST 数据集　．如果不存在会事先下载
mnist=input_data.read_data_sets("MNIST_data/",one_hot=True)

# 把原始图片保存在MNIST_data/raw/文件夹下
# 如果没有这个文件夹，会自动创建

save_dir='MNIST_data/raw'
if os.path.exists(save_dir) is False:
    os.makedirs(save_dir)


# 保存前20张图片
for i in range(20):
    # 请注意，mnist.train.images[i,:]就表示第i张图片(序号从0开始)
    image_array=mnist.train.images[i,:]
    # Tensorflow中的MNIST图片是一个784维的向量，我们重新把它还原成28x28维度的图像
    image_array=image_array.reshape(28,28)
    # 保存文件的格式为:
    # mnist_train_0.jpg,mnist_train_1.jpg,...,mnist_train_19.jpg.
    filename=save+dir+'mnist_train_%d.jpg'% i

    # 将image_array保存为图片
    # 先用scipy.misc.toimage转换为图像，再调用save直接保存
    scipy.misc.toimage(image_array,cmin=0,cmax=1).save(filename)


    # 打印出第0张训练图片的标签

    print(mnist.train.labels[0,:])


 # 打印出前20张图片的标签
from tensorflow.examples.tutorials.mnist import input_data
import numpy as np
# 读取MNIST数据集.如果不存在会事先下载
mnist=input_data.read_data_sets("MNIST_data/",one_hot=True)
#　看前20张训练图片的label
for i in range(20):
    # 得到独热表示，形如(0,1,0,0,0,0,0,0,0,0)
    one_hot_label=mnist.train.labels[i,:]
# 通过np.argmax,可以直接获得原始的label
# 因为只有１位是１，其他都是０
label =np.argmax(one_hot_label)
print('mnist_train_%d.jpg label:　%d' %(i,label))
