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

// Function: func_001C9AF0
// Address: 0x1c9af0 - 0x1ca040
void func_001C9AF0_0x1c9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C9AF0_0x1c9af0");
#endif

    switch (ctx->pc) {
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9c98u: goto label_1c9c98;
        case 0x1c9d74u: goto label_1c9d74;
        case 0x1c9da4u: goto label_1c9da4;
        case 0x1c9dc4u: goto label_1c9dc4;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9e2cu: goto label_1c9e2c;
        case 0x1c9f08u: goto label_1c9f08;
        default: break;
    }

    ctx->pc = 0x1c9af0u;

    // 0x1c9af0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c9af4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c9af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1c9af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c9afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c9b00: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1c9b04: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1c9b08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c9b0c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1C9B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B14u);
    ctx->pc = 0x1C9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B0Cu;
    // 0x1c9b10: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C9B0Cu, 0x1C9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B14u;
label_1c9b14:
    // 0x1c9b14: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c9b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c9b18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c9b18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9B1Cu;
    {
        const bool branch_taken_0x1c9b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B1Cu;
        // 0x1c9b20: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b1c) {
            ctx->pc = 0x1C9B30u;
            goto label_1c9b30;
        }
    }
    ctx->pc = 0x1C9B24u;
    // 0x1c9b24: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c9b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9B28u;
    {
        const bool branch_taken_0x1c9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B28u;
        // 0x1c9b2c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b28) {
            ctx->pc = 0x1C9B34u;
            goto label_1c9b34;
        }
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b34:
    // 0x1c9b34: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c9b38: 0x5440013b  bnel        $v0, $zero, . + 4 + (0x13B << 2)
    ctx->pc = 0x1C9B38u;
    {
        const bool branch_taken_0x1c9b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b38) {
            ctx->pc = 0x1C9B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9B38u;
            // 0x1c9b3c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1C9B40u;
    // 0x1c9b40: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c9b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9b44: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9b48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c9b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9b4c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c9b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c9b50: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9b54: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1c9b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c9b58: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1c9b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c9b5c: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x1C9B5Cu;
    {
        const bool branch_taken_0x1c9b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B5Cu;
        // 0x1c9b60: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b5c) {
            ctx->pc = 0x1CA024u;
            goto label_1ca024;
        }
    }
    ctx->pc = 0x1C9B64u;
    // 0x1c9b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9b68: 0x2442a100  addiu       $v0, $v0, -0x5F00
    ctx->pc = 0x1c9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x1c9b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9b74: 0x800008  jr          $a0
    ctx->pc = 0x1C9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9B7Cu: goto label_1c9b7c;
            case 0x1C9BA0u: goto label_1c9ba0;
            case 0x1C9DF0u: goto label_1c9df0;
            case 0x1C9F68u: goto label_1c9f68;
            case 0x1C9F78u: goto label_1c9f78;
            case 0x1C9F9Cu: goto label_1c9f9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B7Cu;
label_1c9b7c:
    // 0x1c9b7c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c9b80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9b84: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x1c9b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x1c9b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9b90: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x1c9b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9b94: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1c9b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1c9b98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c9b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c9b9c: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x1c9b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
label_1c9ba0:
    // 0x1c9ba0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9BA0u;
    {
        const bool branch_taken_0x1c9ba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ba0) {
            ctx->pc = 0x1C9BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9BA0u;
            // 0x1c9ba4: 0xc6000630  lwc1        $f0, 0x630($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9BC8u;
            goto label_1c9bc8;
        }
    }
    ctx->pc = 0x1C9BA8u;
    // 0x1c9ba8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1c9ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1c9bac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1c9bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1c9bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bb4: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1c9bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9bb8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c9bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c9bbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c9bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9bc0: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c9bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1c9bc4: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9bc8:
    // 0x1c9bc8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9bcc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c9bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c9bd0: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c9bd4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c9bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c9bd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9bdc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c9bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9be0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c9be0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c9be4: 0x3c01bff9  lui         $at, 0xBFF9
    ctx->pc = 0x1c9be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49145 << 16));
    // 0x1c9be8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9bec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c9becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9bf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c9bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9bf4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c9bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c9bf8: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c9bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9bfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9c00: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c9c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9c04: 0x0  nop
    ctx->pc = 0x1c9c04u;
    // NOP
    // 0x1c9c08: 0x45010101  bc1t        . + 4 + (0x101 << 2)
    ctx->pc = 0x1C9C08u;
    {
        const bool branch_taken_0x1c9c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C08u;
        // 0x1c9c0c: 0xe6000630  swc1        $f0, 0x630($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c08) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9C10u;
    // 0x1c9c10: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9c14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9c18: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9C18u;
    {
        const bool branch_taken_0x1c9c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C18u;
        // 0x1c9c1c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c18) {
            ctx->pc = 0x1C9C3Cu;
            goto label_1c9c3c;
        }
    }
    ctx->pc = 0x1C9C20u;
    // 0x1c9c20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c9c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c9c28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c9c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9c30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c9c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c9c38: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9c3c:
    // 0x1c9c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c40: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c9c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9c4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9c50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9c54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c9c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c9c58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c9c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9c64: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c9c68: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1c9c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1c9c6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c9c70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c9c74: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9c78: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9c7c: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1c9c80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c9c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c9c84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9c84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c9c8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9c8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c90: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1C9C90u;
    SET_GPR_U32(ctx, 31, 0x1C9C98u);
    ctx->pc = 0x1C9C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C90u;
    // 0x1c9c94: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C9C90u, 0x1C9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C98u;
