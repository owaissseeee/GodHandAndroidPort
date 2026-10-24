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

// Function: cSnd_EmSeCheck
// Address: 0x2cb418 - 0x2cb4e8
void cSnd_EmSeCheck_0x2cb418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_EmSeCheck_0x2cb418");
#endif

    switch (ctx->pc) {
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a8u: goto label_2cb4a8;
        default: break;
    }

    ctx->pc = 0x2cb418u;

    // 0x2cb418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb41c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cb41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cb420: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cb420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cb424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb42c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cb42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cb430: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cb430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cb434: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2cb434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2cb438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb43c: 0xc0b2cea  jal         func_2CB3A8
    ctx->pc = 0x2CB43Cu;
    SET_GPR_U32(ctx, 31, 0x2CB444u);
    ctx->pc = 0x2CB440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB43Cu;
    // 0x2cb440: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3A8u, 0x2CB43Cu, 0x2CB444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB444u;
label_2cb444:
    // 0x2cb444: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb448: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x2cb448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cb44c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2cb450: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x2cb450u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2cb454: 0x2490ce48  addiu       $s0, $a0, -0x31B8
    ctx->pc = 0x2cb454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954568));
    // 0x2cb458: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb45c: 0x0  nop
    ctx->pc = 0x2cb45cu;
    // NOP
label_2cb460:
    // 0x2cb460: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb464: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB464u;
    SET_GPR_U32(ctx, 31, 0x2CB46Cu);
    ctx->pc = 0x2CB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB464u;
    // 0x2cb468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB464u, 0x2CB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB46Cu;
label_2cb46c:
    // 0x2cb46c: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CB46Cu;
    SET_GPR_U32(ctx, 31, 0x2CB474u);
    ctx->pc = 0x2CB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB46Cu;
    // 0x2cb470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CB46Cu, 0x2CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB474u;
label_2cb474:
    // 0x2cb474: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB474u;
    {
        const bool branch_taken_0x2cb474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb474) {
            ctx->pc = 0x2CB478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB474u;
            // 0x2cb478: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB4B8u;
            goto label_2cb4b8;
        }
    }
    ctx->pc = 0x2CB47Cu;
    // 0x2cb47c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb480: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB480u;
    SET_GPR_U32(ctx, 31, 0x2CB488u);
    ctx->pc = 0x2CB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB480u;
    // 0x2cb484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB480u, 0x2CB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB488u;
label_2cb488:
    // 0x2cb488: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cb488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb48c: 0x5473000a  bnel        $v1, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB48Cu;
    {
        const bool branch_taken_0x2cb48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2cb48c) {
            ctx->pc = 0x2CB490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB48Cu;
            // 0x2cb490: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB4B8u;
            goto label_2cb4b8;
        }
    }
    ctx->pc = 0x2CB494u;
    // 0x2cb494: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb498: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB498u;
    SET_GPR_U32(ctx, 31, 0x2CB4A0u);
    ctx->pc = 0x2CB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB498u;
    // 0x2cb49c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB498u, 0x2CB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4A0u;
label_2cb4a0:
    // 0x2cb4a0: 0xc0b3f22  jal         func_2CFC88
    ctx->pc = 0x2CB4A0u;
    SET_GPR_U32(ctx, 31, 0x2CB4A8u);
    ctx->pc = 0x2CB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A0u;
    // 0x2cb4a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC88u, 0x2CB4A0u, 0x2CB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4A8u;
label_2cb4a8:
    // 0x2cb4a8: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB4A8u;
    {
        const bool branch_taken_0x2cb4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2CB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A8u;
        // 0x2cb4ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4a8) {
            ctx->pc = 0x2CB4B8u;
            goto label_2cb4b8;
        }
    }
    ctx->pc = 0x2CB4B0u;
    // 0x2cb4b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB4B0u;
    {
        const bool branch_taken_0x2cb4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B0u;
        // 0x2cb4b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4b0) {
            ctx->pc = 0x2CB4C8u;
            goto label_2cb4c8;
        }
    }
    ctx->pc = 0x2CB4B8u;
label_2cb4b8:
    // 0x2cb4b8: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x2cb4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cb4bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2CB4BCu;
    {
        const bool branch_taken_0x2cb4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4BCu;
        // 0x2cb4c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4bc) {
            ctx->pc = 0x2CB460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb460;
        }
    }
    ctx->pc = 0x2CB4C4u;
    // 0x2cb4c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb4c8:
    // 0x2cb4c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cb4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb4cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cb4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb4d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cb4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb4d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cb4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb4d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2cb4d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4E0u;
        // 0x2cb4e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB4E8u;
}
