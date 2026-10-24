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

// Function: func_002B0A58
// Address: 0x2b0a58 - 0x2b0be0
void func_002B0A58_0x2b0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0A58_0x2b0a58");
#endif

    switch (ctx->pc) {
        case 0x2b0ae4u: goto label_2b0ae4;
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0b04u: goto label_2b0b04;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b30u: goto label_2b0b30;
        case 0x2b0b40u: goto label_2b0b40;
        case 0x2b0b70u: goto label_2b0b70;
        default: break;
    }

    ctx->pc = 0x2b0a58u;

    // 0x2b0a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0a5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b0a60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b0a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b0a6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0a74: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b0a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0a78: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b0a7c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B0A7Cu;
    {
        const bool branch_taken_0x2b0a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A7Cu;
        // 0x2b0a80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a7c) {
            ctx->pc = 0x2B0B28u;
            goto label_2b0b28;
        }
    }
    ctx->pc = 0x2B0A84u;
    // 0x2b0a84: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b0a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b0a88: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x2b0a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2b0a8c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B0A8Cu;
    {
        const bool branch_taken_0x2b0a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A8Cu;
        // 0x2b0a90: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a8c) {
            ctx->pc = 0x2B0AFCu;
            goto label_2b0afc;
        }
    }
    ctx->pc = 0x2B0A94u;
    // 0x2b0a94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0A94u;
    {
        const bool branch_taken_0x2b0a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A94u;
        // 0x2b0a98: 0x3402a800  ori         $v0, $zero, 0xA800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a94) {
            ctx->pc = 0x2B0AB0u;
            goto label_2b0ab0;
        }
    }
    ctx->pc = 0x2B0A9Cu;
    // 0x2b0a9c: 0x34029300  ori         $v0, $zero, 0x9300
    ctx->pc = 0x2b0a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    // 0x2b0aa0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B0AA0u;
    {
        const bool branch_taken_0x2b0aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AA0u;
        // 0x2b0aa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0aa0) {
            ctx->pc = 0x2B0ADCu;
            goto label_2b0adc;
        }
    }
    ctx->pc = 0x2B0AA8u;
    // 0x2b0aa8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B0AA8u;
    {
        const bool branch_taken_0x2b0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0aa8) {
            ctx->pc = 0x2B0B1Cu;
            goto label_2b0b1c;
        }
    }
    ctx->pc = 0x2B0AB0u;
label_2b0ab0:
    // 0x2b0ab0: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B0AB0u;
    {
        const bool branch_taken_0x2b0ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0ab0) {
            ctx->pc = 0x2B0B1Cu;
            goto label_2b0b1c;
        }
    }
    ctx->pc = 0x2B0AB8u;
    // 0x2b0ab8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0abc: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2b0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0ac0: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0ac4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0ac8: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2b0ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2b0acc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0ad0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0ad4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2B0AD4u;
    {
        const bool branch_taken_0x2b0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AD4u;
        // 0x2b0ad8: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ad4) {
            ctx->pc = 0x2B0BC0u;
            goto label_2b0bc0;
        }
    }
    ctx->pc = 0x2B0ADCu;
label_2b0adc:
    // 0x2b0adc: 0xc0ac49c  jal         func_2B1270
    ctx->pc = 0x2B0ADCu;
    SET_GPR_U32(ctx, 31, 0x2B0AE4u);
    ctx->pc = 0x2B0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0ADCu;
    // 0x2b0ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1270u, 0x2B0ADCu, 0x2B0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AE4u;
label_2b0ae4:
    // 0x2b0ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0aec: 0xc0ac3c8  jal         func_2B0F20
    ctx->pc = 0x2B0AECu;
    SET_GPR_U32(ctx, 31, 0x2B0AF4u);
    ctx->pc = 0x2B0AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AECu;
    // 0x2b0af0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F20u, 0x2B0AECu, 0x2B0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AF4u;
label_2b0af4:
    // 0x2b0af4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B0AF4u;
    {
        const bool branch_taken_0x2b0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AF4u;
        // 0x2b0af8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0af4) {
            ctx->pc = 0x2B0BC0u;
            goto label_2b0bc0;
        }
    }
    ctx->pc = 0x2B0AFCu;
