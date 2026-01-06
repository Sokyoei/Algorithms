import cv2

svm = cv2.ml.SVM.create()
svm.setC(0.1)
svm.setKernel(cv2.ml.SVM_RBF)
svm.save("SVM.xml")
svm.trainAuto()
svm.predict()

svm.load("SVM.xml")
