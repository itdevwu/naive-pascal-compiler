; ModuleID = '        �*�~U    '
source_filename = "test/test_bool.pas"

@c = global i32 undef
@b = global i32 undef
@bool = global i1 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define i32 @main() {
entry:
  store i32 1, i32* @c, align 4
  store i32 1, i32* @b, align 4
  store i1 false, i1* @bool, align 1
  br label %while_body

while_count:                                      ; preds = %while_body
  br i1 true, label %while_end, label %while_body

while_body:                                       ; preds = %while_count, %entry
  %0 = load i32, i32* @c, align 4
  %1 = add i32 %0, 1
  store i32 %1, i32* @c, align 4
  %2 = load i32, i32* @b, align 4
  %3 = mul i32 %2, 2
  store i32 %3, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 1141)
  br label %while_count

while_end:                                        ; preds = %while_count
  br label %while_count1

while_count1:                                     ; preds = %while_body2, %while_end
  %4 = load i1, i1* @bool, align 1
  br i1 %4, label %while_body2, label %while_end3

while_body2:                                      ; preds = %while_count1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 1142)
  br label %while_count1

while_end3:                                       ; preds = %while_count1
  store i1 false, i1* @bool, align 1
  %5 = load i32, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i32 %5)
  ret i32 0
}

declare void @printf(i8* noalias, ...)
