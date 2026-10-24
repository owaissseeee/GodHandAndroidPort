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

// Function: func_001EBE00
// Address: 0x1ebe00 - 0x1ebf50
void func_001EBE00_0x1ebe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EBE00_0x1ebe00");
#endif

    switch (ctx->pc) {
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee4u: goto label_1ebee4;
        default: break;
    }

    ctx->pc = 0x1ebe00u;

    // 0x1ebe00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ebe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ebe04: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ebe04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ebe08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ebe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ebe0c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1ebe0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ebe10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ebe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ebe14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ebe1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ebe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ebe20: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1EBE20u;
    {
        const bool branch_taken_0x1ebe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE20u;
        // 0x1ebe24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe20) {
            ctx->pc = 0x1EBF30u;
            goto label_1ebf30;
        }
    }
    ctx->pc = 0x1EBE28u;
    // 0x1ebe28: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ebe28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ebe2c: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x1ebe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ebe30: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1ebe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebe34: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EBE34u;
    {
        const bool branch_taken_0x1ebe34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE34u;
        // 0x1ebe38: 0x24b30006  addiu       $s3, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe34) {
            ctx->pc = 0x1EBE88u;
            goto label_1ebe88;
        }
    }
    ctx->pc = 0x1EBE3Cu;
    // 0x1ebe3c: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x1ebe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebe40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBE40u;
    {
        const bool branch_taken_0x1ebe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE40u;
        // 0x1ebe44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe40) {
            ctx->pc = 0x1EBE64u;
            goto label_1ebe64;
        }
    }
    ctx->pc = 0x1EBE48u;
    // 0x1ebe48: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebe4c: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1ebe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1ebe50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebe54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebe54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebe58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ebe58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ebe5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ebe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ebe60: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ebe60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ebe64:
    // 0x1ebe64: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x1ebe64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebe68: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBE68u;
    {
        const bool branch_taken_0x1ebe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE68u;
        // 0x1ebe6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe68) {
            ctx->pc = 0x1EBF30u;
            goto label_1ebf30;
        }
    }
    ctx->pc = 0x1EBE70u;
    // 0x1ebe70: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebe74: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1ebe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x1ebe78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebe7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebe7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebe80: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EBE80u;
    {
        const bool branch_taken_0x1ebe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE80u;
        // 0x1ebe84: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe80) {
            ctx->pc = 0x1EBF2Cu;
            goto label_1ebf2c;
        }
    }
    ctx->pc = 0x1EBE88u;
label_1ebe88:
    // 0x1ebe88: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ebe88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ebe8c: 0x262301c4  addiu       $v1, $s1, 0x1C4
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
    // 0x1ebe90: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ebe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebe94: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebe98: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EBE98u;
    {
        const bool branch_taken_0x1ebe98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE98u;
        // 0x1ebe9c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe98) {
            ctx->pc = 0x1EBF30u;
            goto label_1ebf30;
        }
    }
    ctx->pc = 0x1EBEA0u;
    // 0x1ebea0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebea4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebea8: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EBEA8u;
    {
        const bool branch_taken_0x1ebea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebea8) {
            ctx->pc = 0x1EBEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBEA8u;
            // 0x1ebeac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF34u;
            goto label_1ebf34;
        }
    }
    ctx->pc = 0x1EBEB0u;
    // 0x1ebeb0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1ebeb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ebeb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ebeb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ebeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebebc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1ebec0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ebec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ebec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebec8: 0xe4c00104  swc1        $f0, 0x104($a2)
    ctx->pc = 0x1ebec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 260), bits); }
    // 0x1ebecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebed0: 0xe4410104  swc1        $f1, 0x104($v0)
    ctx->pc = 0x1ebed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ebed4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EBED4u;
    SET_GPR_U32(ctx, 31, 0x1EBEDCu);
    ctx->pc = 0x1EBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBED4u;
    // 0x1ebed8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EBED4u, 0x1EBEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEDCu;
label_1ebedc:
    // 0x1ebedc: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EBEDCu;
    SET_GPR_U32(ctx, 31, 0x1EBEE4u);
    ctx->pc = 0x1EBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEDCu;
    // 0x1ebee0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EBEDCu, 0x1EBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEE4u;
label_1ebee4:
    // 0x1ebee4: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x1ebee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBEE8u;
    {
        const bool branch_taken_0x1ebee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEE8u;
        // 0x1ebeec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebee8) {
            ctx->pc = 0x1EBF08u;
            goto label_1ebf08;
        }
    }
    ctx->pc = 0x1EBEF0u;
    // 0x1ebef0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebef4: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1ebef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1ebef8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebefc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebefcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebf00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ebf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ebf04: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ebf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ebf08:
    // 0x1ebf08: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x1ebf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebf0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBF0Cu;
    {
        const bool branch_taken_0x1ebf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF0Cu;
        // 0x1ebf10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf0c) {
            ctx->pc = 0x1EBF30u;
            goto label_1ebf30;
        }
    }
    ctx->pc = 0x1EBF14u;
    // 0x1ebf14: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebf18: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1ebf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x1ebf1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebf20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebf20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebf24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ebf24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ebf28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ebf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ebf2c:
    // 0x1ebf2c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ebf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ebf30:
    // 0x1ebf30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ebf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebf34:
    // 0x1ebf34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ebf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebf38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ebf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebf3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ebf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebf40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebf44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF44u;
        // 0x1ebf48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBF4Cu;
    // 0x1ebf4c: 0x0  nop
    ctx->pc = 0x1ebf4cu;
    // NOP
    ctx->pc = 0x1ebf50u;
}
