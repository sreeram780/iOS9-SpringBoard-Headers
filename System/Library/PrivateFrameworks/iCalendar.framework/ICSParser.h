/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	long long _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(long long)arg2 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(id)makeComponent:(char*)arg1 ;
-(void)parseComponent:(id)arg1 ;
-(BOOL)parseProperty:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
@end

