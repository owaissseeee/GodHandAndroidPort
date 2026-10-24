# PS2 Reference Image Catalog

> Extracted from PDFs in `resources/pdfs/`. Total: **80 images** (24 irrelevant deleted).
> Classification: ★★★ = Critical architecture | ★★ = Useful context | ★ = Demo/illustration

---

## ★★★ CRITICAL ARCHITECTURE DIAGRAMS (9 images)

### From ps2_arch_analysis (Copetti article)
| File | Page | Description |
|------|------|-------------|
| `ps2_arch_analysis_p006_07.png` | p006 | **EE Full Block Diagram** — MIPS R5900 core, FPU, VPU0/VPU1, GIF, Memory Interface, DMA, SIF, IPU, all labeled with bus widths |
| `ps2_arch_analysis_p010_08.png` | p010 | **Memory Interface** — 32MB RDRAM dual-channel 16-bit 400MHz, scratchpad, cache hierarchy |
| `ps2_arch_analysis_p014_09.png` | p014 | **VPU0/VPU1 Architecture** — Vector Units, VU memory, micro/macro modes, data flow |
| `ps2_arch_analysis_p017_11.png` | p017 | **GS Pipeline** — pixel processing, rasterization, Z-buffer, color, alpha, DITHER stages |
| `ps2_arch_analysis_p017_12.png` | p017 | **GS Texture + CLUT Buffers** — VRAM layout, texture pages, frame/Z buffer arrangement |
| `ps2_arch_analysis_p032_28.png` | p032 | **COMPLETE PS2 System Block Diagram** — ALL subsystems: EE, GS, IOP, SPU2, DVD, I/O. Every bus width and clock speed labeled. **THE single most important reference image.** |

### From ps2_overview (EE Overview Manual)
| File | Page | Description |
|------|------|-------------|
| `ps2_overview_p010_05.png` | p010 | **VU0 Block Diagram** — 32 FP regs, 16 Int regs, 4 FMACs, instruction/data memory, VIF0 interface |
| `ps2_overview_p011_06.png` | p011 | **VU1 Block Diagram** — same register file layout + GIF interface, PATH 1/2/3 labeled, dedicated to geometry |
| `ps2_overview_p014_07.png` | p014 | **EE Full Pipeline Block** — CPU Core → VU0 → VU1 → GIF → GS with DMAC and Main Memory interconnect |

---

## ★★ USEFUL CONTEXT (18 images)

### Hardware photos
| File | Page | Description |
|------|------|-------------|
| `ps2_arch_analysis_p001_01.png` | p001 | PS2 console (fat model), controller, memory card — side view |
| `ps2_arch_analysis_p004_02.png` | p004 | PS2 motherboard photo — component layout |
| `ps2_arch_analysis_p004_03.png` | p004 | EE chip die photo / close-up |
| `ps2_arch_analysis_p004_04.png` | p004 | Chip packaging / board detail |
| `ps2_arch_analysis_p005_05.png` | p005 | Hardware detail (EE package) |
| `ps2_arch_analysis_p005_06.png` | p005 | Hardware detail |
| `ps2_arch_analysis_p015_10.png` | p015 | GS chip detail |
| `ps2_arch_analysis_p029_25.png` | p029 | Hardware / rendering comparison |
| `ps2_arch_analysis_p034_29.png` | p034 | PS2 front panel — memory card slots + USB + i.LINK ports |
| `ps2_arch_analysis_p035_30.png` | p035 | PS2 back panel — SCPH-30001 expansion bay |
| `ps2_arch_analysis_p036_31.png` | p036 | PS2 Network Adapter (HDD+Ethernet) front |
| `ps2_arch_analysis_p036_32.png` | p036 | Network Adapter + HDD disassembled |
| `ps2_arch_analysis_p037_33.png` | p037 | PS2 Slim rear — Network, Digital Out, AV Multi Out, DC In |
| `ps2_arch_analysis_p038_34.png` | p038 | **DualShock 2 controller** — full product photo |
| `ps2_overview_p002_03.png` | p002 | PS2 console with controller and DVD tray open |
| `ps2_overview_p004_04.png` | p004 | **EE chip** — "Emotion Engine" package, clearly labeled |
| `ps2_overview_p015_08.png` | p015 | **GS chip** — "Graphics Synthesizer" package photo |
| `ee_programming_p004_01.png` | p004 | PS2 console photo — console + controller + disc + memory card |

### Audio waveforms
| File | Page | Description |
|------|------|-------------|
| `ps2_arch_analysis_p031_26.png` | p031 | **SPU2 audio waveform** — Left/Right channel visualization |
| `ps2_arch_analysis_p031_27.png` | p031 | **SPU2 audio waveform** — reverb/dry comparison |

### EE die photos (vu_architecture source)
| File | Page | Description |
|------|------|-------------|
| `vu_architecture_p006_01.png` | p006 | EE die photo — annotated silicon layout |
| `vu_architecture_p007_02.png` | p007 | EE die photo — second angle/annotation |

### BIOS / Boot
| File | Page | Description |
|------|------|-------------|
| `ps2_arch_analysis_p039_36.png` | p039 | PS2 boot screen — "Sony Computer Entertainment" splash |
| `ps2_arch_analysis_p040_37.png` | p040 | PS2 boot logo — "PlayStation 2" |
| `ps2_arch_analysis_p042_40.png` | p042 | PS2 BIOS — Memory Card browser UI |

