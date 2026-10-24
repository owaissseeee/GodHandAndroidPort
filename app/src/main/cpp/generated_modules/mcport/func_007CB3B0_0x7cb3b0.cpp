#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CB3B0
// Address: 0x7cb3b0 - 0x7cb408
void func_007CB3B0_0x7cb3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CB3B0_0x7cb3b0");
#endif

    switch (ctx->pc) {
        case 0x7cb3c4u: goto label_7cb3c4;
        case 0x7cb3d8u: goto label_7cb3d8;
        case 0x7cb3e8u: goto label_7cb3e8;
        default: break;
    }

    ctx->pc = 0x7cb3b0u;

    // 0x7cb3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cb3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7cb3bc: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CB3BCu;
    SET_GPR_U32(ctx, 31, 0x7CB3C4u);
    ctx->pc = 0x7CB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB3BCu;
    // 0x7cb3c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CB3BCu, 0x7CB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB3C4u;
label_7cb3c4:
    // 0x7cb3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cb3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb3c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CB3C8u;
    {
        const bool branch_taken_0x7cb3c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB3C8u;
        // 0x7cb3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb3c8) {
            ctx->pc = 0x7CB3DCu;
            goto label_7cb3dc;
        }
    }
    ctx->pc = 0x7CB3D0u;
    // 0x7cb3d0: 0xc1f2cd4  jal         func_7CB350
    ctx->pc = 0x7CB3D0u;
    SET_GPR_U32(ctx, 31, 0x7CB3D8u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CB3D0u, 0x7CB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB3D8u;
label_7cb3d8:
    // 0x7cb3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cb3dc:
    // 0x7cb3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7cb3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb3e0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7CB3E0u;
    SET_GPR_U32(ctx, 31, 0x7CB3E8u);
    ctx->pc = 0x7CB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB3E0u;
    // 0x7cb3e4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7CB3E0u, 0x7CB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB3E8u;
label_7cb3e8:
    // 0x7cb3e8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x7cb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7cb3ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb3f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x7cb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x7cb3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB3FCu;
        // 0x7cb400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB404u;
    // 0x7cb404: 0x0  nop
    ctx->pc = 0x7cb404u;
    // NOP
    ctx->pc = 0x7cb408u;
}
} // namespace gh_mcport
