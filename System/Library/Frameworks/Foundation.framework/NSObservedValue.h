/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface NSObservedValue : NSObject {

	id _contents;
	id _lastOriginator;
	int _tag;

}

@property (retain) id value; 
@property (retain) NSError * error; 
@property (assign) BOOL finished; 
-(BOOL)_isToManyChangeInformation;
-(id)copyToHeap;
-(NSError *)error;
-(BOOL)finished;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

