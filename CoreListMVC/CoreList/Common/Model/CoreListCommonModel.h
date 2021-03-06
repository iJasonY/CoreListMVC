//
//  CoreListCommonModel.h
//  CoreListMVC
//
//  Created by muxi on 15/3/12.
//  Copyright (c) 2015年 沐汐. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+MJKeyValue.h"





@interface CoreListCommonModel : NSObject


/**
 *  服务器id
 */
@property (nonatomic,assign) NSInteger mid;




/**
 *  数据处理
 *
 *  @param obj 原始数据
 *
 *  @return 数组
 */
+(NSArray *)modelPrepare:(id)obj;





/**
 *  模型数组校验
 */
+(BOOL)check:(NSArray *)models;






@end
