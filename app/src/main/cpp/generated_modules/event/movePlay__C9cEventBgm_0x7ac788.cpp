#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__C9cEventBgm
// Address: 0x7ac788 - 0x7ac828
void movePlay__C9cEventBgm_0x7ac788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C9cEventBgm_0x7ac788");
#endif

    switch (ctx->pc) {
        case 0x7ac7b0u: goto label_7ac7b0;
        case 0x7ac7c8u: goto label_7ac7c8;
        case 0x7ac7d4u: goto label_7ac7d4;
        case 0x7ac7f8u: goto label_7ac7f8;
        default: break;
    }

    ctx->pc = 0x7ac788u;

    // 0x7ac788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ac788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ac78c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7ac78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7ac790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7ac790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac794: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7ac794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7ac798: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ac798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ac79c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7ac79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7ac7a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7ac7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7ac7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac7a8: 0xc1eba6a  jal         func_7AE9A8
    ctx->pc = 0x7AC7A8u;
    SET_GPR_U32(ctx, 31, 0x7AC7B0u);
    ctx->pc = 0x7AC7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC7A8u;
    // 0x7ac7ac: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9A8u, 0x7AC7A8u, 0x7AC7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC7B0u;
label_7ac7b0:
    // 0x7ac7b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x7AC7B0u;
    {
        const bool branch_taken_0x7ac7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC7B0u;
        // 0x7ac7b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac7b0) {
            ctx->pc = 0x7AC808u;
            goto label_7ac808;
        }
    }
    ctx->pc = 0x7AC7B8u;
    // 0x7ac7b8: 0x8e530014  lw          $s3, 0x14($s2)
    ctx->pc = 0x7ac7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7ac7bc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x7AC7BCu;
    {
        const bool branch_taken_0x7ac7bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC7BCu;
        // 0x7ac7c0: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac7bc) {
            ctx->pc = 0x7AC808u;
            goto label_7ac808;
        }
    }
    ctx->pc = 0x7AC7C4u;
    // 0x7ac7c4: 0x0  nop
    ctx->pc = 0x7ac7c4u;
    // NOP
label_7ac7c8:
    // 0x7ac7c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ac7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac7cc: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7AC7CCu;
    SET_GPR_U32(ctx, 31, 0x7AC7D4u);
    ctx->pc = 0x7AC7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC7CCu;
    // 0x7ac7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7AC7CCu, 0x7AC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC7D4u;
label_7ac7d4:
    // 0x7ac7d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AC7D4u;
    {
        const bool branch_taken_0x7ac7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ac7d4) {
            ctx->pc = 0x7AC7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC7D4u;
            // 0x7ac7d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC7FCu;
            goto label_7ac7fc;
        }
    }
    ctx->pc = 0x7AC7DCu;
    // 0x7ac7dc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x7ac7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ac7e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x7ac7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x7ac7e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AC7E4u;
    {
        const bool branch_taken_0x7ac7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ac7e4) {
            ctx->pc = 0x7AC7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC7E4u;
            // 0x7ac7e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC7FCu;
            goto label_7ac7fc;
        }
    }
    ctx->pc = 0x7AC7ECu;
    // 0x7ac7ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ac7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac7f0: 0xc1eb20a  jal         func_7AC828
    ctx->pc = 0x7AC7F0u;
    SET_GPR_U32(ctx, 31, 0x7AC7F8u);
    ctx->pc = 0x7AC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC7F0u;
    // 0x7ac7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC828u, 0x7AC7F0u, 0x7AC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC7F8u;
label_7ac7f8:
    // 0x7ac7f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7ac7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7ac7fc:
    // 0x7ac7fc: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x7ac7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7ac800: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7AC800u;
    {
        const bool branch_taken_0x7ac800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC800u;
        // 0x7ac804: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac800) {
            ctx->pc = 0x7AC7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac7c8;
        }
    }
    ctx->pc = 0x7AC808u;
label_7ac808:
    // 0x7ac808: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7ac808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ac80c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7ac80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ac810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7ac810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ac814: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7ac814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ac818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac81c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC81Cu;
        // 0x7ac820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC824u;
    // 0x7ac824: 0x0  nop
    ctx->pc = 0x7ac824u;
    // NOP
    ctx->pc = 0x7ac828u;
}
} // namespace gh_event
