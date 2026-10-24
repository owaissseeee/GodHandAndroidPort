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

// Function: func_001790B0
// Address: 0x1790b0 - 0x179220
void func_001790B0_0x1790b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001790B0_0x1790b0");
#endif

    switch (ctx->pc) {
        case 0x1790c8u: goto label_1790c8;
        case 0x1790fcu: goto label_1790fc;
        case 0x179118u: goto label_179118;
        case 0x179134u: goto label_179134;
        case 0x179144u: goto label_179144;
        case 0x179160u: goto label_179160;
        default: break;
    }

    ctx->pc = 0x1790b0u;

    // 0x1790b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1790b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1790b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1790b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1790b8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1790b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1790bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1790bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1790c0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1790C0u;
    SET_GPR_U32(ctx, 31, 0x1790C8u);
    ctx->pc = 0x1790C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790C0u;
    // 0x1790c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1790C0u, 0x1790C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790C8u;
label_1790c8:
    // 0x1790c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1790c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1790cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1790ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1790d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1790d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1790d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1790d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1790d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1790dc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1790e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1790e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1790e4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1790e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1790e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790ec: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1790ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1790f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1790f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1790f4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1790F4u;
    SET_GPR_U32(ctx, 31, 0x1790FCu);
    ctx->pc = 0x1790F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790F4u;
    // 0x1790f8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1790F4u, 0x1790FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790FCu;
label_1790fc:
    // 0x1790fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1790FCu;
    {
        const bool branch_taken_0x1790fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790FCu;
        // 0x179100: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790fc) {
            ctx->pc = 0x179118u;
            goto label_179118;
        }
    }
    ctx->pc = 0x179104u;
    // 0x179104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179108: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x179108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17910c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x17910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x179110: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x179110u;
    SET_GPR_U32(ctx, 31, 0x179118u);
    ctx->pc = 0x179114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179110u;
    // 0x179114: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x179110u, 0x179118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179118u;
label_179118:
    // 0x179118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17911c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179120: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x179120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x179124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179128: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x179128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x17912c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17912Cu;
    SET_GPR_U32(ctx, 31, 0x179134u);
    ctx->pc = 0x179130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17912Cu;
    // 0x179130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17912Cu, 0x179134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179134u;
label_179134:
    // 0x179134: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x179134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17913c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17913Cu;
    SET_GPR_U32(ctx, 31, 0x179144u);
    ctx->pc = 0x179140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17913Cu;
    // 0x179140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17913Cu, 0x179144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179144u;
label_179144:
    // 0x179144: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x179144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17914c: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x17914Cu;
    {
        const bool branch_taken_0x17914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17914c) {
            ctx->pc = 0x179150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17914Cu;
            // 0x179150: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17920Cu;
            goto label_17920c;
        }
    }
    ctx->pc = 0x179154u;
    // 0x179154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179158: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x179158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17915c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x17915cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_179160:
    // 0x179160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179164: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x179164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x179168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x179178u;
            goto label_179178;
        }
    }
    ctx->pc = 0x179170u;
    // 0x179170: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x179170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179178:
    // 0x179178: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x179178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17917c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17917Cu;
    {
        const bool branch_taken_0x17917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17917Cu;
        // 0x179180: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17917c) {
            ctx->pc = 0x179194u;
            goto label_179194;
        }
    }
    ctx->pc = 0x179184u;
    // 0x179184: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x179188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17918c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17918Cu;
    {
        const bool branch_taken_0x17918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17918Cu;
        // 0x179190: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17918c) {
            ctx->pc = 0x179198u;
            goto label_179198;
        }
    }
    ctx->pc = 0x179194u;
label_179194:
    // 0x179194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179198:
    // 0x179198: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x179198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17919c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17919cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791a0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1791a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1791a4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1791a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1791a8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1791a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1791ac: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1791acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1791b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1791B0u;
    {
        const bool branch_taken_0x1791b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B0u;
        // 0x1791b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b0) {
            ctx->pc = 0x1791C0u;
            goto label_1791c0;
        }
    }
    ctx->pc = 0x1791B8u;
    // 0x1791b8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1791b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1791bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1791bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1791c0:
    // 0x1791c0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1791c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1791c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1791C4u;
    {
        const bool branch_taken_0x1791c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791C4u;
        // 0x1791c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791c4) {
            ctx->pc = 0x1791DCu;
            goto label_1791dc;
        }
    }
    ctx->pc = 0x1791CCu;
    // 0x1791cc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1791ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1791d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1791d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1791D4u;
    {
        const bool branch_taken_0x1791d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791D4u;
        // 0x1791d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791d4) {
            ctx->pc = 0x1791E0u;
            goto label_1791e0;
        }
    }
    ctx->pc = 0x1791DCu;
label_1791dc:
    // 0x1791dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791e0:
    // 0x1791e0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1791e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1791e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1791e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1791e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1791ec: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1791ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1791f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1791f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1791f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1791F4u;
    {
        const bool branch_taken_0x1791f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791F4u;
        // 0x1791f8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791f4) {
            ctx->pc = 0x179208u;
            goto label_179208;
        }
    }
    ctx->pc = 0x1791FCu;
    // 0x1791fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1791fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179200: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x179200u;
    {
        const bool branch_taken_0x179200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x179200) {
            ctx->pc = 0x179204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179200u;
            // 0x179204: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179160;
        }
    }
    ctx->pc = 0x179208u;
label_179208:
    // 0x179208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x179208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17920c:
    // 0x17920c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179214: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x179214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179218: 0x3e00008  jr          $ra
    ctx->pc = 0x179218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179218u;
        // 0x17921c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179220u;
}