label_1c9c98:
    // 0x1c9c98: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C9C98u;
    {
        const bool branch_taken_0x1c9c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C98u;
        // 0x1c9c9c: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c98) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9CA0u;
    // 0x1c9ca0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c9ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1c9ca4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cac: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9cb0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1c9cb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c9cb4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c9cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9cb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c9cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9cbc: 0x0  nop
    ctx->pc = 0x1c9cbcu;
    // NOP
    // 0x1c9cc0: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x1C9CC0u;
    {
        const bool branch_taken_0x1c9cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9cc0) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9CC8u;
    // 0x1c9cc8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1c9cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c9ccc: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1c9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1c9cd0: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x1c9cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1c9cd4: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1c9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1c9cd8: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x1c9cd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x1c9cdc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9CDCu;
    {
        const bool branch_taken_0x1c9cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CDCu;
        // 0x1c9ce0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cdc) {
            ctx->pc = 0x1C9CFCu;
            goto label_1c9cfc;
        }
    }
    ctx->pc = 0x1C9CE4u;
    // 0x1c9ce4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c9ce8: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x1c9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x1c9cec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9cf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9cf4: 0x800008  jr          $a0
    ctx->pc = 0x1C9CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9CFCu: goto label_1c9cfc;
            case 0x1C9D10u: goto label_1c9d10;
            case 0x1C9D24u: goto label_1c9d24;
            case 0x1C9D38u: goto label_1c9d38;
            case 0x1C9D4Cu: goto label_1c9d4c;
            case 0x1C9D7Cu: goto label_1c9d7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9CF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9CFCu;
