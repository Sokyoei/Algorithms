# LLM

Large Language Model 大语言模型

## 下载大模型

- [huggingface]
- [魔搭社区]

## 部署方式

=== "transformers"

    ```python title="run_with_transformers.py"
    --8<-- "AI/bigmodel/Llama/deploy/run_with_transformers.py"
    ```
=== "transformers_pipline"

    ```python title="run_with_transformers_pipline.py"
    --8<-- "AI/bigmodel/Llama/deploy/run_with_transformers_pipline.py"
    ```

=== "openai"

    ```python title="run_with_openai.py"
    --8<-- "AI/bigmodel/Llama/deploy/run_with_openai.py"
    ```

=== "ollama"

    --8<-- "AI/\bigmodel/docs/ollama.md"

=== "[llama.cpp]"

    ```shell
    git clone https://github.com/ggerganov/llama.cpp
    make -j16 LLAMA_CUDA=1
    ```

## 量化调参

[LLaMA-Factory]

[huggingface]: https://huggingface.co/
[魔搭社区]: https://modelscope.cn/home
[LLaMA-Factory]: https://github.com/hiyouga/LLaMA-Factory
[llama.cpp]: https://github.com/ggerganov/llama.cpp

## ??

Pre-Trained Model 预训练模型 -> Fine-Tuned Model 精细模型
