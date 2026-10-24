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

// Function: HeapBuf_release
// Address: 0x2be5f0 - 0x2be630
void HeapBuf_release_0x2be5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HeapBuf_release_0x2be5f0");
#endif

    switch (ctx->pc) {
        case 0x2be604u: goto label_2be604;
        case 0x2be618u: goto label_2be618;
        default: break;
    }

    ctx->pc = 0x2be5f0u;

    // 0x2be5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be5f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be5fc: 0xc0af9b2  jal         func_2BE6C8
    ctx->pc = 0x2BE5FCu;
    SET_GPR_U32(ctx, 31, 0x2BE604u);
    ctx->pc = 0x2BE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5FCu;
    // 0x2be600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6C8u, 0x2BE5FCu, 0x2BE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE604u;
label_2be604:
    // 0x2be604: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2be604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2be608: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE608u;
    {
        const bool branch_taken_0x2be608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be608) {
            ctx->pc = 0x2BE60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE608u;
            // 0x2be60c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE61Cu;
            goto label_2be61c;
        }
    }
    ctx->pc = 0x2BE610u;
    // 0x2be610: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2BE610u;
    SET_GPR_U32(ctx, 31, 0x2BE618u);
    ctx->pc = 0x2BE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE610u;
    // 0x2be614: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2BE610u, 0x2BE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE618u;
label_2be618:
    // 0x2be618: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2be618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2be61c:
    // 0x2be61c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2be61cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be628: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE628u;
        // 0x2be62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE630u;
}
