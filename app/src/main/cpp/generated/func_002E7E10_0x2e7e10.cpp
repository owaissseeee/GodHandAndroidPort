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

// Function: func_002E7E10
// Address: 0x2e7e10 - 0x2e7fa8
void func_002E7E10_0x2e7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E7E10_0x2e7e10");
#endif

    switch (ctx->pc) {
        case 0x2e7e2cu: goto label_2e7e2c;
        case 0x2e7e54u: goto label_2e7e54;
        case 0x2e7e8cu: goto label_2e7e8c;
        case 0x2e7ea0u: goto label_2e7ea0;
        case 0x2e7eb0u: goto label_2e7eb0;
        case 0x2e7f30u: goto label_2e7f30;
        case 0x2e7f4cu: goto label_2e7f4c;
        case 0x2e7f84u: goto label_2e7f84;
        case 0x2e7f90u: goto label_2e7f90;
        default: break;
    }

    ctx->pc = 0x2e7e10u;

    // 0x2e7e10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e7e14: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e7e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e7e18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e7e1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e7e20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7e24: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E7E24u;
    SET_GPR_U32(ctx, 31, 0x2E7E2Cu);
    ctx->pc = 0x2E7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E24u;
    // 0x2e7e28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E7E24u, 0x2E7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E2Cu;
label_2e7e2c:
    // 0x2e7e2c: 0x922202ca  lbu         $v0, 0x2CA($s1)
    ctx->pc = 0x2e7e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 714)));
    // 0x2e7e30: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E7E30u;
    {
        const bool branch_taken_0x2e7e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E30u;
        // 0x2e7e34: 0x262202f0  addiu       $v0, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e30) {
            ctx->pc = 0x2E7F38u;
            goto label_2e7f38;
        }
    }
    ctx->pc = 0x2E7E38u;
    // 0x2e7e38: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e7e38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7e3c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2e7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7e40: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e7e44: 0x962502b2  lhu         $a1, 0x2B2($s1)
    ctx->pc = 0x2e7e44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x2e7e48: 0x8e2602b4  lw          $a2, 0x2B4($s1)
    ctx->pc = 0x2e7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2e7e4c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2E7E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7E54u);
    ctx->pc = 0x2E7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E4Cu;
    // 0x2e7e50: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2E7E4Cu, 0x2E7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E54u;
label_2e7e54:
    // 0x2e7e54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e7e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e58: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E7E58u;
    {
        const bool branch_taken_0x2e7e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E58u;
        // 0x2e7e5c: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e58) {
            ctx->pc = 0x2E7F90u;
            goto label_2e7f90;
        }
    }
    ctx->pc = 0x2E7E60u;
    // 0x2e7e60: 0x922202cc  lbu         $v0, 0x2CC($s1)
    ctx->pc = 0x2e7e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x2e7e64: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2e7e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2e7e68: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2e7e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2e7e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e7e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e7e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7e74: 0x0  nop
    ctx->pc = 0x2e7e74u;
    // NOP
    // 0x2e7e78: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2e7e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2e7e7c: 0xc6200304  lwc1        $f0, 0x304($s1)
    ctx->pc = 0x2e7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7e80: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2e7e80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2e7e84: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E7E84u;
    SET_GPR_U32(ctx, 31, 0x2E7E8Cu);
    ctx->pc = 0x2E7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E84u;
    // 0x2e7e88: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E7E84u, 0x2E7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E8Cu;
label_2e7e8c:
    // 0x2e7e8c: 0xe6200304  swc1        $f0, 0x304($s1)
    ctx->pc = 0x2e7e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 772), bits); }
    // 0x2e7e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e94: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x2e7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x2e7e98: 0xc051dca  jal         func_147728
    ctx->pc = 0x2E7E98u;
    SET_GPR_U32(ctx, 31, 0x2E7EA0u);
    ctx->pc = 0x2E7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E98u;
    // 0x2e7e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2E7E98u, 0x2E7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EA0u;
label_2e7ea0:
    // 0x2e7ea0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e7ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ea8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E7EA8u;
    SET_GPR_U32(ctx, 31, 0x2E7EB0u);
    ctx->pc = 0x2E7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EA8u;
    // 0x2e7eac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E7EA8u, 0x2E7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EB0u;
