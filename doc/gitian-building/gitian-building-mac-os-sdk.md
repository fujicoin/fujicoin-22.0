Gitian building Mac OS SDK
==========================

Get Xcode-12.1-12A7403-extracted-SDK-with-libcxx-headers.tar.gz
--------------------------

To get `Xcode-12.1-12A7403-extracted-SDK-with-libcxx-headers.tar.gz` see following page.
[How to extract MacOS SDK](/contrib/macdeploy/README.md)


or download from 
[bitcoincore.org](https://bitcoincore.org/depends-sources/sdks/Xcode-12.1-12A7403-extracted-SDK-with-libcxx-headers.tar.gz)

Copy SDK to Gitian VM:
----------------------

Login to the VM and:

```bash
mkdir -p gitian-builder/inputs
mv Xcode-12.1-12A7403-extracted-SDK-with-libcxx-headers.tar.gz gitian-builder/inputs
```

