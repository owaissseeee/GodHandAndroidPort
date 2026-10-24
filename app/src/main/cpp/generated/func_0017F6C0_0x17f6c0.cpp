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

// Function: func_0017F6C0
// Address: 0x17f6c0 - 0x17f828
void func_0017F6C0_0x17f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F6C0_0x17f6c0");
#endif

    switch (ctx->pc) {
        case 0x17f740u: goto label_17f740;
        case 0x17f7acu: goto label_17f7ac;
        case 0x17f7d4u: goto label_17f7d4;
        case 0x17f7ecu: goto label_17f7ec;
        default: break;
    }

    ctx->pc = 0x17f6c0u;

    // 0x17f6c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f6c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17f6c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17f6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17f6d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f6d8: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17f6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17f6dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F6DCu;
    {
        const bool branch_taken_0x17f6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6DCu;
        // 0x17f6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6dc) {
            ctx->pc = 0x17F6F4u;
            goto label_17f6f4;
        }
    }
    ctx->pc = 0x17F6E4u;
    // 0x17f6e4: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17F6E4u;
    {
        const bool branch_taken_0x17f6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6E4u;
        // 0x17f6e8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6e4) {
            ctx->pc = 0x17F7E4u;
            goto label_17f7e4;
        }
    }
    ctx->pc = 0x17F6ECu;
    // 0x17f6ec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17F6ECu;
    {
        const bool branch_taken_0x17f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6ECu;
        // 0x17f6f0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6ec) {
            ctx->pc = 0x17F814u;
            goto label_17f814;
        }
    }
    ctx->pc = 0x17F6F4u;
label_17f6f4:
    // 0x17f6f4: 0x92220764  lbu         $v0, 0x764($s1)
    ctx->pc = 0x17f6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1892)));
    // 0x17f6f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17f6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f6fc: 0x10520044  beq         $v0, $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x17F6FCu;
    {
        const bool branch_taken_0x17f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6FCu;
        // 0x17f700: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6fc) {
            ctx->pc = 0x17F810u;
            goto label_17f810;
        }
    }
    ctx->pc = 0x17F704u;
    // 0x17f704: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x17f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f708: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x17f708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x17f70c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17f70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17f710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f714: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17f714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f71c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17f71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f724: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17f728: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x17f72c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17f730: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17f730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f734: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x17f734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17f738: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x17F738u;
    SET_GPR_U32(ctx, 31, 0x17F740u);
    ctx->pc = 0x17F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F738u;
    // 0x17f73c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x17F738u, 0x17F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F740u;
label_17f740:
    // 0x17f740: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x17f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17f744: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f748: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17f74c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x17f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f750: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17f750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f754: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17f754u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f758: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17f758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f75c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17f760: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17f760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f764: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17f768: 0x13a40006  beq         $sp, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F768u;
    {
        const bool branch_taken_0x17f768 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x17F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F768u;
        // 0x17f76c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f768) {
            ctx->pc = 0x17F784u;
            goto label_17f784;
        }
    }
    ctx->pc = 0x17F770u;
    // 0x17f770: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f774: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x17f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17f778: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f77c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17f77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f780: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17f780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17f784:
    // 0x17f784: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17f784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17f788: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17f788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17f78c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17f78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17f790: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17f790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f794: 0x26240600  addiu       $a0, $s1, 0x600
    ctx->pc = 0x17f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x17f798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f79c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f7a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17f7a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17f7a4: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x17F7A4u;
    SET_GPR_U32(ctx, 31, 0x17F7ACu);
    ctx->pc = 0x17F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7A4u;
    // 0x17f7a8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x17F7A4u, 0x17F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7ACu;
label_17f7ac:
    // 0x17f7ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17f7b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f7b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17f7b8: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x17f7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x17f7bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17f7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f7c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f7c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17f7c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17F7CCu;
    SET_GPR_U32(ctx, 31, 0x17F7D4u);
    ctx->pc = 0x17F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7CCu;
    // 0x17f7d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17F7CCu, 0x17F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7D4u;
label_17f7d4:
    // 0x17f7d4: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x17f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x17f7d8: 0xa2320765  sb          $s2, 0x765($s1)
    ctx->pc = 0x17f7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1893), (uint8_t)GPR_U32(ctx, 18));
    // 0x17f7dc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17f7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f7e0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17f7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17f7e4:
    // 0x17f7e4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17F7E4u;
    SET_GPR_U32(ctx, 31, 0x17F7ECu);
    ctx->pc = 0x17F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7E4u;
    // 0x17f7e8: 0x26240600  addiu       $a0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17F7E4u, 0x17F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7ECu;
label_17f7ec:
    // 0x17f7ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F7ECu;
    {
        const bool branch_taken_0x17f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7ECu;
        // 0x17f7f0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7ec) {
            ctx->pc = 0x17F810u;
            goto label_17f810;
        }
    }
    ctx->pc = 0x17F7F4u;
    // 0x17f7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f7f8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17f7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f7fc: 0xa2220764  sb          $v0, 0x764($s1)
    ctx->pc = 0x17f7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1892), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f800: 0xa2200765  sb          $zero, 0x765($s1)
    ctx->pc = 0x17f800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1893), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f804: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17f804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f808: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17f808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f80c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17f80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17f810:
    // 0x17f810: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17f810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f814:
    // 0x17f814: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17f814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f81c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F81Cu;
        // 0x17f820: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F824u;
    // 0x17f824: 0x0  nop
    ctx->pc = 0x17f824u;
    // NOP
    ctx->pc = 0x17f828u;
}
