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

// Function: func_00158CD0
// Address: 0x158cd0 - 0x158fb8
void func_00158CD0_0x158cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00158CD0_0x158cd0");
#endif

    switch (ctx->pc) {
        case 0x158d1cu: goto label_158d1c;
        case 0x158d28u: goto label_158d28;
        case 0x158d40u: goto label_158d40;
        case 0x158dc8u: goto label_158dc8;
        case 0x158ea4u: goto label_158ea4;
        default: break;
    }

    ctx->pc = 0x158cd0u;

    // 0x158cd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x158cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x158cd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x158cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x158cd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x158cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x158cdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x158cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ce0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x158ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x158ce4: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x158ce4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x158ce8: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x158ce8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x158cec: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x158cecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x158cf0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x158cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x158cf4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x158cf4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x158cf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158cfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158d00: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x158d00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x158d04: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x158d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x158d08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x158d0c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158d10: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x158d10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158d14: 0xc055942  jal         func_156508
    ctx->pc = 0x158D14u;
    SET_GPR_U32(ctx, 31, 0x158D1Cu);
    ctx->pc = 0x158D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D14u;
    // 0x158d18: 0x2632000c  addiu       $s2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156508u, 0x158D14u, 0x158D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D1Cu;
label_158d1c:
    // 0x158d1c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x158d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x158d20: 0xc055942  jal         func_156508
    ctx->pc = 0x158D20u;
    SET_GPR_U32(ctx, 31, 0x158D28u);
    ctx->pc = 0x158D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D20u;
    // 0x158d24: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156508u, 0x158D20u, 0x158D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D28u;
label_158d28:
    // 0x158d28: 0x96080002  lhu         $t0, 0x2($s0)
    ctx->pc = 0x158d28u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x158d2c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x158d2cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x158d30: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x158D30u;
    {
        const bool branch_taken_0x158d30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D30u;
        // 0x158d34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d30) {
            ctx->pc = 0x158D84u;
            goto label_158d84;
        }
    }
    ctx->pc = 0x158D38u;
    // 0x158d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x158d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158d40:
    // 0x158d40: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x158d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158d48: 0x0  nop
    ctx->pc = 0x158d48u;
    // NOP
    // 0x158d4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158d50: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x158d50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x158d54: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x158d54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d58: 0x0  nop
    ctx->pc = 0x158d58u;
    // NOP
    // 0x158d5c: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x158D5Cu;
    {
        const bool branch_taken_0x158d5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D5Cu;
        // 0x158d60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d5c) {
            ctx->pc = 0x158E34u;
            goto label_158e34;
        }
    }
    ctx->pc = 0x158D64u;
    // 0x158d64: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x158d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d68: 0x0  nop
    ctx->pc = 0x158d68u;
    // NOP
    // 0x158d6c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x158D6Cu;
    {
        const bool branch_taken_0x158d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D6Cu;
        // 0x158d70: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d6c) {
            ctx->pc = 0x158DA4u;
            goto label_158da4;
        }
    }
    ctx->pc = 0x158D74u;
    // 0x158d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158d78: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x158d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x158d7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x158D7Cu;
    {
        const bool branch_taken_0x158d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D7Cu;
        // 0x158d80: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d7c) {
            ctx->pc = 0x158D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158d40;
        }
    }
    ctx->pc = 0x158D84u;
label_158d84:
    // 0x158d84: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x158d88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x158d8c: 0x9043fffd  lbu         $v1, -0x3($v0)
    ctx->pc = 0x158d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967293)));
    // 0x158d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158d94: 0x0  nop
    ctx->pc = 0x158d94u;
    // NOP
    // 0x158d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158d9c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x158D9Cu;
    {
        const bool branch_taken_0x158d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D9Cu;
        // 0x158da0: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d9c) {
            ctx->pc = 0x158E50u;
            goto label_158e50;
        }
    }
    ctx->pc = 0x158DA4u;
label_158da4:
    // 0x158da4: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x158da4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x158da8: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x158dac: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x158dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x158db0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x158DB0u;
    {
        const bool branch_taken_0x158db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DB0u;
        // 0x158db4: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158db0) {
            ctx->pc = 0x158E14u;
            goto label_158e14;
        }
    }
    ctx->pc = 0x158DB8u;
    // 0x158db8: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158dbc: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x158dc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x158dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dc4: 0x0  nop
    ctx->pc = 0x158dc4u;
    // NOP
label_158dc8:
    // 0x158dc8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x158dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158dcc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x158dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158dd4: 0x0  nop
    ctx->pc = 0x158dd4u;
    // NOP
    // 0x158dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158ddc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x158ddcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x158de0: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x158de0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158de4: 0x0  nop
    ctx->pc = 0x158de4u;
    // NOP
    // 0x158de8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x158DE8u;
    {
        const bool branch_taken_0x158de8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DE8u;
        // 0x158dec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158de8) {
            ctx->pc = 0x158E3Cu;
            goto label_158e3c;
        }
    }
    ctx->pc = 0x158DF0u;
    // 0x158df0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x158df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158df4: 0x0  nop
    ctx->pc = 0x158df4u;
    // NOP
    // 0x158df8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x158DF8u;
    {
        const bool branch_taken_0x158df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DF8u;
        // 0x158dfc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158df8) {
            ctx->pc = 0x158E58u;
            goto label_158e58;
        }
    }
    ctx->pc = 0x158E00u;
    // 0x158e00: 0x24d00004  addiu       $s0, $a2, 0x4
    ctx->pc = 0x158e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x158e04: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x158e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x158e08: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x158e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x158e0c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x158E0Cu;
    {
        const bool branch_taken_0x158e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E0Cu;
        // 0x158e10: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e0c) {
            ctx->pc = 0x158DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158dc8;
        }
    }
    ctx->pc = 0x158E14u;
