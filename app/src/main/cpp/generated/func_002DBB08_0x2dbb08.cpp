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

// Function: func_002DBB08
// Address: 0x2dbb08 - 0x2dbb90
void func_002DBB08_0x2dbb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBB08_0x2dbb08");
#endif

    switch (ctx->pc) {
        case 0x2dbb18u: goto label_2dbb18;
        case 0x2dbb30u: goto label_2dbb30;
        case 0x2dbb54u: goto label_2dbb54;
        case 0x2dbb84u: goto label_2dbb84;
        default: break;
    }

    ctx->pc = 0x2dbb08u;

    // 0x2dbb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbb10: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBB10u;
    SET_GPR_U32(ctx, 31, 0x2DBB18u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBB10u, 0x2DBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB18u;
label_2dbb18:
    // 0x2dbb18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb1c: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dbb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dbb20: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBB20u;
    {
        const bool branch_taken_0x2dbb20 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB20u;
        // 0x2dbb24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb20) {
            ctx->pc = 0x2DBB88u;
            goto label_2dbb88;
        }
    }
    ctx->pc = 0x2DBB28u;
    // 0x2dbb28: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBB28u;
    SET_GPR_U32(ctx, 31, 0x2DBB30u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBB28u, 0x2DBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB30u;
label_2dbb30:
    // 0x2dbb30: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBB30u;
    {
        const bool branch_taken_0x2dbb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB30u;
        // 0x2dbb34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb30) {
            ctx->pc = 0x2DBB88u;
            goto label_2dbb88;
        }
    }
    ctx->pc = 0x2DBB38u;
    // 0x2dbb38: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbb3c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbb40: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbb44: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBB44u;
    {
        const bool branch_taken_0x2dbb44 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbb44) {
            ctx->pc = 0x2DBB88u;
            goto label_2dbb88;
        }
    }
    ctx->pc = 0x2DBB4Cu;
    // 0x2dbb4c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBB4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB54u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBB4Cu, 0x2DBB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB54u;
label_2dbb54:
    // 0x2dbb54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBB54u;
    {
        const bool branch_taken_0x2dbb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB54u;
        // 0x2dbb58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb54) {
            ctx->pc = 0x2DBB88u;
            goto label_2dbb88;
        }
    }
    ctx->pc = 0x2DBB5Cu;
    // 0x2dbb5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dbb60: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dbb60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dbb64: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dbb68: 0x2508bb90  addiu       $t0, $t0, -0x4470
    ctx->pc = 0x2dbb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949776));
    // 0x2dbb6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dbb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dbb70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dbb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbb74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dbb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dbb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb7c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB84u);
    ctx->pc = 0x2DBB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB7Cu;
    // 0x2dbb80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBB7Cu, 0x2DBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB84u;
label_2dbb84:
    // 0x2dbb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbb88:
    // 0x2dbb88: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB88u;
        // 0x2dbb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB90u;
}