label_2e7eb0:
    // 0x2e7eb0: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x2e7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x2e7eb4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e7ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e7ec0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e7ec4: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x2e7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7ec8: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2e7ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ecc: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2e7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7ed0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e7ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e7ed4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e7ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7ed8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e7ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e7edc: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2e7edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e7ee0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e7ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7ee4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2e7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7ee8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2e7ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7eec: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e7eecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ef0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e7ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7ef4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2e7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7ef8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2e7ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7efc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7f00: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2e7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e7f04: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2e7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e7f08: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7F08u;
    {
        const bool branch_taken_0x2e7f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F08u;
        // 0x2e7f0c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f08) {
            ctx->pc = 0x2E7F24u;
            goto label_2e7f24;
        }
    }
    ctx->pc = 0x2E7F10u;
    // 0x2e7f10: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2e7f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2e7f14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e7f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7f18: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e7f1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e7f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2e7f24:
    // 0x2e7f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f28: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2E7F28u;
    SET_GPR_U32(ctx, 31, 0x2E7F30u);
    ctx->pc = 0x2E7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F28u;
    // 0x2e7f2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2E7F28u, 0x2E7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F30u;
label_2e7f30:
    // 0x2e7f30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7F30u;
    {
        const bool branch_taken_0x2e7f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F30u;
        // 0x2e7f34: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f30) {
            ctx->pc = 0x2E7F94u;
            goto label_2e7f94;
        }
    }
    ctx->pc = 0x2E7F38u;
label_2e7f38:
    // 0x2e7f38: 0x922202cd  lbu         $v0, 0x2CD($s1)
    ctx->pc = 0x2e7f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 717)));
    // 0x2e7f3c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7F3Cu;
    {
        const bool branch_taken_0x2e7f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F3Cu;
        // 0x2e7f40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f3c) {
            ctx->pc = 0x2E7F90u;
            goto label_2e7f90;
        }
    }
    ctx->pc = 0x2E7F44u;
    // 0x2e7f44: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E7F44u;
    SET_GPR_U32(ctx, 31, 0x2E7F4Cu);
    ctx->pc = 0x2E7F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F44u;
    // 0x2e7f48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E7F44u, 0x2E7F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F4Cu;
label_2e7f4c:
    // 0x2e7f4c: 0x26220370  addiu       $v0, $s1, 0x370
    ctx->pc = 0x2e7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x2e7f50: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7F50u;
    {
        const bool branch_taken_0x2e7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F50u;
        // 0x2e7f54: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f50) {
            ctx->pc = 0x2E7F6Cu;
            goto label_2e7f6c;
        }
    }
    ctx->pc = 0x2E7F58u;
    // 0x2e7f58: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7f5c: 0xe6200370  swc1        $f0, 0x370($s1)
    ctx->pc = 0x2e7f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
    // 0x2e7f60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e7f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e7f64: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e7f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e7f6c:
    // 0x2e7f6c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2e7f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2e7f70: 0x962502b2  lhu         $a1, 0x2B2($s1)
    ctx->pc = 0x2e7f70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x2e7f74: 0x26104700  addiu       $s0, $s0, 0x4700
    ctx->pc = 0x2e7f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18176));
    // 0x2e7f78: 0x8e2602b4  lw          $a2, 0x2B4($s1)
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2e7f7c: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x2E7F7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F84u);
    ctx->pc = 0x2E7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F7Cu;
    // 0x2e7f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x2E7F7Cu, 0x2E7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F84u;
label_2e7f84:
    // 0x2e7f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f88: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2E7F88u;
    SET_GPR_U32(ctx, 31, 0x2E7F90u);
    ctx->pc = 0x2E7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F88u;
    // 0x2e7f8c: 0x26250360  addiu       $a1, $s1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2E7F88u, 0x2E7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F90u;
label_2e7f90:
    // 0x2e7f90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e7f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e7f94:
    // 0x2e7f94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e7f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7f98: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e7f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7f9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA0u;
        // 0x2e7fa4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7FA8u;
}
