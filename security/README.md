# security

安全、密钥算法

加密：保证数据的保密性。
认证：确保数据发送和接收者的真实性以及数据的完整性。认证系统主要有 `口令`、`标识符`、`信物`、`智能卡`、`指纹`、`视网膜`等。
数字签名：

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
