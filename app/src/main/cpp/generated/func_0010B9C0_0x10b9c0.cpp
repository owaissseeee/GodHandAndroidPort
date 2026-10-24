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

// Function: func_0010B9C0
// Address: 0x10b9c0 - 0x10bcc0
void func_0010B9C0_0x10b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010B9C0_0x10b9c0");
#endif

    switch (ctx->pc) {
        case 0x10b9f4u: goto label_10b9f4;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba6cu: goto label_10ba6c;
        case 0x10ba80u: goto label_10ba80;
        case 0x10bad8u: goto label_10bad8;
        case 0x10baf4u: goto label_10baf4;
        case 0x10bb30u: goto label_10bb30;
        case 0x10bb4cu: goto label_10bb4c;
        case 0x10bb68u: goto label_10bb68;
        case 0x10bb8cu: goto label_10bb8c;
        case 0x10bbb0u: goto label_10bbb0;
        case 0x10bbd8u: goto label_10bbd8;
        case 0x10bbe8u: goto label_10bbe8;
        case 0x10bc5cu: goto label_10bc5c;
        case 0x10bc84u: goto label_10bc84;
        case 0x10bc90u: goto label_10bc90;
        case 0x10bca4u: goto label_10bca4;
        default: break;
    }

    ctx->pc = 0x10b9c0u;

    // 0x10b9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b9c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10b9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10b9c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b9cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10b9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b9dc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10b9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10b9e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x10b9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9e8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x10b9ec: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x10B9ECu;
    SET_GPR_U32(ctx, 31, 0x10B9F4u);
    ctx->pc = 0x10B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9ECu;
    // 0x10b9f0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x10B9ECu, 0x10B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9F4u;
label_10b9f4:
    // 0x10b9f4: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x10b9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ba00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ba00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ba04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10ba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10ba08: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x10ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    // 0x10ba0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10ba0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10ba10: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10BA10u;
    SET_GPR_U32(ctx, 31, 0x10BA18u);
    ctx->pc = 0x10BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA10u;
    // 0x10ba14: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10BA10u, 0x10BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA18u;
label_10ba18:
    // 0x10ba18: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10ba18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10ba1c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x10ba1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x10ba20: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x10BA20u;
    {
        const bool branch_taken_0x10ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA20u;
        // 0x10ba24: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba20) {
            ctx->pc = 0x10BCACu;
            goto label_10bcac;
        }
    }
    ctx->pc = 0x10BA28u;
    // 0x10ba28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ba2c: 0x2442bc10  addiu       $v0, $v0, -0x43F0
    ctx->pc = 0x10ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949904));
    // 0x10ba30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ba34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ba38: 0x800008  jr          $a0
    ctx->pc = 0x10BA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BA40u: goto label_10ba40;
            case 0x10BA78u: goto label_10ba78;
            case 0x10BA88u: goto label_10ba88;
            case 0x10BAECu: goto label_10baec;
            case 0x10BBE0u: goto label_10bbe0;
            case 0x10BC9Cu: goto label_10bc9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10BA40u;
label_10ba40:
    // 0x10ba40: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10ba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10ba48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ba4c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x10ba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10ba50: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10ba54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ba54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba58: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10ba5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10ba5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba60: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10ba64: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10BA64u;
    SET_GPR_U32(ctx, 31, 0x10BA6Cu);
    ctx->pc = 0x10BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA64u;
    // 0x10ba68: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10BA64u, 0x10BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA6Cu;
label_10ba6c:
    // 0x10ba6c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10ba6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10ba70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ba74: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10ba74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10ba78:
    // 0x10ba78: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10BA78u;
    SET_GPR_U32(ctx, 31, 0x10BA80u);
    ctx->pc = 0x10BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA78u;
    // 0x10ba7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10BA78u, 0x10BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA80u;
