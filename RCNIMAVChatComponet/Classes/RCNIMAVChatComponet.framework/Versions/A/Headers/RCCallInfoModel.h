//
//  RCCallInfoModel.h
//  AFNetworking
//
//  Created by long108 on 2018/8/3.
//

#import <Foundation/Foundation.h>

@interface RCCallInfoModel : NSObject

@property(nonatomic,assign) UInt64 callID;
/** 用户ID */
@property (copy, nonatomic) NSString *user_accid;
/** 用户Token */
@property (copy, nonatomic) NSString *user_accid_token;

/** 医生ID */
@property (copy, nonatomic) NSString *doctor_accid;
/** 医生Token */
@property (copy, nonatomic) NSString *doctor_accid_token;
@property (copy, nonatomic) NSString *doctor_name;
@property (copy, nonatomic) NSString *doctor_portrait;

@end
