/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse {

	AAUIFamilyCreditCard* _creditCard;

}

@property (nonatomic,retain) AAUIFamilyCreditCard * creditCard;              //@synthesize creditCard=_creditCard - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)_parsedDateForServerMonth:(long long)arg1 year:(long long)arg2 ;
-(AAUIFamilyCreditCard *)creditCard;
-(void)setCreditCard:(AAUIFamilyCreditCard *)arg1 ;
@end

