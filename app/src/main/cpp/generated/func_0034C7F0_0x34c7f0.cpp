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

// Function: func_0034C7F0
// Address: 0x34c7f0 - 0x34c890
void func_0034C7F0_0x34c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C7F0_0x34c7f0");
#endif

    switch (ctx->pc) {
        case 0x34c7f0u: goto label_34c7f0;
        case 0x34c7f4u: goto label_34c7f4;
        case 0x34c7f8u: goto label_34c7f8;
        case 0x34c7fcu: goto label_34c7fc;
        case 0x34c800u: goto label_34c800;
        case 0x34c804u: goto label_34c804;
        case 0x34c808u: goto label_34c808;
        case 0x34c80cu: goto label_34c80c;
        case 0x34c810u: goto label_34c810;
        case 0x34c814u: goto label_34c814;
        case 0x34c818u: goto label_34c818;
        case 0x34c81cu: goto label_34c81c;
        case 0x34c820u: goto label_34c820;
        case 0x34c824u: goto label_34c824;
        case 0x34c828u: goto label_34c828;
        case 0x34c82cu: goto label_34c82c;
        case 0x34c830u: goto label_34c830;
        case 0x34c834u: goto label_34c834;
        case 0x34c838u: goto label_34c838;
        case 0x34c83cu: goto label_34c83c;
        case 0x34c840u: goto label_34c840;
        case 0x34c844u: goto label_34c844;
        case 0x34c848u: goto label_34c848;
        case 0x34c84cu: goto label_34c84c;
        case 0x34c850u: goto label_34c850;
        case 0x34c854u: goto label_34c854;
        case 0x34c858u: goto label_34c858;
        case 0x34c85cu: goto label_34c85c;
        case 0x34c860u: goto label_34c860;
        case 0x34c864u: goto label_34c864;
        case 0x34c868u: goto label_34c868;
        case 0x34c86cu: goto label_34c86c;
        case 0x34c870u: goto label_34c870;
        case 0x34c874u: goto label_34c874;
        case 0x34c878u: goto label_34c878;
        case 0x34c87cu: goto label_34c87c;
        case 0x34c880u: goto label_34c880;
        case 0x34c884u: goto label_34c884;
        case 0x34c888u: goto label_34c888;
        case 0x34c88cu: goto label_34c88c;
        default: break;
    }

    ctx->pc = 0x34c7f0u;

label_34c7f0:
    // 0x34c7f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_34c7f4:
    // 0x34c7f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c7f8:
    // 0x34c7f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_34c7fc:
    // 0x34c7fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34c800:
    // 0x34c800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34c804:
    // 0x34c804: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34c808:
    // 0x34c808: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_34c80c:
    // 0x34c80c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34c810:
    // 0x34c810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34c814:
    // 0x34c814: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34c818:
    // 0x34c818: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x34c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34c81c:
    // 0x34c81c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c820:
    // 0x34c820: 0xc0d37da  jal         func_34DF68
label_34c824:
    if (ctx->pc == 0x34C824u) {
        ctx->pc = 0x34C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C820u;
        // 0x34c824: 0x24701320  addiu       $s0, $v1, 0x1320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C828u;
        goto label_34c828;
    }
    ctx->pc = 0x34C820u;
    SET_GPR_U32(ctx, 31, 0x34C828u);
    ctx->pc = 0x34C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C820u;
    // 0x34c824: 0x24701320  addiu       $s0, $v1, 0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34C820u, 0x34C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C828u;
label_34c828:
    // 0x34c828: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_34c82c:
    // 0x34c82c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_34c830:
    if (ctx->pc == 0x34C830u) {
        ctx->pc = 0x34C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C82Cu;
        // 0x34c830: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C834u;
        goto label_34c834;
    }
    ctx->pc = 0x34C82Cu;
    {
        const bool branch_taken_0x34c82c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C82Cu;
        // 0x34c830: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c82c) {
            ctx->pc = 0x34C858u;
            goto label_34c858;
        }
    }
    ctx->pc = 0x34C834u;
label_34c834:
    // 0x34c834: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_34c838:
    if (ctx->pc == 0x34C838u) {
        ctx->pc = 0x34C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C834u;
        // 0x34c838: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C83Cu;
        goto label_34c83c;
    }
    ctx->pc = 0x34C834u;
    {
        const bool branch_taken_0x34c834 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C834u;
        // 0x34c838: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c834) {
            ctx->pc = 0x34C85Cu;
            goto label_34c85c;
        }
    }
    ctx->pc = 0x34C83Cu;
label_34c83c:
    // 0x34c83c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_34c840:
    // 0x34c840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c844:
    // 0x34c844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c848:
    // 0x34c848: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x34c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34c84c:
    // 0x34c84c: 0x40f809  jalr        $v0
label_34c850:
    if (ctx->pc == 0x34C850u) {
        ctx->pc = 0x34C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C84Cu;
        // 0x34c850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C854u;
        goto label_34c854;
    }
    ctx->pc = 0x34C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C854u);
        ctx->pc = 0x34C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C84Cu;
        // 0x34c850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C84Cu, 0x34C854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C854u;
label_34c854:
    // 0x34c854: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x34c854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_34c858:
    // 0x34c858: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x34c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_34c85c:
    // 0x34c85c: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x34c85cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_34c860:
    // 0x34c860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34c864:
    // 0x34c864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c868:
    // 0x34c868: 0xc0d37e0  jal         func_34DF80
label_34c86c:
    if (ctx->pc == 0x34C86Cu) {
        ctx->pc = 0x34C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C868u;
        // 0x34c86c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C870u;
        goto label_34c870;
    }
    ctx->pc = 0x34C868u;
    SET_GPR_U32(ctx, 31, 0x34C870u);
    ctx->pc = 0x34C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C868u;
    // 0x34c86c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34C868u, 0x34C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C870u;
label_34c870:
    // 0x34c870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c874:
    // 0x34c874: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34c874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c878:
    // 0x34c878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34c878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c87c:
    // 0x34c87c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34c87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c880:
    // 0x34c880: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34c884:
    // 0x34c884: 0x3e00008  jr          $ra
label_34c888:
    if (ctx->pc == 0x34C888u) {
        ctx->pc = 0x34C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C884u;
        // 0x34c888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C88Cu;
        goto label_34c88c;
    }
    ctx->pc = 0x34C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C884u;
        // 0x34c888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C88Cu;
label_34c88c:
    // 0x34c88c: 0x0  nop
    ctx->pc = 0x34c88cu;
    // NOP
    ctx->pc = 0x34c890u;
}
