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
// Function: dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x7c98a0 - 0x7c9938
void dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3_0x7c98a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3_0x7c98a0");
#endif

    switch (ctx->pc) {
        case 0x7c98a0u: goto label_7c98a0;
        case 0x7c98a4u: goto label_7c98a4;
        case 0x7c98a8u: goto label_7c98a8;
        case 0x7c98acu: goto label_7c98ac;
        case 0x7c98b0u: goto label_7c98b0;
        case 0x7c98b4u: goto label_7c98b4;
        case 0x7c98b8u: goto label_7c98b8;
        case 0x7c98bcu: goto label_7c98bc;
        case 0x7c98c0u: goto label_7c98c0;
        case 0x7c98c4u: goto label_7c98c4;
        case 0x7c98c8u: goto label_7c98c8;
        case 0x7c98ccu: goto label_7c98cc;
        case 0x7c98d0u: goto label_7c98d0;
        case 0x7c98d4u: goto label_7c98d4;
        case 0x7c98d8u: goto label_7c98d8;
        case 0x7c98dcu: goto label_7c98dc;
        case 0x7c98e0u: goto label_7c98e0;
        case 0x7c98e4u: goto label_7c98e4;
        case 0x7c98e8u: goto label_7c98e8;
        case 0x7c98ecu: goto label_7c98ec;
        case 0x7c98f0u: goto label_7c98f0;
        case 0x7c98f4u: goto label_7c98f4;
        case 0x7c98f8u: goto label_7c98f8;
        case 0x7c98fcu: goto label_7c98fc;
        case 0x7c9900u: goto label_7c9900;
        case 0x7c9904u: goto label_7c9904;
        case 0x7c9908u: goto label_7c9908;
        case 0x7c990cu: goto label_7c990c;
        case 0x7c9910u: goto label_7c9910;
        case 0x7c9914u: goto label_7c9914;
        case 0x7c9918u: goto label_7c9918;
        case 0x7c991cu: goto label_7c991c;
        case 0x7c9920u: goto label_7c9920;
        case 0x7c9924u: goto label_7c9924;
        case 0x7c9928u: goto label_7c9928;
        case 0x7c992cu: goto label_7c992c;
        case 0x7c9930u: goto label_7c9930;
        case 0x7c9934u: goto label_7c9934;
        default: break;
    }

    ctx->pc = 0x7c98a0u;

label_7c98a0:
    // 0x7c98a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c98a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_7c98a4:
    // 0x7c98a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7c98a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7c98a8:
    // 0x7c98a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7c98ac:
    // 0x7c98ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c98acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7c98b0:
    // 0x7c98b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x7c98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_7c98b4:
    // 0x7c98b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c98b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7c98b8:
    // 0x7c98b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x7c98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_7c98bc:
    // 0x7c98bc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x7c98bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_7c98c0:
    // 0x7c98c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7c98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_7c98c4:
    // 0x7c98c4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x7c98c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_7c98c8:
    // 0x7c98c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7c98c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_7c98cc:
    // 0x7c98cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x7c98ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7c98d0:
    // 0x7c98d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7c98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_7c98d4:
    // 0x7c98d4: 0xc1f25f2  jal         func_7C97C8
label_7c98d8:
    if (ctx->pc == 0x7C98D8u) {
        ctx->pc = 0x7C98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C98D4u;
        // 0x7c98d8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C98DCu;
        goto label_7c98dc;
    }
    ctx->pc = 0x7C98D4u;
    SET_GPR_U32(ctx, 31, 0x7C98DCu);
    ctx->pc = 0x7C98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C98D4u;
    // 0x7c98d8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7C98D4u, 0x7C98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C98DCu;
label_7c98dc:
    // 0x7c98dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_7c98e0:
    if (ctx->pc == 0x7C98E0u) {
        ctx->pc = 0x7C98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C98DCu;
        // 0x7c98e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C98E4u;
        goto label_7c98e4;
    }
    ctx->pc = 0x7C98DCu;
    {
        const bool branch_taken_0x7c98dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C98DCu;
        // 0x7c98e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c98dc) {
            ctx->pc = 0x7C9910u;
            goto label_7c9910;
        }
    }
    ctx->pc = 0x7C98E4u;
label_7c98e4:
    // 0x7c98e4: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x7c98e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7c98e8:
    // 0x7c98e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c98e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c98ec:
    // 0x7c98ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x7c98ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7c98f0:
    // 0x7c98f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x7c98f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7c98f4:
    // 0x7c98f4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x7c98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_7c98f8:
    // 0x7c98f8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x7c98f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7c98fc:
    // 0x7c98fc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x7c98fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7c9900:
    // 0x7c9900: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x7c9900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_7c9904:
    // 0x7c9904: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7c9908:
    // 0x7c9908: 0x40f809  jalr        $v0
label_7c990c:
    if (ctx->pc == 0x7C990Cu) {
        ctx->pc = 0x7C990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9908u;
        // 0x7c990c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9910u;
        goto label_7c9910;
    }
    ctx->pc = 0x7C9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7C9910u);
        ctx->pc = 0x7C990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9908u;
        // 0x7c990c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9908u, 0x7C9910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C9910u;
label_7c9910:
    // 0x7c9910: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7c9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7c9914:
    // 0x7c9914: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x7c9914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7c9918:
    // 0x7c9918: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x7c9918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7c991c:
    // 0x7c991c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7c991cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7c9920:
    // 0x7c9920: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7c9920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7c9924:
    // 0x7c9924: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7c9924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7c9928:
    // 0x7c9928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c992c:
    // 0x7c992c: 0x3e00008  jr          $ra
label_7c9930:
    if (ctx->pc == 0x7C9930u) {
        ctx->pc = 0x7C9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C992Cu;
        // 0x7c9930: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9934u;
        goto label_7c9934;
    }
    ctx->pc = 0x7C992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C992Cu;
        // 0x7c9930: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9934u;
label_7c9934:
    // 0x7c9934: 0x0  nop
    ctx->pc = 0x7c9934u;
    // NOP
    ctx->pc = 0x7c9938u;
}
} // namespace gh_mcport
