# VietIdSDK-iOS

[![CI Status](https://img.shields.io/travis/songoku20/VietIdSDK-iOS.svg?style=flat)](https://travis-ci.org/songoku20/VietIdSDK-iOS)
[![Version](https://img.shields.io/cocoapods/v/VietIdSDK-iOS.svg?style=flat)](https://cocoapods.org/pods/VietIdSDK-iOS)
[![License](https://img.shields.io/cocoapods/l/VietIdSDK-iOS.svg?style=flat)](https://cocoapods.org/pods/VietIdSDK-iOS)
[![Platform](https://img.shields.io/cocoapods/p/VietIdSDK-iOS.svg?style=flat)](https://cocoapods.org/pods/VietIdSDK-iOS)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

VietIdSDK-iOS is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'VietIdSDK-iOS', '1.3.1-bizfly'
```

## Initialize

Insert your id and secretKey

```objc
#import <VietIdSDK-iOS/VietIdSDKController.h>

[VietIdSDKController.sharedInstance configure:YOUR_CLIENT_ID clientSecret:YOUR_CLIENT_SECRET];
```

Add OnVietIdLoginCallback delegate to handle login callback

```objc
- (void)onCancel {
// login cancel
}

- (void)onFailed:(nonnull VietIdException *)KingIdException {
// login failed
}

- (void)onSuccess:(nonnull VietIdAccessToken *)accessToken {
// login successfully
}
```

## More

All about VietIdSDK is down below.

### Check Token

On local

```objc
BOOL checkToken = [[VietIdSDKController sharedInstance] checkTokenOnLocal];
```

On server, add OnVietIdResponse delegate to handle events callback

```objc
[[VietIdSDKController sharedInstance] checkTokenOnServer];

-(void)onSuccess:(VietIdUserInfo*)userInfo{
// successfully
}
-(void)onFailed:(VietIdException*) e{
// failed
}
```

### Log in via VietId

```objc
[[VietIdSDKController sharedInstance] login];
```

### Log out via VietId

synchronous

```objc
BOOL logout = [[VietIdSDKController sharedInstance] logout];
```

asynchronous

```objc
[[VietIdSDKController sharedInstance] logoutAsync:^(BOOL success, VietIdException * _Nonnull error) {
if(success){
//Logout successfully.
}else{
//Logout failed.
}
}];
```

### Get user info

synchronous

```objc
VietIdUserInfo* info = [[VietIdSDKController sharedInstance] getUserInfo];
```

asynchronous

```objc
[[VietIdSDKController sharedInstance] getUserInfoAsync:^(BOOL success, VietIdException * _Nonnull error, VietIdUserInfo * _Nonnull userinfo) {
if(success){
//successfully.
}else{
//failed.
}
}];
```

```objc
[[VietIdSDKController sharedInstance] getUserInfoAsync2:^(BOOL  success,VietIdException* error,VietIdUserInfo* userinfo, VietIdDataViva* dataViva, VietIdDataKingTalk* dataKingTalk) {
if(success){
//successfully.
}else{
//failed.
}
}];
```

### Get IDFA

Get identifier for advertisers. Return "" if IDFA is untrackable.

```objc
NSString* idfa = [[VietIdSDKController sharedInstance] getIDFA];
```

## Author

songoku20, sonleminh@vccorp.vn

## License

VietIdSDK-iOS is available under the MIT license. See the LICENSE file for more info.
