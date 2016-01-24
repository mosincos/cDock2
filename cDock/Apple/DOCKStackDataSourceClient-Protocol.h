//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSString;

@protocol DOCKStackDataSourceClient <NSObject>
- (NSIndexSet *)indexSetForVisibleExpandedItems;
- (void)setCollapsedStackValue:(id)arg1 forKey:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)setExpandedStackValue:(id)arg1 forKey:(NSString *)arg2 atIndex:(unsigned long long)arg3 withDataSource:(id)arg4;
- (void)stackDataSourceInvalidatedForRange:(struct _NSRange)arg1 withDataSource:(id)arg2;
- (void)stackDataSourceInvalidated:(id)arg1;
@end
