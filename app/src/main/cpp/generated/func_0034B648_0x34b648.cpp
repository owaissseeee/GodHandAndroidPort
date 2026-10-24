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

// Function: func_0034B648
// Address: 0x34b648 - 0x34b6d0
void func_0034B648_0x34b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B648_0x34b648");
#endif

    switch (ctx->pc) {
        case 0x34b648u: goto label_34b648;
        case 0x34b64cu: goto label_34b64c;
        case 0x34b650u: goto label_34b650;
        case 0x34b654u: goto label_34b654;
        case 0x34b658u: goto label_34b658;
        case 0x34b65cu: goto label_34b65c;
        case 0x34b660u: goto label_34b660;
        case 0x34b664u: goto label_34b664;
        case 0x34b668u: goto label_34b668;
        case 0x34b66cu: goto label_34b66c;
        case 0x34b670u: goto label_34b670;
        case 0x34b674u: goto label_34b674;
        case 0x34b678u: goto label_34b678;
        case 0x34b67cu: goto label_34b67c;
        case 0x34b680u: goto label_34b680;
        case 0x34b684u: goto label_34b684;
        case 0x34b688u: goto label_34b688;
        case 0x34b68cu: goto label_34b68c;
        case 0x34b690u: goto label_34b690;
        case 0x34b694u: goto label_34b694;
        case 0x34b698u: goto label_34b698;
        case 0x34b69cu: goto label_34b69c;
        case 0x34b6a0u: goto label_34b6a0;
        case 0x34b6a4u: goto label_34b6a4;
        case 0x34b6a8u: goto label_34b6a8;
        case 0x34b6acu: goto label_34b6ac;
        case 0x34b6b0u: goto label_34b6b0;
        case 0x34b6b4u: goto label_34b6b4;
        case 0x34b6b8u: goto label_34b6b8;
        case 0x34b6bcu: goto label_34b6bc;
        case 0x34b6c0u: goto label_34b6c0;
        case 0x34b6c4u: goto label_34b6c4;
        case 0x34b6c8u: goto label_34b6c8;
        case 0x34b6ccu: goto label_34b6cc;
        default: break;
    }

    ctx->pc = 0x34b648u;

label_34b648:
    // 0x34b648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34b64c:
    // 0x34b64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34b650:
    // 0x34b650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b654:
    // 0x34b654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34b658:
    // 0x34b658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34b65c:
    // 0x34b65c: 0xc0d37b2  jal         func_34DEC8
label_34b660:
    if (ctx->pc == 0x34B660u) {
        ctx->pc = 0x34B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B65Cu;
        // 0x34b660: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B664u;
        goto label_34b664;
    }
    ctx->pc = 0x34B65Cu;
    SET_GPR_U32(ctx, 31, 0x34B664u);
    ctx->pc = 0x34B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B65Cu;
    // 0x34b660: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x34B65Cu, 0x34B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B664u;
label_34b664:
    // 0x34b664: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34b664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_34b668:
    // 0x34b668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_34b66c:
    if (ctx->pc == 0x34B66Cu) {
        ctx->pc = 0x34B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B668u;
        // 0x34b66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B670u;
        goto label_34b670;
    }
    ctx->pc = 0x34B668u;
    {
        const bool branch_taken_0x34b668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B668u;
        // 0x34b66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b668) {
            ctx->pc = 0x34B688u;
            goto label_34b688;
        }
    }
    ctx->pc = 0x34B670u;
label_34b670:
    // 0x34b670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b674:
    // 0x34b674: 0x34a501a3  ori         $a1, $a1, 0x1A3
    ctx->pc = 0x34b674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
label_34b678:
    // 0x34b678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34b67c:
    // 0x34b67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b680:
    // 0x34b680: 0x80d375c  j           func_34DD70
label_34b684:
    if (ctx->pc == 0x34B684u) {
        ctx->pc = 0x34B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B680u;
        // 0x34b684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B688u;
        goto label_34b688;
    }
    ctx->pc = 0x34B680u;
    ctx->pc = 0x34B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B680u;
    // 0x34b684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34B680u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B688u;
label_34b688:
    // 0x34b688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b68c:
    // 0x34b68c: 0xc0d6872  jal         func_35A1C8
label_34b690:
    if (ctx->pc == 0x34B690u) {
        ctx->pc = 0x34B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B68Cu;
        // 0x34b690: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B694u;
        goto label_34b694;
    }
    ctx->pc = 0x34B68Cu;
    SET_GPR_U32(ctx, 31, 0x34B694u);
    ctx->pc = 0x34B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B68Cu;
    // 0x34b690: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B68Cu, 0x34B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B694u;
label_34b694:
    // 0x34b694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b698:
    // 0x34b698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34b69c:
    if (ctx->pc == 0x34B69Cu) {
        ctx->pc = 0x34B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B698u;
        // 0x34b69c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6A0u;
        goto label_34b6a0;
    }
    ctx->pc = 0x34B698u;
    {
        const bool branch_taken_0x34b698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B698u;
        // 0x34b69c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b698) {
            ctx->pc = 0x34B6B0u;
            goto label_34b6b0;
        }
    }
    ctx->pc = 0x34B6A0u;
label_34b6a0:
    // 0x34b6a0: 0x8e022114  lw          $v0, 0x2114($s0)
    ctx->pc = 0x34b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_34b6a4:
    // 0x34b6a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34b6a8:
    // 0x34b6a8: 0x60f809  jalr        $v1
label_34b6ac:
    if (ctx->pc == 0x34B6ACu) {
        ctx->pc = 0x34B6B0u;
        goto label_34b6b0;
    }
    ctx->pc = 0x34B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34B6B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B6A8u, 0x34B6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B6B0u;
label_34b6b0:
    // 0x34b6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b6b4:
    // 0x34b6b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34b6b8:
    // 0x34b6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b6bc:
    // 0x34b6bc: 0x3e00008  jr          $ra
label_34b6c0:
    if (ctx->pc == 0x34B6C0u) {
        ctx->pc = 0x34B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6BCu;
        // 0x34b6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6C4u;
        goto label_34b6c4;
    }
    ctx->pc = 0x34B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6BCu;
        // 0x34b6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B6C4u;
label_34b6c4:
    // 0x34b6c4: 0x0  nop
    ctx->pc = 0x34b6c4u;
    // NOP
label_34b6c8:
    // 0x34b6c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x34b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34b6cc:
    // 0x34b6cc: 0x0  nop
    ctx->pc = 0x34b6ccu;
    // NOP
    ctx->pc = 0x34b6d0u;
}
