; ModuleID = '        ���#�U         ler/test/test_gcd.pas'
source_filename = "/root/naive-pascal-compiler/test/test_gcd.pas"

@x = global i32 undef
@y = global i32 undef
@0 = private unnamed_addr constant [5 x i8] c"%d%d\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define i32 @main() {
entry:
  %0 = load i32, i32* @x, align 4
  %1 = load i32, i32* @y, align 4
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @0, i32 0, i32 0), i32* @x, i32* @y)
  %2 = load i32, i32* @x, align 4
  %3 = load i32, i32* @y, align 4
  %4 = call i32 @gcd(i32 %2, i32 %3)
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %4)
  ret i32 0
}

define i32 @gcd(i32 %a, i32 %b) {
Para_Ret:
  %0 = alloca i32, align 4
  %1 = alloca i32, align 4
  store i32 %a, i32* %1, align 4
  %2 = alloca i32, align 4
  store i32 %b, i32* %2, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  %3 = load i32, i32* %2, align 4
  %4 = icmp eq i32 %3, 0
  br i1 %4, label %then, label %else

then:                                             ; preds = %entry
  %5 = load i32, i32* %1, align 4
  store i32 %5, i32* %0, align 4
  br label %if_end

if_end:                                           ; preds = %else, %then
  %6 = load i32, i32* %0, align 4
  ret i32 %6

else:                                             ; preds = %entry
  %7 = load i32, i32* %2, align 4
  %8 = load i32, i32* %1, align 4
  %9 = load i32, i32* %2, align 4
  %10 = srem i32 %8, %9
  %11 = call i32 @gcd(i32 %7, i32 %10)
  store i32 %11, i32* %0, align 4
  br label %if_end
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
