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

// Function: func_0037A668
// Address: 0x37a668 - 0x37a6a8
void func_0037A668_0x37a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A668_0x37a668");
#endif

    switch (ctx->pc) {
        case 0x37a694u: goto label_37a694;
        default: break;
    }

    ctx->pc = 0x37a668u;

    // 0x37a668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37a66c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37a670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a678: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x37a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x37a67c: 0x80820007  lb          $v0, 0x7($a0)
    ctx->pc = 0x37a67cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x37a680: 0x28420029  slti        $v0, $v0, 0x29
    ctx->pc = 0x37a680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x37a684: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A684u;
    {
        const bool branch_taken_0x37a684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a684) {
            ctx->pc = 0x37A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A684u;
            // 0x37a688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A69Cu;
            goto label_37a69c;
        }
    }
    ctx->pc = 0x37A68Cu;
    // 0x37a68c: 0xc0dd6fc  jal         func_375BF0
    ctx->pc = 0x37A68Cu;
    SET_GPR_U32(ctx, 31, 0x37A694u);
    ctx->pc = 0x375BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375BF0u, 0x37A68Cu, 0x37A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A694u;
label_37a694:
    // 0x37a694: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37a694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37a698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37a698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a69c:
    // 0x37a69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6A0u;
        // 0x37a6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A6A8u;
}
