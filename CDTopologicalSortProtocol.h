// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2009 Steve Nygard.

#import <Foundation/Foundation.h>

// A rather clunky way to avoid warnings in CDTopoSortNode.m regarding -retain not implemented by protocols
@protocol CDTopologicalSort <NSObject>
- (NSString *)identifier;
- (NSArray *)dependancies;
@end
