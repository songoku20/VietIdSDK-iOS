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

@property (nonatomic) NSString *status;

@property (nonatomic) NSString *message;

@property (nonatomic) NSString *code;

@property (nonatomic) NSDictionary *data;

+ (VietIdDataViva *)initFromDict:(NSDictionary *)dict;

+ (NSString *)defaultDescription;

- (NSDictionary *)toDict;

@end

NS_ASSUME_NONNULL_END
