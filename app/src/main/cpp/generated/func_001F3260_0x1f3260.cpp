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

// Function: func_001F3260
// Address: 0x1f3260 - 0x1f32a0
void func_001F3260_0x1f3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F3260_0x1f3260");
#endif

    switch (ctx->pc) {
        case 0x1f327cu: goto label_1f327c;
        default: break;
    }

    ctx->pc = 0x1f3260u;

    // 0x1f3260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3264: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f3264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f326c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3274: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F3274u;
    SET_GPR_U32(ctx, 31, 0x1F327Cu);
    ctx->pc = 0x1F3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3274u;
    // 0x1f3278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F3274u, 0x1F327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F327Cu;
label_1f327c:
    // 0x1f327c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3280: 0xae000928  sw          $zero, 0x928($s0)
    ctx->pc = 0x1f3280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
    // 0x1f3284: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f3288: 0xae00092c  sw          $zero, 0x92C($s0)
    ctx->pc = 0x1f3288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2348), GPR_U32(ctx, 0));
    // 0x1f328c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f328cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f3290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3298: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3298u;
        // 0x1f329c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F32A0u;
}
