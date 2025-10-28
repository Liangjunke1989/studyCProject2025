//
// Created by 梁俊可 on 25-5-21.
//

#ifndef PRIVATE_HEADER_H
#define PRIVATE_HEADER_H
#endif //PRIVATE_HEADER_H
/*
    private_header.h 和 public_header.h 的主要区别如下：

    1、访问权限范围
        private_header.h: 私有头文件，仅在项目内部使用，不对外暴露
        public_header.h:  公共头文件，可以被外部模块或用户访问
    2、使用场景
        private_header.h:
            内部实现细节的声明
            不希望被外部依赖的函数和变量声明
            项目内部工具函数的接口定义
        public_header.h:
            对外提供的API接口声明
            可被其他模块引用的函数和数据结构
            库或框架的公共接口定义
    3、保护机制
        private_header.h: 通过文件组织或编译配置限制外部访问
        public_header.h: 通常配合 #ifdef __cplusplus 等预处理指令提供C/C++兼容性
    4、项目结构影响
        private_header.h: 改动不会影响外部模块的编译
        public_header.h: 改动可能需要重新编译所有依赖该头文件的模块
 */