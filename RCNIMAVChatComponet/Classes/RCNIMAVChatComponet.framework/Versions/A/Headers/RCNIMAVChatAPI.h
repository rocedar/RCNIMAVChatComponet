//
//  RCNIMAVChatAPI.h
//  AFNetworking
//
//  Created by long108 on 2018/8/3.
//

#import <Foundation/Foundation.h>

typedef void(^RCSuccessHandler)(id obj);
typedef void(^RCFailureHandler)(NSError *error);

@interface RCNIMAVChatAPI : NSObject

#pragma mark - 云信视频咨询

/**
 获取云信账号信息
 
 @param order_id 订单ID
 */
+ (void)getNIMAccountInfoWithOrder_id:(NSString *)order_id
                       successHandler:(RCSuccessHandler)successHandler
                         errorHandler:(RCFailureHandler)errorHandler;


/**
 结束视频通话
 
 @param order_id 订单ID
 */
+ (void)endVideoCallWithOrder_id:(NSString *)order_id
                  successHandler:(RCSuccessHandler)successHandler
                    errorHandler:(RCFailureHandler)errorHandler;

@end
