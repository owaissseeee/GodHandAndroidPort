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

// Function: func_0032A720
// Address: 0x32a720 - 0x32a838
void func_0032A720_0x32a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A720_0x32a720");
#endif

    switch (ctx->pc) {
        case 0x32a788u: goto label_32a788;
        case 0x32a7c0u: goto label_32a7c0;
        case 0x32a804u: goto label_32a804;
        case 0x32a818u: goto label_32a818;
        default: break;
    }

    ctx->pc = 0x32a720u;

    // 0x32a720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a72c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32a730: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32a730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a734: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32a738: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32a738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a73c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a740: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x32A740u;
    {
        const bool branch_taken_0x32a740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A740u;
        // 0x32a744: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a740) {
            ctx->pc = 0x32A770u;
            goto label_32a770;
        }
    }
    ctx->pc = 0x32A748u;
    // 0x32a748: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a754: 0x248421c8  addiu       $a0, $a0, 0x21C8
    ctx->pc = 0x32a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8648));
    // 0x32a758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a75c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32a75cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a764: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32A764u;
    ctx->pc = 0x32A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A764u;
    // 0x32a768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A764u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A76Cu;
    // 0x32a76c: 0x0  nop
    ctx->pc = 0x32a76cu;
    // NOP
label_32a770:
    // 0x32a770: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x32a770u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x32a774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a778: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32A778u;
    {
        const bool branch_taken_0x32a778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A778u;
        // 0x32a77c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a778) {
            ctx->pc = 0x32A79Cu;
            goto label_32a79c;
        }
    }
    ctx->pc = 0x32A780u;
    // 0x32a780: 0xc0c9e3a  jal         func_3278E8
    ctx->pc = 0x32A780u;
    SET_GPR_U32(ctx, 31, 0x32A788u);
    ctx->pc = 0x32A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A780u;
    // 0x32a784: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3278E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3278E8u, 0x32A780u, 0x32A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A788u;
label_32a788:
    // 0x32a788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a78c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x32a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x32a790: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A790u;
    {
        const bool branch_taken_0x32a790 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x32A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A790u;
        // 0x32a794: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a790) {
            ctx->pc = 0x32A7A0u;
            goto label_32a7a0;
        }
    }
    ctx->pc = 0x32A798u;
    // 0x32a798: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a79c:
    // 0x32a79c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x32a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_32a7a0:
    // 0x32a7a0: 0x8c627410  lw          $v0, 0x7410($v1)
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29712)));
    // 0x32a7a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32A7A4u;
    {
        const bool branch_taken_0x32a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7A4u;
        // 0x32a7a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7a4) {
            ctx->pc = 0x32A7DCu;
            goto label_32a7dc;
        }
    }
    ctx->pc = 0x32A7ACu;
    // 0x32a7ac: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x32a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x32a7b0: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32A7B0u;
    {
        const bool branch_taken_0x32a7b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a7b0) {
            ctx->pc = 0x32A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A7B0u;
            // 0x32a7b4: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A7DCu;
            goto label_32a7dc;
        }
    }
    ctx->pc = 0x32A7B8u;
    // 0x32a7b8: 0xc0c9de8  jal         func_3277A0
    ctx->pc = 0x32A7B8u;
    SET_GPR_U32(ctx, 31, 0x32A7C0u);
    ctx->pc = 0x32A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7B8u;
    // 0x32a7bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32A7B8u, 0x32A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7C0u;
label_32a7c0:
    // 0x32a7c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32a7c4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A7C4u;
    {
        const bool branch_taken_0x32a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a7c4) {
            ctx->pc = 0x32A7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A7C4u;
            // 0x32a7c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A7D8u;
            goto label_32a7d8;
        }
    }
    ctx->pc = 0x32A7CCu;
    // 0x32a7cc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x32a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32a7d0: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x32a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x32a7d4: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x32a7d4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_32a7d8:
    // 0x32a7d8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x32a7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_32a7dc:
    // 0x32a7dc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x32a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x32a7e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32a7e4: 0xa4530042  sh          $s3, 0x42($v0)
    ctx->pc = 0x32a7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x32a7e8: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x32a7e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32a7ec: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x32a7ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32a7f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A7F0u;
    {
        const bool branch_taken_0x32a7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7F0u;
        // 0x32a7f4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7f0) {
            ctx->pc = 0x32A810u;
            goto label_32a810;
        }
    }
    ctx->pc = 0x32A7F8u;
    // 0x32a7f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a7fc: 0xc0c98fe  jal         func_3263F8
    ctx->pc = 0x32A7FCu;
    SET_GPR_U32(ctx, 31, 0x32A804u);
    ctx->pc = 0x32A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7FCu;
    // 0x32a800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3263F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3263F8u, 0x32A7FCu, 0x32A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A804u;
label_32a804:
    // 0x32a804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32A804u;
    {
        const bool branch_taken_0x32a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A804u;
        // 0x32a808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a804) {
            ctx->pc = 0x32A81Cu;
            goto label_32a81c;
        }
    }
    ctx->pc = 0x32A80Cu;
    // 0x32a80c: 0x0  nop
    ctx->pc = 0x32a80cu;
    // NOP
label_32a810:
    // 0x32a810: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A810u;
    SET_GPR_U32(ctx, 31, 0x32A818u);
    ctx->pc = 0x32A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A810u;
    // 0x32a814: 0x248421f8  addiu       $a0, $a0, 0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A810u, 0x32A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A818u;
label_32a818:
    // 0x32a818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a81c:
    // 0x32a81c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32a824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A82Cu;
        // 0x32a830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A834u;
    // 0x32a834: 0x0  nop
    ctx->pc = 0x32a834u;
    // NOP
    ctx->pc = 0x32a838u;
}
