# security 安全、密钥算法

## 编码算法

### url

### base64

## 哈希加密算法

### MD5

### SHA

### RipeMD160

### Hmac

Hmac(Hash-based Message Authentication Code)
加盐哈希算法

## 对称加密算法

| 算法 | 密钥长度    | 工作模式            |
| :--- | :---------- | :------------------ |
| AES  | 56/64       | ECB/CBC/PCBC/CTR... |
| DES  | 128/192/256 | ECB/CBC/PCBC/CTR... |
| IDEA | 128         | ECB                 |

### AES

### DES

### IDEA

## 非对称加密算法

```java
import java.security.*;
import java.security.MessageDigest;  // 哈希算法

import org.bouncycastle.*;
```
