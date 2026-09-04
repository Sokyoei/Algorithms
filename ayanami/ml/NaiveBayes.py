from sklearn.datasets import fetch_20newsgroups
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB

X, Y = fetch_20newsgroups()
X_train, X_test, y_train, y_test = train_test_split(X, Y)

gnb = GaussianNB()
