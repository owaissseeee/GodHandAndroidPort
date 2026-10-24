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

// Function: SetActionKickBomb
// Address: 0x2dba00 - 0x2dba88
void SetActionKickBomb_0x2dba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionKickBomb_0x2dba00");
#endif

    switch (ctx->pc) {
        case 0x2dba10u: goto label_2dba10;
        case 0x2dba28u: goto label_2dba28;
        case 0x2dba4cu: goto label_2dba4c;
        case 0x2dba7cu: goto label_2dba7c;
        default: break;
    }

    ctx->pc = 0x2dba00u;

    // 0x2dba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dba04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dba08: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBA08u;
    SET_GPR_U32(ctx, 31, 0x2DBA10u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBA08u, 0x2DBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA10u;
label_2dba10:
    // 0x2dba10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba14: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dba18: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBA18u;
    {
        const bool branch_taken_0x2dba18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA18u;
        // 0x2dba1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba18) {
            ctx->pc = 0x2DBA80u;
            goto label_2dba80;
        }
    }
    ctx->pc = 0x2DBA20u;
    // 0x2dba20: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBA20u;
    SET_GPR_U32(ctx, 31, 0x2DBA28u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBA20u, 0x2DBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA28u;
label_2dba28:
    // 0x2dba28: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBA28u;
    {
        const bool branch_taken_0x2dba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA28u;
        // 0x2dba2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba28) {
            ctx->pc = 0x2DBA80u;
            goto label_2dba80;
        }
    }
    ctx->pc = 0x2DBA30u;
    // 0x2dba30: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dba34: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dba38: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dba38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dba3c: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBA3Cu;
    {
        const bool branch_taken_0x2dba3c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dba3c) {
            ctx->pc = 0x2DBA80u;
            goto label_2dba80;
        }
    }
    ctx->pc = 0x2DBA44u;
    // 0x2dba44: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBA44u;
    SET_GPR_U32(ctx, 31, 0x2DBA4Cu);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBA44u, 0x2DBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA4Cu;
label_2dba4c:
    // 0x2dba4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBA4Cu;
    {
        const bool branch_taken_0x2dba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA4Cu;
        // 0x2dba50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba4c) {
            ctx->pc = 0x2DBA80u;
            goto label_2dba80;
        }
    }
    ctx->pc = 0x2DBA54u;
    // 0x2dba54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dba54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dba58: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dba58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dba5c: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dba60: 0x2508ba88  addiu       $t0, $t0, -0x4578
    ctx->pc = 0x2dba60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949512));
    // 0x2dba64: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dba68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2dba68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dba6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dba6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dba70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba74: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBA74u;
    SET_GPR_U32(ctx, 31, 0x2DBA7Cu);
    ctx->pc = 0x2DBA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA74u;
    // 0x2dba78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBA74u, 0x2DBA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA7Cu;
label_2dba7c:
    // 0x2dba7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dba80:
    // 0x2dba80: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA80u;
        // 0x2dba84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBA88u;
}
