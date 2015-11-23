/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface HistogramElement : NSObject <NSCoding> {

	NSString* stringkey;
	double probability;
	unsigned long long count;
	unsigned long long queryID;

}

@property (nonatomic,retain) NSString * stringkey; 
@property (assign,nonatomic) double probability; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) unsigned long long queryID; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)stringkey;
-(id)initWithString:(id)arg1 withProbability:(double)arg2 withQueryID:(unsigned long long)arg3 ;
-(id)initWithString:(id)arg1 withCount:(unsigned long long)arg2 withQueryID:(unsigned long long)arg3 ;
-(void)setStringkey:(NSString *)arg1 ;
-(void)setQueryID:(unsigned long long)arg1 ;
-(unsigned long long)queryID;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end

