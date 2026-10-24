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

// Function: UpdateBossPhase_10B780
// Address: 0x10b780 - 0x10b888
void UpdateBossPhase_10B780_0x10b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateBossPhase_10B780_0x10b780");
#endif

    switch (ctx->pc) {
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b7d4u: goto label_10b7d4;
        case 0x10b83cu: goto label_10b83c;
        case 0x10b850u: goto label_10b850;
        case 0x10b864u: goto label_10b864;
        default: break;
    }

    ctx->pc = 0x10b780u;

    // 0x10b780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b784: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10b788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b78c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b79c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x10b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x10b7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7a4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x10b7a8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x10B7A8u;
    SET_GPR_U32(ctx, 31, 0x10B7B0u);
    ctx->pc = 0x10B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7A8u;
    // 0x10b7ac: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x10B7A8u, 0x10B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7B0u;
label_10b7b0:
    // 0x10b7b0: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x10b7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10b7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b7c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b7c4: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x10b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    // 0x10b7c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b7c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b7cc: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10B7CCu;
    SET_GPR_U32(ctx, 31, 0x10B7D4u);
    ctx->pc = 0x10B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7CCu;
    // 0x10b7d0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10B7CCu, 0x10B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7D4u;
label_10b7d4:
    // 0x10b7d4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10b7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10b7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b7dc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10B7DCu;
    {
        const bool branch_taken_0x10b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7DCu;
        // 0x10b7e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7dc) {
            ctx->pc = 0x10B848u;
            goto label_10b848;
        }
    }
    ctx->pc = 0x10B7E4u;
    // 0x10b7e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B7E4u;
    {
        const bool branch_taken_0x10b7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7E4u;
        // 0x10b7e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7e4) {
            ctx->pc = 0x10B7FCu;
            goto label_10b7fc;
        }
    }
    ctx->pc = 0x10B7ECu;
    // 0x10b7ec: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B7ECu;
    {
        const bool branch_taken_0x10b7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b7ec) {
            ctx->pc = 0x10B7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B7ECu;
            // 0x10b7f0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B7F4u;
    // 0x10b7f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10B7F4u;
    {
        const bool branch_taken_0x10b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7F4u;
        // 0x10b7f8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7f4) {
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B7FCu;
label_10b7fc:
    // 0x10b7fc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10B7FCu;
    {
        const bool branch_taken_0x10b7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7FCu;
        // 0x10b800: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7fc) {
            ctx->pc = 0x10B858u;
            goto label_10b858;
        }
    }
    ctx->pc = 0x10B804u;
    // 0x10b804: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10B804u;
    {
        const bool branch_taken_0x10b804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b804) {
            ctx->pc = 0x10B85Cu;
            goto label_10b85c;
        }
    }
    ctx->pc = 0x10B80Cu;
    // 0x10b80c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10B80Cu;
    {
        const bool branch_taken_0x10b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B80Cu;
        // 0x10b810: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b80c) {
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B814u;
label_10b814:
    // 0x10b814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b818: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10b818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10b81c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10b81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10b820: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10b824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b828: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x10b828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10b82c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10b82cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b830: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10b830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10b834: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x10B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B834u;
    // 0x10b838: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10B834u, 0x10B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B83Cu;
label_10b83c:
    // 0x10b83c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10b83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10b840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10b844: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10b844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10b848:
    // 0x10b848: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10B848u;
    SET_GPR_U32(ctx, 31, 0x10B850u);
    ctx->pc = 0x10B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B848u;
    // 0x10b84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10B848u, 0x10B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B850u;
label_10b850:
    // 0x10b850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B850u;
    {
        const bool branch_taken_0x10b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B850u;
        // 0x10b854: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b850) {
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B858u;
label_10b858:
    // 0x10b858: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10b858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10b85c:
    // 0x10b85c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10B85Cu;
    SET_GPR_U32(ctx, 31, 0x10B864u);
    ctx->pc = 0x10B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B85Cu;
    // 0x10b860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10B85Cu, 0x10B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B864u;
label_10b864:
    // 0x10b864: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10B864u;
    {
        const bool branch_taken_0x10b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b864) {
            ctx->pc = 0x10B868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B864u;
            // 0x10b868: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B86Cu;
label_10b86c:
    // 0x10b86c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x10b86cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_10b870:
    // 0x10b870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b874: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x10b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x10b878: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x10b878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b87c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b880: 0x3e00008  jr          $ra
    ctx->pc = 0x10B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B880u;
        // 0x10b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B888u;
}
