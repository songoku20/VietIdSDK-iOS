//
//  KingIdTalkDataApple.h
//  KingIdTalkSDK
//
//  Created by Nguyen Anh Thai on 23/12/2020.
//  Copyright © 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VietIdDataApple : NSObject

@property (nonatomic) NSString *provider;

@property (nonatomic) NSString *error_code;

@property (nonatomic) NSString *message;

@property (nonatomic) NSString *signal;

@property (nonatomic) NSDictionary *data;


+ (VietIdDataApple *)initFromDict:(NSDictionary *)dict;

+ (NSString *)defaultDescription;

- (NSDictionary *)toDict;

@end

NS_ASSUME_NONNULL_END
