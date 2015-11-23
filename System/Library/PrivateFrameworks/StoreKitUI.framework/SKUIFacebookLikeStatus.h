/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSURL;

@interface SKUIFacebookLikeStatus : NSObject <NSCopying> {

	NSArray* _friends;
	NSURL* _url;
	BOOL _userLiked;

}

@property (nonatomic,copy) NSArray * friendNames;                            //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
@property (assign,getter=isUserLiked,nonatomic) BOOL userLiked;              //@synthesize userLiked=_userLiked - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setFriendNames:(NSArray *)arg1 ;
-(void)setUserLiked:(BOOL)arg1 ;
-(NSArray *)friendNames;
-(BOOL)isUserLiked;
-(id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2 ;
@end

