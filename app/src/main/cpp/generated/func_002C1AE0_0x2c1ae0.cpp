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

// Function: func_002C1AE0
// Address: 0x2c1ae0 - 0x2c1cc8
void func_002C1AE0_0x2c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1AE0_0x2c1ae0");
#endif

    switch (ctx->pc) {
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b4cu: goto label_2c1b4c;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1c0cu: goto label_2c1c0c;
        default: break;
    }

    ctx->pc = 0x2c1ae0u;

    // 0x2c1ae0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c1ae4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c1ae8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c1aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c1aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1af0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c1af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1af8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c1afc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c1afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c1b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c1b04: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c1b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c1b08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1b0c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B14u);
    ctx->pc = 0x2C1B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B0Cu;
    // 0x2c1b10: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C1B0Cu, 0x2C1B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B14u;
label_2c1b14:
    // 0x2c1b14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c1b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b18: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c1b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c1b1c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2c1b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2c1b20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1b24: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x2c1b24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x2c1b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c1b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c1b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c1b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1b3c: 0x0  nop
    ctx->pc = 0x2c1b3cu;
    // NOP
    // 0x2c1b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1b44: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C1B44u;
    SET_GPR_U32(ctx, 31, 0x2C1B4Cu);
    ctx->pc = 0x2C1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B44u;
    // 0x2c1b48: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C1B44u, 0x2C1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B4Cu;
label_2c1b4c:
    // 0x2c1b4c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2c1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1b50: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C1B50u;
    {
        const bool branch_taken_0x2c1b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b50) {
            ctx->pc = 0x2C1B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1B50u;
            // 0x2c1b54: 0x92020038  lbu         $v0, 0x38($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1BF8u;
            goto label_2c1bf8;
        }
    }
    ctx->pc = 0x2C1B58u;
    // 0x2c1b58: 0x8605004c  lh          $a1, 0x4C($s0)
    ctx->pc = 0x2c1b58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2c1b5c: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1B5Cu;
    {
        const bool branch_taken_0x2c1b5c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2c1b5c) {
            ctx->pc = 0x2C1B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1B5Cu;
            // 0x2c1b60: 0x908202b4  lbu         $v0, 0x2B4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1B6Cu;
            goto label_2c1b6c;
        }
    }
    ctx->pc = 0x2C1B64u;
    // 0x2c1b64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1B64u;
    {
        const bool branch_taken_0x2c1b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B64u;
        // 0x2c1b68: 0xc4800104  lwc1        $f0, 0x104($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b64) {
            ctx->pc = 0x2C1B94u;
            goto label_2c1b94;
        }
    }
    ctx->pc = 0x2C1B6Cu;
label_2c1b6c:
    // 0x2c1b6c: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2c1b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1b70: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1B70u;
    {
        const bool branch_taken_0x2c1b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B70u;
        // 0x2c1b74: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b70) {
            ctx->pc = 0x2C1B8Cu;
            goto label_2c1b8c;
        }
    }
    ctx->pc = 0x2C1B78u;
    // 0x2c1b78: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2c1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2c1b7c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c1b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1B84u;
    {
        const bool branch_taken_0x2c1b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B84u;
        // 0x2c1b88: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b84) {
            ctx->pc = 0x2C1B90u;
            goto label_2c1b90;
        }
    }
    ctx->pc = 0x2C1B8Cu;
label_2c1b8c:
    // 0x2c1b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b90:
    // 0x2c1b90: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x2c1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c1b94:
    // 0x2c1b94: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x2c1b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c1b98: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2c1b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c1b9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1B9Cu;
    {
        const bool branch_taken_0x2c1b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b9c) {
            ctx->pc = 0x2C1BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1B9Cu;
            // 0x2c1ba0: 0x92020034  lbu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1BB8u;
            goto label_2c1bb8;
        }
    }
    ctx->pc = 0x2C1BA4u;
    // 0x2c1ba4: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x2c1ba4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c1ba8: 0xc0b0c74  jal         func_2C31D0
    ctx->pc = 0x2C1BA8u;
    SET_GPR_U32(ctx, 31, 0x2C1BB0u);
    ctx->pc = 0x2C1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BA8u;
    // 0x2c1bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D0u, 0x2C1BA8u, 0x2C1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BB0u;
