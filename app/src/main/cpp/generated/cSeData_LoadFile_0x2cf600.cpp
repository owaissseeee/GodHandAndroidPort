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

// Function: cSeData_LoadFile
// Address: 0x2cf600 - 0x2cf6f8
void cSeData_LoadFile_0x2cf600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_LoadFile_0x2cf600");
#endif

    switch (ctx->pc) {
        case 0x2cf640u: goto label_2cf640;
        case 0x2cf660u: goto label_2cf660;
        case 0x2cf674u: goto label_2cf674;
        case 0x2cf688u: goto label_2cf688;
        case 0x2cf6b0u: goto label_2cf6b0;
        case 0x2cf6ccu: goto label_2cf6cc;
        case 0x2cf6dcu: goto label_2cf6dc;
        default: break;
    }

    ctx->pc = 0x2cf600u;

    // 0x2cf600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cf604: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cf604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2cf608: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cf608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2cf60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf610: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cf610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2cf614: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cf614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cf618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cf61c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cf61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf620: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF620u;
    {
        const bool branch_taken_0x2cf620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF620u;
        // 0x2cf624: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf620) {
            ctx->pc = 0x2CF640u;
            goto label_2cf640;
        }
    }
    ctx->pc = 0x2CF628u;
    // 0x2cf628: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2cf628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2cf62c: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x2cf630: 0x461002b  bgez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CF630u;
    {
        const bool branch_taken_0x2cf630 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF630u;
        // 0x2cf634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf630) {
            ctx->pc = 0x2CF6E0u;
            goto label_2cf6e0;
        }
    }
    ctx->pc = 0x2CF638u;
    // 0x2cf638: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CF638u;
    SET_GPR_U32(ctx, 31, 0x2CF640u);
    ctx->pc = 0x2CF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF638u;
    // 0x2cf63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CF638u, 0x2CF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF640u;
label_2cf640:
    // 0x2cf640: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2cf644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cf648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cf64c: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x2cf64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x2cf650: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2cf650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2cf654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf658: 0xc0b3f54  jal         func_2CFD50
    ctx->pc = 0x2CF658u;
    SET_GPR_U32(ctx, 31, 0x2CF660u);
    ctx->pc = 0x2CF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF658u;
    // 0x2cf65c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD50u, 0x2CF658u, 0x2CF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF660u;
label_2cf660:
    // 0x2cf660: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cf660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cf664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cf664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf668: 0x24a5cf68  addiu       $a1, $a1, -0x3098
    ctx->pc = 0x2cf668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954856));
    // 0x2cf66c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2CF66Cu;
    SET_GPR_U32(ctx, 31, 0x2CF674u);
    ctx->pc = 0x2CF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF66Cu;
    // 0x2cf670: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2CF66Cu, 0x2CF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF674u;
label_2cf674:
    // 0x2cf674: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2cf674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2cf678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cf678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf67c: 0x24713f20  addiu       $s1, $v1, 0x3F20
    ctx->pc = 0x2cf67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    // 0x2cf680: 0xc08047e  jal         func_2011F8
    ctx->pc = 0x2CF680u;
    SET_GPR_U32(ctx, 31, 0x2CF688u);
    ctx->pc = 0x2CF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF680u;
    // 0x2cf684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011F8u, 0x2CF680u, 0x2CF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF688u;
label_2cf688:
    // 0x2cf688: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF688u;
    {
        const bool branch_taken_0x2cf688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF688u;
        // 0x2cf68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf688) {
            ctx->pc = 0x2CF6C4u;
            goto label_2cf6c4;
        }
    }
    ctx->pc = 0x2CF690u;
    // 0x2cf690: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cf694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf698: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2cf698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf69c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cf69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cf6a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cf6a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6a8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x2CF6A8u;
    SET_GPR_U32(ctx, 31, 0x2CF6B0u);
    ctx->pc = 0x2CF6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6A8u;
    // 0x2cf6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x2CF6A8u, 0x2CF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6B0u;
label_2cf6b0:
    // 0x2cf6b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF6B0u;
    {
        const bool branch_taken_0x2cf6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6B0u;
        // 0x2cf6b4: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6b0) {
            ctx->pc = 0x2CF6C4u;
            goto label_2cf6c4;
        }
    }
    ctx->pc = 0x2CF6B8u;
    // 0x2cf6b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf6bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF6BCu;
    {
        const bool branch_taken_0x2cf6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6BCu;
        // 0x2cf6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6bc) {
            ctx->pc = 0x2CF6D4u;
            goto label_2cf6d4;
        }
    }
    ctx->pc = 0x2CF6C4u;
label_2cf6c4:
    // 0x2cf6c4: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CF6C4u;
    SET_GPR_U32(ctx, 31, 0x2CF6CCu);
    ctx->pc = 0x2CF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6C4u;
    // 0x2cf6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CF6C4u, 0x2CF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6CCu;
label_2cf6cc:
    // 0x2cf6cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF6CCu;
    {
        const bool branch_taken_0x2cf6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6CCu;
        // 0x2cf6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6cc) {
            ctx->pc = 0x2CF6E0u;
            goto label_2cf6e0;
        }
    }
    ctx->pc = 0x2CF6D4u;
label_2cf6d4:
    // 0x2cf6d4: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CF6D4u;
    SET_GPR_U32(ctx, 31, 0x2CF6DCu);
    ctx->pc = 0x2CF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6D4u;
    // 0x2cf6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CF6D4u, 0x2CF6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6DCu;
label_2cf6dc:
    // 0x2cf6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf6e0:
    // 0x2cf6e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cf6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cf6e4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cf6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf6e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cf6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf6ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cf6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6F0u;
        // 0x2cf6f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF6F8u;
}
