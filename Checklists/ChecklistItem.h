//
//  ChecklistItem.h
//  Checklists
//
//  Created by David Wen on 2013-07-03.
//  Copyright (c) 2013 David Wen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;
@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, assign) BOOL shouldRemind;
@property (nonatomic, assign) int itemId;

- (void)toggleChecked;
- (void)scheduleNotification;

@end
