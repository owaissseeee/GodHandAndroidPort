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

// Function: func_001D5430
// Address: 0x1d5430 - 0x1d5500
void func_001D5430_0x1d5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5430_0x1d5430");
#endif

    switch (ctx->pc) {
        case 0x1d5498u: goto label_1d5498;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54ecu: goto label_1d54ec;
        default: break;
    }

    ctx->pc = 0x1d5430u;

    // 0x1d5430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5434: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d5434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5438: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d543c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5444: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5444u;
    {
        const bool branch_taken_0x1d5444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5444u;
        // 0x1d5448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5444) {
            ctx->pc = 0x1D5484u;
            goto label_1d5484;
        }
    }
    ctx->pc = 0x1D544Cu;
    // 0x1d544c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d544cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5450u;
    {
        const bool branch_taken_0x1d5450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5450) {
            ctx->pc = 0x1D5454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5450u;
            // 0x1d5454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5468u;
            goto label_1d5468;
        }
    }
    ctx->pc = 0x1D5458u;
    // 0x1d5458: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5458u;
    {
        const bool branch_taken_0x1d5458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5458u;
        // 0x1d545c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5458) {
            ctx->pc = 0x1D5478u;
            goto label_1d5478;
        }
    }
    ctx->pc = 0x1D5460u;
    // 0x1d5460: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D5460u;
    {
        const bool branch_taken_0x1d5460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5460u;
        // 0x1d5464: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5460) {
            ctx->pc = 0x1D54F0u;
            goto label_1d54f0;
        }
    }
    ctx->pc = 0x1D5468u;
label_1d5468:
    // 0x1d5468: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5468u;
    {
        const bool branch_taken_0x1d5468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5468u;
        // 0x1d546c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5468) {
            ctx->pc = 0x1D54C0u;
            goto label_1d54c0;
        }
    }
    ctx->pc = 0x1D5470u;
    // 0x1d5470: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D5470u;
    {
        const bool branch_taken_0x1d5470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5470u;
        // 0x1d5474: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5470) {
            ctx->pc = 0x1D54F0u;
            goto label_1d54f0;
        }
    }
    ctx->pc = 0x1D5478u;
label_1d5478:
    // 0x1d5478: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d547c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D547Cu;
    {
        const bool branch_taken_0x1d547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D547Cu;
        // 0x1d5480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d547c) {
            ctx->pc = 0x1D5490u;
            goto label_1d5490;
        }
    }
    ctx->pc = 0x1D5484u;
label_1d5484:
    // 0x1d5484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5488: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d5488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5490:
    // 0x1d5490: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5490u;
    SET_GPR_U32(ctx, 31, 0x1D5498u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5490u, 0x1D5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5498u;
label_1d5498:
    // 0x1d5498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d549c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d54a0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D54A0u;
    SET_GPR_U32(ctx, 31, 0x1D54A8u);
    ctx->pc = 0x1D54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54A0u;
    // 0x1d54a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D54A0u, 0x1D54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54A8u;
label_1d54a8:
    // 0x1d54a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54ac: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d54b0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D54B0u;
    SET_GPR_U32(ctx, 31, 0x1D54B8u);
    ctx->pc = 0x1D54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54B0u;
    // 0x1d54b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D54B0u, 0x1D54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54B8u;
label_1d54b8:
    // 0x1d54b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D54B8u;
    {
        const bool branch_taken_0x1d54b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54B8u;
        // 0x1d54bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54b8) {
            ctx->pc = 0x1D54F0u;
            goto label_1d54f0;
        }
    }
    ctx->pc = 0x1D54C0u;
label_1d54c0:
    // 0x1d54c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d54c4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D54C4u;
    SET_GPR_U32(ctx, 31, 0x1D54CCu);
    ctx->pc = 0x1D54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54C4u;
    // 0x1d54c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D54C4u, 0x1D54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54CCu;
label_1d54cc:
    // 0x1d54cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d54d4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D54D4u;
    SET_GPR_U32(ctx, 31, 0x1D54DCu);
    ctx->pc = 0x1D54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54D4u;
    // 0x1d54d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D54D4u, 0x1D54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54DCu;
label_1d54dc:
    // 0x1d54dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d54dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54e0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d54e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d54e4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D54E4u;
    SET_GPR_U32(ctx, 31, 0x1D54ECu);
    ctx->pc = 0x1D54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54E4u;
    // 0x1d54e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D54E4u, 0x1D54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54ECu;
label_1d54ec:
    // 0x1d54ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d54ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d54f0:
    // 0x1d54f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d54f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d54f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D54F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F4u;
        // 0x1d54f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D54F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D54FCu;
    // 0x1d54fc: 0x0  nop
    ctx->pc = 0x1d54fcu;
    // NOP
    ctx->pc = 0x1d5500u;
}
