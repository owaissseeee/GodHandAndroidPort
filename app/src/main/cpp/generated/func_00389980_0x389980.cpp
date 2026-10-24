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

// Function: func_00389980
// Address: 0x389980 - 0x3899d8
void func_00389980_0x389980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389980_0x389980");
#endif

    switch (ctx->pc) {
        case 0x3899a4u: goto label_3899a4;
        case 0x3899c0u: goto label_3899c0;
        default: break;
    }

    ctx->pc = 0x389980u;

    // 0x389980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389984: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x389984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x389988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38998c: 0x8c626728  lw          $v0, 0x6728($v1)
    ctx->pc = 0x38998cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786728u));
    // 0x389990: 0x24706728  addiu       $s0, $v1, 0x6728
    ctx->pc = 0x389990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26408));
    // 0x389994: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x389994u;
    {
        const bool branch_taken_0x389994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389994u;
        // 0x389998: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389994) {
            ctx->pc = 0x3899C0u;
            goto label_3899c0;
        }
    }
    ctx->pc = 0x38999Cu;
    // 0x38999c: 0xc0e28d0  jal         func_38A340
    ctx->pc = 0x38999Cu;
    SET_GPR_U32(ctx, 31, 0x3899A4u);
    ctx->pc = 0x38A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A340u, 0x38999Cu, 0x3899A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3899A4u;
label_3899a4:
    // 0x3899a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3899a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3899a8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3899a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3899ac: 0x24a5d1b0  addiu       $a1, $a1, -0x2E50
    ctx->pc = 0x3899acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955440));
    // 0x3899b0: 0x24c6d1d0  addiu       $a2, $a2, -0x2E30
    ctx->pc = 0x3899b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955472));
    // 0x3899b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3899b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3899b8: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x3899B8u;
    SET_GPR_U32(ctx, 31, 0x3899C0u);
    ctx->pc = 0x3899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3899B8u;
    // 0x3899bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x3899B8u, 0x3899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3899C0u;
label_3899c0:
    // 0x3899c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3899c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3899c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3899c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3899c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3899c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3899cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3899CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3899D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899CCu;
        // 0x3899d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3899CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3899D4u;
    // 0x3899d4: 0x0  nop
    ctx->pc = 0x3899d4u;
    // NOP
    ctx->pc = 0x3899d8u;
}
