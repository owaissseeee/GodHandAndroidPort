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

// Function: func_001780D8
// Address: 0x1780d8 - 0x178268
void func_001780D8_0x1780d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001780D8_0x1780d8");
#endif

    switch (ctx->pc) {
        case 0x178138u: goto label_178138;
        case 0x178148u: goto label_178148;
        case 0x178158u: goto label_178158;
        case 0x178168u: goto label_178168;
        case 0x1781e0u: goto label_1781e0;
        case 0x1781f8u: goto label_1781f8;
        default: break;
    }

    ctx->pc = 0x1780d8u;

    // 0x1780d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1780d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1780dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1780dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1780e0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1780e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1780e4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1780e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1780e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1780e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1780ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780f0: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1780f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1780f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1780f8: 0x26430d30  addiu       $v1, $s2, 0xD30
    ctx->pc = 0x1780f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x1780fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1780fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x178100: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x178100u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x178104: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x178104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x178108: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17810c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178110: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x178114: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x178114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x178118: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x178118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17811c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178128: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x178128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17812c: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x17812cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x178130: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x178130u;
    SET_GPR_U32(ctx, 31, 0x178138u);
    ctx->pc = 0x178134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178130u;
    // 0x178134: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x178130u, 0x178138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178138u;
label_178138:
    // 0x178138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17813c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17813cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178140: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x178140u;
    SET_GPR_U32(ctx, 31, 0x178148u);
    ctx->pc = 0x178144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178140u;
    // 0x178144: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x178140u, 0x178148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178148u;
label_178148:
    // 0x178148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17814c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178150: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x178150u;
    SET_GPR_U32(ctx, 31, 0x178158u);
    ctx->pc = 0x178154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178150u;
    // 0x178154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x178150u, 0x178158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178158u;
label_178158:
    // 0x178158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17815c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178160: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x178160u;
    SET_GPR_U32(ctx, 31, 0x178168u);
    ctx->pc = 0x178164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178160u;
    // 0x178164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x178160u, 0x178168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178168u;
label_178168:
    // 0x178168: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x178168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x17816c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x178170: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x178170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x178174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178178: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x178178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x17817c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17817cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178180: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x178180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x178184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x178188: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x178188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17818c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x178190: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x178190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x178194: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x178194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x178198: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x178198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17819c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x17819cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1781a0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1781a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1781a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1781a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1781a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1781ac: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1781acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1781b0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1781b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1781b4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1781b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1781b8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1781b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1781bc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1781bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1781c0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1781c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1781c4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1781c8: 0x248313a0  addiu       $v1, $a0, 0x13A0
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5024));
    // 0x1781cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1781ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1781d0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1781d0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1781d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1781d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1781D8u;
    {
        const bool branch_taken_0x1781d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781D8u;
        // 0x1781dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781d8) {
            ctx->pc = 0x1781F8u;
            goto label_1781f8;
        }
    }
    ctx->pc = 0x1781E0u;
label_1781e0:
    // 0x1781e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1781e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1781e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1781e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781ec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1781ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781f0: 0xc05df78  jal         func_177DE0
    ctx->pc = 0x1781F0u;
    SET_GPR_U32(ctx, 31, 0x1781F8u);
    ctx->pc = 0x1781F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781F0u;
    // 0x1781f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DE0u, 0x1781F0u, 0x1781F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781F8u;
label_1781f8:
    // 0x1781f8: 0x262413a0  addiu       $a0, $s1, 0x13A0
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5024));
    // 0x1781fc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x178200: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x178204: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x178208: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x178208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17820c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x17820cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x178210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178214: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x178214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178218: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x178218u;
    {
        const bool branch_taken_0x178218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178218) {
            ctx->pc = 0x17821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178218u;
            // 0x17821c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178230u;
            goto label_178230;
        }
    }
    ctx->pc = 0x178220u;
    // 0x178220: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x178220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x178224: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x178224u;
    {
        const bool branch_taken_0x178224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x178228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178224u;
        // 0x178228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178224) {
            ctx->pc = 0x1781E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1781e0;
        }
    }
    ctx->pc = 0x17822Cu;
    // 0x17822c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17822cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178230:
    // 0x178230: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x178230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178234: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x178234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178238: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x178238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17823c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17823cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178244: 0x3e00008  jr          $ra
    ctx->pc = 0x178244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178244u;
        // 0x178248: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17824Cu;
    // 0x17824c: 0x0  nop
    ctx->pc = 0x17824cu;
    // NOP
    // 0x178250: 0x0  nop
    ctx->pc = 0x178250u;
    // NOP
    // 0x178254: 0x0  nop
    ctx->pc = 0x178254u;
    // NOP
    // 0x178258: 0x0  nop
    ctx->pc = 0x178258u;
    // NOP
    // 0x17825c: 0x0  nop
    ctx->pc = 0x17825cu;
    // NOP
    // 0x178260: 0x0  nop
    ctx->pc = 0x178260u;
    // NOP
    // 0x178264: 0x0  nop
    ctx->pc = 0x178264u;
    // NOP
    ctx->pc = 0x178268u;
}
