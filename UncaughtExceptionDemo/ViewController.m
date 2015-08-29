//
//  ViewController.m
//  UncaughtExceptionDemo
//
//  Created by  tomxiang on 15/8/28.
//  Copyright (c) 2015年  tomxiang. All rights reserved.
//

#import "ViewController.h"
#import "SignalHandler.h"

@interface ViewController ()

@end

typedef struct Test
{
    int a;
    int b;
}Test;

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    

}
- (IBAction)buttonClick:(UIButton *)sender {
//1.信号量
    Test *pTest = {1,2};
    free(pTest);
    pTest->a = 5;
    

}

- (IBAction)buttonOCException:(UIButton *)sender
{
    //2.ios崩溃
    NSArray *array= @[@"tom",@"xxx",@"ooo"];
    [array objectAtIndex:5];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
