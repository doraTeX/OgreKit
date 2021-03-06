/*
 * Name: MyTableDocumentWithCocoaBinding.m
 * Project: OgreKit
 *
 * Creation Date: Sep 29 2003
 * Author: Isao Sonobe <sonoisa@gmail.com>
 * Copyright: Copyright (c) 2003-2018 Isao Sonobe, All rights reserved.
 * License: OgreKit License
 *
 * Encoding: UTF8
 * Tabsize: 4
 */

#import "MyTableDocumentWithCocoaBinding.h"
#import <OgreKit/OgreKit.h>

@implementation MyTableDocumentWithCocoaBinding

// 検索対象となるtableViewをOgreTextFinderに教える。
// 検索させたくない場合はnilをsetする。
// 定義を省略した場合、main windowのfirst responderが検索可能ならばそれを採用する。
- (void)tellMeTargetToFindIn:(id)textFinder
{
	[textFinder setTargetToFindIn:tableView];
}


/* ここから下は検索パネルに関係しないコード */
- (void)awakeFromNib
{
    _modelArray = [[NSMutableArray alloc] init];
}

- (void)dealloc
{
    [_modelArray release];
    [super dealloc];
}

- (NSString*)windowNibName 
{
    return @"MyTableDocumentWithCocoaBinding";
}

- (NSData *)dataOfType:(NSString *)typeName
                 error:(NSError * _Nullable *)outError
{
    return [NSKeyedArchiver archivedDataWithRootObject:_modelArray];
}

- (BOOL)readFromData:(NSData *)data ofType:(NSString *)typeName error:(NSError * _Nullable *)outError
{
    _modelArray = [NSKeyedUnarchiver unarchiveObjectWithData:data];
    
	return YES;
}

- (void)windowControllerDidLoadNib:(NSWindowController*)controller
{
    [super windowControllerDidLoadNib:controller];
}

- (IBAction)dump:(id)sender
{
    [_modelArray makeObjectsPerformSelector:@selector(dump)];
}

// 改行コードの変更
- (void)setNewlineCharacter:(OgreNewlineCharacter)aNewlineCharacter
{
	_newlineCharacter = aNewlineCharacter;
}

@end