label_158e14:
    // 0x158e14: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158e18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x158e1c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x158e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x158e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e24: 0x0  nop
    ctx->pc = 0x158e24u;
    // NOP
    // 0x158e28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158e2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158E2Cu;
    {
        const bool branch_taken_0x158e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E2Cu;
        // 0x158e30: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e2c) {
            ctx->pc = 0x158E50u;
            goto label_158e50;
        }
    }
    ctx->pc = 0x158E34u;
label_158e34:
    // 0x158e34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158E34u;
    {
        const bool branch_taken_0x158e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E34u;
        // 0x158e38: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e34) {
            ctx->pc = 0x158E40u;
            goto label_158e40;
        }
    }
    ctx->pc = 0x158E3Cu;
label_158e3c:
    // 0x158e3c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x158e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_158e40:
    // 0x158e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e44: 0x0  nop
    ctx->pc = 0x158e44u;
    // NOP
    // 0x158e48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158e4c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x158e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_158e50:
    // 0x158e50: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x158E50u;
    {
        const bool branch_taken_0x158e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E50u;
        // 0x158e54: 0x46180000  add.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e50) {
            ctx->pc = 0x158F84u;
            goto label_158f84;
        }
    }
    ctx->pc = 0x158E58u;
label_158e58:
    // 0x158e58: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x158e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x158e5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158e60: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x158e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x158e64: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x158e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x158e68: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x158e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x158e6c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x158e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x158e70: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x158e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x158e74: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x158e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x158e78: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x158e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x158e7c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x158e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x158e80: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x158e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x158e84: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x158e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x158e88: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x158e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x158e8c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x158e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158e90: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x158e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158e94: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x158e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158e98: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x158e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158e9c: 0xc055954  jal         func_156550
    ctx->pc = 0x158E9Cu;
    SET_GPR_U32(ctx, 31, 0x158EA4u);
    ctx->pc = 0x158EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E9Cu;
    // 0x158ea0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156550u, 0x158E9Cu, 0x158EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EA4u;
label_158ea4:
    // 0x158ea4: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x158ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x158ea8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158eac: 0x4616aa41  sub.s       $f9, $f21, $f22
    ctx->pc = 0x158eacu;
    ctx->f[9] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x158eb0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x158eb4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x158eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x158eb8: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x158ebc: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x158ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x158ec0: 0x0  nop
    ctx->pc = 0x158ec0u;
    // NOP
    // 0x158ec4: 0x0  nop
    ctx->pc = 0x158ec4u;
    // NOP
    // 0x158ec8: 0x46004a43  div.s       $f9, $f9, $f0
    ctx->pc = 0x158ec8u;
    ctx->f[9] = ps2FpuDivide(ctx->fcr31, ctx->f[9], ctx->f[0]);
    // 0x158ecc: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x158eccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x158ed0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x158ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x158ed4: 0x0  nop
    ctx->pc = 0x158ed4u;
    // NOP
    // 0x158ed8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x158ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x158edc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ee0: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x158ee0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x158ee4: 0x0  nop
    ctx->pc = 0x158ee4u;
    // NOP
    // 0x158ee8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x158ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x158eec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x158eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x158ef0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x158ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x158ef4: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x158ef4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x158ef8: 0x0  nop
    ctx->pc = 0x158ef8u;
    // NOP
    // 0x158efc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x158efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x158f00: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x158f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x158f04: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x158f04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x158f08: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x158f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x158f0c: 0x461739c2  mul.s       $f7, $f7, $f23
    ctx->pc = 0x158f0cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[23]);
    // 0x158f10: 0xc7aa0018  lwc1        $f10, 0x18($sp)
    ctx->pc = 0x158f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x158f14: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x158f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x158f18: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x158f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158f1c: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x158f1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x158f20: 0x461839c0  add.s       $f7, $f7, $f24
    ctx->pc = 0x158f20u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[24]);
    // 0x158f24: 0x46091182  mul.s       $f6, $f2, $f9
    ctx->pc = 0x158f24u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x158f28: 0x46081202  mul.s       $f8, $f2, $f8
    ctx->pc = 0x158f28u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x158f2c: 0x46182100  add.s       $f4, $f4, $f24
    ctx->pc = 0x158f2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[24]);
    // 0x158f30: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x158f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x158f34: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x158f34u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x158f38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158f3c: 0x0  nop
    ctx->pc = 0x158f3cu;
    // NOP
    // 0x158f40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158f44: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x158f44u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x158f48: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x158f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x158f4c: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x158f4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x158f50: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x158f50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x158f54: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x158f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x158f58: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x158f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x158f5c: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x158f5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x158f60: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x158f60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x158f64: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x158f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x158f68: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x158f68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x158f6c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x158f6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x158f70: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x158f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x158f74: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x158f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x158f78: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x158f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x158f7c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x158f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x158f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x158f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_158f84:
    // 0x158f84: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x158f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158f88: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x158f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158f8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x158f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158f98: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x158f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x158f9c: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x158f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x158fa0: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x158fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x158fa4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x158fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x158fa8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x158fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158fac: 0x3e00008  jr          $ra
    ctx->pc = 0x158FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FACu;
        // 0x158fb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158FB4u;
    // 0x158fb4: 0x0  nop
    ctx->pc = 0x158fb4u;
    // NOP
    ctx->pc = 0x158fb8u;
}
