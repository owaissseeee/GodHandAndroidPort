#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: SetFade__12PetitDevilIdbG3COLT2Us
// Address: 0x799888 - 0x7998e8
void SetFade__12PetitDevilIdbG3COLT2Us_0x799888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFade__12PetitDevilIdbG3COLT2Us_0x799888");
#endif

    switch (ctx->pc) {
        case 0x7998b0u: goto label_7998b0;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998d8u: goto label_7998d8;
        default: break;
    }

    ctx->pc = 0x799888u;

    // 0x799888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79988c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799894: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x799898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79989c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998B8u;
            goto label_7998b8;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a8: 0xc1e657a  jal         func_7995E8
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995E8u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7998B0u;
    {
        const bool branch_taken_0x7998b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b0) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x7998c0: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d0: 0xc1e657a  jal         func_7995E8
    ctx->pc = 0x7998D0u;
    SET_GPR_U32(ctx, 31, 0x7998D8u);
    ctx->pc = 0x7998D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998D0u;
    // 0x7998d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995E8u, 0x7998D0u, 0x7998D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D8u;
label_7998d8:
    // 0x7998d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7998d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7998dc:
    // 0x7998dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7998dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998E8u;
}
} // namespace gh_r040
