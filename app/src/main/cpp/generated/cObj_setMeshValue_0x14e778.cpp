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

// Function: cObj_setMeshValue
// Address: 0x14e778 - 0x14e818
void cObj_setMeshValue_0x14e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObj_setMeshValue_0x14e778");
#endif

    switch (ctx->pc) {
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7b8u: goto label_14e7b8;
        case 0x14e7c0u: goto label_14e7c0;
        case 0x14e7d8u: goto label_14e7d8;
        case 0x14e7e8u: goto label_14e7e8;
        default: break;
    }

    ctx->pc = 0x14e778u;

    // 0x14e778: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14e778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14e77c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14e780: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e784: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14e784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e788: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14e78c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14e78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e790: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14e794: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14e798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e79c: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x14E79Cu;
    SET_GPR_U32(ctx, 31, 0x14E7A4u);
    ctx->pc = 0x14E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E79Cu;
    // 0x14e7a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x14E79Cu, 0x14E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7A4u;
label_14e7a4:
    // 0x14e7a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14e7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7a8: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E7A8u;
    {
        const bool branch_taken_0x14e7a8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x14E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7A8u;
        // 0x14e7ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7a8) {
            ctx->pc = 0x14E7F8u;
            goto label_14e7f8;
        }
    }
    ctx->pc = 0x14E7B0u;
    // 0x14e7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7b4: 0x0  nop
    ctx->pc = 0x14e7b4u;
    // NOP
label_14e7b8:
    // 0x14e7b8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14E7B8u;
    SET_GPR_U32(ctx, 31, 0x14E7C0u);
    ctx->pc = 0x14E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7B8u;
    // 0x14e7bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14E7B8u, 0x14E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7C0u;
label_14e7c0:
    // 0x14e7c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14e7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7d0: 0xc055758  jal         func_155D60
    ctx->pc = 0x14E7D0u;
    SET_GPR_U32(ctx, 31, 0x14E7D8u);
    ctx->pc = 0x14E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7D0u;
    // 0x14e7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x14E7D0u, 0x14E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7D8u;
label_14e7d8:
    // 0x14e7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7e0: 0xc055758  jal         func_155D60
    ctx->pc = 0x14E7E0u;
    SET_GPR_U32(ctx, 31, 0x14E7E8u);
    ctx->pc = 0x14E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7E0u;
    // 0x14e7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x14E7E0u, 0x14E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7E8u;
label_14e7e8:
    // 0x14e7e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x14e7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x14e7ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14E7ECu;
    {
        const bool branch_taken_0x14e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ECu;
        // 0x14e7f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7ec) {
            ctx->pc = 0x14E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e7b8;
        }
    }
    ctx->pc = 0x14E7F4u;
    // 0x14e7f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14e7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14e7f8:
    // 0x14e7f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14e7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e7fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e800: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14e800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e804: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14e804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E80Cu;
        // 0x14e810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E814u;
    // 0x14e814: 0x0  nop
    ctx->pc = 0x14e814u;
    // NOP
    ctx->pc = 0x14e818u;
}