label_2c1bb0:
    // 0x2c1bb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c1bb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c1bb4: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x2c1bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2c1bb8:
    // 0x2c1bb8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c1bbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C1BBCu;
    {
        const bool branch_taken_0x2c1bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BBCu;
        // 0x2c1bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bbc) {
            ctx->pc = 0x2C1BF4u;
            goto label_2c1bf4;
        }
    }
    ctx->pc = 0x2C1BC4u;
    // 0x2c1bc4: 0x82020047  lb          $v0, 0x47($s0)
    ctx->pc = 0x2c1bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2c1bc8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c1bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c1bcc: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2c1bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2c1bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1bd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c1bd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c1bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1bdc: 0x0  nop
    ctx->pc = 0x2c1bdcu;
    // NOP
    // 0x2c1be0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c1be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c1be4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2c1be4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c1be8: 0xc0b0c74  jal         func_2C31D0
    ctx->pc = 0x2C1BE8u;
    SET_GPR_U32(ctx, 31, 0x2C1BF0u);
    ctx->pc = 0x2C1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BE8u;
    // 0x2c1bec: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D0u, 0x2C1BE8u, 0x2C1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BF0u;
label_2c1bf0:
    // 0x2c1bf0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c1bf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c1bf4:
    // 0x2c1bf4: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2c1bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_2c1bf8:
    // 0x2c1bf8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1BF8u;
    {
        const bool branch_taken_0x2c1bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BF8u;
        // 0x2c1bfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bf8) {
            ctx->pc = 0x2C1C04u;
            goto label_2c1c04;
        }
    }
    ctx->pc = 0x2C1C00u;
    // 0x2c1c00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c1c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c04:
    // 0x2c1c04: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C1C04u;
    SET_GPR_U32(ctx, 31, 0x2C1C0Cu);
    ctx->pc = 0x2C1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C04u;
    // 0x2c1c08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C1C04u, 0x2C1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C0Cu;
label_2c1c0c:
    // 0x2c1c0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c1c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1c14: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C1C14u;
    {
        const bool branch_taken_0x2c1c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1c14) {
            ctx->pc = 0x2C1C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C14u;
            // 0x2c1c18: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1CA0u;
            goto label_2c1ca0;
        }
    }
    ctx->pc = 0x2C1C1Cu;
    // 0x2c1c1c: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2c1c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c1c20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c1c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c1c24: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1C24u;
    {
        const bool branch_taken_0x2c1c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c24) {
            ctx->pc = 0x2C1C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C24u;
            // 0x2c1c28: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1CA0u;
            goto label_2c1ca0;
        }
    }
    ctx->pc = 0x2C1C2Cu;
    // 0x2c1c2c: 0xc6800104  lwc1        $f0, 0x104($s4)
    ctx->pc = 0x2c1c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1c30: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2c1c30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2c1c34: 0x46000305  abs.s       $f12, $f0
    ctx->pc = 0x2c1c34u;
    ctx->f[12] = FPU_ABS_S(ctx->f[0]);
    // 0x2c1c38: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2c1c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2c1c3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c1c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c1c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1c44: 0x0  nop
    ctx->pc = 0x2c1c44u;
    // NOP
    // 0x2c1c48: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2c1c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1c4c: 0x0  nop
    ctx->pc = 0x2c1c4cu;
    // NOP
    // 0x2c1c50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1C50u;
    {
        const bool branch_taken_0x2c1c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C50u;
        // 0x2c1c54: 0x82020046  lb          $v0, 0x46($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c50) {
            ctx->pc = 0x2C1C6Cu;
            goto label_2c1c6c;
        }
    }
    ctx->pc = 0x2C1C58u;
    // 0x2c1c58: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c1c5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c1c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c1c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c64: 0x0  nop
    ctx->pc = 0x2c1c64u;
    // NOP
    // 0x2c1c68: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2c1c68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_2c1c6c:
    // 0x2c1c6c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c1c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c1c70: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2c1c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2c1c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1c78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c1c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c80: 0x0  nop
    ctx->pc = 0x2c1c80u;
    // NOP
    // 0x2c1c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1c88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c1c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1c8c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2c1c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1c90: 0x0  nop
    ctx->pc = 0x2c1c90u;
    // NOP
    // 0x2c1c94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C1C94u;
    {
        const bool branch_taken_0x2c1c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1c94) {
            ctx->pc = 0x2C1C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C94u;
            // 0x2c1c98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C9Cu;
            goto label_2c1c9c;
        }
    }
    ctx->pc = 0x2C1C9Cu;
label_2c1c9c:
    // 0x2c1c9c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c1c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c1ca0:
    // 0x2c1ca0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c1ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ca4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c1ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c1ca8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c1ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1cac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c1cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c1cb0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c1cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1cb8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c1cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c1cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CBCu;
        // 0x2c1cc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1CC4u;
    // 0x2c1cc4: 0x0  nop
    ctx->pc = 0x2c1cc4u;
    // NOP
    ctx->pc = 0x2c1cc8u;
}