label_10ba80:
    // 0x10ba80: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x10BA80u;
    {
        const bool branch_taken_0x10ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA80u;
        // 0x10ba84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba80) {
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BA88u;
label_10ba88:
    // 0x10ba88: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x10ba88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10ba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ba90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BA90u;
    {
        const bool branch_taken_0x10ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA90u;
        // 0x10ba94: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba90) {
            ctx->pc = 0x10BAACu;
            goto label_10baac;
        }
    }
    ctx->pc = 0x10BA98u;
    // 0x10ba98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BA98u;
    {
        const bool branch_taken_0x10ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ba98) {
            ctx->pc = 0x10BA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BA98u;
            // 0x10ba9c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BAB0u;
            goto label_10bab0;
        }
    }
    ctx->pc = 0x10BAA0u;
    // 0x10baa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10baa4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BAA4u;
    {
        const bool branch_taken_0x10baa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10baa4) {
            ctx->pc = 0x10BAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BAA4u;
            // 0x10baa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BAACu;
            goto label_10baac;
        }
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_10bab0:
    // 0x10bab0: 0x8c43094c  lw          $v1, 0x94C($v0)
    ctx->pc = 0x10bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2380)));
    // 0x10bab4: 0x8c440950  lw          $a0, 0x950($v0)
    ctx->pc = 0x10bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x10bab8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10babc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10babcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10bac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10bac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10bac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bac8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10bac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bacc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10baccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bad0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10BAD0u;
    SET_GPR_U32(ctx, 31, 0x10BAD8u);
    ctx->pc = 0x10BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAD0u;
    // 0x10bad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10BAD0u, 0x10BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAD8u;
label_10bad8:
    // 0x10bad8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10bad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10badc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bae0: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x10bae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x10bae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10bae8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10bae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10baec:
    // 0x10baec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10BAECu;
    SET_GPR_U32(ctx, 31, 0x10BAF4u);
    ctx->pc = 0x10BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAECu;
    // 0x10baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10BAECu, 0x10BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAF4u;
label_10baf4:
    // 0x10baf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BAF4u;
    {
        const bool branch_taken_0x10baf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10baf4) {
            ctx->pc = 0x10BAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BAF4u;
            // 0x10baf8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BAFCu;
            goto label_10bafc;
        }
    }
    ctx->pc = 0x10BAFCu;
label_10bafc:
    // 0x10bafc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x10bafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x10bb00: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10bb04: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x10BB04u;
    {
        const bool branch_taken_0x10bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb04) {
            ctx->pc = 0x10BB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BB04u;
            // 0x10bb08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BB0Cu;
    // 0x10bb0c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x10bb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x10bb10: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x10BB10u;
    {
        const bool branch_taken_0x10bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb10) {
            ctx->pc = 0x10BB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BB10u;
            // 0x10bb14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BB18u;
    // 0x10bb18: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10bb1c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10bb20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10bb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10bb24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10bb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10bb28: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10BB28u;
    SET_GPR_U32(ctx, 31, 0x10BB30u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10BB28u, 0x10BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB30u;
label_10bb30:
    // 0x10bb30: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x10bb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x10bb34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10bb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10bb38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10bb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10bb3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10bb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10bb40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10bb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10bb44: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10BB44u;
    SET_GPR_U32(ctx, 31, 0x10BB4Cu);
    ctx->pc = 0x10BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB44u;
    // 0x10bb48: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10BB44u, 0x10BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB4Cu;
label_10bb4c:
    // 0x10bb4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10bb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10bb50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10bb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10bb54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10bb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10bb58: 0x0  nop
    ctx->pc = 0x10bb58u;
    // NOP
    // 0x10bb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10bb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10bb60: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10BB60u;
    SET_GPR_U32(ctx, 31, 0x10BB68u);
    ctx->pc = 0x10BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB60u;
    // 0x10bb64: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10BB60u, 0x10BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB68u;
label_10bb68:
    // 0x10bb68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10bb68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10bb6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10bb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10bb70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10bb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10bb74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10bb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb7c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x10bb80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10bb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10bb84: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x10BB84u;
    SET_GPR_U32(ctx, 31, 0x10BB8Cu);
    ctx->pc = 0x10BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB84u;
    // 0x10bb88: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x10BB84u, 0x10BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB8Cu;
label_10bb8c:
    // 0x10bb8c: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x10bb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x10bb90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bb98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10bb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10bb9c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x10bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10bba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bba4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10bba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bba8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x10BBA8u;
    SET_GPR_U32(ctx, 31, 0x10BBB0u);
    ctx->pc = 0x10BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBA8u;
    // 0x10bbac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x10BBA8u, 0x10BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBB0u;
label_10bbb0:
    // 0x10bbb0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x10bbb4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10bbb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbb8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x10bbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10bbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbc0: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x10bbc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bbc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10bbc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10bbccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbd0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10BBD0u;
    SET_GPR_U32(ctx, 31, 0x10BBD8u);
    ctx->pc = 0x10BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBD0u;
    // 0x10bbd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10BBD0u, 0x10BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBD8u;
label_10bbd8:
    // 0x10bbd8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10BBD8u;
    {
        const bool branch_taken_0x10bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBD8u;
        // 0x10bbdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbd8) {
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BBE0u;
label_10bbe0:
    // 0x10bbe0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BBE0u;
    SET_GPR_U32(ctx, 31, 0x10BBE8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BBE0u, 0x10BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBE8u;
label_10bbe8:
    // 0x10bbe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bbec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bbf0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x10bbf0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10bbf4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BBF4u;
    {
        const bool branch_taken_0x10bbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbf4) {
            ctx->pc = 0x10BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BBF4u;
            // 0x10bbf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BBFCu;
            goto label_10bbfc;
        }
    }
    ctx->pc = 0x10BBFCu;
label_10bbfc:
    // 0x10bbfc: 0x2810  mfhi        $a1
    ctx->pc = 0x10bbfcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x10bc00: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BC00u;
    {
        const bool branch_taken_0x10bc00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x10bc00) {
            ctx->pc = 0x10BC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BC00u;
            // 0x10bc04: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BC28u;
            goto label_10bc28;
        }
    }
    ctx->pc = 0x10BC08u;
    // 0x10bc08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC08u;
    {
        const bool branch_taken_0x10bc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC08u;
        // 0x10bc0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc08) {
            ctx->pc = 0x10BC18u;
            goto label_10bc18;
        }
    }
    ctx->pc = 0x10BC10u;
    // 0x10bc10: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BC10u;
            // 0x10bc14: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BC34u;
            goto label_10bc34;
        }
    }
    ctx->pc = 0x10BC18u;
