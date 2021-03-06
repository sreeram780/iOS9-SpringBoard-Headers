/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CLLocation;

@interface RTHint : NSObject {

	CLLocation* _location;
	long long _source;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long source;                   //@synthesize source=_source - In the implementation block
+(id)hintSourceToString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CLLocation *)location;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 ;
@end

