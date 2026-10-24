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

// Function: func_00150C10
// Address: 0x150c10 - 0x150d78
void func_00150C10_0x150c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150C10_0x150c10");
#endif

    switch (ctx->pc) {
        case 0x150c50u: goto label_150c50;
        case 0x150c64u: goto label_150c64;
        case 0x150cccu: goto label_150ccc;
        case 0x150cf4u: goto label_150cf4;
        case 0x150cfcu: goto label_150cfc;
        default: break;
    }

    ctx->pc = 0x150c10u;

    // 0x150c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150c14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150c18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x150c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x150c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x150c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x150c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x150c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x150c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x150c30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x150c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c34: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x150C34u;
    {
        const bool branch_taken_0x150c34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C34u;
        // 0x150c38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c34) {
            ctx->pc = 0x150D50u;
            goto label_150d50;
        }
    }
    ctx->pc = 0x150C3Cu;
    // 0x150c3c: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x150C3Cu;
    {
        const bool branch_taken_0x150c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x150C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C3Cu;
        // 0x150c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c3c) {
            ctx->pc = 0x150CB8u;
            goto label_150cb8;
        }
    }
    ctx->pc = 0x150C44u;
    // 0x150c44: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150c48: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x150C48u;
    SET_GPR_U32(ctx, 31, 0x150C50u);
    ctx->pc = 0x150C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C48u;
    // 0x150c4c: 0x92300004  lbu         $s0, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x150C48u, 0x150C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C50u;
label_150c50:
    // 0x150c50: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x150c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c5c: 0xc0c243e  jal         func_3090F8
    ctx->pc = 0x150C5Cu;
    SET_GPR_U32(ctx, 31, 0x150C64u);
    ctx->pc = 0x150C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C5Cu;
    // 0x150c60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3090F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3090F8u, 0x150C5Cu, 0x150C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C64u;
label_150c64:
    // 0x150c64: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x150c64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x150c68: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x150c6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150c70: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x150c74: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x150c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x150c78: 0x24637ba0  addiu       $v1, $v1, 0x7BA0
    ctx->pc = 0x150c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31648));
    // 0x150c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150c80: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x150c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150c84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x150c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x150c88: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150c8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150c90: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x150c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x150c94: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x150c98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x150c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x150c9c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x150c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x150ca0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x150ca4: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x150ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x150ca8: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x150ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x150cac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x150cb0: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x150cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x150cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150cb8:
    // 0x150cb8: 0x16620026  bne         $s3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x150CB8u;
    {
        const bool branch_taken_0x150cb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x150CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CB8u;
        // 0x150cbc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cb8) {
            ctx->pc = 0x150D54u;
            goto label_150d54;
        }
    }
    ctx->pc = 0x150CC0u;
    // 0x150cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cc4: 0xc05435e  jal         func_150D78
    ctx->pc = 0x150CC4u;
    SET_GPR_U32(ctx, 31, 0x150CCCu);
    ctx->pc = 0x150CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CC4u;
    // 0x150cc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150D78u, 0x150CC4u, 0x150CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CCCu;
label_150ccc:
    // 0x150ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150cd4: 0x1482001e  bne         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x150CD4u;
    {
        const bool branch_taken_0x150cd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x150CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CD4u;
        // 0x150cd8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cd4) {
            ctx->pc = 0x150D50u;
            goto label_150d50;
        }
    }
    ctx->pc = 0x150CDCu;
    // 0x150cdc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x150cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ce4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150ce8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150cec: 0xc0c2762  jal         func_309D88
    ctx->pc = 0x150CECu;
    SET_GPR_U32(ctx, 31, 0x150CF4u);
    ctx->pc = 0x150CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CECu;
    // 0x150cf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D88u, 0x150CECu, 0x150CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CF4u;
label_150cf4:
    // 0x150cf4: 0xc0c2880  jal         func_30A200
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CF4u;
    // 0x150cf8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A200u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x150d00: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x150d04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150d08: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x150d0c: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x150d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x150d10: 0x24637ba0  addiu       $v1, $v1, 0x7BA0
    ctx->pc = 0x150d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31648));
    // 0x150d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150d18: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x150d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150d1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x150d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x150d20: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150d24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x150d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150d28: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x150d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x150d2c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x150d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x150d30: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x150d34: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x150d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x150d38: 0x94e30012  lhu         $v1, 0x12($a3)
    ctx->pc = 0x150d38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x150d3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x150d40: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x150d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x150d44: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x150d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x150d48: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x150d4c: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x150d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_150d50:
    // 0x150d50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x150d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_150d54:
    // 0x150d54: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x150d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x150d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150d60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x150d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150d68: 0x3e00008  jr          $ra
    ctx->pc = 0x150D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D68u;
        // 0x150d6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150D70u;
    // 0x150d70: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150d74: 0x0  nop
    ctx->pc = 0x150d74u;
    // NOP
    ctx->pc = 0x150d78u;
}
