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

// Function: func_001DD770
// Address: 0x1dd770 - 0x1dd840
void func_001DD770_0x1dd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD770_0x1dd770");
#endif

    switch (ctx->pc) {
        case 0x1dd7d8u: goto label_1dd7d8;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd81cu: goto label_1dd81c;
        case 0x1dd82cu: goto label_1dd82c;
        default: break;
    }

    ctx->pc = 0x1dd770u;

    // 0x1dd770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd774: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1dd774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dd778: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd784: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD784u;
    {
        const bool branch_taken_0x1dd784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD784u;
        // 0x1dd788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd784) {
            ctx->pc = 0x1DD7C4u;
            goto label_1dd7c4;
        }
    }
    ctx->pc = 0x1DD78Cu;
    // 0x1dd78c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dd78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd790: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD790u;
    {
        const bool branch_taken_0x1dd790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd790) {
            ctx->pc = 0x1DD794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD790u;
            // 0x1dd794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7A8u;
            goto label_1dd7a8;
        }
    }
    ctx->pc = 0x1DD798u;
    // 0x1dd798: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD798u;
    {
        const bool branch_taken_0x1dd798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD798u;
        // 0x1dd79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd798) {
            ctx->pc = 0x1DD7B8u;
            goto label_1dd7b8;
        }
    }
    ctx->pc = 0x1DD7A0u;
    // 0x1dd7a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DD7A0u;
    {
        const bool branch_taken_0x1dd7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7A0u;
        // 0x1dd7a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7a0) {
            ctx->pc = 0x1DD830u;
            goto label_1dd830;
        }
    }
    ctx->pc = 0x1DD7A8u;
label_1dd7a8:
    // 0x1dd7a8: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD7A8u;
    {
        const bool branch_taken_0x1dd7a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7A8u;
        // 0x1dd7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7a8) {
            ctx->pc = 0x1DD800u;
            goto label_1dd800;
        }
    }
    ctx->pc = 0x1DD7B0u;
    // 0x1dd7b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD7B0u;
    {
        const bool branch_taken_0x1dd7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7B0u;
        // 0x1dd7b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7b0) {
            ctx->pc = 0x1DD830u;
            goto label_1dd830;
        }
    }
    ctx->pc = 0x1DD7B8u;
label_1dd7b8:
    // 0x1dd7b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd7bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7BCu;
    {
        const bool branch_taken_0x1dd7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7BCu;
        // 0x1dd7c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7bc) {
            ctx->pc = 0x1DD7D0u;
            goto label_1dd7d0;
        }
    }
    ctx->pc = 0x1DD7C4u;
label_1dd7c4:
    // 0x1dd7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dd7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd7cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7d0:
    // 0x1dd7d0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD7D0u;
    SET_GPR_U32(ctx, 31, 0x1DD7D8u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD7D0u, 0x1DD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7D8u;
label_1dd7d8:
    // 0x1dd7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd7e0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD7E0u;
    SET_GPR_U32(ctx, 31, 0x1DD7E8u);
    ctx->pc = 0x1DD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7E0u;
    // 0x1dd7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD7E0u, 0x1DD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7E8u;
label_1dd7e8:
    // 0x1dd7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dd7f0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD7F0u;
    SET_GPR_U32(ctx, 31, 0x1DD7F8u);
    ctx->pc = 0x1DD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7F0u;
    // 0x1dd7f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD7F0u, 0x1DD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7F8u;
label_1dd7f8:
    // 0x1dd7f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DD7F8u;
    {
        const bool branch_taken_0x1dd7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F8u;
        // 0x1dd7fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f8) {
            ctx->pc = 0x1DD830u;
            goto label_1dd830;
        }
    }
    ctx->pc = 0x1DD800u;
label_1dd800:
    // 0x1dd800: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd804: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD804u;
    SET_GPR_U32(ctx, 31, 0x1DD80Cu);
    ctx->pc = 0x1DD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD804u;
    // 0x1dd808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD804u, 0x1DD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD80Cu;
label_1dd80c:
    // 0x1dd80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd810: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd814: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD814u;
    SET_GPR_U32(ctx, 31, 0x1DD81Cu);
    ctx->pc = 0x1DD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD814u;
    // 0x1dd818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD814u, 0x1DD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD81Cu;
label_1dd81c:
    // 0x1dd81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd820: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dd824: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD824u;
    SET_GPR_U32(ctx, 31, 0x1DD82Cu);
    ctx->pc = 0x1DD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD824u;
    // 0x1dd828: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD824u, 0x1DD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD82Cu;
label_1dd82c:
    // 0x1dd82c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd830:
    // 0x1dd830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd834: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD834u;
        // 0x1dd838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD83Cu;
    // 0x1dd83c: 0x0  nop
    ctx->pc = 0x1dd83cu;
    // NOP
    ctx->pc = 0x1dd840u;
}
