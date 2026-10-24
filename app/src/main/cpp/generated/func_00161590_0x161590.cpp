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

// Function: func_00161590
// Address: 0x161590 - 0x1615d0
void func_00161590_0x161590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161590_0x161590");
#endif

    switch (ctx->pc) {
        case 0x1615acu: goto label_1615ac;
        default: break;
    }

    ctx->pc = 0x161590u;

    // 0x161590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161594: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16159c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1615a0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1615a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x1615a4: 0xc0aa53c  jal         func_2A94F0
    ctx->pc = 0x1615A4u;
    SET_GPR_U32(ctx, 31, 0x1615ACu);
    ctx->pc = 0x1615A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615A4u;
    // 0x1615a8: 0x24844230  addiu       $a0, $a0, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A94F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A94F0u, 0x1615A4u, 0x1615ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615ACu;
label_1615ac:
    // 0x1615ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1615acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1615b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1615b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1615b4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1615b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1615b8: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x1615b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x1615bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1615bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1615c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1615c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1615C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615C4u;
        // 0x1615c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615CCu;
    // 0x1615cc: 0x0  nop
    ctx->pc = 0x1615ccu;
    // NOP
    ctx->pc = 0x1615d0u;
}
