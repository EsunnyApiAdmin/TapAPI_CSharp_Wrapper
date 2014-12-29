TapAPI_CSharp_Wrapper
=====================

易盛启明星API的C#封装

### 原理:
  使用SWIG创建易盛启明星API的c# wrapper文件。

### 调用关系：
  CSharp_Demo <--> TapQuoteAPIWrapper.dll <--> TapQuoteAPI.dll<br />
  CSharp_Demo <--> TapTradeAPIWrapper.dll <--> TapTradeAPI.dll<br />
  其中TapQuoteAPI.dll和TapTradeAPI.dll由易盛公司提供。<br />
  TapQuoteAPIWrapper.dll和TapTradeAPIWrapper.dll由SWIG生成。<br />


目录结构:
---
<pre>
├─ CSharp_Demo                        //C#客户端
│  ├─ConfigHelper
│  ├─Controller
│  ├─Forms
│  ├─Properties
│  └─Wrapper_CS
│      ├─TapQuoteAPIWrapper
│      └─TapTradeAPIWrapper
├─TapAPI                             //易盛API
│  ├─include
│  └─lib
│      └─windows
├─TapAPIWrapper_CPP                  //SWIG生成的cpp文件，用于生成xxxWrapper.dll
│  ├─TapQuoteAPIWrapper
│  └─TapTradeAPIWrapper
└─TapAPIWrapper_CSharp               //SWIG生成的cs文件，在C#客户端中引用
    ├─TapQuoteAPIWrapper
    └─TapTradeAPIWrapper
</pre>

