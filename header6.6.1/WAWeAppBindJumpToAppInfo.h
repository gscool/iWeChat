//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAWeAppBindJumpToAppInfo : NSObject <PBCoding>
{
    NSString *jumpToAppID;
    NSString *jumpToUserName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *jumpToUserName; // @synthesize jumpToUserName;
@property(retain, nonatomic) NSString *jumpToAppID; // @synthesize jumpToAppID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
