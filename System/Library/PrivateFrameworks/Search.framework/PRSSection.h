/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol PRSSection
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) BOOL hide_divider; 
@property (assign,nonatomic) BOOL card_padding_bottom; 
@property (assign,nonatomic) BOOL card_padding_top; 
@optional
-(NSURL *)url;
-(void)setUrl:(id)arg1;
-(NSURL *)attribution_url;
-(void)setAttribution_url:(id)arg1;
-(void)setHide_divider:(BOOL)arg1;
-(void)setCard_padding_bottom:(BOOL)arg1;
-(void)setCard_padding_top:(BOOL)arg1;
-(BOOL)hide_divider;
-(BOOL)card_padding_top;
-(BOOL)card_padding_bottom;

@required
-(void)setType:(id)arg1;
-(NSString *)type;

@end

