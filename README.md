# vitro-green 精选集（Vitro 编译全绿棘轮分支）

**规则（棘轮，只增不减）**：
- 本分支只收录「Clang 绿 且 Vitro 诊断全绿（零 error 零豁免）」的 .c 文件——分支内容即 CI 断言锚
- Vitro 修复使新文件达标 → 从 vitro-probe-fix2 晋升拷入本分支（永不移出）
- 任何 Vitro 推送导致本分支文件编译变红 / 三臂（js/native/wasm）诊断分叉 → CI 红
- 上游内容零改动；C 侧修复探针态见 vitro-probe-fix2 分支；原始基线见 vitro-probe-baseline@462074f

- 生成时间：2026-11-14
- 生成来源：rustin-beep/C vitro-probe-fix2@c428e73 勘探（out_fix2：clang 绿 405，诊断全绿 166）
- 消费方：Vitro 仓 CI green_probe job（三臂 compile 对拍）
