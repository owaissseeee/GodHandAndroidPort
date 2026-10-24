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

// Function: func_002A7CD0
// Address: 0x2a7cd0 - 0x2a8038
void func_002A7CD0_0x2a7cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A7CD0_0x2a7cd0");
#endif

    switch (ctx->pc) {
        case 0x2a7d40u: goto label_2a7d40;
        case 0x2a7d70u: goto label_2a7d70;
        case 0x2a7dc0u: goto label_2a7dc0;
        case 0x2a7e18u: goto label_2a7e18;
        case 0x2a7e78u: goto label_2a7e78;
        case 0x2a7ea4u: goto label_2a7ea4;
        case 0x2a7eb4u: goto label_2a7eb4;
        case 0x2a7ed0u: goto label_2a7ed0;
        case 0x2a7f0cu: goto label_2a7f0c;
        case 0x2a7f30u: goto label_2a7f30;
        case 0x2a7f60u: goto label_2a7f60;
        case 0x2a7f9cu: goto label_2a7f9c;
        case 0x2a7fc0u: goto label_2a7fc0;
        case 0x2a7fe0u: goto label_2a7fe0;
        default: break;
    }

    ctx->pc = 0x2a7cd0u;

    // 0x2a7cd0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a7cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2a7cd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a7cd8: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x2a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x2a7cdc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2a7cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2a7ce0: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2a7ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2a7ce4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2a7ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7ce8: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2a7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2a7cec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a7cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7cf0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2a7cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2a7cf4: 0x2454018c  addiu       $s4, $v0, 0x18C
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
    // 0x2a7cf8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2a7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2a7cfc: 0x27b50034  addiu       $s5, $sp, 0x34
    ctx->pc = 0x2a7cfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2a7d00: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2a7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2a7d04: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7d08: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2a7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2a7d0c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a7d0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d10: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2a7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2a7d14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a7d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d18: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2a7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2a7d1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a7d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d20: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2a7d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2a7d24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7d28: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2a7d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2a7d2c: 0x3c0148af  lui         $at, 0x48AF
    ctx->pc = 0x2a7d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18607 << 16));
    // 0x2a7d30: 0x3421c800  ori         $at, $at, 0xC800
    ctx->pc = 0x2a7d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51200);
    // 0x2a7d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7d38: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2a7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2a7d3c: 0x0  nop
    ctx->pc = 0x2a7d3cu;
    // NOP
label_2a7d40:
    // 0x2a7d40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a7d44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a7d48: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a7d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a7d4c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a7d50: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7D50u;
    {
        const bool branch_taken_0x2a7d50 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D50u;
        // 0x2a7d54: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d50) {
            ctx->pc = 0x2A7D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7d40;
        }
    }
    ctx->pc = 0x2A7D58u;
    // 0x2a7d58: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a7d5c: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A7D5Cu;
    {
        const bool branch_taken_0x2a7d5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D5Cu;
        // 0x2a7d60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d5c) {
            ctx->pc = 0x2A7E5Cu;
            goto label_2a7e5c;
        }
    }
    ctx->pc = 0x2A7D64u;
    // 0x2a7d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7d68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a7d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7d6c: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x2a7d6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a7d70:
    // 0x2a7d70: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7D70u;
    {
        const bool branch_taken_0x2a7d70 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D70u;
        // 0x2a7d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d70) {
            ctx->pc = 0x2A7D80u;
            goto label_2a7d80;
        }
    }
    ctx->pc = 0x2A7D78u;
    // 0x2a7d78: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a7d7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a7d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a7d80:
    // 0x2a7d80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7d84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7D84u;
    {
        const bool branch_taken_0x2a7d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d84) {
            ctx->pc = 0x2A7D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D84u;
            // 0x2a7d88: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7D94u;
            goto label_2a7d94;
        }
    }
    ctx->pc = 0x2A7D8Cu;
    // 0x2a7d8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7D8Cu;
    {
        const bool branch_taken_0x2a7d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D8Cu;
        // 0x2a7d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d8c) {
            ctx->pc = 0x2A7D9Cu;
            goto label_2a7d9c;
        }
    }
    ctx->pc = 0x2A7D94u;
