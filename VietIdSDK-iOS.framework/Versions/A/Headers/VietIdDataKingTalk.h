//
// Created by SUUNC SUUNC on 7/23/20.
// Copyright (c) 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VietIdDataKingTalk : NSObject

@property (nonatomic) NSString *status;

@property (nonatomic) NSDictionary *result;

+ (VietIdDataKingTalk *)initFromDict:(NSDictionary *)dict;

+ (NSString *)defaultDescription;

- (NSDictionary *)toDict;

@end
