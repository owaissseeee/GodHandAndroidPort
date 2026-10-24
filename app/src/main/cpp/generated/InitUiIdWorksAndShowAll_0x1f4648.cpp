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

// Function: InitUiIdWorksAndShowAll
// Address: 0x1f4648 - 0x1f46e0
void InitUiIdWorksAndShowAll_0x1f4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitUiIdWorksAndShowAll_0x1f4648");
#endif

    switch (ctx->pc) {
        case 0x1f467cu: goto label_1f467c;
        case 0x1f4688u: goto label_1f4688;
        case 0x1f4694u: goto label_1f4694;
        case 0x1f46a4u: goto label_1f46a4;
        case 0x1f46c0u: goto label_1f46c0;
        default: break;
    }

    ctx->pc = 0x1f4648u;

    // 0x1f4648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f464c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f4650: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f4654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4658: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f4658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f465c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f4660: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1f4664: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f4664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f4668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f466c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4674: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1F4674u;
    SET_GPR_U32(ctx, 31, 0x1F467Cu);
    ctx->pc = 0x1F4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4674u;
    // 0x1f4678: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1F4674u, 0x1F467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F467Cu;
label_1f467c:
    // 0x1f467c: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1f4680: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1F4680u;
    SET_GPR_U32(ctx, 31, 0x1F4688u);
    ctx->pc = 0x1F4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4680u;
    // 0x1f4684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1F4680u, 0x1F4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4688u;
label_1f4688:
    // 0x1f4688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f468c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F468Cu;
    SET_GPR_U32(ctx, 31, 0x1F4694u);
    ctx->pc = 0x1F4690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F468Cu;
    // 0x1f4690: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F468Cu, 0x1F4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4694u;
label_1f4694:
    // 0x1f4694: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f4694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f4698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f469c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1F469Cu;
    SET_GPR_U32(ctx, 31, 0x1F46A4u);
    ctx->pc = 0x1F46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F469Cu;
    // 0x1f46a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1F469Cu, 0x1F46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46A4u;
label_1f46a4:
    // 0x1f46a4: 0x2a42006f  slti        $v0, $s2, 0x6F
    ctx->pc = 0x1f46a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x1f46a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F46A8u;
    {
        const bool branch_taken_0x1f46a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46A8u;
        // 0x1f46ac: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46a8) {
            ctx->pc = 0x1F4688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4688;
        }
    }
    ctx->pc = 0x1F46B0u;
    // 0x1f46b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46b4: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1f46b8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F46B8u;
    SET_GPR_U32(ctx, 31, 0x1F46C0u);
    ctx->pc = 0x1F46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F46B8u;
    // 0x1f46bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F46B8u, 0x1F46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46C0u;
label_1f46c0:
    // 0x1f46c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f46c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f46c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f46c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f46c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f46c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f46cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f46ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f46d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f46d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f46d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46D4u;
        // 0x1f46d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F46D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46DCu;
    // 0x1f46dc: 0x0  nop
    ctx->pc = 0x1f46dcu;
    // NOP
    ctx->pc = 0x1f46e0u;
}