label_2b0afc:
    // 0x2b0afc: 0xc0ac4a4  jal         func_2B1290
    ctx->pc = 0x2B0AFCu;
    SET_GPR_U32(ctx, 31, 0x2B0B04u);
    ctx->pc = 0x2B0B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AFCu;
    // 0x2b0b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1290u, 0x2B0AFCu, 0x2B0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B04u;
label_2b0b04:
    // 0x2b0b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b0c: 0xc0ac45a  jal         func_2B1168
    ctx->pc = 0x2B0B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B14u);
    ctx->pc = 0x2B0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B0Cu;
    // 0x2b0b10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1168u, 0x2B0B0Cu, 0x2B0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B14u;
label_2b0b14:
    // 0x2b0b14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B0B14u;
    {
        const bool branch_taken_0x2b0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B14u;
        // 0x2b0b18: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b14) {
            ctx->pc = 0x2B0BC0u;
            goto label_2b0bc0;
        }
    }
    ctx->pc = 0x2B0B1Cu;
label_2b0b1c:
    // 0x2b0b1c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b0b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0b20: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B0B20u;
    {
        const bool branch_taken_0x2b0b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B20u;
        // 0x2b0b24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b20) {
            ctx->pc = 0x2B0BC4u;
            goto label_2b0bc4;
        }
    }
    ctx->pc = 0x2B0B28u;
label_2b0b28:
    // 0x2b0b28: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2B0B28u;
    SET_GPR_U32(ctx, 31, 0x2B0B30u);
    ctx->pc = 0x2B0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B28u;
    // 0x2b0b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2B0B28u, 0x2B0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B30u;
label_2b0b30:
    // 0x2b0b30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0B30u;
    {
        const bool branch_taken_0x2b0b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B30u;
        // 0x2b0b34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b30) {
            ctx->pc = 0x2B0B64u;
            goto label_2b0b64;
        }
    }
    ctx->pc = 0x2B0B38u;
    // 0x2b0b38: 0xc0ac4b6  jal         func_2B12D8
    ctx->pc = 0x2B0B38u;
    SET_GPR_U32(ctx, 31, 0x2B0B40u);
    ctx->pc = 0x2B12D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12D8u, 0x2B0B38u, 0x2B0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B40u;
label_2b0b40:
    // 0x2b0b40: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2b0b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0b44: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0b48: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0b4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b0b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0b50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0b58: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b0b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b0b5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B0B5Cu;
    {
        const bool branch_taken_0x2b0b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B5Cu;
        // 0x2b0b60: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b5c) {
            ctx->pc = 0x2B0B9Cu;
            goto label_2b0b9c;
        }
    }
    ctx->pc = 0x2B0B64u;
label_2b0b64:
    // 0x2b0b64: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x2b0b64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0b68: 0xc0a92e2  jal         func_2A4B88
    ctx->pc = 0x2B0B68u;
    SET_GPR_U32(ctx, 31, 0x2B0B70u);
    ctx->pc = 0x2B0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B68u;
    // 0x2b0b6c: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B88u, 0x2B0B68u, 0x2B0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B70u;
label_2b0b70:
    // 0x2b0b70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0b74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b0b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0b78: 0x0  nop
    ctx->pc = 0x2b0b78u;
    // NOP
    // 0x2b0b7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0b80: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2b0b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0b84: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0b88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0b8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0b94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0b98: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b0b98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b0b9c:
    // 0x2b0b9c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0B9Cu;
    {
        const bool branch_taken_0x2b0b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b9c) {
            ctx->pc = 0x2B0BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0B9Cu;
            // 0x2b0ba0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0BC4u;
            goto label_2b0bc4;
        }
    }
    ctx->pc = 0x2B0BA4u;
    // 0x2b0ba4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2b0ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0ba8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b0ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0bac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0bb0: 0x0  nop
    ctx->pc = 0x2b0bb0u;
    // NOP
    // 0x2b0bb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0bb8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0bbc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0bbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b0bc0:
    // 0x2b0bc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0bc4:
    // 0x2b0bc4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2b0bc4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2b0bc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0bcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BD4u;
        // 0x2b0bd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0BDCu;
    // 0x2b0bdc: 0x0  nop
    ctx->pc = 0x2b0bdcu;
    // NOP
    ctx->pc = 0x2b0be0u;
}
