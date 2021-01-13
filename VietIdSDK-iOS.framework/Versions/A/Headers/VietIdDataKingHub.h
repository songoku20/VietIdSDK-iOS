//
//  KingIdTalkDataKingHub.h
//  KingIdTalkSDK
//
//  Created by SUUNC SUUNC on 7/20/20.
//  Copyright © 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VietIdDataKingHub : NSObject

@property (nonatomic) NSString *provider;

@property (nonatomic) NSString *error_code;

@property (nonatomic) NSString *message;

@property (nonatomic) NSString *signal;

@property (nonatomic) NSDictionary *data;

+ (VietIdDataKingHub *)initFromDict:(NSDictionary *)dict;

+ (NSString *)defaultDescription;

- (NSDictionary *)toDict;

@end

NS_ASSUME_NONNULL_END
