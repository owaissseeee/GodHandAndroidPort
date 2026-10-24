#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079A970
// Address: 0x79a970 - 0x79a9b0
void func_0079A970_0x79a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A970_0x79a970");
#endif

    switch (ctx->pc) {
        case 0x79a990u: goto label_79a990;
        case 0x79a9a4u: goto label_79a9a4;
        default: break;
    }

    ctx->pc = 0x79a970u;

    // 0x79a970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a974: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79a978: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79A978u;
    {
        const bool branch_taken_0x79a978 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A978u;
        // 0x79a97c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a978) {
            ctx->pc = 0x79A9A4u;
            goto label_79a9a4;
        }
    }
    ctx->pc = 0x79A980u;
    // 0x79a980: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A980u;
    {
        const bool branch_taken_0x79a980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A980u;
        // 0x79a984: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a980) {
            ctx->pc = 0x79A998u;
            goto label_79a998;
        }
    }
    ctx->pc = 0x79A988u;
    // 0x79a988: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79A988u;
    SET_GPR_U32(ctx, 31, 0x79A990u);
    ctx->pc = 0x79A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A988u;
    // 0x79a98c: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79A988u, 0x79A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A990u;
label_79a990:
    // 0x79a990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A990u;
    {
        const bool branch_taken_0x79a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A990u;
        // 0x79a994: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a990) {
            ctx->pc = 0x79A9A8u;
            goto label_79a9a8;
        }
    }
    ctx->pc = 0x79A998u;
label_79a998:
    // 0x79a998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a99c: 0xc1e6472  jal         func_7991C8
    ctx->pc = 0x79A99Cu;
    SET_GPR_U32(ctx, 31, 0x79A9A4u);
    ctx->pc = 0x79A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A99Cu;
    // 0x79a9a0: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991C8u, 0x79A99Cu, 0x79A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A4u;
label_79a9a4:
    // 0x79a9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a9a8:
    // 0x79a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A8u;
        // 0x79a9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A9B0u;
}
} // namespace gh_r000