label_2a7d94:
    // 0x2a7d94: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2a7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2a7d98: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2a7d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7d9c:
    // 0x2a7d9c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2a7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a7da0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2a7da0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a7da4: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2a7da4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a7da8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a7da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a7dac: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a7dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7db0: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2a7db0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7db4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2a7db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7db8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2A7DB8u;
    SET_GPR_U32(ctx, 31, 0x2A7DC0u);
    ctx->pc = 0x2A7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DB8u;
    // 0x2a7dbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2A7DB8u, 0x2A7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DC0u;
label_2a7dc0:
    // 0x2a7dc0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a7dc0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2a7dc4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7dc8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7dcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7dd0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x2a7dd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x2a7dd4: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x2a7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2a7dd8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2a7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a7ddc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7de0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a7de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7de4: 0x0  nop
    ctx->pc = 0x2a7de4u;
    // NOP
    // 0x2a7de8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2A7DE8u;
    {
        const bool branch_taken_0x2a7de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DE8u;
        // 0x2a7dec: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7de8) {
            ctx->pc = 0x2A7E48u;
            goto label_2a7e48;
        }
    }
    ctx->pc = 0x2A7DF0u;
    // 0x2a7df0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2a7df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7df4: 0x0  nop
    ctx->pc = 0x2a7df4u;
    // NOP
    // 0x2a7df8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7DF8u;
    {
        const bool branch_taken_0x2a7df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DF8u;
        // 0x2a7dfc: 0x2421021  addu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7df8) {
            ctx->pc = 0x2A7E48u;
            goto label_2a7e48;
        }
    }
    ctx->pc = 0x2A7E00u;
    // 0x2a7e00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a7e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e04: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a7e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a7e08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a7e08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e0c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a7e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a7e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7e14: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2a7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2a7e18:
    // 0x2a7e18: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x2a7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2a7e1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a7e24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a7e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7e2c: 0x0  nop
    ctx->pc = 0x2a7e2cu;
    // NOP
    // 0x2a7e30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7E30u;
    {
        const bool branch_taken_0x2a7e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7e30) {
            ctx->pc = 0x2A7E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7E30u;
            // 0x2a7e34: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7E38u;
            goto label_2a7e38;
        }
    }
    ctx->pc = 0x2A7E38u;
label_2a7e38:
    // 0x2a7e38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a7e3c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2a7e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a7e40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A7E40u;
    {
        const bool branch_taken_0x2a7e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E40u;
        // 0x2a7e44: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e40) {
            ctx->pc = 0x2A7E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7e18;
        }
    }
    ctx->pc = 0x2A7E48u;
label_2a7e48:
    // 0x2a7e48: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a7e4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e50: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a7e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7e54: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2A7E54u;
    {
        const bool branch_taken_0x2a7e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7e54) {
            ctx->pc = 0x2A7D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7d70;
        }
    }
    ctx->pc = 0x2A7E5Cu;
label_2a7e5c:
    // 0x2a7e5c: 0x12560015  beq         $s2, $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A7E5Cu;
    {
        const bool branch_taken_0x2a7e5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E5Cu;
        // 0x2a7e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e5c) {
            ctx->pc = 0x2A7EB4u;
            goto label_2a7eb4;
        }
    }
    ctx->pc = 0x2A7E64u;
    // 0x2a7e64: 0x2d21823  subu        $v1, $s6, $s2
    ctx->pc = 0x2a7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2a7e68: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2a7e68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2a7e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7e70: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7E70u;
    {
        const bool branch_taken_0x2a7e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E70u;
        // 0x2a7e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e70) {
            ctx->pc = 0x2A7E90u;
            goto label_2a7e90;
        }
    }
    ctx->pc = 0x2A7E78u;
