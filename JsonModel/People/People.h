//
//  People.h
//  People
//
//  Created by 席银军 on 2017/10/14.
//  Copyright © 2017年 muhlenXi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface People : NSObject

@property (nonatomic,copy) NSString * name;     //!< 姓名
@property (nonatomic,strong) NSNumber * age;    //!< 年龄
@property (nonatomic,copy) NSString * occupation;       //!< 职业
@property (nonatomic,copy) NSString * nationality;      //!< 国籍

// 生成 Model
- (instancetype) initWithDictionary:(NSDictionary *) dict;

// 转换成字典
- (NSDictionary *) convertToDictionary;
@end
