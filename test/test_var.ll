; ModuleID = '        � �(�U         ler/test/test_var.pas'
source_filename = "/root/naive-pascal-compiler/test/test_var.pas"

@integerVariable = global i32 undef
@floatVariable = global float undef
@booleanVariable = global i1 undef
@charVariable = global i8 undef
@0 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@1 = private unnamed_addr constant [19 x i8] c"integerVariable = \00", align 1
@2 = private unnamed_addr constant [6 x i8] c"%s%d\0A\00", align 1
@3 = private unnamed_addr constant [17 x i8] c"floatVariable = \00", align 1
@4 = private unnamed_addr constant [7 x i8] c"%s%lf\0A\00", align 1
@5 = private unnamed_addr constant [19 x i8] c"booleanVariable = \00", align 1
@6 = private unnamed_addr constant [6 x i8] c"%s%d\0A\00", align 1
@7 = private unnamed_addr constant [16 x i8] c"charVariable = \00", align 1
@8 = private unnamed_addr constant [6 x i8] c"%s%d\0A\00", align 1

define i32 @main() {
entry:
  store i32 10, i32* @integerVariable, align 4
  store float 0x40091EB860000000, float* @floatVariable, align 4
  store i1 true, i1* @booleanVariable, align 1
  store i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i32 0, i32 0), i8* @charVariable, align 8
  %0 = load i32, i32* @integerVariable, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @2, i32 0, i32 0), i8* getelementptr inbounds ([19 x i8], [19 x i8]* @1, i32 0, i32 0), i32 %0)
  %1 = load float, float* @floatVariable, align 4
  %2 = fpext float %1 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @4, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @3, i32 0, i32 0), double %2)
  %3 = load i1, i1* @booleanVariable, align 1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @6, i32 0, i32 0), i8* getelementptr inbounds ([19 x i8], [19 x i8]* @5, i32 0, i32 0), i1 %3)
  %4 = load i8, i8* @charVariable, align 1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @8, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @7, i32 0, i32 0), i8 %4)
  ret i32 0
}

declare void @printf(i8* noalias, ...)
