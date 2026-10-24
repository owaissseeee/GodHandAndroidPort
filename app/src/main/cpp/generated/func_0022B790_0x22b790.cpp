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

// Function: func_0022B790
// Address: 0x22b790 - 0x22b9e0
void func_0022B790_0x22b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022B790_0x22b790");
#endif

    switch (ctx->pc) {
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b814u: goto label_22b814;
        case 0x22b838u: goto label_22b838;
        case 0x22b870u: goto label_22b870;
        case 0x22b880u: goto label_22b880;
        case 0x22b924u: goto label_22b924;
        case 0x22b944u: goto label_22b944;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b95cu: goto label_22b95c;
        case 0x22b970u: goto label_22b970;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b984u: goto label_22b984;
        default: break;
    }

    ctx->pc = 0x22b790u;

    // 0x22b790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22b794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b798: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22b79c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22b7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22b7a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22b7ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22b7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b7b4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22b7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22b7b8: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x22b7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b7bc: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22b7c0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22b7c4: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22B7C4u;
    SET_GPR_U32(ctx, 31, 0x22B7CCu);
    ctx->pc = 0x22B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7C4u;
    // 0x22b7c8: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22B7C4u, 0x22B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7CCu;
label_22b7cc:
    // 0x22b7cc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x22b7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b7d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B7D0u;
    {
        const bool branch_taken_0x22b7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7D0u;
        // 0x22b7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7d0) {
            ctx->pc = 0x22B7E8u;
            goto label_22b7e8;
        }
    }
    ctx->pc = 0x22B7D8u;
    // 0x22b7d8: 0x5062004e  beql        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x22B7D8u;
    {
        const bool branch_taken_0x22b7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b7d8) {
            ctx->pc = 0x22B7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7D8u;
            // 0x22b7dc: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B914u;
            goto label_22b914;
        }
    }
    ctx->pc = 0x22B7E0u;
    // 0x22b7e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x22B7E0u;
    {
        const bool branch_taken_0x22b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7e0) {
            ctx->pc = 0x22B97Cu;
            goto label_22b97c;
        }
    }
    ctx->pc = 0x22B7E8u;
label_22b7e8:
    // 0x22b7e8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22b7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b7ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B7ECu;
    SET_GPR_U32(ctx, 31, 0x22B7F4u);
    ctx->pc = 0x22B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7ECu;
    // 0x22b7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B7ECu, 0x22B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7F4u;
label_22b7f4:
    // 0x22b7f4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x22b7f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b7f8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22b7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b804: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x22b804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22b808: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22b808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b80c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22B80Cu;
    SET_GPR_U32(ctx, 31, 0x22B814u);
    ctx->pc = 0x22B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B80Cu;
    // 0x22b810: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22B80Cu, 0x22B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B814u;
label_22b814:
    // 0x22b814: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b818: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22b818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x22b81c: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x22b81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22b820: 0x8c6521f4  lw          $a1, 0x21F4($v1)
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8692)));
    // 0x22b824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b828: 0x8c6221f8  lw          $v0, 0x21F8($v1)
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8696)));
    // 0x22b82c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22b830: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22B830u;
    SET_GPR_U32(ctx, 31, 0x22B838u);
    ctx->pc = 0x22B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B830u;
    // 0x22b834: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22B830u, 0x22B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B838u;
label_22b838:
    // 0x22b838: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22b838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22b83c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B83Cu;
    {
        const bool branch_taken_0x22b83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b83c) {
            ctx->pc = 0x22B850u;
            goto label_22b850;
        }
    }
    ctx->pc = 0x22B844u;
    // 0x22b844: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b848: 0x8c6221fc  lw          $v0, 0x21FC($v1)
    ctx->pc = 0x22b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8700)));
    // 0x22b84c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22b84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b850:
    // 0x22b850: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22b858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b85c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22b85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b864: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22b868: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B868u;
    SET_GPR_U32(ctx, 31, 0x22B870u);
    ctx->pc = 0x22B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B868u;
    // 0x22b86c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B868u, 0x22B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B870u;
label_22b870:
    // 0x22b870: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22b874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b878: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22B878u;
    SET_GPR_U32(ctx, 31, 0x22B880u);
    ctx->pc = 0x22B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B878u;
    // 0x22b87c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22B878u, 0x22B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B880u;
label_22b880:
    // 0x22b880: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22b880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22b884: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22b884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22b888: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B888u;
    {
        const bool branch_taken_0x22b888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B888u;
        // 0x22b88c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b888) {
            ctx->pc = 0x22B8A8u;
            goto label_22b8a8;
        }
    }
    ctx->pc = 0x22B890u;
    // 0x22b890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b894: 0x24428c30  addiu       $v0, $v0, -0x73D0
    ctx->pc = 0x22b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937648));
    // 0x22b898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b89c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b8a0: 0x800008  jr          $a0
    ctx->pc = 0x22B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B8A8u: goto label_22b8a8;
            case 0x22B8C0u: goto label_22b8c0;
            case 0x22B8DCu: goto label_22b8dc;
            case 0x22B900u: goto label_22b900;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B8A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B8A8u;
