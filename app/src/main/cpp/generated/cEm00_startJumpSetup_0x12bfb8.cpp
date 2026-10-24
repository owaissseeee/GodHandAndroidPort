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

// Function: cEm00_startJumpSetup
// Address: 0x12bfb8 - 0x12c000
void cEm00_startJumpSetup_0x12bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_startJumpSetup_0x12bfb8");
#endif

    switch (ctx->pc) {
        case 0x12bfdcu: goto label_12bfdc;
        case 0x12bfe4u: goto label_12bfe4;
        default: break;
    }

    ctx->pc = 0x12bfb8u;

    // 0x12bfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bfbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bfc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfc8: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12bfcc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BFCCu;
    {
        const bool branch_taken_0x12bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bfcc) {
            ctx->pc = 0x12BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BFCCu;
            // 0x12bfd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BFF4u;
            goto label_12bff4;
        }
    }
    ctx->pc = 0x12BFD4u;
    // 0x12bfd4: 0xc0b7248  jal         func_2DC920
    ctx->pc = 0x12BFD4u;
    SET_GPR_U32(ctx, 31, 0x12BFDCu);
    ctx->pc = 0x2DC920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC920u, 0x12BFD4u, 0x12BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFDCu;
label_12bfdc:
    // 0x12bfdc: 0xc0b72b6  jal         func_2DCAD8
    ctx->pc = 0x12BFDCu;
    SET_GPR_U32(ctx, 31, 0x12BFE4u);
    ctx->pc = 0x2DCAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCAD8u, 0x12BFDCu, 0x12BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFE4u;
label_12bfe4:
    // 0x12bfe4: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12bfe8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x12bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x12bfec: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x12bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    // 0x12bff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12bff4:
    // 0x12bff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFF8u;
        // 0x12bffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C000u;
}
