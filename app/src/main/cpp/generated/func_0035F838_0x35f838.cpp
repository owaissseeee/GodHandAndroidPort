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

// Function: func_0035F838
// Address: 0x35f838 - 0x35f8a8
void func_0035F838_0x35f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F838_0x35f838");
#endif

    switch (ctx->pc) {
        case 0x35f85cu: goto label_35f85c;
        case 0x35f86cu: goto label_35f86c;
        case 0x35f874u: goto label_35f874;
        case 0x35f87cu: goto label_35f87c;
        case 0x35f884u: goto label_35f884;
        default: break;
    }

    ctx->pc = 0x35f838u;

    // 0x35f838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f83c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35f840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f844: 0x2450e330  addiu       $s0, $v0, -0x1CD0
    ctx->pc = 0x35f844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x35f848: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE330u));
    // 0x35f84c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35F84Cu;
    {
        const bool branch_taken_0x35f84c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x35F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F84Cu;
        // 0x35f850: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f84c) {
            ctx->pc = 0x35F898u;
            goto label_35f898;
        }
    }
    ctx->pc = 0x35F854u;
    // 0x35f854: 0xc0d7e2a  jal         func_35F8A8
    ctx->pc = 0x35F854u;
    SET_GPR_U32(ctx, 31, 0x35F85Cu);
    ctx->pc = 0x35F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F8A8u, 0x35F854u, 0x35F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F85Cu;
label_35f85c:
    // 0x35f85c: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x35f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x35f860: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x35f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
    // 0x35f864: 0xc0d7e2e  jal         func_35F8B8
    ctx->pc = 0x35F864u;
    SET_GPR_U32(ctx, 31, 0x35F86Cu);
    ctx->pc = 0x35F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F864u;
    // 0x35f868: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F8B8u, 0x35F864u, 0x35F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F86Cu;
label_35f86c:
    // 0x35f86c: 0xc0d7f98  jal         func_35FE60
    ctx->pc = 0x35F86Cu;
    SET_GPR_U32(ctx, 31, 0x35F874u);
    ctx->pc = 0x35FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE60u, 0x35F86Cu, 0x35F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F874u;
label_35f874:
    // 0x35f874: 0xc0d7fa4  jal         func_35FE90
    ctx->pc = 0x35F874u;
    SET_GPR_U32(ctx, 31, 0x35F87Cu);
    ctx->pc = 0x35FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE90u, 0x35F874u, 0x35F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F87Cu;
label_35f87c:
    // 0x35f87c: 0xc0db294  jal         func_36CA50
    ctx->pc = 0x35F87Cu;
    SET_GPR_U32(ctx, 31, 0x35F884u);
    ctx->pc = 0x36CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CA50u, 0x35F87Cu, 0x35F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F884u;
label_35f884:
    // 0x35f884: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35f888: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35f88c: 0xac60e334  sw          $zero, -0x1CCC($v1)
    ctx->pc = 0x35f88cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE334u, _value); } while (0);
    // 0x35f890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35f898:
    // 0x35f898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f89c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35f89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8A0u;
        // 0x35f8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F8A8u;
}
