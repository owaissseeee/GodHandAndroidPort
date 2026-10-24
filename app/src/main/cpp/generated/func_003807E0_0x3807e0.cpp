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

// Function: func_003807E0
// Address: 0x3807e0 - 0x380870
void func_003807E0_0x3807e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003807E0_0x3807e0");
#endif

    switch (ctx->pc) {
        case 0x380800u: goto label_380800;
        case 0x38080cu: goto label_38080c;
        default: break;
    }

    ctx->pc = 0x3807e0u;

    // 0x3807e0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3807e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3807e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3807e8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3807e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3807ec: 0x24442060  addiu       $a0, $v0, 0x2060
    ctx->pc = 0x3807ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8288));
    // 0x3807f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3807f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3807f4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x3807f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x3807f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3807f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x3807fc: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3807fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_380800:
    // 0x380800: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x380800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x380804: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380804u;
    {
        const bool branch_taken_0x380804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x380808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380804u;
        // 0x380808: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380804) {
            ctx->pc = 0x380814u;
            goto label_380814;
        }
    }
    ctx->pc = 0x38080Cu;
label_38080c:
    // 0x38080c: 0x3e00008  jr          $ra
    ctx->pc = 0x38080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38080Cu;
        // 0x380810: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380814u;
label_380814:
    // 0x380814: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x380814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x380818: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x380818u;
    {
        const bool branch_taken_0x380818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380818u;
        // 0x38081c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380818) {
            ctx->pc = 0x380850u;
            goto label_380850;
        }
    }
    ctx->pc = 0x380820u;
    // 0x380820: 0x9482fffe  lhu         $v0, -0x2($a0)
    ctx->pc = 0x380820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x380824: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x380824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x380828: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x380828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38082c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x38082cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x380830: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x380830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x380834: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x380834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x380838: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x380838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x38083c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x38083cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x380840: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x380840u;
    {
        const bool branch_taken_0x380840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380840u;
        // 0x380844: 0x91403  sra         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380840) {
            ctx->pc = 0x38080Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38080c;
        }
    }
    ctx->pc = 0x380848u;
    // 0x380848: 0x3e00008  jr          $ra
    ctx->pc = 0x380848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380850u;
label_380850:
    // 0x380850: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x380850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x380854: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x380854u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x380858: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x380858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x38085c: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x38085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x380860: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x380860u;
    {
        const bool branch_taken_0x380860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380860u;
        // 0x380864: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380860) {
            ctx->pc = 0x380800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380800;
        }
    }
    ctx->pc = 0x380868u;
    // 0x380868: 0x3e00008  jr          $ra
    ctx->pc = 0x380868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380868u;
        // 0x38086c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380870u;
}
