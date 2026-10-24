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

// Function: func_0038A340
// Address: 0x38a340 - 0x38a398
void func_0038A340_0x38a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A340_0x38a340");
#endif

    switch (ctx->pc) {
        case 0x38a364u: goto label_38a364;
        case 0x38a380u: goto label_38a380;
        default: break;
    }

    ctx->pc = 0x38a340u;

    // 0x38a340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a344: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38a344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x38a348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a34c: 0x8c626738  lw          $v0, 0x6738($v1)
    ctx->pc = 0x38a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786738u));
    // 0x38a350: 0x24706738  addiu       $s0, $v1, 0x6738
    ctx->pc = 0x38a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26424));
    // 0x38a354: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38A354u;
    {
        const bool branch_taken_0x38a354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A354u;
        // 0x38a358: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a354) {
            ctx->pc = 0x38A380u;
            goto label_38a380;
        }
    }
    ctx->pc = 0x38A35Cu;
    // 0x38a35c: 0xc0e3036  jal         func_38C0D8
    ctx->pc = 0x38A35Cu;
    SET_GPR_U32(ctx, 31, 0x38A364u);
    ctx->pc = 0x38C0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0D8u, 0x38A35Cu, 0x38A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A364u;
label_38a364:
    // 0x38a364: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38a364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38a368: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x38a368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x38a36c: 0x24a5d1f8  addiu       $a1, $a1, -0x2E08
    ctx->pc = 0x38a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955512));
    // 0x38a370: 0x24c6d208  addiu       $a2, $a2, -0x2DF8
    ctx->pc = 0x38a370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955528));
    // 0x38a374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a378: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x38A378u;
    SET_GPR_U32(ctx, 31, 0x38A380u);
    ctx->pc = 0x38A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A378u;
    // 0x38a37c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x38A378u, 0x38A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A380u;
label_38a380:
    // 0x38a380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a38c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A38Cu;
        // 0x38a390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A394u;
    // 0x38a394: 0x0  nop
    ctx->pc = 0x38a394u;
    // NOP
    ctx->pc = 0x38a398u;
}
