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

// Function: SetFlagAfterCopy_145160
// Address: 0x145160 - 0x1451a0
void SetFlagAfterCopy_145160_0x145160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagAfterCopy_145160_0x145160");
#endif

    switch (ctx->pc) {
        case 0x145180u: goto label_145180;
        default: break;
    }

    ctx->pc = 0x145160u;

    // 0x145160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x145168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14516c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145170: 0x260403b4  addiu       $a0, $s0, 0x3B4
    ctx->pc = 0x145170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x145174: 0x860603b2  lh          $a2, 0x3B2($s0)
    ctx->pc = 0x145174u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 946)));
    // 0x145178: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x145178u;
    SET_GPR_U32(ctx, 31, 0x145180u);
    ctx->pc = 0x14517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145178u;
    // 0x14517c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x145178u, 0x145180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145180u;
label_145180:
    // 0x145180: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x145184: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x145184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x145188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14518c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14518cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x145190: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x145190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x145194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145198: 0x3e00008  jr          $ra
    ctx->pc = 0x145198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145198u;
        // 0x14519c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451A0u;
}