label_10bc18:
    // 0x10bc18: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10bc1c: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x10bc20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10BC20u;
    {
        const bool branch_taken_0x10bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC20u;
        // 0x10bc24: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc20) {
            ctx->pc = 0x10BC3Cu;
            goto label_10bc3c;
        }
    }
    ctx->pc = 0x10BC28u;
label_10bc28:
    // 0x10bc28: 0x8c4304dc  lw          $v1, 0x4DC($v0)
    ctx->pc = 0x10bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
    // 0x10bc2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC2Cu;
    {
        const bool branch_taken_0x10bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC2Cu;
        // 0x10bc30: 0x8c4404e0  lw          $a0, 0x4E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc2c) {
            ctx->pc = 0x10BC3Cu;
            goto label_10bc3c;
        }
    }
    ctx->pc = 0x10BC34u;
label_10bc34:
    // 0x10bc34: 0x8c4304e4  lw          $v1, 0x4E4($v0)
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x10bc38: 0x8c4404e8  lw          $a0, 0x4E8($v0)
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_10bc3c:
    // 0x10bc3c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bc40: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10bc44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10bc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10bc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10bc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bc50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bc50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10BC54u;
    SET_GPR_U32(ctx, 31, 0x10BC5Cu);
    ctx->pc = 0x10BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC54u;
    // 0x10bc58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10BC54u, 0x10BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC5Cu;
label_10bc5c:
    // 0x10bc5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x10bc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc64: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x10bc68: 0x240600ce  addiu       $a2, $zero, 0xCE
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x10bc6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10bc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bc70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10bc78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc7c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10BC7Cu;
    SET_GPR_U32(ctx, 31, 0x10BC84u);
    ctx->pc = 0x10BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC7Cu;
    // 0x10bc80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10BC7Cu, 0x10BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC84u;
label_10bc84:
    // 0x10bc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc88: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x10BC88u;
    SET_GPR_U32(ctx, 31, 0x10BC90u);
    ctx->pc = 0x10BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC88u;
    // 0x10bc8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x10BC88u, 0x10BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC90u;
label_10bc90:
    // 0x10bc90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10bc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10bc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10bc98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10bc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10bc9c:
    // 0x10bc9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10BC9Cu;
    SET_GPR_U32(ctx, 31, 0x10BCA4u);
    ctx->pc = 0x10BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC9Cu;
    // 0x10bca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10BC9Cu, 0x10BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCA4u;
label_10bca4:
    // 0x10bca4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCA4u;
    {
        const bool branch_taken_0x10bca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bca4) {
            ctx->pc = 0x10BCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCA4u;
            // 0x10bca8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCACu;
            goto label_10bcac;
        }
    }
    ctx->pc = 0x10BCACu;
label_10bcac:
    // 0x10bcac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10bcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bcb0:
    // 0x10bcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bcb4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCB8u;
        // 0x10bcbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCC0u;
}
