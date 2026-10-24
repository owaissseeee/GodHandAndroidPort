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

// Function: func_00102938
// Address: 0x102938 - 0x102a80
void func_00102938_0x102938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102938_0x102938");
#endif

    switch (ctx->pc) {
        case 0x102954u: goto label_102954;
        case 0x1029a0u: goto label_1029a0;
        case 0x102a34u: goto label_102a34;
        case 0x102a48u: goto label_102a48;
        case 0x102a54u: goto label_102a54;
        case 0x102a60u: goto label_102a60;
        case 0x102a68u: goto label_102a68;
        default: break;
    }

    ctx->pc = 0x102938u;

    // 0x102938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10293c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x102940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10294c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x10294Cu;
    SET_GPR_U32(ctx, 31, 0x102954u);
    ctx->pc = 0x102950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10294Cu;
    // 0x102950: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10294Cu, 0x102954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102954u;
label_102954:
    // 0x102954: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102958u;
    {
        const bool branch_taken_0x102958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102958u;
        // 0x10295c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102958) {
            ctx->pc = 0x102974u;
            goto label_102974;
        }
    }
    ctx->pc = 0x102960u;
    // 0x102960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102964: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102964u;
    {
        const bool branch_taken_0x102964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102964) {
            ctx->pc = 0x102968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102964u;
            // 0x102968: 0x9222061f  lbu         $v0, 0x61F($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029B0u;
            goto label_1029b0;
        }
    }
    ctx->pc = 0x10296Cu;
    // 0x10296c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10296Cu;
    {
        const bool branch_taken_0x10296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10296c) {
            ctx->pc = 0x102A60u;
            goto label_102a60;
        }
    }
    ctx->pc = 0x102974u;
label_102974:
    // 0x102974: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10297c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10297cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102980: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102984: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x102984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x102988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10298c: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x10298cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x102990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102994: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102998: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102998u;
    SET_GPR_U32(ctx, 31, 0x1029A0u);
    ctx->pc = 0x10299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102998u;
    // 0x10299c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102998u, 0x1029A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029A0u;
label_1029a0:
    // 0x1029a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1029a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1029a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1029a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1029a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1029ac: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x1029acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_1029b0:
    // 0x1029b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1029B0u;
    {
        const bool branch_taken_0x1029b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1029b0) {
            ctx->pc = 0x102A38u;
            goto label_102a38;
        }
    }
    ctx->pc = 0x1029B8u;
    // 0x1029b8: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x1029b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1029bc: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1029bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1029c0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1029c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1029c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1029c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1029c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1029c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1029cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1029ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1029d0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1029d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1029d4: 0x0  nop
    ctx->pc = 0x1029d4u;
    // NOP
    // 0x1029d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1029D8u;
    {
        const bool branch_taken_0x1029d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1029d8) {
            ctx->pc = 0x1029DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1029D8u;
            // 0x1029dc: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029E0u;
            goto label_1029e0;
        }
    }
    ctx->pc = 0x1029E0u;
label_1029e0:
    // 0x1029e0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1029e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1029e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1029e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1029e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1029ec: 0x3c013d2b  lui         $at, 0x3D2B
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15659 << 16));
    // 0x1029f0: 0x342192a6  ori         $at, $at, 0x92A6
    ctx->pc = 0x1029f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37542);
    // 0x1029f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1029f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1029f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1029f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1029fc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1029fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102a00: 0x0  nop
    ctx->pc = 0x102a00u;
    // NOP
    // 0x102a04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102A04u;
    {
        const bool branch_taken_0x102a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102a04) {
            ctx->pc = 0x102A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A04u;
            // 0x102a08: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102A0Cu;
            goto label_102a0c;
        }
    }
    ctx->pc = 0x102A0Cu;
label_102a0c:
    // 0x102a0c: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x102a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102a10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x102a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102a14: 0x0  nop
    ctx->pc = 0x102a14u;
    // NOP
    // 0x102a18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102A18u;
    {
        const bool branch_taken_0x102a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102a18) {
            ctx->pc = 0x102A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A18u;
            // 0x102a1c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102A20u;
            goto label_102a20;
        }
    }
    ctx->pc = 0x102A20u;
label_102a20:
    // 0x102a20: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x102a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x102a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x102a28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x102a28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x102a2c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x102A2Cu;
    SET_GPR_U32(ctx, 31, 0x102A34u);
    ctx->pc = 0x102A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A2Cu;
    // 0x102a30: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x102A2Cu, 0x102A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A34u;
label_102a34:
    // 0x102a34: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x102a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_102a38:
    // 0x102a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102a3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102a40: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102A40u;
    SET_GPR_U32(ctx, 31, 0x102A48u);
    ctx->pc = 0x102A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A40u;
    // 0x102a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102A40u, 0x102A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A48u;
label_102a48:
    // 0x102a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a4c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102A4Cu;
    SET_GPR_U32(ctx, 31, 0x102A54u);
    ctx->pc = 0x102A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A4Cu;
    // 0x102a50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102A4Cu, 0x102A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A54u;
label_102a54:
    // 0x102a54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x102a54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x102a58: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102A58u;
    SET_GPR_U32(ctx, 31, 0x102A60u);
    ctx->pc = 0x102A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A58u;
    // 0x102a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102A58u, 0x102A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A60u;
label_102a60:
    // 0x102a60: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x102A60u;
    SET_GPR_U32(ctx, 31, 0x102A68u);
    ctx->pc = 0x102A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A60u;
    // 0x102a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034E0u, 0x102A60u, 0x102A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A68u;
label_102a68:
    // 0x102a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102a74: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x102a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102a78: 0x3e00008  jr          $ra
    ctx->pc = 0x102A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A78u;
        // 0x102a7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A80u;
}
