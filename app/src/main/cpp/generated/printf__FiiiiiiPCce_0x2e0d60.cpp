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

// Function: printf__FiiiiiiPCce
// Address: 0x2e0d60 - 0x2e0da8
void printf__FiiiiiiPCce_0x2e0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printf__FiiiiiiPCce_0x2e0d60");
#endif

    switch (ctx->pc) {
        case 0x2e0d90u: goto label_2e0d90;
        default: break;
    }

    ctx->pc = 0x2e0d60u;

    // 0x2e0d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e0d64: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x2e0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x2e0d68: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x2e0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e0d6c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2e0d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0d74: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x2e0d74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e0d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e0d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d7c: 0xe7ae005c  swc1        $f14, 0x5C($sp)
    ctx->pc = 0x2e0d7cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e0d80: 0xe7b00060  swc1        $f16, 0x60($sp)
    ctx->pc = 0x2e0d80u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e0d84: 0xe7b20064  swc1        $f18, 0x64($sp)
    ctx->pc = 0x2e0d84u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e0d88: 0xc0b82de  jal         func_2E0B78
    ctx->pc = 0x2E0D88u;
    SET_GPR_U32(ctx, 31, 0x2E0D90u);
    ctx->pc = 0x2E0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D88u;
    // 0x2e0d8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B78u, 0x2E0D88u, 0x2E0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D90u;
label_2e0d90:
    // 0x2e0d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D94u;
        // 0x2e0d98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D9Cu;
    // 0x2e0d9c: 0x0  nop
    ctx->pc = 0x2e0d9cu;
    // NOP
    // 0x2e0da0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0da4: 0x0  nop
    ctx->pc = 0x2e0da4u;
    // NOP
    ctx->pc = 0x2e0da8u;
}
