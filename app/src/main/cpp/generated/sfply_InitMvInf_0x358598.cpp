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

// Function: sfply_InitMvInf
// Address: 0x358598 - 0x358600
void sfply_InitMvInf_0x358598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_InitMvInf_0x358598");
#endif

    switch (ctx->pc) {
        case 0x3585b4u: goto label_3585b4;
        default: break;
    }

    ctx->pc = 0x358598u;

    // 0x358598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35859c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3585a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3585a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3585a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3585a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3585a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3585ac: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x3585ACu;
    SET_GPR_U32(ctx, 31, 0x3585B4u);
    ctx->pc = 0x3585B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585ACu;
    // 0x3585b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x3585ACu, 0x3585B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585B4u;
label_3585b4:
    // 0x3585b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3585b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3585b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3585b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3585bc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3585bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3585c0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3585c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3585c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3585c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3585c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3585c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3585cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3585ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3585d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3585d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3585d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3585d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3585d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3585d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3585dc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3585dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3585e0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3585e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3585e4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3585e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3585e8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3585e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3585ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3585ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3585f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3585f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3585f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3585F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F4u;
        // 0x3585f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3585F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3585FCu;
    // 0x3585fc: 0x0  nop
    ctx->pc = 0x3585fcu;
    // NOP
    ctx->pc = 0x358600u;
}
