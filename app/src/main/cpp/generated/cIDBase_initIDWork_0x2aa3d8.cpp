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

// Function: cIDBase_initIDWork
// Address: 0x2aa3d8 - 0x2aa410
void cIDBase_initIDWork_0x2aa3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_initIDWork_0x2aa3d8");
#endif

    switch (ctx->pc) {
        case 0x2aa3ecu: goto label_2aa3ec;
        case 0x2aa400u: goto label_2aa400;
        default: break;
    }

    ctx->pc = 0x2aa3d8u;

    // 0x2aa3d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa3dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aa3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aa3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa3e4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x2AA3E4u;
    SET_GPR_U32(ctx, 31, 0x2AA3ECu);
    ctx->pc = 0x2AA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA3E4u;
    // 0x2aa3e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x2AA3E4u, 0x2AA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3ECu;
label_2aa3ec:
    // 0x2aa3ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA3ECu;
    {
        const bool branch_taken_0x2aa3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3ECu;
        // 0x2aa3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3ec) {
            ctx->pc = 0x2AA400u;
            goto label_2aa400;
        }
    }
    ctx->pc = 0x2AA3F4u;
    // 0x2aa3f4: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2aa3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2aa3f8: 0xc0aa8b4  jal         func_2AA2D0
    ctx->pc = 0x2AA3F8u;
    SET_GPR_U32(ctx, 31, 0x2AA400u);
    ctx->pc = 0x2AA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA3F8u;
    // 0x2aa3fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA2D0u, 0x2AA3F8u, 0x2AA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA400u;
label_2aa400:
    // 0x2aa400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aa400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa408: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA408u;
        // 0x2aa40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA410u;
}
