//
//  VietIdSDKController.h
//  VietidSDK-iOS
//
//  Created by Le Minh Son on 11/13/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AccessToken.h"
#import "VietIdException.h"
#import "UserInfo.h"
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

#define VERSION_NAME @"1.0.2"

#define EN @"en"
#define VI @"vi"
#define FR @"fr"

static NSInteger NATIVE = 0;//Show fullscreen of dialog authen
static NSInteger NATIVE_WITH_FALLBACK = 1; //Show fullscreen authen otherwise show web dialog to authen
static NSInteger WEB_DIALOG = 2;//Show Web Dialog for authen

@protocol OnVietIdResponse
-(void)onSuccess:(UserInfo*)userInfo;
-(void)onFailed:(VietIdException*) e;
@end

@protocol OnVietIdLoginCallback
-(void)onSuccess:(AccessToken*) accessToken;
-(void)onFailed:(VietIdException*) vietIdException;
-(void)onCancel;
@end

//For VietIdSDK public method and properties
@interface VietIdSDKController : NSObject

@property(nonatomic, strong) NSString* language;
@property(nonatomic, readonly) NSInteger actionType;
@property(nonatomic, strong) id<OnVietIdLoginCallback> onVietIdLoginCallback;
@property(nonatomic, strong) id<OnVietIdResponse> onVietIdResponse;

+(instancetype)sharedInstance;

-(void) configure;

-(NSString*)getCLientId;
-(NSString*)getRedirectUri;
-(NSString*)getClientSecret;
-(NSString*)getBundleId;

/**
 * Call to check logged in session on local
 *
 * @return boolean state true if token is valid otherwise
 */
-(BOOL)checkTokenOnLocal;

/**
 * Call to check logged in session with asynchronous from server check
 *
 */
-(void)checkTokenOnServer;

//For login/logout
-(void)login;

-(BOOL)logout;

-(void)logoutAsync:(void(^)(BOOL  success,VietIdException* error))callback;

//For get user information
/**
 * Get user info with asynchronous
 */
-(void)getUserInfoAsync:(void(^)(BOOL  success,VietIdException* error,UserInfo* userinfo))callback;
/**
 * Get user info with synchronous
 */
-(UserInfo*)getUserInfo;

-(void)disablePhone:(BOOL) disable;

-(NSString*)isDisablePhone;

@end

NS_ASSUME_NONNULL_END
