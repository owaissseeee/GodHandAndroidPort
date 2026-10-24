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

// Function: func_00366678
// Address: 0x366678 - 0x366730
void func_00366678_0x366678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366678_0x366678");
#endif

    switch (ctx->pc) {
        case 0x3666b8u: goto label_3666b8;
        case 0x3666d0u: goto label_3666d0;
        case 0x3666d8u: goto label_3666d8;
        default: break;
    }

    ctx->pc = 0x366678u;

    // 0x366678: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36667c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x36667cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x366680: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x366680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x366684: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x366684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x366688: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x366688u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x36668c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x36668cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x366690: 0x24a7001f  addiu       $a3, $a1, 0x1F
    ctx->pc = 0x366690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x366694: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x366694u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x366698: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x366698u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x36669c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3666a0: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3666A0u;
    {
        const bool branch_taken_0x3666a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3666A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666A0u;
        // 0x3666a4: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3666a0) {
            ctx->pc = 0x366724u;
            goto label_366724;
        }
    }
    ctx->pc = 0x3666A8u;
    // 0x3666a8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3666a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3666ac: 0x56280  sll         $t4, $a1, 10
    ctx->pc = 0x3666acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x3666b0: 0x55ac0  sll         $t3, $a1, 11
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x3666b4: 0x0  nop
    ctx->pc = 0x3666b4u;
    // NOP
label_3666b8:
    // 0x3666b8: 0x25470003  addiu       $a3, $t2, 0x3
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x3666bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3666bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3666c0: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x3666c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3666c4: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3666C4u;
    {
        const bool branch_taken_0x3666c4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666C4u;
        // 0x3666c8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3666c4) {
            ctx->pc = 0x366718u;
            goto label_366718;
        }
    }
    ctx->pc = 0x3666CCu;
    // 0x3666cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3666ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3666d0:
    // 0x3666d0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3666d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3666d4: 0x0  nop
    ctx->pc = 0x3666d4u;
    // NOP
label_3666d8:
    // 0x3666d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3666d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3666dc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3666dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3666e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3666e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3666e4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3666e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3666e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3666e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3666ec: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3666ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3666f0: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3666F0u;
    {
        const bool branch_taken_0x3666f0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3666F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666F0u;
        // 0x3666f4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3666f0) {
            ctx->pc = 0x3666D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3666d8;
        }
    }
    ctx->pc = 0x3666F8u;
    // 0x3666f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3666f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3666fc: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x3666fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x366700: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x366700u;
    {
        const bool branch_taken_0x366700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366700) {
            ctx->pc = 0x366704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366700u;
            // 0x366704: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3666D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3666d8;
        }
    }
    ctx->pc = 0x366708u;
    // 0x366708: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36670c: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x36670cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x366710: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x366710u;
    {
        const bool branch_taken_0x366710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366710) {
            ctx->pc = 0x366714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366710u;
            // 0x366714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3666D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3666d0;
        }
    }
    ctx->pc = 0x366718u;
label_366718:
    // 0x366718: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x366718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36671c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x36671Cu;
    {
        const bool branch_taken_0x36671c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36671Cu;
        // 0x366720: 0x14b5021  addu        $t2, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36671c) {
            ctx->pc = 0x3666B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3666b8;
        }
    }
    ctx->pc = 0x366724u;
label_366724:
    // 0x366724: 0x3e00008  jr          $ra
    ctx->pc = 0x366724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36672Cu;
    // 0x36672c: 0x0  nop
    ctx->pc = 0x36672cu;
    // NOP
    ctx->pc = 0x366730u;
}
