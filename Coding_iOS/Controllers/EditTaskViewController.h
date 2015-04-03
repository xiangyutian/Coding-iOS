//
//  EditTaskViewController.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-8-19.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import "BaseViewController.h"
#import "Task.h"
#import "UIMessageInputView.h"


typedef NS_ENUM(NSInteger, TaskEditType) {
    TaskEditTypeAdd = 0,
    TaskEditTypeModify,
};

@interface EditTaskViewController : BaseViewController<UITableViewDataSource, UITableViewDelegate, UIMessageInputViewDelegate>
@property (strong, nonatomic) Task *myTask, *myCopyTask;
@property (copy, nonatomic) void(^taskChangedBlock)(Task *curTask, TaskEditType type);
- (void)queryToRefreshTaskDetail;
@end