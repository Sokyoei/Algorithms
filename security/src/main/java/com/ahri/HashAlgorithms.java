package com.ahri;

import java.math.BigInteger;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;

public class HashAlgorithms {
    public static final String MD5 = "MD5";
    public static final String SHA1 = "SHA-1";
    public static final String SHA256 = "SHA-256";
    public static final String SHA512 = "SHA-512";

    public static void main(String[] args) throws NoSuchAlgorithmException {
        MessageDigest hash_alg = MessageDigest.getInstance(HashAlgorithms.MD5);
        hash_alg.update("阿狸".getBytes(StandardCharsets.UTF_8));
        byte[] result = hash_alg.digest();
        System.out.println(Arrays.toString(result));
        System.out.println(new BigInteger(1, result).toString(16));

        // BouncyCastle
        // Security.addProvider(new BouncyCastleProvider());

    }
}
