#include <opencv2/opencv.hpp>

int main(int argc, char const* argv[]) {
    auto svm = cv::ml::SVM::create();
    // SVM 参数设置
    svm->setType(cv::ml::SVM::C_SVC);
    svm->setC(0.1);
    svm->setKernel(cv::ml::SVM::CUSTOM);
    auto term_criteria = cv::TermCriteria(cv::TermCriteria::MAX_ITER, 1000, 1e-10);
    svm->setTermCriteria(term_criteria);
    // svm->trainAuto();
    // svm->predict();
    // svm->calcError();
    svm->save("SVM.xml");

    // 加载模型
    auto model = svm->load("SVM.xml");

    return 0;
}
