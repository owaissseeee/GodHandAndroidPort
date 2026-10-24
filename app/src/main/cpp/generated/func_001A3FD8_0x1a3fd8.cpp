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

// Function: func_001A3FD8
// Address: 0x1a3fd8 - 0x1a4010
void func_001A3FD8_0x1a3fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3FD8_0x1a3fd8");
#endif

    switch (ctx->pc) {
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ffcu: goto label_1a3ffc;
        default: break;
    }

    ctx->pc = 0x1a3fd8u;

    // 0x1a3fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3fe4: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x1A3FE4u;
    SET_GPR_U32(ctx, 31, 0x1A3FECu);
    ctx->pc = 0x1A3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FE4u;
    // 0x1a3fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x1A3FE4u, 0x1A3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FECu;
label_1a3fec:
    // 0x1a3fec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a3ff0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3ff4: 0xc06dfb8  jal         func_1B7EE0
    ctx->pc = 0x1A3FF4u;
    SET_GPR_U32(ctx, 31, 0x1A3FFCu);
    ctx->pc = 0x1A3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FF4u;
    // 0x1a3ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1A3FF4u, 0x1A3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FFCu;
label_1a3ffc:
    // 0x1a3ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4004: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4004u;
        // 0x1a4008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A400Cu;
    // 0x1a400c: 0x0  nop
    ctx->pc = 0x1a400cu;
    // NOP
    ctx->pc = 0x1a4010u;
}
