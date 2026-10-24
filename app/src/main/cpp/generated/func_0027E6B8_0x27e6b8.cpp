#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0027E6B8
// Address: 0x27e6b8 - 0x27e7f0
void func_0027E6B8_0x27e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E6B8_0x27e6b8");
#endif

    ctx->pc = 0x27e6b8u;

    // 0x27e6b8: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27e6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x27e6bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e6c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6c4: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E6C4u;
    {
        const bool branch_taken_0x27e6c4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6C4u;
        // 0x27e6c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6c4) {
            ctx->pc = 0x27E6D0u;
            goto label_27e6d0;
        }
    }
    ctx->pc = 0x27E6CCu;
    // 0x27e6cc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x27e6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27e6d0:
    // 0x27e6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27e6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e6d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E6D4u;
    {
        const bool branch_taken_0x27e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6D4u;
        // 0x27e6d8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6d4) {
            ctx->pc = 0x27E6ECu;
            goto label_27e6ec;
        }
    }
    ctx->pc = 0x27E6DCu;
    // 0x27e6dc: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x27e6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e6e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E6E4u;
    {
        const bool branch_taken_0x27e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6E4u;
        // 0x27e6e8: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6e4) {
            ctx->pc = 0x27E6F0u;
            goto label_27e6f0;
        }
    }
    ctx->pc = 0x27E6ECu;
label_27e6ec:
    // 0x27e6ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27e6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e6f0:
    // 0x27e6f0: 0x1120003d  beqz        $t1, . + 4 + (0x3D << 2)
    ctx->pc = 0x27E6F0u;
    {
        const bool branch_taken_0x27e6f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6f0) {
            ctx->pc = 0x27E7E8u;
            goto label_27e7e8;
        }
    }
    ctx->pc = 0x27E6F8u;
    // 0x27e6f8: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x27e6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x27e6fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E6FCu;
    {
        const bool branch_taken_0x27e6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6FCu;
        // 0x27e700: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6fc) {
            ctx->pc = 0x27E710u;
            goto label_27e710;
        }
    }
    ctx->pc = 0x27E704u;
    // 0x27e704: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x27e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x27e708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E708u;
    {
        const bool branch_taken_0x27e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E708u;
        // 0x27e70c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e708) {
            ctx->pc = 0x27E714u;
            goto label_27e714;
        }
    }
    ctx->pc = 0x27E710u;
label_27e710:
    // 0x27e710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e714:
    // 0x27e714: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27E714u;
    {
        const bool branch_taken_0x27e714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e714) {
            ctx->pc = 0x27E7E8u;
            goto label_27e7e8;
        }
    }
    ctx->pc = 0x27E71Cu;
    // 0x27e71c: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x27e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x27e720: 0xac490148  sw          $t1, 0x148($v0)
    ctx->pc = 0x27e720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 9));
    // 0x27e724: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x27e724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x27e728: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x27e728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x27e72c: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E72Cu;
    {
        const bool branch_taken_0x27e72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x27E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E72Cu;
        // 0x27e730: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e72c) {
            ctx->pc = 0x27E74Cu;
            goto label_27e74c;
        }
    }
    ctx->pc = 0x27E734u;
    // 0x27e734: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x27e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e738: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27e73c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x27e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e740: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e744: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x27e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e748: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e74c:
    // 0x27e74c: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x27e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x27e750: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E750u;
    {
        const bool branch_taken_0x27e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x27e750) {
            ctx->pc = 0x27E754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E750u;
            // 0x27e754: 0xac861584  sw          $a2, 0x1584($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E774u;
            goto label_27e774;
        }
    }
    ctx->pc = 0x27E758u;
    // 0x27e758: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e75c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x27e75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x27e760: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x27e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e764: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e768: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e76c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27e770: 0xac861584  sw          $a2, 0x1584($a0)
    ctx->pc = 0x27e770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
label_27e774:
    // 0x27e774: 0x24821590  addiu       $v0, $a0, 0x1590
    ctx->pc = 0x27e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x27e778: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E778u;
    {
        const bool branch_taken_0x27e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x27E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E778u;
        // 0x27e77c: 0xac851580  sw          $a1, 0x1580($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e778) {
            ctx->pc = 0x27E798u;
            goto label_27e798;
        }
    }
    ctx->pc = 0x27E780u;
    // 0x27e780: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x27e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e784: 0xe4801590  swc1        $f0, 0x1590($a0)
    ctx->pc = 0x27e784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5520), bits); }
    // 0x27e788: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x27e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e78c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27e78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27e790: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x27e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e794: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27e798:
    // 0x27e798: 0x248215a0  addiu       $v0, $a0, 0x15A0
    ctx->pc = 0x27e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x27e79c: 0x50480008  beql        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E79Cu;
    {
        const bool branch_taken_0x27e79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x27e79c) {
            ctx->pc = 0x27E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E79Cu;
            // 0x27e7a0: 0xac851608  sw          $a1, 0x1608($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5640), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E7C0u;
            goto label_27e7c0;
        }
    }
    ctx->pc = 0x27E7A4u;
    // 0x27e7a4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e7a8: 0xe48015a0  swc1        $f0, 0x15A0($a0)
    ctx->pc = 0x27e7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5536), bits); }
    // 0x27e7ac: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x27e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e7b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27e7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27e7b4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e7b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27e7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27e7bc: 0xac851608  sw          $a1, 0x1608($a0)
    ctx->pc = 0x27e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5640), GPR_U32(ctx, 5));
label_27e7c0:
    // 0x27e7c0: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x27e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x27e7c4: 0x24a20110  addiu       $v0, $a1, 0x110
    ctx->pc = 0x27e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x27e7c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E7C8u;
    {
        const bool branch_taken_0x27e7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7C8u;
        // 0x27e7cc: 0xac8015e8  sw          $zero, 0x15E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7c8) {
            ctx->pc = 0x27E7E8u;
            goto label_27e7e8;
        }
    }
    ctx->pc = 0x27E7D0u;
    // 0x27e7d0: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x27e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e7d4: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x27e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x27e7d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e7dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e7e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e7e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e7e8:
    // 0x27e7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7E8u;
        // 0x27e7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E7F0u;
}
