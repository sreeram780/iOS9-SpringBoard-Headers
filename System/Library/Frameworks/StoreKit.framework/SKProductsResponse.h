/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface SKProductsResponse : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;
-(void)_setInvalidIdentifiers:(id)arg1 ;
-(void)_setProducts:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

