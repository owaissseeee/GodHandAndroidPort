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

// Function: func_002D5790
// Address: 0x2d5790 - 0x2d57c8
void func_002D5790_0x2d5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5790_0x2d5790");
#endif

    switch (ctx->pc) {
        case 0x2d57b4u: goto label_2d57b4;
        default: break;
    }

    ctx->pc = 0x2d5790u;

    // 0x2d5790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5794: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2d5794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2d5798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d579c: 0x24c64200  addiu       $a2, $a2, 0x4200
    ctx->pc = 0x2d579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16896));
    // 0x2d57a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d57a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d57a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d57ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D57ACu;
    SET_GPR_U32(ctx, 31, 0x2D57B4u);
    ctx->pc = 0x2D57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57ACu;
    // 0x2d57b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D57ACu, 0x2D57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57B4u;
label_2d57b4:
    // 0x2d57b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d57b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d57b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d57bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d57c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57C0u;
        // 0x2d57c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D57C8u;
}
