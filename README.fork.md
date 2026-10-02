# rustin-beep/C — Vitro 勘探基线 fork

本仓库是 [TheAlgorithms/C](https://github.com/TheAlgorithms/C)（GPL-3.0，上游 `e5dad3f` 为 2023-09 终态）的 fork，
**唯一用途**：[Vitro](https://github.com/rustin-beep/Vitro) 实机代码对拍勘探的**外置语料基线**。

- **默认分支 `vitro-probe-baseline`**（即本分支）：上游终态 + 89 文件探针态
  （补 include 128 处 + leetcode 注释内 struct 模板反注释为可编译真定义）——
  这是 `Vitro/scripts/realcode_diff/gold_signatures.json` 金样本的 provenance 锚。
- 直接 `git clone` 本仓库即得正确基线态（默认分支即探针分支）。
- `master` 分支保持上游原样（对照用）。
- 勘探工具与测量方法见 Vitro 仓 `scripts/realcode_diff/` 与
  `.agents/skills/vitro-realcode-diff-workflow/`。
