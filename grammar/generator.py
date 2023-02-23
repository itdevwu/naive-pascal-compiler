# Copyright 2022 Zhenglong WU(itdevwu)

# Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
# in compliance with the License. You may obtain a copy of the License at

#     http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software distributed under the License
# is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
# or implied. See the License for the specific language governing permissions and limitations under
# the License.

import os

os.system(f"antlr4 -Dlanguage=Cpp -visitor {os.path.dirname(os.path.abspath(__file__))}/pascal.g4 -o {os.path.dirname(os.path.abspath(__file__))}/../npc/ast")
