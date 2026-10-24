#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: MakeBoss1__5cR501
// Address: 0x79ab08 - 0x79ab68
void MakeBoss1__5cR501_0x79ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeBoss1__5cR501_0x79ab08");
#endif

    switch (ctx->pc) {
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab58u: goto label_79ab58;
        default: break;
    }

    ctx->pc = 0x79ab08u;

    // 0x79ab08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ab0c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79ab10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ab14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab18: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x79AB18u;
    SET_GPR_U32(ctx, 31, 0x79AB20u);
    ctx->pc = 0x79AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB18u;
    // 0x79ab1c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x79AB18u, 0x79AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB20u;
label_79ab20:
    // 0x79ab20: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79ab24: 0xc07fbcc  jal         func_1FEF30
    ctx->pc = 0x79AB24u;
    SET_GPR_U32(ctx, 31, 0x79AB2Cu);
    ctx->pc = 0x79AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB24u;
    // 0x79ab28: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF30u, 0x79AB24u, 0x79AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB2Cu;
label_79ab2c:
    // 0x79ab2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ab30: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79ab34: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x79ab38: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79ab3c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79ab3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79ab40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab44: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x79AB44u;
    SET_GPR_U32(ctx, 31, 0x79AB4Cu);
    ctx->pc = 0x79AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB44u;
    // 0x79ab48: 0x24a507f0  addiu       $a1, $a1, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x79AB44u, 0x79AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB4Cu;
label_79ab4c:
    // 0x79ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab50: 0xc0a52d8  jal         func_294B60
    ctx->pc = 0x79AB50u;
    SET_GPR_U32(ctx, 31, 0x79AB58u);
    ctx->pc = 0x79AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB50u;
    // 0x79ab54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x79AB50u, 0x79AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB58u;
label_79ab58:
    // 0x79ab58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ab58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ab5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB60u;
        // 0x79ab64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB68u;
}
} // namespace gh_r501