label_1c9cfc:
    // 0x1c9cfc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d04: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9D08u;
    {
        const bool branch_taken_0x1c9d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D08u;
        // 0x1c9d0c: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d08) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C9D1Cu;
    {
        const bool branch_taken_0x1c9d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D1Cu;
        // 0x1c9d20: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d1c) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9D24u;
label_1c9d24:
    // 0x1c9d24: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d2c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C9D30u;
    {
        const bool branch_taken_0x1c9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D30u;
        // 0x1c9d34: 0x2406011e  addiu       $a2, $zero, 0x11E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d30) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9D38u;
label_1c9d38:
    // 0x1c9d38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d40: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D44u;
    {
        const bool branch_taken_0x1c9d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D44u;
        // 0x1c9d48: 0x240600ea  addiu       $a2, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d44) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9D4Cu;
label_1c9d4c:
    // 0x1c9d4c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9d54: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d58: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1c9d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1c9d5c:
    // 0x1c9d5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c9d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9d68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d6c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1C9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D74u);
    ctx->pc = 0x1C9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D6Cu;
    // 0x1c9d70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C9D6Cu, 0x1C9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D74u;
label_1c9d74:
    // 0x1c9d74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C9D74u;
    {
        const bool branch_taken_0x1c9d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d74) {
            ctx->pc = 0x1C9DA4u;
            goto label_1c9da4;
        }
    }
    ctx->pc = 0x1C9D7Cu;
label_1c9d7c:
    // 0x1c9d7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9d80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9d84: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c9d88: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x1c9d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1c9d8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c9d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d9c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1C9D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C9DA4u);
    ctx->pc = 0x1C9DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D9Cu;
    // 0x1c9da0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C9D9Cu, 0x1C9DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DA4u;
label_1c9da4:
    // 0x1c9da4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c9da4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1c9da8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dac: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1c9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c9db0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9db8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1c9db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9dbc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1C9DBCu;
    SET_GPR_U32(ctx, 31, 0x1C9DC4u);
    ctx->pc = 0x1C9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DBCu;
    // 0x1c9dc0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C9DBCu, 0x1C9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DC4u;
label_1c9dc4:
    // 0x1c9dc4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1c9dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c9dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c9dcc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9DCCu;
    {
        const bool branch_taken_0x1c9dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DCCu;
        // 0x1c9dd0: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dcc) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9DD4u;
    // 0x1c9dd4: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1c9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1c9dd8: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1c9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1c9ddc: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1c9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_1c9de0:
    // 0x1c9de0: 0xc0742ce  jal         func_1D0B38
    ctx->pc = 0x1C9DE0u;
    SET_GPR_U32(ctx, 31, 0x1C9DE8u);
    ctx->pc = 0x1C9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DE0u;
    // 0x1c9de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B38u, 0x1C9DE0u, 0x1C9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DE8u;
label_1c9de8:
    // 0x1c9de8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1C9DE8u;
    {
        const bool branch_taken_0x1c9de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DE8u;
        // 0x1c9dec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9de8) {
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1C9DF0u;
label_1c9df0:
    // 0x1c9df0: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x1c9df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x1c9df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c9df8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c9dfc: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9DFCu;
    {
        const bool branch_taken_0x1c9dfc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DFCu;
        // 0x1c9e00: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dfc) {
            ctx->pc = 0x1C9E2Cu;
            goto label_1c9e2c;
        }
    }
    ctx->pc = 0x1C9E04u;
    // 0x1c9e04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c9e08: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9e0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9e10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e18: 0xa602056a  sh          $v0, 0x56A($s0)
    ctx->pc = 0x1c9e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c9e1c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c9e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e24: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1C9E24u;
    SET_GPR_U32(ctx, 31, 0x1C9E2Cu);
    ctx->pc = 0x1C9E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E24u;
    // 0x1c9e28: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C9E24u, 0x1C9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E2Cu;
label_1c9e2c:
    // 0x1c9e2c: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c9e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e34: 0xa2020664  sb          $v0, 0x664($s0)
    ctx->pc = 0x1c9e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1636), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c9e38: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9e3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c9e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c9e40: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c9e44: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c9e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c9e48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9e4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c9e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9e50: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c9e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c9e54: 0x3c01bff9  lui         $at, 0xBFF9
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49145 << 16));
    // 0x1c9e58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9e5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c9e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9e60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c9e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9e64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c9e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c9e68: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9e6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9e70: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c9e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9e74: 0x0  nop
    ctx->pc = 0x1c9e74u;
    // NOP
    // 0x1c9e78: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x1C9E78u;
    {
        const bool branch_taken_0x1c9e78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E78u;
        // 0x1c9e7c: 0xe6000630  swc1        $f0, 0x630($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e78) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9E80u;
    // 0x1c9e80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9e84: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c9e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9e88: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E88u;
    {
        const bool branch_taken_0x1c9e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E88u;
        // 0x1c9e8c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e88) {
            ctx->pc = 0x1C9EACu;
            goto label_1c9eac;
        }
    }
    ctx->pc = 0x1C9E90u;
    // 0x1c9e90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9e94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c9e98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9e9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c9e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9ea0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c9ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9ea4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c9ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c9ea8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9eac:
    // 0x1c9eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9eb0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9eb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c9eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9ebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9ec0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9ec4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c9ec8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c9ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ed0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9ed4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c9ed8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1c9ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1c9edc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c9ee0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c9ee4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c9ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9ee8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9eec: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1c9ef0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c9ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c9ef4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9ef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ef8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c9efc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9efcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f00: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1C9F00u;
    SET_GPR_U32(ctx, 31, 0x1C9F08u);
    ctx->pc = 0x1C9F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F00u;
    // 0x1c9f04: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C9F00u, 0x1C9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F08u;
label_1c9f08:
    // 0x1c9f08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9F08u;
    {
        const bool branch_taken_0x1c9f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F08u;
        // 0x1c9f0c: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f08) {
            ctx->pc = 0x1C9F40u;
            goto label_1c9f40;
        }
    }
    ctx->pc = 0x1C9F10u;
    // 0x1c9f10: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c9f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1c9f14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9f1c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9f20: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1c9f20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c9f24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c9f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9f28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c9f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9f2c: 0x0  nop
    ctx->pc = 0x1c9f2cu;
    // NOP
    // 0x1c9f30: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9F30u;
    {
        const bool branch_taken_0x1c9f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9f30) {
            ctx->pc = 0x1C9F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F30u;
            // 0x1c9f34: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9F44u;
            goto label_1c9f44;
        }
    }
    ctx->pc = 0x1C9F38u;
    // 0x1c9f38: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1c9f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c9f3c: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1c9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
