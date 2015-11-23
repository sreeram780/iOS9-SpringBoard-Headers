/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet;

@interface EKRelation : NSObject {

	NSString* _entityName;
	BOOL _toMany;
	BOOL _ownsRelated;
	NSSet* _inversePropertyNames;
	/*^block*/id _inversePropertyIsApplicable;

}

@property (nonatomic,readonly) BOOL toMany; 
@property (nonatomic,readonly) NSSet * inversePropertyNames; 
@property (nonatomic,readonly) BOOL ownsRelatedObject; 
@property (nonatomic,copy) id inversePropertyIsApplicable;                //@synthesize inversePropertyIsApplicable=_inversePropertyIsApplicable - In the implementation block
+(id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ownsRelated:(BOOL)arg4 ;
+(id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ;
-(void)setInversePropertyIsApplicable:(id)arg1 ;
-(BOOL)toMany;
-(BOOL)ownsRelatedObject;
-(NSSet *)inversePropertyNames;
-(BOOL)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ownsRelated:(BOOL)arg4 ;
-(id)inversePropertyIsApplicable;
-(void)dealloc;
-(id)description;
@end

