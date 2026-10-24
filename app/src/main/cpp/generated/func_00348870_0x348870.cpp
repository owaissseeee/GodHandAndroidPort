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

// Function: func_00348870
// Address: 0x348870 - 0x348920
void func_00348870_0x348870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348870_0x348870");
#endif

    switch (ctx->pc) {
        case 0x348870u: goto label_348870;
        case 0x348874u: goto label_348874;
        case 0x348878u: goto label_348878;
        case 0x34887cu: goto label_34887c;
        case 0x348880u: goto label_348880;
        case 0x348884u: goto label_348884;
        case 0x348888u: goto label_348888;
        case 0x34888cu: goto label_34888c;
        case 0x348890u: goto label_348890;
        case 0x348894u: goto label_348894;
        case 0x348898u: goto label_348898;
        case 0x34889cu: goto label_34889c;
        case 0x3488a0u: goto label_3488a0;
        case 0x3488a4u: goto label_3488a4;
        case 0x3488a8u: goto label_3488a8;
        case 0x3488acu: goto label_3488ac;
        case 0x3488b0u: goto label_3488b0;
        case 0x3488b4u: goto label_3488b4;
        case 0x3488b8u: goto label_3488b8;
        case 0x3488bcu: goto label_3488bc;
        case 0x3488c0u: goto label_3488c0;
        case 0x3488c4u: goto label_3488c4;
        case 0x3488c8u: goto label_3488c8;
        case 0x3488ccu: goto label_3488cc;
        case 0x3488d0u: goto label_3488d0;
        case 0x3488d4u: goto label_3488d4;
        case 0x3488d8u: goto label_3488d8;
        case 0x3488dcu: goto label_3488dc;
        case 0x3488e0u: goto label_3488e0;
        case 0x3488e4u: goto label_3488e4;
        case 0x3488e8u: goto label_3488e8;
        case 0x3488ecu: goto label_3488ec;
        case 0x3488f0u: goto label_3488f0;
        case 0x3488f4u: goto label_3488f4;
        case 0x3488f8u: goto label_3488f8;
        case 0x3488fcu: goto label_3488fc;
        case 0x348900u: goto label_348900;
        case 0x348904u: goto label_348904;
        case 0x348908u: goto label_348908;
        case 0x34890cu: goto label_34890c;
        case 0x348910u: goto label_348910;
        case 0x348914u: goto label_348914;
        case 0x348918u: goto label_348918;
        case 0x34891cu: goto label_34891c;
        default: break;
    }

    ctx->pc = 0x348870u;

label_348870:
    // 0x348870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x348870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_348874:
    // 0x348874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348878:
    // 0x348878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34887c:
    // 0x34887c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_348880:
    // 0x348880: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x348880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_348884:
    // 0x348884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x348884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_348888:
    // 0x348888: 0xc0d225a  jal         func_348968
label_34888c:
    if (ctx->pc == 0x34888Cu) {
        ctx->pc = 0x34888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348888u;
        // 0x34888c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348890u;
        goto label_348890;
    }
    ctx->pc = 0x348888u;
    SET_GPR_U32(ctx, 31, 0x348890u);
    ctx->pc = 0x34888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348888u;
    // 0x34888c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x348888u, 0x348890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348890u;
label_348890:
    // 0x348890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348894:
    // 0x348894: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_348898:
    if (ctx->pc == 0x348898u) {
        ctx->pc = 0x348898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348894u;
        // 0x348898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34889Cu;
        goto label_34889c;
    }
    ctx->pc = 0x348894u;
    {
        const bool branch_taken_0x348894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x348894) {
            ctx->pc = 0x348898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348894u;
            // 0x348898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348904u;
            goto label_348904;
        }
    }
    ctx->pc = 0x34889Cu;
