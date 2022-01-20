## test-puerts-umg-issue
在ts中使用CreateWidget动态创建Widget并显示到屏幕后，这个Widget会无法被GC，但是ts本身作为一个Widget是可以被GC的
但同样操作，若是纯蓝图，则会被GC


# 操作
* 按下Z：创建Ts生成的UMG，并显示到屏幕上
* 按下X：移除刚刚创建的UMG，使用RemoveFromParent
* 按下C：执行GC

# 状况
* 编译后，打开工程，直接Play，可以看到屏幕中打印了UObject的相关数量
* 依次按下ZXC，可以发现num minus available数量会不断增加(编辑器中可只关注该数量)

# 切换PlayerController
/Content/Test/
PC_Blueprint：使用纯蓝图跑流程
PC_Ts：使用ts跑流程(默认)