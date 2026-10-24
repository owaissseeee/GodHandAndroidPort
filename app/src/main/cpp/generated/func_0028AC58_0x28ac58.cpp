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

// Function: func_0028AC58
// Address: 0x28ac58 - 0x28ae18
void func_0028AC58_0x28ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028AC58_0x28ac58");
#endif

    switch (ctx->pc) {
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28acb8u: goto label_28acb8;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28add4u: goto label_28add4;
        case 0x28adf8u: goto label_28adf8;
        default: break;
    }

    ctx->pc = 0x28ac58u;

    // 0x28ac58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28ac5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28ac60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28ac64: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28ac68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ac68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ac70: 0x962402fe  lhu         $a0, 0x2FE($s1)
    ctx->pc = 0x28ac70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x28ac74: 0xc0b77a8  jal         func_2DDEA0
    ctx->pc = 0x28AC74u;
    SET_GPR_U32(ctx, 31, 0x28AC7Cu);
    ctx->pc = 0x28AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC74u;
    // 0x28ac78: 0x8e250564  lw          $a1, 0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA0u, 0x28AC74u, 0x28AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC7Cu;
label_28ac7c:
    // 0x28ac7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ac7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ac80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac84: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x28AC84u;
    SET_GPR_U32(ctx, 31, 0x28AC8Cu);
    ctx->pc = 0x28AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC84u;
    // 0x28ac88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x28AC84u, 0x28AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC8Cu;
label_28ac8c:
    // 0x28ac8c: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x28ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28ac90: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28ac94: 0x24a58e10  addiu       $a1, $a1, -0x71F0
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938128));
    // 0x28ac98: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x28AC98u;
    SET_GPR_U32(ctx, 31, 0x28ACA0u);
    ctx->pc = 0x28AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC98u;
    // 0x28ac9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x28AC98u, 0x28ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACA0u;
label_28aca0:
    // 0x28aca0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28aca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28aca4: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x28aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28aca8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28acacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acb0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x28ACB0u;
    SET_GPR_U32(ctx, 31, 0x28ACB8u);
    ctx->pc = 0x28ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACB0u;
    // 0x28acb4: 0x24a58e18  addiu       $a1, $a1, -0x71E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x28ACB0u, 0x28ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACB8u;
label_28acb8:
    // 0x28acb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28acb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acbc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x28acc0: 0x240202a9  addiu       $v0, $zero, 0x2A9
    ctx->pc = 0x28acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
    // 0x28acc4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28ACC4u;
    {
        const bool branch_taken_0x28acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACC4u;
        // 0x28acc8: 0x286202aa  slti        $v0, $v1, 0x2AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)682) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acc4) {
            ctx->pc = 0x28AD28u;
            goto label_28ad28;
        }
    }
    ctx->pc = 0x28ACCCu;
    // 0x28accc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ACCCu;
    {
        const bool branch_taken_0x28accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACCCu;
        // 0x28acd0: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28accc) {
            ctx->pc = 0x28ACE4u;
            goto label_28ace4;
        }
    }
    ctx->pc = 0x28ACD4u;
    // 0x28acd4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28ACD4u;
    {
        const bool branch_taken_0x28acd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28acd4) {
            ctx->pc = 0x28ACD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ACD4u;
            // 0x28acd8: 0x8e22155c  lw          $v0, 0x155C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ACF8u;
            goto label_28acf8;
        }
    }
    ctx->pc = 0x28ACDCu;
    // 0x28acdc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x28ACDCu;
    {
        const bool branch_taken_0x28acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28acdc) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28ACE4u;
label_28ace4:
    // 0x28ace4: 0x240202ab  addiu       $v0, $zero, 0x2AB
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
    // 0x28ace8: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28ACE8u;
    {
        const bool branch_taken_0x28ace8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ace8) {
            ctx->pc = 0x28ACECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ACE8u;
            // 0x28acec: 0x8e22155c  lw          $v0, 0x155C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AD68u;
            goto label_28ad68;
        }
    }
    ctx->pc = 0x28ACF0u;
    // 0x28acf0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28ACF0u;
    {
        const bool branch_taken_0x28acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28acf0) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28ACF8u;
