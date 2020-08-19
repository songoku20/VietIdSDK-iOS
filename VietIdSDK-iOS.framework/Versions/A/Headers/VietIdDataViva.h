//
//  KingIdTalkDataKingHub.h
//  KingIdTalkSDK
//
//  Created by SUUNC SUUNC on 7/20/20.
//  Copyright © 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VietIdDataViva : NSObject

@property (nonatomic) NSInteger code;

@property (nonatomic, strong) NSString *status;

@property (nonatomic, strong) NSString *message;

@property (nonatomic, strong) NSDictionary *data;

+ (VietIdDataViva *)initFromDict:(NSDictionary *)dict;

- (NSDictionary *)toDict;

@end

NS_ASSUME_NONNULL_END
