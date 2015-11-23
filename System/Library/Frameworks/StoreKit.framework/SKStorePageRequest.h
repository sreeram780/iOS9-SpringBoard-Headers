/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	long long _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) long long productPageStyle;                  //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(long long)productPageStyle;
-(void)setProductPageStyle:(long long)arg1 ;
-(NSURL *)productURL;
-(NSDictionary *)productParameters;
-(void)setProductParameters:(NSDictionary *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
@end

