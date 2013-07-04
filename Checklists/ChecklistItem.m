//
//  ChecklistItem.m
//  Checklists
//
//  Created by David Wen on 2013-07-03.
//  Copyright (c) 2013 David Wen. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void)toggleChecked
{
    self.checked = !self.checked;
}

@end