label_1c9f40:
    // 0x1c9f40: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9f40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c9f44:
    // 0x1c9f44: 0x240203af  addiu       $v0, $zero, 0x3AF
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
    // 0x1c9f48: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C9F48u;
    {
        const bool branch_taken_0x1c9f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9f48) {
            ctx->pc = 0x1C9F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F48u;
            // 0x1c9f4c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1C9F50u;
    // 0x1c9f50: 0xc6000674  lwc1        $f0, 0x674($s0)
    ctx->pc = 0x1c9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9f54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c9f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9f58: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c9f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c9f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c9f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9f60: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C9F60u;
    {
        const bool branch_taken_0x1c9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F60u;
        // 0x1c9f64: 0xe6000674  swc1        $f0, 0x674($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f60) {
            ctx->pc = 0x1CA008u;
            goto label_1ca008;
        }
    }
    ctx->pc = 0x1C9F68u;
label_1c9f68:
    // 0x1c9f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f6c: 0xa2020664  sb          $v0, 0x664($s0)
    ctx->pc = 0x1c9f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1636), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c9f70: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C9F70u;
    {
        const bool branch_taken_0x1c9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F70u;
        // 0x1c9f74: 0xa2020665  sb          $v0, 0x665($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1637), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f70) {
            ctx->pc = 0x1CA024u;
            goto label_1ca024;
        }
    }
    ctx->pc = 0x1C9F78u;
label_1c9f78:
    // 0x1c9f78: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1c9f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c9f7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9f80: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1c9f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1c9f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9f8c: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x1c9f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9f90: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1c9f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1c9f94: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c9f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c9f98: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x1c9f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
label_1c9f9c:
    // 0x1c9f9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9F9Cu;
    {
        const bool branch_taken_0x1c9f9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f9c) {
            ctx->pc = 0x1C9FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F9Cu;
            // 0x1c9fa0: 0xc6010630  lwc1        $f1, 0x630($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9FC4u;
            goto label_1c9fc4;
        }
    }
    ctx->pc = 0x1C9FA4u;
    // 0x1c9fa4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1c9fa8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1c9fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1c9fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9fb0: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1c9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9fb4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c9fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c9fb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c9fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9fbc: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c9fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1c9fc0: 0xc6010630  lwc1        $f1, 0x630($s0)
    ctx->pc = 0x1c9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9fc4:
    // 0x1c9fc4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c9fc8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c9fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c9fcc: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c9fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c9fd0: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c9fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c9fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9fd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fdc: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c9fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c9fe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c9fe4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c9fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9fe8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c9fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c9fec: 0xc6010674  lwc1        $f1, 0x674($s0)
    ctx->pc = 0x1c9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9ff0: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9ff4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1c9ff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1c9ff8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9ffc: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1c9ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca000: 0xe6010674  swc1        $f1, 0x674($s0)
    ctx->pc = 0x1ca000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1ca004: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1ca004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
label_1ca008:
    // 0x1ca008: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA008u;
    {
        const bool branch_taken_0x1ca008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca008) {
            ctx->pc = 0x1CA00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA008u;
            // 0x1ca00c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1CA010u;
label_1ca010:
    // 0x1ca010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca014: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ca014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca018: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1ca018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca01c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ca01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca020: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ca020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ca024:
    // 0x1ca024: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ca024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ca028:
    // 0x1ca028: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ca028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca02c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ca02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca030: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1ca030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca034: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA034u;
        // 0x1ca038: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA03Cu;
    // 0x1ca03c: 0x0  nop
    ctx->pc = 0x1ca03cu;
    // NOP
    ctx->pc = 0x1ca040u;
}
