//
//  CAChatMyMessageCell.h
//  Chat
//
//  Created by Saltedfish on 2017/5/2.
//  Copyright © 2017年 物联利浪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAChatMyMessageCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *headerImgView;
@property (weak, nonatomic) IBOutlet UILabel *nickNameLab;
@property (weak, nonatomic) IBOutlet UILabel *messageLab;

@end
