; ModuleID = '        �X��U         .pas'
source_filename = "test/test_writeReadArray.pas"

@intVar = global i32 undef
@realVar = global float undef
@a = global [25 x float] undef
@0 = private unnamed_addr constant [7 x i8] c"%d%f%f\00", align 1
@1 = private unnamed_addr constant [10 x i8] c"%d%lf%lf\0A\00", align 1

define i32 @main() {
entry:
  %0 = load i32, i32* @intVar, align 4
  %1 = load float, float* @realVar, align 4
  %2 = fpext float %1 to double
  %3 = load float, float* getelementptr inbounds ([25 x float], [25 x float]* @a, i32 0, i32 11), align 4
  %4 = fpext float %3 to double
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @0, i32 0, i32 0), i32* @intVar, float* @realVar, float* getelementptr inbounds ([25 x float], [25 x float]* @a, i32 0, i32 11))
  %5 = load i32, i32* @intVar, align 4
  %6 = load float, float* @realVar, align 4
  %7 = fpext float %6 to double
  %8 = load float, float* getelementptr inbounds ([25 x float], [25 x float]* @a, i32 0, i32 11), align 4
  %9 = fpext float %8 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @1, i32 0, i32 0), i32 %5, double %7, double %9)
  ret i32 0
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
