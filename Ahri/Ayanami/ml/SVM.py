import cv2
import joblib
from sklearn.datasets import load_wine
from sklearn.metrics import accuracy_score, mean_squared_error, r2_score
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC

X, Y = load_wine(return_X_y=True)
X_train, X_test, y_train, y_test = train_test_split(X, Y, train_size=0.8, random_state=20)

svc = SVC()
svc.fit(X_train, y_train)
y_predict = svc.predict(X_test)
print(f"mean_squared_error: {mean_squared_error(y_test, y_predict)}")
print(f"accuracy_score: {accuracy_score(y_test, y_predict)}")
print(f"r2_score: {r2_score(y_test, y_predict)}")
joblib.dump(svc, filename="svc.model")


svm = cv2.ml.SVM.create()
svm.setC(0.1)
svm.setKernel(cv2.ml.SVM_RBF)
svm.save("SVM.xml")
svm.trainAuto()
svm.predict()

svm.load("SVM.xml")