---

## ★ DEMO / ILLUSTRATION (46 images)

### Game screenshots (from ps2_arch_analysis — Copetti article)
| File | Page | Description |
|------|------|-------------|
| `ps2_arch_analysis_p018_13.png` | p018 | Game rendering example |
| `ps2_arch_analysis_p019_14.png` | p019 | Game screenshot |
| `ps2_arch_analysis_p020_15.png` | p020 | Game screenshot |
| `ps2_arch_analysis_p020_16.png` | p020 | Game screenshot |
| `ps2_arch_analysis_p021_17.png` | p021 | Game screenshot |
| `ps2_arch_analysis_p022_18.png` | p022 | Game screenshot (rendering pipeline demo) |
| `ps2_arch_analysis_p023_19.png` | p023 | Game screenshot |
| `ps2_arch_analysis_p024_20.png` | p024 | Game screenshot |
| `ps2_arch_analysis_p025_21.png` | p025 | Game screenshot |
| `ps2_arch_analysis_p026_22.png` | p026 | Game screenshot |
| `ps2_arch_analysis_p027_23.png` | p027 | **Kingdom Hearts — Sora model** (T-pose, 3D character model) |
| `ps2_arch_analysis_p028_24.png` | p028 | **Dragon Quest VIII — Hero model** (3D character model) |
| `ps2_arch_analysis_p038_35.png` | p038 | Game/UI screenshot |
| `ps2_arch_analysis_p041_38.png` | p041 | Boot/game screenshot |
| `ps2_arch_analysis_p041_39.png` | p041 | Game screenshot |
| `ps2_arch_analysis_p042_41.png` | p042 | BIOS/game screenshot |
| `ps2_arch_analysis_p042_42.png` | p042 | BIOS/game screenshot |
| `ps2_arch_analysis_p044_43.png` | p044 | Game screenshot |
| `ps2_arch_analysis_p045_44.png` | p045 | Game screenshot |
| `ps2_arch_analysis_p047_45.png` | p047 | Game screenshot |
| `ps2_arch_analysis_p054_46.png` | p054 | Game screenshot |
| `ps2_arch_analysis_p057_47.png` | p057 | Game screenshot |

### EE programming demos
| File | Page | Description |
|------|------|-------------|
| `ee_programming_p006_02.png` | p006 | 3D render demo — tori and cubes |
| `ee_programming_p007_03.png` | p007 | 3D render or diagram |
| `ee_programming_p009_05.png` | p009 | Programming illustration |
| `ee_programming_p009_06.png` | p009 | Programming illustration |

### Normal mapping demos (ps2_normalmapping — 16 images)
All are 3D head renders showing normal mapping / per-pixel lighting on PS2:
| File | Description |
|------|-------------|
| `ps2_normalmapping_p010_01.png` | Normal-mapped face — blue-lit tangent-space normal map |
| `ps2_normalmapping_p010_02.png` | Face render variant |
| `ps2_normalmapping_p010_03.png` | Face render variant |
| `ps2_normalmapping_p013_04.png` | Face render — green/orange tangent-space visualization |
| `ps2_normalmapping_p013_05.png` | Face render variant |
| `ps2_normalmapping_p013_06.png` | Face render variant |
| `ps2_normalmapping_p013_07.png` | Face render variant |
| `ps2_normalmapping_p016_08.png` | Normal mapping technique comparison |
| `ps2_normalmapping_p017_09.png` | Normal mapping result |
| `ps2_normalmapping_p017_10.png` | Normal mapping result |
| `ps2_normalmapping_p017_11.png` | Normal mapping result |
| `ps2_normalmapping_p017_12.png` | Normal mapping result |
| `ps2_normalmapping_p018_13.png` | Final render comparison |
| `ps2_normalmapping_p018_14.png` | Final render comparison |
| `ps2_normalmapping_p018_15.png` | Final render comparison |
| `ps2_normalmapping_p018_16.png` | Final render comparison |

### EE chip article demos (3 images)
| File | Description |
|------|-------------|
| `ee_chip_article_p002_01.png` | 3D character render — PS2-era quality demo (female face) |
| `ee_chip_article_p006_02.png` | 3D render — hair/detail demo |
| `ee_chip_article_p006_03.png` | 3D environment/scene render |

### PS2 Overview (EE Overview Manual)
| File | Page | Description |
|------|------|-------------|
| `ps2_overview_p018_09.png` | p018 | SCE logo (decorative) |

---

## Summary Statistics

| Source PDF | Count | ★★★ | ★★ | ★ |
|-----------|-------|-----|----|----|
| ps2_arch_analysis | 47 | 6 | 16 | 25 |
| ps2_overview | 7 | **3** | 3 | 1 |
| ps2_normalmapping | 16 | 0 | 0 | 16 |
| ee_programming | 5 | 0 | 1 | 4 |
| ee_chip_article | 3 | 0 | 0 | 3 |
| vu_architecture | 2 | 0 | 2 | 0 |
| **TOTAL** | **80** | **9** | **22** | **49** |

### Deleted (24 images removed during audit)
- 12 × `tx79_architecture_*` — Toshiba packaging, safety warnings, marketing text
- 8 × `ps2_optimisations_*` — Australia map, PS2 devkit photo, scanline patterns
- 3 × `ps2_overview_*` — redundant console photos, SCE logos
- 1 × `ee_programming_p009_04.png` — "Stiquito for Beginners" book cover (unrelated)