label_28acf8:
    // 0x28acf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28acfc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28ACFCu;
    {
        const bool branch_taken_0x28acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACFCu;
        // 0x28ad00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acfc) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28AD04u;
    // 0x28ad04: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x28ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x28ad08: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x28ad08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28ad0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ad14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ad14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad18: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x28ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x28ad1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ad1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28AD20u;
    {
        const bool branch_taken_0x28ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD20u;
        // 0x28ad24: 0x8d060044  lw          $a2, 0x44($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad20) {
            ctx->pc = 0x28AD58u;
            goto label_28ad58;
        }
    }
    ctx->pc = 0x28AD28u;
label_28ad28:
    // 0x28ad28: 0x8e22155c  lw          $v0, 0x155C($s1)
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
    // 0x28ad2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ad30: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28AD30u;
    {
        const bool branch_taken_0x28ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD30u;
        // 0x28ad34: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad30) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28AD38u;
    // 0x28ad38: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x28ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x28ad3c: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28ad40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ad48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ad48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad4c: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x28ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x28ad50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ad50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad54: 0x8d060048  lw          $a2, 0x48($t0)
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
label_28ad58:
    // 0x28ad58: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28AD58u;
    SET_GPR_U32(ctx, 31, 0x28AD60u);
    ctx->pc = 0x28AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD58u;
    // 0x28ad5c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28AD58u, 0x28AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD60u;
label_28ad60:
    // 0x28ad60: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28AD60u;
    {
        const bool branch_taken_0x28ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ad60) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28AD68u;
label_28ad68:
    // 0x28ad68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ad6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28AD6Cu;
    {
        const bool branch_taken_0x28ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD6Cu;
        // 0x28ad70: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad6c) {
            ctx->pc = 0x28AD9Cu;
            goto label_28ad9c;
        }
    }
    ctx->pc = 0x28AD74u;
    // 0x28ad74: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x28ad78: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28ad7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ad84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad88: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x28ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x28ad8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ad8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad90: 0x8d06004c  lw          $a2, 0x4C($t0)
    ctx->pc = 0x28ad90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x28ad94: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28AD94u;
    SET_GPR_U32(ctx, 31, 0x28AD9Cu);
    ctx->pc = 0x28AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD94u;
    // 0x28ad98: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28AD94u, 0x28AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD9Cu;
label_28ad9c:
    // 0x28ad9c: 0x8e22155c  lw          $v0, 0x155C($s1)
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
    // 0x28ada0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ada4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28ADA4u;
    {
        const bool branch_taken_0x28ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADA4u;
        // 0x28ada8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ada4) {
            ctx->pc = 0x28ADD4u;
            goto label_28add4;
        }
    }
    ctx->pc = 0x28ADACu;
    // 0x28adac: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x28adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x28adb0: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x28adb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28adb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28adbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adc0: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x28adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x28adc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28adc8: 0x8d06004c  lw          $a2, 0x4C($t0)
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x28adcc: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28ADCCu;
    SET_GPR_U32(ctx, 31, 0x28ADD4u);
    ctx->pc = 0x28ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADCCu;
    // 0x28add0: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28ADCCu, 0x28ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADD4u;
label_28add4:
    // 0x28add4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ADD4u;
    {
        const bool branch_taken_0x28add4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADD4u;
        // 0x28add8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28add4) {
            ctx->pc = 0x28ADE4u;
            goto label_28ade4;
        }
    }
    ctx->pc = 0x28ADDCu;
    // 0x28addc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28ADDCu;
    {
        const bool branch_taken_0x28addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADDCu;
        // 0x28ade0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28addc) {
            ctx->pc = 0x28ADF8u;
            goto label_28adf8;
        }
    }
    ctx->pc = 0x28ADE4u;
label_28ade4:
    // 0x28ade4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ade4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ade8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ade8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28adecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adf0: 0xc0525ce  jal         func_149738
    ctx->pc = 0x28ADF0u;
    SET_GPR_U32(ctx, 31, 0x28ADF8u);
    ctx->pc = 0x28ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADF0u;
    // 0x28adf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x28ADF0u, 0x28ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADF8u;
label_28adf8:
    // 0x28adf8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28adf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28adfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28adfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28ae00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ae04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE08u;
        // 0x28ae0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AE10u;
    // 0x28ae10: 0x0  nop
    ctx->pc = 0x28ae10u;
    // NOP
    // 0x28ae14: 0x0  nop
    ctx->pc = 0x28ae14u;
    // NOP
    ctx->pc = 0x28ae18u;
}