label_2a7e78:
    // 0x2a7e78: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a7e78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a7e7c: 0x0  nop
    ctx->pc = 0x2a7e7cu;
    // NOP
    // 0x2a7e80: 0x0  nop
    ctx->pc = 0x2a7e80u;
    // NOP
    // 0x2a7e84: 0x0  nop
    ctx->pc = 0x2a7e84u;
    // NOP
    // 0x2a7e88: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7E88u;
    {
        const bool branch_taken_0x2a7e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E88u;
        // 0x2a7e8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e88) {
            ctx->pc = 0x2A7E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7e78;
        }
    }
    ctx->pc = 0x2A7E90u;
label_2a7e90:
    // 0x2a7e90: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e98: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2a7e98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2a7e9c: 0xc0aa3bc  jal         func_2A8EF0
    ctx->pc = 0x2A7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A7EA4u);
    ctx->pc = 0x2A7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E9Cu;
    // 0x2a7ea0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8EF0u, 0x2A7E9Cu, 0x2A7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EA4u;
label_2a7ea4:
    // 0x2a7ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ea8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7eac: 0xc0aa4a2  jal         func_2A9288
    ctx->pc = 0x2A7EACu;
    SET_GPR_U32(ctx, 31, 0x2A7EB4u);
    ctx->pc = 0x2A7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EACu;
    // 0x2a7eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9288u, 0x2A7EACu, 0x2A7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EB4u;
label_2a7eb4:
    // 0x2a7eb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a7eb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7EB8u;
    {
        const bool branch_taken_0x2a7eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EB8u;
        // 0x2a7ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7eb8) {
            ctx->pc = 0x2A7F24u;
            goto label_2a7f24;
        }
    }
    ctx->pc = 0x2A7EC0u;
    // 0x2a7ec0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a7ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7ec4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2a7ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ec8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2a7ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7ecc: 0x0  nop
    ctx->pc = 0x2a7eccu;
    // NOP
label_2a7ed0:
    // 0x2a7ed0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7ed4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7ED4u;
    {
        const bool branch_taken_0x2a7ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7ED4u;
        // 0x2a7ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ed4) {
            ctx->pc = 0x2A7F14u;
            goto label_2a7f14;
        }
    }
    ctx->pc = 0x2A7EDCu;
    // 0x2a7edc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7ee0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a7ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ee8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7eec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ef0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a7ef4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7ef8: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x2a7ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x2a7efc: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a7f00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f04: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7F04u;
    SET_GPR_U32(ctx, 31, 0x2A7F0Cu);
    ctx->pc = 0x2A7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F04u;
    // 0x2a7f08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7F04u, 0x2A7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F0Cu;
label_2a7f0c:
    // 0x2a7f0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7F0Cu;
    {
        const bool branch_taken_0x2a7f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f0c) {
            ctx->pc = 0x2A7F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7F0Cu;
            // 0x2a7f10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7F14u;
            goto label_2a7f14;
        }
    }
    ctx->pc = 0x2A7F14u;
label_2a7f14:
    // 0x2a7f14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a7f18: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A7F18u;
    {
        const bool branch_taken_0x2a7f18 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2A7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F18u;
        // 0x2a7f1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f18) {
            ctx->pc = 0x2A7ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7ed0;
        }
    }
    ctx->pc = 0x2A7F20u;
    // 0x2a7f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f24:
    // 0x2a7f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a7f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f28: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a7f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7f30:
    // 0x2a7f30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7f34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a7f38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a7f3c: 0x0  nop
    ctx->pc = 0x2a7f3cu;
    // NOP
    // 0x2a7f40: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7F40u;
    {
        const bool branch_taken_0x2a7f40 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2A7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F40u;
        // 0x2a7f44: 0xc2280b  movn        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f40) {
            ctx->pc = 0x2A7F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7f30;
        }
    }
    ctx->pc = 0x2A7F48u;
    // 0x2a7f48: 0x54a0001b  bnel        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A7F48u;
    {
        const bool branch_taken_0x2a7f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f48) {
            ctx->pc = 0x2A7F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7F48u;
            // 0x2a7f4c: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7FB8u;
            goto label_2a7fb8;
        }
    }
    ctx->pc = 0x2A7F50u;
    // 0x2a7f50: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a7f50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f54: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x2a7f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2a7f58: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2a7f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7f5c: 0x0  nop
    ctx->pc = 0x2a7f5cu;
    // NOP
