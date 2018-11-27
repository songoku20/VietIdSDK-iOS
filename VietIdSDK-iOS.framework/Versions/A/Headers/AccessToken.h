//
//  AccessToken.h
//  VietidSDK-iOS
//
//  Created by Le Minh Son on 11/13/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AccessToken : NSObject

@property(nonatomic, weak) NSString* accessToken;
@property(nonatomic, weak) NSString* expiresIn;
@property(nonatomic, weak) NSString* tokenType;
@property(nonatomic, weak) NSString* scope;

+(AccessToken*) initFromDic:(NSDictionary*) dict;
+(AccessToken*)getCurrentAccessToken;
+(void)setCurrentAccessToken:(AccessToken*)accessToken;
-(NSDictionary*)toDict;
@end

NS_ASSUME_NONNULL_END