label_22b8a8:
    // 0x22b8a8: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x22b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b8ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b8b0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x22b8b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b8b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22B8B8u;
    {
        const bool branch_taken_0x22b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8B8u;
        // 0x22b8bc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8b8) {
            ctx->pc = 0x22B8F8u;
            goto label_22b8f8;
        }
    }
    ctx->pc = 0x22B8C0u;
label_22b8c0:
    // 0x22b8c0: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x22b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b8c8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x22b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x22b8cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22b8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22b8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b8d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B8D4u;
    {
        const bool branch_taken_0x22b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8D4u;
        // 0x22b8d8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8d4) {
            ctx->pc = 0x22B8F8u;
            goto label_22b8f8;
        }
    }
    ctx->pc = 0x22B8DCu;
label_22b8dc:
    // 0x22b8dc: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x22b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b8e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b8e4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x22b8e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22b8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x22b8ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b8f0: 0x0  nop
    ctx->pc = 0x22b8f0u;
    // NOP
    // 0x22b8f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22b8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22b8f8:
    // 0x22b8f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b8f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22b8fc: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x22b8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_22b900:
    // 0x22b900: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22b900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b904: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22b908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b90c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b910: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_22b914:
    // 0x22b914: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22B914u;
    {
        const bool branch_taken_0x22b914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B914u;
        // 0x22b918: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b914) {
            ctx->pc = 0x22B944u;
            goto label_22b944;
        }
    }
    ctx->pc = 0x22B91Cu;
    // 0x22b91c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22B91Cu;
    SET_GPR_U32(ctx, 31, 0x22B924u);
    ctx->pc = 0x22B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B91Cu;
    // 0x22b920: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22B91Cu, 0x22B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B924u;
label_22b924:
    // 0x22b924: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b92c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22b92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22b930: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b938: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22b938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22b93c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22B93Cu;
    SET_GPR_U32(ctx, 31, 0x22B944u);
    ctx->pc = 0x22B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B93Cu;
    // 0x22b940: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22B93Cu, 0x22B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B944u;
label_22b944:
    // 0x22b944: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B944u;
    SET_GPR_U32(ctx, 31, 0x22B94Cu);
    ctx->pc = 0x22B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B944u;
    // 0x22b948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B944u, 0x22B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B94Cu;
label_22b94c:
    // 0x22b94c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B94Cu;
    {
        const bool branch_taken_0x22b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b94c) {
            ctx->pc = 0x22B95Cu;
            goto label_22b95c;
        }
    }
    ctx->pc = 0x22B954u;
    // 0x22b954: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22B954u;
    SET_GPR_U32(ctx, 31, 0x22B95Cu);
    ctx->pc = 0x22B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B954u;
    // 0x22b958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22B954u, 0x22B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B95Cu;
label_22b95c:
    // 0x22b95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b960: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b968: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B968u;
    SET_GPR_U32(ctx, 31, 0x22B970u);
    ctx->pc = 0x22B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B968u;
    // 0x22b96c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B968u, 0x22B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B970u;
label_22b970:
    // 0x22b970: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b974: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B974u;
    SET_GPR_U32(ctx, 31, 0x22B97Cu);
    ctx->pc = 0x22B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B974u;
    // 0x22b978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B974u, 0x22B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B97Cu;
label_22b97c:
    // 0x22b97c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22B97Cu;
    SET_GPR_U32(ctx, 31, 0x22B984u);
    ctx->pc = 0x22B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B97Cu;
    // 0x22b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22B97Cu, 0x22B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B984u;
label_22b984:
    // 0x22b984: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22b984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22b988: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22b98c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B98Cu;
    {
        const bool branch_taken_0x22b98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B98Cu;
        // 0x22b990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b98c) {
            ctx->pc = 0x22B998u;
            goto label_22b998;
        }
    }
    ctx->pc = 0x22B994u;
    // 0x22b994: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22b994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22b998:
    // 0x22b998: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22b99c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B99Cu;
    {
        const bool branch_taken_0x22b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b99c) {
            ctx->pc = 0x22B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B99Cu;
            // 0x22b9a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B9BCu;
            goto label_22b9bc;
        }
    }
    ctx->pc = 0x22B9A4u;
    // 0x22b9a4: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22b9a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22b9ac: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22b9b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22b9b4: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22b9b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22b9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22b9bc:
    // 0x22b9bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22b9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b9c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22b9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b9c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22b9c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b9c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22b9c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b9d0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D4u;
        // 0x22b9d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B9DCu;
    // 0x22b9dc: 0x0  nop
    ctx->pc = 0x22b9dcu;
    // NOP
    ctx->pc = 0x22b9e0u;
}
