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

// Function: func_00366840
// Address: 0x366840 - 0x366918
void func_00366840_0x366840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366840_0x366840");
#endif

    switch (ctx->pc) {
        case 0x366890u: goto label_366890;
        case 0x3668c8u: goto label_3668c8;
        case 0x3668d0u: goto label_3668d0;
        default: break;
    }

    ctx->pc = 0x366840u;

    // 0x366840: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x366840u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366844: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x366844u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366848: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x366848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x36684c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36684cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366850: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x366850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x366854: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x366854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x366858: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x366858u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36685c: 0x2447001f  addiu       $a3, $v0, 0x1F
    ctx->pc = 0x36685cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x366860: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x366860u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x366864: 0x105180b  movn        $v1, $t0, $a1
    ctx->pc = 0x366864u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x366868: 0xe4100b  movn        $v0, $a3, $a0
    ctx->pc = 0x366868u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x36686c: 0x24143  sra         $t0, $v0, 5
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
    // 0x366870: 0x36903  sra         $t5, $v1, 4
    ctx->pc = 0x366870u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 4));
    // 0x366874: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x366874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x366878: 0x87840  sll         $t7, $t0, 1
    ctx->pc = 0x366878u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x36687c: 0x8d8a0004  lw          $t2, 0x4($t4)
    ctx->pc = 0x36687cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x366880: 0x19a00023  blez        $t5, . + 4 + (0x23 << 2)
    ctx->pc = 0x366880u;
    {
        const bool branch_taken_0x366880 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x366884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366880u;
        // 0x366884: 0x8dc70004  lw          $a3, 0x4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366880) {
            ctx->pc = 0x366910u;
            goto label_366910;
        }
    }
    ctx->pc = 0x366888u;
    // 0x366888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x366888u;
    {
        const bool branch_taken_0x366888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366888u;
        // 0x36688c: 0x10b2018  mult        $a0, $t0, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366888) {
            ctx->pc = 0x366898u;
            goto label_366898;
        }
    }
    ctx->pc = 0x366890u;
label_366890:
    // 0x366890: 0x8dc70004  lw          $a3, 0x4($t6)
    ctx->pc = 0x366890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x366894: 0x10b2018  mult        $a0, $t0, $t3
    ctx->pc = 0x366894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_366898:
    // 0x366898: 0x1e82821  addu        $a1, $t7, $t0
    ctx->pc = 0x366898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x36689c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x36689cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x3668a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3668a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668a4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3668a8: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x3668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x3668ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3668acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3668b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3668b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3668b4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3668b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3668b8: 0x24670003  addiu       $a3, $v1, 0x3
    ctx->pc = 0x3668b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3668bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3668bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3668c0: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x3668C0u;
    {
        const bool branch_taken_0x3668c0 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x3668C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668C0u;
        // 0x3668c4: 0x4a2021  addu        $a0, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668c0) {
            ctx->pc = 0x366900u;
            goto label_366900;
        }
    }
    ctx->pc = 0x3668C8u;
label_3668c8:
    // 0x3668c8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3668c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3668cc: 0x0  nop
    ctx->pc = 0x3668ccu;
    // NOP
label_3668d0:
    // 0x3668d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3668d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3668d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3668d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3668d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3668d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3668dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3668dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3668e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3668e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3668e4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3668e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3668e8: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3668E8u;
    {
        const bool branch_taken_0x3668e8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3668ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668E8u;
        // 0x3668ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668e8) {
            ctx->pc = 0x3668D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3668d0;
        }
    }
    ctx->pc = 0x3668F0u;
    // 0x3668f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3668f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3668f4: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x3668f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3668f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3668F8u;
    {
        const bool branch_taken_0x3668f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3668FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668F8u;
        // 0x3668fc: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668f8) {
            ctx->pc = 0x3668C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3668c8;
        }
    }
    ctx->pc = 0x366900u;
label_366900:
    // 0x366900: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x366900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x366904: 0x16d102a  slt         $v0, $t3, $t5
    ctx->pc = 0x366904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x366908: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x366908u;
    {
        const bool branch_taken_0x366908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366908) {
            ctx->pc = 0x36690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366908u;
            // 0x36690c: 0x8d8a0004  lw          $t2, 0x4($t4) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366890;
        }
    }
    ctx->pc = 0x366910u;
label_366910:
    // 0x366910: 0x3e00008  jr          $ra
    ctx->pc = 0x366910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366918u;
}