label_2a7f60:
    // 0x2a7f60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a7f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7f64: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7F64u;
    {
        const bool branch_taken_0x2a7f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F64u;
        // 0x2a7f68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f64) {
            ctx->pc = 0x2A7FA4u;
            goto label_2a7fa4;
        }
    }
    ctx->pc = 0x2A7F6Cu;
    // 0x2a7f6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7f70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a7f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f78: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f80: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a7f84: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7f88: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x2a7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x2a7f8c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a7f90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f94: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7F94u;
    SET_GPR_U32(ctx, 31, 0x2A7F9Cu);
    ctx->pc = 0x2A7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F94u;
    // 0x2a7f98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7F94u, 0x2A7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F9Cu;
label_2a7f9c:
    // 0x2a7f9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7F9Cu;
    {
        const bool branch_taken_0x2a7f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f9c) {
            ctx->pc = 0x2A7FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7F9Cu;
            // 0x2a7fa0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7FA4u;
            goto label_2a7fa4;
        }
    }
    ctx->pc = 0x2A7FA4u;
label_2a7fa4:
    // 0x2a7fa4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a7fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a7fa8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A7FA8u;
    {
        const bool branch_taken_0x2a7fa8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2A7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FA8u;
        // 0x2a7fac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fa8) {
            ctx->pc = 0x2A7F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7f60;
        }
    }
    ctx->pc = 0x2A7FB0u;
    // 0x2a7fb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A7FB0u;
    {
        const bool branch_taken_0x2a7fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FB0u;
        // 0x2a7fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fb0) {
            ctx->pc = 0x2A7FDCu;
            goto label_2a7fdc;
        }
    }
    ctx->pc = 0x2A7FB8u;
label_2a7fb8:
    // 0x2a7fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7fbc: 0x0  nop
    ctx->pc = 0x2a7fbcu;
    // NOP
label_2a7fc0:
    // 0x2a7fc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a7fc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a7fc8: 0x0  nop
    ctx->pc = 0x2a7fc8u;
    // NOP
    // 0x2a7fcc: 0x0  nop
    ctx->pc = 0x2a7fccu;
    // NOP
    // 0x2a7fd0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7FD0u;
    {
        const bool branch_taken_0x2a7fd0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2A7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FD0u;
        // 0x2a7fd4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fd0) {
            ctx->pc = 0x2A7FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7fc0;
        }
    }
    ctx->pc = 0x2A7FD8u;
    // 0x2a7fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a7fdc:
    // 0x2a7fdc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a7fdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7fe0:
    // 0x2a7fe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7fe4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7FE4u;
    {
        const bool branch_taken_0x2a7fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FE4u;
        // 0x2a7fe8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fe4) {
            ctx->pc = 0x2A8004u;
            goto label_2a8004;
        }
    }
    ctx->pc = 0x2A7FECu;
    // 0x2a7fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7ff0: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2a7ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a7ff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7FF4u;
    {
        const bool branch_taken_0x2a7ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FF4u;
        // 0x2a7ff8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ff4) {
            ctx->pc = 0x2A7FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7fe0;
        }
    }
    ctx->pc = 0x2A7FFCu;
    // 0x2a7ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8000: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2a8000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2a8004:
    // 0x2a8004: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2a8004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a8008: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2a8008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a800c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2a800cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a8010: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2a8010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a8014: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2a8014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a8018: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2a8018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a801c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2a801cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a8020: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2a8020u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a8024: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2a8024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a8028: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2a8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a802c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A802Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A802Cu;
        // 0x2a8030: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A802Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8034u;
    // 0x2a8034: 0x0  nop
    ctx->pc = 0x2a8034u;
    // NOP
    ctx->pc = 0x2a8038u;
}
