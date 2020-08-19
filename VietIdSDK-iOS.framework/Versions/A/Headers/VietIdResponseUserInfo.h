//
//  VietIdResponseUserInfo.h
//  VietIdSDK
//
//  Created by Le Minh Son on 11/27/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VietIdDataKingTalk.h"
#import "VietIdDataVietId.h"
#import "VietIdDataViva.h"

NS_ASSUME_NONNULL_BEGIN

@interface VietIdResponseUserInfo : NSObject

@property(nonatomic) NSInteger signal;
@property(nonatomic) NSInteger errorCode;
@property(nonatomic, strong) NSString* message;
@property(nonatomic, strong) VietIdDataViva *dataViva;
@property(nonatomic, strong) VietIdDataVietId *dataVietId;
@property(nonatomic, strong) VietIdDataKingTalk *dataKingTalk;

+ (VietIdResponseUserInfo*) initFromDic:(NSDictionary*) dict;

- (NSDictionary *)toDict;

@end
NS_ASSUME_NONNULL_END
