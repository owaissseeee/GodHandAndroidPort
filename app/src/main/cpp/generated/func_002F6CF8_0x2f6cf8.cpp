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

// Function: func_002F6CF8
// Address: 0x2f6cf8 - 0x2f6e20
void func_002F6CF8_0x2f6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6CF8_0x2f6cf8");
#endif

    switch (ctx->pc) {
        case 0x2f6da0u: goto label_2f6da0;
        case 0x2f6db4u: goto label_2f6db4;
        case 0x2f6dc8u: goto label_2f6dc8;
        case 0x2f6e00u: goto label_2f6e00;
        default: break;
    }

    ctx->pc = 0x2f6cf8u;

    // 0x2f6cf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6cfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2f6d00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f6d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2f6d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6d0c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2f6d0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f6d10: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2f6d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f6d14: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f6d18: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2f6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6d1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f6d1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f6d20: 0xe62002b8  swc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2f6d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
    // 0x2f6d24: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6d28: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2f6d28u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2f6d2c: 0xe62102bc  swc1        $f1, 0x2BC($s1)
    ctx->pc = 0x2f6d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
    // 0x2f6d30: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x2f6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x2f6d34: 0x9044018c  lbu         $a0, 0x18C($v0)
    ctx->pc = 0x2f6d34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2f6d38: 0xae2302b4  sw          $v1, 0x2B4($s1)
    ctx->pc = 0x2f6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 3));
    // 0x2f6d3c: 0xae2402b0  sw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 4));
    // 0x2f6d40: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f6d44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6D44u;
    {
        const bool branch_taken_0x2f6d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D44u;
        // 0x2f6d48: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d44) {
            ctx->pc = 0x2F6D64u;
            goto label_2f6d64;
        }
    }
    ctx->pc = 0x2F6D4Cu;
    // 0x2f6d4c: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x2f6d50: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2f6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2f6d54: 0x53a2000e  beql        $sp, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6D54u;
    {
        const bool branch_taken_0x2f6d54 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6d54) {
            ctx->pc = 0x2F6D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6D54u;
            // 0x2f6d58: 0xc62d02b8  lwc1        $f13, 0x2B8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D90u;
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6D5Cu;
    // 0x2f6d5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6D5Cu;
    {
        const bool branch_taken_0x2f6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D5Cu;
        // 0x2f6d60: 0xc4600200  lwc1        $f0, 0x200($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d5c) {
            ctx->pc = 0x2F6D78u;
            goto label_2f6d78;
        }
    }
    ctx->pc = 0x2F6D64u;
label_2f6d64:
    // 0x2f6d64: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x2f6d68: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x2f6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2f6d6c: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6D6Cu;
    {
        const bool branch_taken_0x2f6d6c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6d6c) {
            ctx->pc = 0x2F6D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6D6Cu;
            // 0x2f6d70: 0xc62d02b8  lwc1        $f13, 0x2B8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D90u;
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6D74u;
    // 0x2f6d74: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x2f6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6d78:
    // 0x2f6d78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f6d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f6d7c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6d80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6d84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6d88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f6d8c: 0xc62d02b8  lwc1        $f13, 0x2B8($s1)
    ctx->pc = 0x2f6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f6d90:
    // 0x2f6d90: 0x263002b4  addiu       $s0, $s1, 0x2B4
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 692));
    // 0x2f6d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d98: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x2F6D98u;
    SET_GPR_U32(ctx, 31, 0x2F6DA0u);
    ctx->pc = 0x2F6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D98u;
    // 0x2f6d9c: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x2F6D98u, 0x2F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA0u;
label_2f6da0:
    // 0x2f6da0: 0xc62d02b8  lwc1        $f13, 0x2B8($s1)
    ctx->pc = 0x2f6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f6da4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f6da4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2f6da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dac: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x2F6DACu;
    SET_GPR_U32(ctx, 31, 0x2F6DB4u);
    ctx->pc = 0x2F6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DACu;
    // 0x2f6db0: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x2F6DACu, 0x2F6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DB4u;
label_2f6db4:
    // 0x2f6db4: 0xc62d02b8  lwc1        $f13, 0x2B8($s1)
    ctx->pc = 0x2f6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f6db8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f6db8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f6dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dc0: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x2F6DC0u;
    SET_GPR_U32(ctx, 31, 0x2F6DC8u);
    ctx->pc = 0x2F6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DC0u;
    // 0x2f6dc4: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x2F6DC0u, 0x2F6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DC8u;
label_2f6dc8:
    // 0x2f6dc8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2f6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6dcc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2f6dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6dd0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2f6dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6dd4: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2f6dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2f6dd8: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2f6dd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2f6ddc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2f6ddcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2f6de0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f6de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f6de4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2f6de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6de8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2f6de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f6dec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6df0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f6df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6df8: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2F6DF8u;
    SET_GPR_U32(ctx, 31, 0x2F6E00u);
    ctx->pc = 0x2F6DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DF8u;
    // 0x2f6dfc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2F6DF8u, 0x2F6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E00u;
label_2f6e00:
    // 0x2f6e00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f6e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6e08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f6e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6e10: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2f6e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f6e14: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2f6e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f6e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E18u;
        // 0x2f6e1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6E20u;
}
