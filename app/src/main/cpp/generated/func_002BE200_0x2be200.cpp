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

// Function: func_002BE200
// Address: 0x2be200 - 0x2be240
void func_002BE200_0x2be200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE200_0x2be200");
#endif

    switch (ctx->pc) {
        case 0x2be21cu: goto label_2be21c;
        case 0x2be22cu: goto label_2be22c;
        default: break;
    }

    ctx->pc = 0x2be200u;

    // 0x2be200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be210: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2be214: 0xc08067e  jal         func_2019F8
    ctx->pc = 0x2BE214u;
    SET_GPR_U32(ctx, 31, 0x2BE21Cu);
    ctx->pc = 0x2BE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE214u;
    // 0x2be218: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019F8u, 0x2BE214u, 0x2BE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE21Cu;
label_2be21c:
    // 0x2be21c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE21Cu;
    {
        const bool branch_taken_0x2be21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be21c) {
            ctx->pc = 0x2BE220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE21Cu;
            // 0x2be220: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE230u;
            goto label_2be230;
        }
    }
    ctx->pc = 0x2BE224u;
    // 0x2be224: 0xc0c6a02  jal         func_31A808
    ctx->pc = 0x2BE224u;
    SET_GPR_U32(ctx, 31, 0x2BE22Cu);
    ctx->pc = 0x2BE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE224u;
    // 0x2be228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A808u, 0x2BE224u, 0x2BE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE22Cu;
label_2be22c:
    // 0x2be22c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be230:
    // 0x2be230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be234: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE234u;
        // 0x2be238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE23Cu;
    // 0x2be23c: 0x0  nop
    ctx->pc = 0x2be23cu;
    // NOP
    ctx->pc = 0x2be240u;
}
