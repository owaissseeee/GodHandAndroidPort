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

// Function: func_0018DD40
// Address: 0x18dd40 - 0x18df18
void func_0018DD40_0x18dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018DD40_0x18dd40");
#endif

    switch (ctx->pc) {
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18de04u: goto label_18de04;
        case 0x18de20u: goto label_18de20;
        case 0x18de30u: goto label_18de30;
        case 0x18de50u: goto label_18de50;
        default: break;
    }

    ctx->pc = 0x18dd40u;

    // 0x18dd40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18dd44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18dd48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18dd4c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18dd4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18dd50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18dd54: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18DD54u;
    SET_GPR_U32(ctx, 31, 0x18DD5Cu);
    ctx->pc = 0x18DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD54u;
    // 0x18dd58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18DD54u, 0x18DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD5Cu;
label_18dd5c:
    // 0x18dd5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18dd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18dd60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18dd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18dd64: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x18dd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x18dd68: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x18dd68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x18dd6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18dd70: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18dd70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18dd74: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x18dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x18dd78: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x18dd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x18dd7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18dd80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18dd84: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18dd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18dd88: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18dd8c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18dd8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18dd90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18dd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18dd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18dd98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dd9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18dd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18dda0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18dda4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18dda4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18dda8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18dda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18ddac: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x18ddacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18ddb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18ddb4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18ddb8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18ddbc: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18DDBCu;
    SET_GPR_U32(ctx, 31, 0x18DDC4u);
    ctx->pc = 0x18DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDBCu;
    // 0x18ddc0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18DDBCu, 0x18DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDC4u;
label_18ddc4:
    // 0x18ddc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC4u;
        // 0x18ddc8: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DE04u;
            goto label_18de04;
        }
    }
    ctx->pc = 0x18DDCCu;
    // 0x18ddcc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ddd0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18ddd4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18ddd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dddc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18dde0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18dde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dde4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18dde4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18dde8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x18dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18ddec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18ddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18ddf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ddf4: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x18ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18ddf8: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x18ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ddfc: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x18DDFCu;
    SET_GPR_U32(ctx, 31, 0x18DE04u);
    ctx->pc = 0x18DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDFCu;
    // 0x18de00: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x18DDFCu, 0x18DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE04u;
label_18de04:
    // 0x18de04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de0c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18de10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18de10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de14: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x18de14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x18de18: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18DE18u;
    SET_GPR_U32(ctx, 31, 0x18DE20u);
    ctx->pc = 0x18DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE18u;
    // 0x18de1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18DE18u, 0x18DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE20u;
label_18de20:
    // 0x18de20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18de24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de28: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18DE28u;
    SET_GPR_U32(ctx, 31, 0x18DE30u);
    ctx->pc = 0x18DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE28u;
    // 0x18de2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18DE28u, 0x18DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE30u;
label_18de30:
    // 0x18de30: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18de30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18de34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de38: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18DE38u;
    {
        const bool branch_taken_0x18de38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18de38) {
            ctx->pc = 0x18DE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DE38u;
            // 0x18de3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DEFCu;
            goto label_18defc;
        }
    }
    ctx->pc = 0x18DE40u;
    // 0x18de40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18de40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de48: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x18de48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18de4c: 0x0  nop
    ctx->pc = 0x18de4cu;
    // NOP
label_18de50:
    // 0x18de50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18de50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de54: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18de54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18de58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DE58u;
    {
        const bool branch_taken_0x18de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE58u;
        // 0x18de5c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de58) {
            ctx->pc = 0x18DE68u;
            goto label_18de68;
        }
    }
    ctx->pc = 0x18DE60u;
    // 0x18de60: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18de60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18de64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de68:
    // 0x18de68: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18de6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DE6Cu;
    {
        const bool branch_taken_0x18de6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE6Cu;
        // 0x18de70: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de6c) {
            ctx->pc = 0x18DE84u;
            goto label_18de84;
        }
    }
    ctx->pc = 0x18DE74u;
    // 0x18de74: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18de78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18de7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DE7Cu;
    {
        const bool branch_taken_0x18de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE7Cu;
        // 0x18de80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de7c) {
            ctx->pc = 0x18DE88u;
            goto label_18de88;
        }
    }
    ctx->pc = 0x18DE84u;
label_18de84:
    // 0x18de84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18de84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18de88:
    // 0x18de88: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18de8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de90: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18de90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18de94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18de98: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18de98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18de9c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18de9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18dea0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DEA0u;
    {
        const bool branch_taken_0x18dea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEA0u;
        // 0x18dea4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dea0) {
            ctx->pc = 0x18DEB0u;
            goto label_18deb0;
        }
    }
    ctx->pc = 0x18DEA8u;
    // 0x18dea8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18dea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18deac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18deacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18deb0:
    // 0x18deb0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18deb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DEB4u;
    {
        const bool branch_taken_0x18deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEB4u;
        // 0x18deb8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18deb4) {
            ctx->pc = 0x18DECCu;
            goto label_18decc;
        }
    }
    ctx->pc = 0x18DEBCu;
    // 0x18debc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18dec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DEC4u;
    {
        const bool branch_taken_0x18dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEC4u;
        // 0x18dec8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dec4) {
            ctx->pc = 0x18DED0u;
            goto label_18ded0;
        }
    }
    ctx->pc = 0x18DECCu;
label_18decc:
    // 0x18decc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ded0:
    // 0x18ded0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18ded4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18ded8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18ded8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18dedc: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x18dedcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18dee0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18dee4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DEE4u;
    {
        const bool branch_taken_0x18dee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEE4u;
        // 0x18dee8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dee4) {
            ctx->pc = 0x18DEF8u;
            goto label_18def8;
        }
    }
    ctx->pc = 0x18DEECu;
    // 0x18deec: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18deecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18def0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18DEF0u;
    {
        const bool branch_taken_0x18def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18def0) {
            ctx->pc = 0x18DEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DEF0u;
            // 0x18def4: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18de50;
        }
    }
    ctx->pc = 0x18DEF8u;
label_18def8:
    // 0x18def8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18def8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18defc:
    // 0x18defc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18df00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18df00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18df04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18df08: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18df0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF0Cu;
        // 0x18df10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF14u;
    // 0x18df14: 0x0  nop
    ctx->pc = 0x18df14u;
    // NOP
    ctx->pc = 0x18df18u;
}
