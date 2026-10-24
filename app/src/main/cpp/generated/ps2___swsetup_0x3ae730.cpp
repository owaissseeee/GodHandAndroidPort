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

// Function: __swsetup
// Address: 0x3ae730 - 0x3ae818
void ps2___swsetup_0x3ae730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swsetup_0x3ae730");
#endif

    switch (ctx->pc) {
        case 0x3ae774u: goto label_3ae774;
        case 0x3ae7d0u: goto label_3ae7d0;
        default: break;
    }

    ctx->pc = 0x3ae730u;

    // 0x3ae730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ae730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ae734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ae734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ae738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae73c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae740: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3ae740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3ae744: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE744u;
    {
        const bool branch_taken_0x3ae744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae744) {
            ctx->pc = 0x3AE748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE744u;
            // 0x3ae748: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE760u;
            goto label_3ae760;
        }
    }
    ctx->pc = 0x3AE74Cu;
    // 0x3ae74c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ae74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ae750: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3ae750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3ae754: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ae754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3ae758: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3ae758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3ae75c: 0x0  nop
    ctx->pc = 0x3ae75cu;
    // NOP
label_3ae760:
    // 0x3ae760: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3ae764: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE764u;
    {
        const bool branch_taken_0x3ae764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae764) {
            ctx->pc = 0x3AE768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE764u;
            // 0x3ae768: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE778u;
            goto label_3ae778;
        }
    }
    ctx->pc = 0x3AE76Cu;
    // 0x3ae76c: 0xc0e987c  jal         func_3A61F0
    ctx->pc = 0x3AE76Cu;
    SET_GPR_U32(ctx, 31, 0x3AE774u);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3AE76Cu, 0x3AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE774u;
label_3ae774:
    // 0x3ae774: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x3ae774u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3ae778:
    // 0x3ae778: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x3ae778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x3ae77c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AE77Cu;
    {
        const bool branch_taken_0x3ae77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae77c) {
            ctx->pc = 0x3AE780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE77Cu;
            // 0x3ae780: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE7C0u;
            goto label_3ae7c0;
        }
    }
    ctx->pc = 0x3AE784u;
    // 0x3ae784: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x3ae784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3ae788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE788u;
    {
        const bool branch_taken_0x3ae788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE788u;
        // 0x3ae78c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae788) {
            ctx->pc = 0x3AE798u;
            goto label_3ae798;
        }
    }
    ctx->pc = 0x3AE790u;
    // 0x3ae790: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3AE790u;
    {
        const bool branch_taken_0x3ae790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE790u;
        // 0x3ae794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae790) {
            ctx->pc = 0x3AE808u;
            goto label_3ae808;
        }
    }
    ctx->pc = 0x3AE798u;
label_3ae798:
    // 0x3ae798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE798u;
    {
        const bool branch_taken_0x3ae798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE798u;
        // 0x3ae79c: 0x3082ffdb  andi        $v0, $a0, 0xFFDB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65499);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae798) {
            ctx->pc = 0x3AE7B0u;
            goto label_3ae7b0;
        }
    }
    ctx->pc = 0x3AE7A0u;
    // 0x3ae7a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3ae7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ae7a4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3ae7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae7a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ae7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3ae7ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3ae7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3ae7b0:
    // 0x3ae7b0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3ae7b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ae7b4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3ae7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3ae7b8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3ae7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae7bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ae7c0:
    // 0x3ae7c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE7C0u;
    {
        const bool branch_taken_0x3ae7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae7c0) {
            ctx->pc = 0x3AE7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE7C0u;
            // 0x3ae7c4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE7D4u;
            goto label_3ae7d4;
        }
    }
    ctx->pc = 0x3AE7C8u;
    // 0x3ae7c8: 0xc0e9a54  jal         func_3A6950
    ctx->pc = 0x3AE7C8u;
    SET_GPR_U32(ctx, 31, 0x3AE7D0u);
    ctx->pc = 0x3AE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7C8u;
    // 0x3ae7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6950u, 0x3AE7C8u, 0x3AE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7D0u;
label_3ae7d0:
    // 0x3ae7d0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3ae7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3ae7d4:
    // 0x3ae7d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3ae7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ae7d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE7D8u;
    {
        const bool branch_taken_0x3ae7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7D8u;
        // 0x3ae7dc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae7d8) {
            ctx->pc = 0x3AE7F4u;
            goto label_3ae7f4;
        }
    }
    ctx->pc = 0x3AE7E0u;
    // 0x3ae7e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3ae7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3ae7e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ae7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3ae7e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3ae7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ae7ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE7ECu;
    {
        const bool branch_taken_0x3ae7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7ECu;
        // 0x3ae7f0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae7ec) {
            ctx->pc = 0x3AE804u;
            goto label_3ae804;
        }
    }
    ctx->pc = 0x3AE7F4u;
label_3ae7f4:
    // 0x3ae7f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE7F4u;
    {
        const bool branch_taken_0x3ae7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7F4u;
        // 0x3ae7f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae7f4) {
            ctx->pc = 0x3AE800u;
            goto label_3ae800;
        }
    }
    ctx->pc = 0x3AE7FCu;
    // 0x3ae7fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3ae7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ae800:
    // 0x3ae800: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3ae800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3ae804:
    // 0x3ae804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae808:
    // 0x3ae808: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ae808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae810: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE810u;
        // 0x3ae814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE818u;
}
