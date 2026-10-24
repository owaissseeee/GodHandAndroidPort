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

// Function: func_001299F0
// Address: 0x1299f0 - 0x129ba0
void func_001299F0_0x1299f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001299F0_0x1299f0");
#endif

    switch (ctx->pc) {
        case 0x129a54u: goto label_129a54;
        case 0x129a68u: goto label_129a68;
        case 0x129a7cu: goto label_129a7c;
        case 0x129a94u: goto label_129a94;
        case 0x129abcu: goto label_129abc;
        case 0x129ad0u: goto label_129ad0;
        case 0x129b14u: goto label_129b14;
        default: break;
    }

    ctx->pc = 0x1299f0u;

    // 0x1299f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1299f4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1299f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1299f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1299f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1299fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1299fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a00: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x129a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x129a04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x129a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a08: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x129a08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x129a0c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x129a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a10: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x129a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x129a14: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x129a14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x129a18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x129a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x129a1c: 0x12400056  beqz        $s2, . + 4 + (0x56 << 2)
    ctx->pc = 0x129A1Cu;
    {
        const bool branch_taken_0x129a1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A1Cu;
        // 0x129a20: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a1c) {
            ctx->pc = 0x129B78u;
            goto label_129b78;
        }
    }
    ctx->pc = 0x129A24u;
    // 0x129a24: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x129A24u;
    {
        const bool branch_taken_0x129a24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A24u;
        // 0x129a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a24) {
            ctx->pc = 0x129A34u;
            goto label_129a34;
        }
    }
    ctx->pc = 0x129A2Cu;
    // 0x129a2c: 0x50e2001b  beql        $a3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x129A2Cu;
    {
        const bool branch_taken_0x129a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x129a2c) {
            ctx->pc = 0x129A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A2Cu;
            // 0x129a30: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x129A9Cu;
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129A34u;
label_129a34:
    // 0x129a34: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x129a38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x129a3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129a40: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x129a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x129a44: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x129a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x129a48: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x129a48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x129a4c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x129A4Cu;
    SET_GPR_U32(ctx, 31, 0x129A54u);
    ctx->pc = 0x129A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A4Cu;
    // 0x129a50: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x129A4Cu, 0x129A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A54u;
label_129a54:
    // 0x129a54: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x129a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129a58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x129a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129a5c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x129a5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x129a60: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x129A60u;
    SET_GPR_U32(ctx, 31, 0x129A68u);
    ctx->pc = 0x129A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A60u;
    // 0x129a64: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x129A60u, 0x129A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A68u;
label_129a68:
    // 0x129a68: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x129a68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x129a6c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x129a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x129a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x129a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x129a74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x129A74u;
    SET_GPR_U32(ctx, 31, 0x129A7Cu);
    ctx->pc = 0x129A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A74u;
    // 0x129a78: 0xe6540104  swc1        $f20, 0x104($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x129A74u, 0x129A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A7Cu;
label_129a7c:
    // 0x129a7c: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x129a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x129a80: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x129a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129a84: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x129a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x129a88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x129a88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x129a8c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x129A8Cu;
    SET_GPR_U32(ctx, 31, 0x129A94u);
    ctx->pc = 0x129A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A8Cu;
    // 0x129a90: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x129A8Cu, 0x129A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A94u;
label_129a94:
    // 0x129a94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x129A94u;
    {
        const bool branch_taken_0x129a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A94u;
        // 0x129a98: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a94) {
            ctx->pc = 0x129AC0u;
            goto label_129ac0;
        }
    }
    ctx->pc = 0x129A9Cu;
label_129a9c:
    // 0x129a9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x129a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x129aa0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x129aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x129aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129aa8: 0x0  nop
    ctx->pc = 0x129aa8u;
    // NOP
    // 0x129aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x129aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x129ab0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x129ab0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x129ab4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x129AB4u;
    SET_GPR_U32(ctx, 31, 0x129ABCu);
    ctx->pc = 0x129AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AB4u;
    // 0x129ab8: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x129AB4u, 0x129ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ABCu;
label_129abc:
    // 0x129abc: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x129abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_129ac0:
    // 0x129ac0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x129ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x129ac4: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x129ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x129ac8: 0xc051e62  jal         func_147988
    ctx->pc = 0x129AC8u;
    SET_GPR_U32(ctx, 31, 0x129AD0u);
    ctx->pc = 0x129ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AC8u;
    // 0x129acc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x129AC8u, 0x129AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AD0u;
label_129ad0:
    // 0x129ad0: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x129ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129ad4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x129ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129ad8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x129ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129adc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129ae0: 0xc6410110  lwc1        $f1, 0x110($s2)
    ctx->pc = 0x129ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129ae4: 0xc6430118  lwc1        $f3, 0x118($s2)
    ctx->pc = 0x129ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129ae8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129aec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x129aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x129af0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x129af0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x129af4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x129af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x129af8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x129af8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x129afc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x129afcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129b00: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x129b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b0c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x129B0Cu;
    SET_GPR_U32(ctx, 31, 0x129B14u);
    ctx->pc = 0x129B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129B0Cu;
    // 0x129b10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x129B0Cu, 0x129B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B14u;
label_129b14:
    // 0x129b14: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x129b14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129b18: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x129b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129b1c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x129b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129b20: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x129b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129b24: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x129b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129b28: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x129b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x129b2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x129b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x129b30: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x129b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x129b34: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x129b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x129b38: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x129b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129b3c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x129b3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129b40: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x129b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x129b44: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x129b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129b48: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x129b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129b4c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x129b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x129b50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x129b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129b54: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x129b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129b58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x129b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x129b5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x129b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x129b60: 0xae400558  sw          $zero, 0x558($s2)
    ctx->pc = 0x129b60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 0));
    // 0x129b64: 0xae400550  sw          $zero, 0x550($s2)
    ctx->pc = 0x129b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 0));
    // 0x129b68: 0xae400554  sw          $zero, 0x554($s2)
    ctx->pc = 0x129b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1364), GPR_U32(ctx, 0));
    // 0x129b6c: 0xae200558  sw          $zero, 0x558($s1)
    ctx->pc = 0x129b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 0));
    // 0x129b70: 0xae200550  sw          $zero, 0x550($s1)
    ctx->pc = 0x129b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
    // 0x129b74: 0xae200554  sw          $zero, 0x554($s1)
    ctx->pc = 0x129b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
label_129b78:
    // 0x129b78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x129b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x129b7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x129b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x129b80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x129b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129b84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x129b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129b88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129b8c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x129b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129b90: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x129b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129b94: 0x3e00008  jr          $ra
    ctx->pc = 0x129B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B94u;
        // 0x129b98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129B9Cu;
    // 0x129b9c: 0x0  nop
    ctx->pc = 0x129b9cu;
    // NOP
    ctx->pc = 0x129ba0u;
}
