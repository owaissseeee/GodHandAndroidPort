#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B830
// Address: 0x79b830 - 0x79b890
void func_0079B830_0x79b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B830_0x79b830");
#endif

    switch (ctx->pc) {
        case 0x79b864u: goto label_79b864;
        case 0x79b870u: goto label_79b870;
        case 0x79b880u: goto label_79b880;
        default: break;
    }

    ctx->pc = 0x79b830u;

    // 0x79b830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b834: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79b834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x79b838: 0x8cc27a8c  lw          $v0, 0x7A8C($a2)
    ctx->pc = 0x79b838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79b83c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79b840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b844: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79b844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79b848: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b84c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b850: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b85c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79B85Cu;
    SET_GPR_U32(ctx, 31, 0x79B864u);
    ctx->pc = 0x79B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B85Cu;
    // 0x79b860: 0xacc27a8c  sw          $v0, 0x7A8C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B85Cu, 0x79B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B864u;
label_79b864:
    // 0x79b864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b868: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79B868u;
    SET_GPR_U32(ctx, 31, 0x79B870u);
    ctx->pc = 0x79B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B868u;
    // 0x79b86c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79B868u, 0x79B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B870u;
label_79b870:
    // 0x79b870: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b874: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b878: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B878u;
    SET_GPR_U32(ctx, 31, 0x79B880u);
    ctx->pc = 0x79B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B878u;
    // 0x79b87c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B878u, 0x79B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B880u;
label_79b880:
    // 0x79b880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b888: 0x3e00008  jr          $ra
    ctx->pc = 0x79B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B888u;
        // 0x79b88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B890u;
}
} // namespace gh_r201
