//
//  ZCalendarScroolView.h
//  ZCalendar
//
//  Created by zhuayi on 15/4/15.
//  Copyright (c) 2015年 renxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCalendarCollectionView : UICollectionView<UICollectionViewDelegate, UICollectionViewDataSource>


@property(nonatomic, assign) int pageCount;

@end
