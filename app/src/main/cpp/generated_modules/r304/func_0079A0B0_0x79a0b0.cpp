#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_0079A0B0
// Address: 0x79a0b0 - 0x79a138
void func_0079A0B0_0x79a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0B0_0x79a0b0");
#endif

    switch (ctx->pc) {
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a104u: goto label_79a104;
        case 0x79a124u: goto label_79a124;
        default: break;
    }

    ctx->pc = 0x79a0b0u;

    // 0x79a0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a0b4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a0b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a0bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a0c0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a0c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a0c8: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79a0cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a0d0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a0d4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a0e0: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79AD00u));
    // 0x79a0e4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0ec: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a0f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a0f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a0f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a0fc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A0FCu;
    SET_GPR_U32(ctx, 31, 0x79A104u);
    ctx->pc = 0x79A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0FCu;
    // 0x79a100: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A0FCu, 0x79A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A104u;
label_79a104:
    // 0x79a104: 0x8e24ad00  lw          $a0, -0x5300($s1)
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
    // 0x79a108: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x79a10c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a114: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79a118: 0x8ca32f84  lw          $v1, 0x2F84($a1)
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a11c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a128: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a12c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a130: 0x3e00008  jr          $ra
    ctx->pc = 0x79A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A130u;
        // 0x79a134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A138u;
}
} // namespace gh_r304