label_34889c:
    // 0x34889c: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x34889cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3488a0:
    // 0x3488a0: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x3488a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3488a4:
    // 0x3488a4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_3488a8:
    if (ctx->pc == 0x3488A8u) {
        ctx->pc = 0x3488A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488A4u;
        // 0x3488a8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488ACu;
        goto label_3488ac;
    }
    ctx->pc = 0x3488A4u;
    {
        const bool branch_taken_0x3488a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3488A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488A4u;
        // 0x3488a8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488a4) {
            ctx->pc = 0x348900u;
            goto label_348900;
        }
    }
    ctx->pc = 0x3488ACu;
label_3488ac:
    // 0x3488ac: 0xc0d231e  jal         func_348C78
label_3488b0:
    if (ctx->pc == 0x3488B0u) {
        ctx->pc = 0x3488B4u;
        goto label_3488b4;
    }
    ctx->pc = 0x3488ACu;
    SET_GPR_U32(ctx, 31, 0x3488B4u);
    ctx->pc = 0x348C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C78u, 0x3488ACu, 0x3488B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488B4u;
label_3488b4:
    // 0x3488b4: 0xc0d2126  jal         func_348498
label_3488b8:
    if (ctx->pc == 0x3488B8u) {
        ctx->pc = 0x3488B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488B4u;
        // 0x3488b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488BCu;
        goto label_3488bc;
    }
    ctx->pc = 0x3488B4u;
    SET_GPR_U32(ctx, 31, 0x3488BCu);
    ctx->pc = 0x3488B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488B4u;
    // 0x3488b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348498u, 0x3488B4u, 0x3488BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488BCu;
label_3488bc:
    // 0x3488bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3488bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3488c0:
    // 0x3488c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3488c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3488c4:
    // 0x3488c4: 0xc0d20fe  jal         func_3483F8
label_3488c8:
    if (ctx->pc == 0x3488C8u) {
        ctx->pc = 0x3488C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488C4u;
        // 0x3488c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488CCu;
        goto label_3488cc;
    }
    ctx->pc = 0x3488C4u;
    SET_GPR_U32(ctx, 31, 0x3488CCu);
    ctx->pc = 0x3488C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488C4u;
    // 0x3488c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3483F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3483F8u, 0x3488C4u, 0x3488CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488CCu;
label_3488cc:
    // 0x3488cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3488ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3488d0:
    // 0x3488d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3488d4:
    // 0x3488d4: 0x40f809  jalr        $v0
label_3488d8:
    if (ctx->pc == 0x3488D8u) {
        ctx->pc = 0x3488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488D4u;
        // 0x3488d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488DCu;
        goto label_3488dc;
    }
    ctx->pc = 0x3488D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3488DCu);
        ctx->pc = 0x3488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488D4u;
        // 0x3488d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3488D4u, 0x3488DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3488DCu;
label_3488dc:
    // 0x3488dc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3488dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3488e0:
    // 0x3488e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3488e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3488e4:
    // 0x3488e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3488e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3488e8:
    // 0x3488e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3488e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3488ec:
    // 0x3488ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3488ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3488f0:
    // 0x3488f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3488f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3488f4:
    // 0x3488f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3488f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3488f8:
    // 0x3488f8: 0x80d20b2  j           func_3482C8
label_3488fc:
    if (ctx->pc == 0x3488FCu) {
        ctx->pc = 0x3488FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488F8u;
        // 0x3488fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348900u;
        goto label_348900;
    }
    ctx->pc = 0x3488F8u;
    ctx->pc = 0x3488FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488F8u;
    // 0x3488fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3482C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3482C8u, 0x3488F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348900u;
label_348900:
    // 0x348900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348904:
    // 0x348904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348908:
    // 0x348908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34890c:
    // 0x34890c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34890cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_348910:
    // 0x348910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x348910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_348914:
    // 0x348914: 0x3e00008  jr          $ra
label_348918:
    if (ctx->pc == 0x348918u) {
        ctx->pc = 0x348918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348914u;
        // 0x348918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34891Cu;
        goto label_34891c;
    }
    ctx->pc = 0x348914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348914u;
        // 0x348918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34891Cu;
label_34891c:
    // 0x34891c: 0x0  nop
    ctx->pc = 0x34891cu;
    // NOP
    ctx->pc = 0x348920u;
}
