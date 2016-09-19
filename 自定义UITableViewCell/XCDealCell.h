//
//  XCDealCell.h
//  自定义UITableViewCell
//
//  Created by liuxingchen on 16/9/19.
//  Copyright © 2016年 Liuxingchen. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XCDeal;
@interface XCDealCell : UITableViewCell
@property(nonatomic,strong)XCDeal * deal ;
@property (weak, nonatomic) IBOutlet UIImageView *iconView;
@property (weak, nonatomic) IBOutlet UILabel *titleView;
@property (weak, nonatomic) IBOutlet UILabel *buyCount;
@property (weak, nonatomic) IBOutlet UILabel *pirceView;
+(instancetype)cellWithTableView:(UITableView *)tableView;
@end
