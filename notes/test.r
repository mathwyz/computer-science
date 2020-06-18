library(zoo)
x<- c( 1,2,3,6,7,8)
zz <- zoo(x,x)
zr <- as.zooreg(zz)
