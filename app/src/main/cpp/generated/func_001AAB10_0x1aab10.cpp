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

// Function: func_001AAB10
// Address: 0x1aab10 - 0x1aac90
void func_001AAB10_0x1aab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AAB10_0x1aab10");
#endif

    switch (ctx->pc) {
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab50u: goto label_1aab50;
        case 0x1aabacu: goto label_1aabac;
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac30u: goto label_1aac30;
        case 0x1aac68u: goto label_1aac68;
        default: break;
    }

    ctx->pc = 0x1aab10u;

    // 0x1aab10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aab14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1aab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1aab18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1aab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1aab1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aab1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1aab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1aab24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aab28: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1aab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1aab2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAB2Cu;
    {
        const bool branch_taken_0x1aab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab2c) {
            ctx->pc = 0x1AAB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAB2Cu;
            // 0x1aab30: 0x8e240604  lw          $a0, 0x604($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB40u;
            goto label_1aab40;
        }
    }
    ctx->pc = 0x1AAB34u;
    // 0x1aab34: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AAB34u;
    SET_GPR_U32(ctx, 31, 0x1AAB3Cu);
    ctx->pc = 0x1AAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB34u;
    // 0x1aab38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AAB34u, 0x1AAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB3Cu;
label_1aab3c:
    // 0x1aab3c: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1aab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
label_1aab40:
    // 0x1aab40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAB40u;
    {
        const bool branch_taken_0x1aab40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab40) {
            ctx->pc = 0x1AAB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAB40u;
            // 0x1aab44: 0x8e24060c  lw          $a0, 0x60C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB54u;
            goto label_1aab54;
        }
    }
    ctx->pc = 0x1AAB48u;
    // 0x1aab48: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AAB48u;
    SET_GPR_U32(ctx, 31, 0x1AAB50u);
    ctx->pc = 0x1AAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB48u;
    // 0x1aab4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AAB48u, 0x1AAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB50u;
label_1aab50:
    // 0x1aab50: 0x8e24060c  lw          $a0, 0x60C($s1)
    ctx->pc = 0x1aab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1548)));
label_1aab54:
    // 0x1aab54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAB54u;
    {
        const bool branch_taken_0x1aab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB54u;
        // 0x1aab58: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab54) {
            ctx->pc = 0x1AAB68u;
            goto label_1aab68;
        }
    }
    ctx->pc = 0x1AAB5Cu;
    // 0x1aab5c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aab60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aab64: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aab64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aab68:
    // 0x1aab68: 0x8e240610  lw          $a0, 0x610($s1)
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1aab6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAB6Cu;
    {
        const bool branch_taken_0x1aab6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB6Cu;
        // 0x1aab70: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab6c) {
            ctx->pc = 0x1AAB80u;
            goto label_1aab80;
        }
    }
    ctx->pc = 0x1AAB74u;
    // 0x1aab74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aab78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aab7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aab80:
    // 0x1aab80: 0x8e240614  lw          $a0, 0x614($s1)
    ctx->pc = 0x1aab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1556)));
    // 0x1aab84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAB84u;
    {
        const bool branch_taken_0x1aab84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB84u;
        // 0x1aab88: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab84) {
            ctx->pc = 0x1AAB98u;
            goto label_1aab98;
        }
    }
    ctx->pc = 0x1AAB8Cu;
    // 0x1aab8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aab90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aab94: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aab94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aab98:
    // 0x1aab98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1aab9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aab9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaba0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1aaba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1aaba4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1AABA4u;
    SET_GPR_U32(ctx, 31, 0x1AABACu);
    ctx->pc = 0x1AABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABA4u;
    // 0x1aaba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1AABA4u, 0x1AABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AABACu;
label_1aabac:
    // 0x1aabac: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x1aabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1aabb0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1aabb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aabb4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1aabb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aabb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aabbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aabbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aabc0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1aabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aabc4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1aabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1aabc8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1aabc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1aabcc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aabccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1aabd0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1aabd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1aabd4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1aabd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1aabd8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1aabd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1aabdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aabdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aabe0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1aabe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aabe4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1aabe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1aabe8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1aabe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1aabec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1aabecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1aabf0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1aabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aabf4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1aabf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aabf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aabf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabfc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1aac00: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1aac00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1aac04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aac08: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aac0c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1aac0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1aac10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aac10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aac14: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AAC14u;
    {
        const bool branch_taken_0x1aac14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1AAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC14u;
        // 0x1aac18: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac14) {
            ctx->pc = 0x1AAC4Cu;
            goto label_1aac4c;
        }
    }
    ctx->pc = 0x1AAC1Cu;
    // 0x1aac1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aac20:
    // 0x1aac20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1aac24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac28: 0xc06aa36  jal         func_1AA8D8
    ctx->pc = 0x1AAC28u;
    SET_GPR_U32(ctx, 31, 0x1AAC30u);
    ctx->pc = 0x1AAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC28u;
    // 0x1aac2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA8D8u, 0x1AAC28u, 0x1AAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC30u;
label_1aac30:
    // 0x1aac30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aac30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aac34: 0x2e02000f  sltiu       $v0, $s0, 0xF
    ctx->pc = 0x1aac34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1aac38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAC38u;
    {
        const bool branch_taken_0x1aac38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC38u;
        // 0x1aac3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac38) {
            ctx->pc = 0x1AAC50u;
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC40u;
    // 0x1aac40: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1aac40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1aac44: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AAC44u;
    {
        const bool branch_taken_0x1aac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC44u;
        // 0x1aac48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac44) {
            ctx->pc = 0x1AAC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aac20;
        }
    }
    ctx->pc = 0x1AAC4Cu;
label_1aac4c:
    // 0x1aac4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aac4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aac50:
    // 0x1aac50: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1aac50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aac58: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1aac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aac5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aac5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac60: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1AAC60u;
    SET_GPR_U32(ctx, 31, 0x1AAC68u);
    ctx->pc = 0x1AAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC60u;
    // 0x1aac64: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1AAC60u, 0x1AAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC68u;
label_1aac68:
    // 0x1aac68: 0x8e2309d0  lw          $v1, 0x9D0($s1)
    ctx->pc = 0x1aac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2512)));
    // 0x1aac6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1aac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1aac70: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1aac70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aac74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aac78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1aac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aac7c: 0xae2309d0  sw          $v1, 0x9D0($s1)
    ctx->pc = 0x1aac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2512), GPR_U32(ctx, 3));
    // 0x1aac80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1aac80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aac84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aac84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aac88: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC88u;
        // 0x1aac8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAC90u;
}
