//
// Created by SUUNC SUUNC on 7/23/20.
// Copyright (c) 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VietIdDataKingTalk : NSObject

@property (nonatomic) NSString *status;

@property (nonatomic) NSDictionary *result;
/////////////////////////////////
@property (nonatomic) NSString *provider;

@property (nonatomic) NSString *error_code;

@property (nonatomic) NSString *message;

@property (nonatomic) NSString *signal;

@property (nonatomic) NSDictionary *data;

+ (VietIdDataKingTalk *)initFromDict:(NSDictionary *)dict;

+ (VietIdDataKingTalk *)initFromDictDebug:(NSDictionary *)dict;

+ (NSString *)defaultDescription;

- (NSDictionary *)toDict;

+ (NSString *)defaultDescriptionDebug;

- (NSDictionary *)toDictDebug;

@end
