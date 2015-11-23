/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
@class NSDictionary;

@interface PLProcessNetworkSource : NSObject {

	NSDictionary* _descriptionDictionary;
	NSDictionary* _countsDictionary;
	NStatSourceRef _source;

}

@property (nonatomic,copy) NSDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * countsDictionary;                   //@synthesize countsDictionary=_countsDictionary - In the implementation block
@property (assign,nonatomic) NStatSourceRef source;                           //@synthesize source=_source - In the implementation block
-(id)initWithSource:(NStatSourceRef)arg1 ;
-(NStatSourceRef)source;
-(void)setSource:(NStatSourceRef)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(void)setDescriptionDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)countsDictionary;
-(void)setCountsDictionary:(NSDictionary *)arg1 ;
@end

