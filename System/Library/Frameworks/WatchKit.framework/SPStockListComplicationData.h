/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/SPComplicationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding> {

	NSArray* _stockList;

}

@property (nonatomic,retain) NSArray * stockList;              //@synthesize stockList=_stockList - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)stockList;
-(void)setStockList:(NSArray *)arg1 ;
@end

