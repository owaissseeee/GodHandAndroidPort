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

// Function: cCoreSave_updateVitalMax
// Address: 0x1facb0 - 0x1facf8
void cCoreSave_updateVitalMax_0x1facb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_updateVitalMax_0x1facb0");
#endif

    switch (ctx->pc) {
        case 0x1facd4u: goto label_1facd4;
        default: break;
    }

    ctx->pc = 0x1facb0u;

    // 0x1facb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1facb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1facb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1facb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1facb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1facbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1facbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1facc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1facc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1facc4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FACC4u;
    {
        const bool branch_taken_0x1facc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1facc4) {
            ctx->pc = 0x1FACC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FACC4u;
            // 0x1facc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FACECu;
            goto label_1facec;
        }
    }
    ctx->pc = 0x1FACCCu;
    // 0x1faccc: 0xc07eb98  jal         func_1FAE60
    ctx->pc = 0x1FACCCu;
    SET_GPR_U32(ctx, 31, 0x1FACD4u);
    ctx->pc = 0x1FAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE60u, 0x1FACCCu, 0x1FACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACD4u;
label_1facd4:
    // 0x1facd4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1facd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1facd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1facd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1facdc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1facdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1face0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1face4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1face4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x1face8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1face8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1facec:
    // 0x1facec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1facecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1facf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF0u;
        // 0x1facf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FACF8u;
}
