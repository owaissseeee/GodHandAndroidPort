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
// Function: func_0079B890
// Address: 0x79b890 - 0x79b8f8
void func_0079B890_0x79b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B890_0x79b890");
#endif

    switch (ctx->pc) {
        case 0x79b8c8u: goto label_79b8c8;
        case 0x79b8d4u: goto label_79b8d4;
        case 0x79b8e4u: goto label_79b8e4;
        default: break;
    }

    ctx->pc = 0x79b890u;

    // 0x79b890: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79b894: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b898: 0x8c837a8c  lw          $v1, 0x7A8C($a0)
    ctx->pc = 0x79b898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79b89c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x79b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x79b8a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b8a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79b8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b8ac: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b8b0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b8b4: 0xac837a8c  sw          $v1, 0x7A8C($a0)
    ctx->pc = 0x79b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31372), GPR_U32(ctx, 3));
    // 0x79b8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8c0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79B8C0u;
    SET_GPR_U32(ctx, 31, 0x79B8C8u);
    ctx->pc = 0x79B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8C0u;
    // 0x79b8c4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B8C0u, 0x79B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8C8u;
label_79b8c8:
    // 0x79b8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8cc: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79B8CCu;
    SET_GPR_U32(ctx, 31, 0x79B8D4u);
    ctx->pc = 0x79B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8CCu;
    // 0x79b8d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79B8CCu, 0x79B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8D4u;
label_79b8d4:
    // 0x79b8d4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b8d8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b8dc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B8DCu;
    SET_GPR_U32(ctx, 31, 0x79B8E4u);
    ctx->pc = 0x79B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8DCu;
    // 0x79b8e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B8DCu, 0x79B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8E4u;
label_79b8e4:
    // 0x79b8e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x79B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8ECu;
        // 0x79b8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B8F4u;
    // 0x79b8f4: 0x0  nop
    ctx->pc = 0x79b8f4u;
    // NOP
    ctx->pc = 0x79b8f8u;
}
} // namespace gh_r201
