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

// Function: __9streambufi
// Address: 0x38b3a8 - 0x38b3e0
void ps2___9streambufi_0x38b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9streambufi_0x38b3a8");
#endif

    switch (ctx->pc) {
        case 0x38b3c8u: goto label_38b3c8;
        default: break;
    }

    ctx->pc = 0x38b3a8u;

    // 0x38b3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38b3ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38b3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b3b4: 0x2442d2b0  addiu       $v0, $v0, -0x2D50
    ctx->pc = 0x38b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x38b3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b3c0: 0xc0e3310  jal         func_38CC40
    ctx->pc = 0x38B3C0u;
    SET_GPR_U32(ctx, 31, 0x38B3C8u);
    ctx->pc = 0x38B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B3C0u;
    // 0x38b3c4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CC40u, 0x38B3C0u, 0x38B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B3C8u;
label_38b3c8:
    // 0x38b3c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38b3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x38B3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3D4u;
        // 0x38b3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B3DCu;
    // 0x38b3dc: 0x0  nop
    ctx->pc = 0x38b3dcu;
    // NOP
    ctx->pc = 0x38b3e0u;
}
