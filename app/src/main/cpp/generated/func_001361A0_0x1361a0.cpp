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

// Function: func_001361A0
// Address: 0x1361a0 - 0x136458
void func_001361A0_0x1361a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001361A0_0x1361a0");
#endif

    switch (ctx->pc) {
        case 0x136210u: goto label_136210;
        case 0x136258u: goto label_136258;
        case 0x136288u: goto label_136288;
        case 0x136298u: goto label_136298;
        case 0x1362d0u: goto label_1362d0;
        case 0x1362f8u: goto label_1362f8;
        case 0x136324u: goto label_136324;
        case 0x136354u: goto label_136354;
        case 0x136364u: goto label_136364;
        case 0x136370u: goto label_136370;
        case 0x13638cu: goto label_13638c;
        case 0x136398u: goto label_136398;
        case 0x1363b4u: goto label_1363b4;
        case 0x1363c0u: goto label_1363c0;
        case 0x1363dcu: goto label_1363dc;
        case 0x1363e8u: goto label_1363e8;
        default: break;
    }

    ctx->pc = 0x1361a0u;

    // 0x1361a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1361a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1361a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361a8: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1361a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1361ac: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1361acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1361b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361b4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1361b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1361b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1361b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1361bc: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1361bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1361c0: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x1361c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x1361c4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1361c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1361cc: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1361ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1361d0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1361d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1361d4: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x1361d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1361d8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1361d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1361dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1361dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361e0: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1361e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1361e4: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1361e8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1361e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1361ec: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1361f0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1361f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1361f4: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1361f8: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1361f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1361fc: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x136200: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x136200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x136204: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136208: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x136208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x13620c: 0x0  nop
    ctx->pc = 0x13620cu;
    // NOP
label_136210:
    // 0x136210: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x136210u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136218: 0x0  nop
    ctx->pc = 0x136218u;
    // NOP
    // 0x13621c: 0x0  nop
    ctx->pc = 0x13621cu;
    // NOP
    // 0x136220: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x136220u;
    {
        const bool branch_taken_0x136220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x136224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136220u;
        // 0x136224: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136220) {
            ctx->pc = 0x136210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136210;
        }
    }
    ctx->pc = 0x136228u;
    // 0x136228: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x136228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13622c: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x136230: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x136230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136234: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x136234u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136238: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x136238u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13623c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13623cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136240: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x136240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136244: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x136244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x136248: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x136248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13624c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136250: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x136250u;
    SET_GPR_U32(ctx, 31, 0x136258u);
    ctx->pc = 0x136254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136250u;
    // 0x136254: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x136250u, 0x136258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136258u;
label_136258:
    // 0x136258: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x13625c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x13625cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x136260: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x136260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136264: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136268: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x136268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13626c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13626cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136270: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x136270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136274: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x136274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x136278: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x136278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13627c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136280: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x136280u;
    SET_GPR_U32(ctx, 31, 0x136288u);
    ctx->pc = 0x136284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136280u;
    // 0x136284: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x136280u, 0x136288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136288u;
label_136288:
    // 0x136288: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x136288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13628c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136290: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x136290u;
    SET_GPR_U32(ctx, 31, 0x136298u);
    ctx->pc = 0x136294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136290u;
    // 0x136294: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x136290u, 0x136298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136298u;
label_136298:
    // 0x136298: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x136298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13629c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x13629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1362a0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1362a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1362a4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1362a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1362a8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1362a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1362ac: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1362acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1362b0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1362b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1362b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1362b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1362b8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1362b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1362bc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1362bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1362c0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1362c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1362c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1362c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362c8: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1362C8u;
    SET_GPR_U32(ctx, 31, 0x1362D0u);
    ctx->pc = 0x1362CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362C8u;
    // 0x1362cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1362C8u, 0x1362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D0u;
label_1362d0:
    // 0x1362d0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1362d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1362d4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1362d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1362d8: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1362d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1362dc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1362dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1362e0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1362e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1362e4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1362e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1362e8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1362e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1362ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1362ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362f0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1362F0u;
    SET_GPR_U32(ctx, 31, 0x1362F8u);
    ctx->pc = 0x1362F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362F0u;
    // 0x1362f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1362F0u, 0x1362F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362F8u;
label_1362f8:
    // 0x1362f8: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1362f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1362fc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1362fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136300: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136300u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136304: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x136304u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x136308: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136308u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13630c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x13630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136310: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x136310u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x136314: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136318: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x136318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x13631c: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x13631Cu;
    SET_GPR_U32(ctx, 31, 0x136324u);
    ctx->pc = 0x136320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13631Cu;
    // 0x136320: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x13631Cu, 0x136324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136324u;
label_136324:
    // 0x136324: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x136324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136328: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x136328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13632c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13632cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136330: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x136330u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x136334: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136338: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x136338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13633c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x13633cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x136340: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136344: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x136344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x136348: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x136348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13634c: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x13634Cu;
    SET_GPR_U32(ctx, 31, 0x136354u);
    ctx->pc = 0x136350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13634Cu;
    // 0x136350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x13634Cu, 0x136354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136354u;
label_136354:
    // 0x136354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136358: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x136358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13635c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x13635Cu;
    SET_GPR_U32(ctx, 31, 0x136364u);
    ctx->pc = 0x136360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13635Cu;
    // 0x136360: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x13635Cu, 0x136364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136364u;
label_136364:
    // 0x136364: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x136364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136368: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136368u;
    SET_GPR_U32(ctx, 31, 0x136370u);
    ctx->pc = 0x13636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136368u;
    // 0x13636c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136368u, 0x136370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136370u;
label_136370:
    // 0x136370: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x136370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136374: 0x0  nop
    ctx->pc = 0x136374u;
    // NOP
    // 0x136378: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x136378u;
    {
        const bool branch_taken_0x136378 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136378u;
        // 0x13637c: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136378) {
            ctx->pc = 0x1363F8u;
            goto label_1363f8;
        }
    }
    ctx->pc = 0x136380u;
    // 0x136380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136384: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x136384u;
    SET_GPR_U32(ctx, 31, 0x13638Cu);
    ctx->pc = 0x136388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136384u;
    // 0x136388: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x136384u, 0x13638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13638Cu;
label_13638c:
    // 0x13638c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136390: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136390u;
    SET_GPR_U32(ctx, 31, 0x136398u);
    ctx->pc = 0x136394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136390u;
    // 0x136394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136390u, 0x136398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136398u;
label_136398:
    // 0x136398: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x136398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13639c: 0x0  nop
    ctx->pc = 0x13639cu;
    // NOP
    // 0x1363a0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1363A0u;
    {
        const bool branch_taken_0x1363a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1363A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363A0u;
        // 0x1363a4: 0x8fa50094  lw          $a1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363a0) {
            ctx->pc = 0x1363F8u;
            goto label_1363f8;
        }
    }
    ctx->pc = 0x1363A8u;
    // 0x1363a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1363a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363ac: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1363ACu;
    SET_GPR_U32(ctx, 31, 0x1363B4u);
    ctx->pc = 0x1363B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363ACu;
    // 0x1363b0: 0x8fa60098  lw          $a2, 0x98($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1363ACu, 0x1363B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363B4u;
label_1363b4:
    // 0x1363b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1363b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363b8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1363B8u;
    SET_GPR_U32(ctx, 31, 0x1363C0u);
    ctx->pc = 0x1363BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363B8u;
    // 0x1363bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1363B8u, 0x1363C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363C0u;
label_1363c0:
    // 0x1363c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1363c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363c4: 0x0  nop
    ctx->pc = 0x1363c4u;
    // NOP
    // 0x1363c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1363C8u;
    {
        const bool branch_taken_0x1363c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1363CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363C8u;
        // 0x1363cc: 0x8fa50098  lw          $a1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363c8) {
            ctx->pc = 0x1363F8u;
            goto label_1363f8;
        }
    }
    ctx->pc = 0x1363D0u;
    // 0x1363d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1363d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363d4: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1363D4u;
    SET_GPR_U32(ctx, 31, 0x1363DCu);
    ctx->pc = 0x1363D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363D4u;
    // 0x1363d8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1363D4u, 0x1363DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363DCu;
label_1363dc:
    // 0x1363dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1363dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363e0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1363E0u;
    SET_GPR_U32(ctx, 31, 0x1363E8u);
    ctx->pc = 0x1363E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363E0u;
    // 0x1363e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1363E0u, 0x1363E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363E8u;
label_1363e8:
    // 0x1363e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1363e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363ec: 0x0  nop
    ctx->pc = 0x1363ecu;
    // NOP
    // 0x1363f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1363F0u;
    {
        const bool branch_taken_0x1363f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1363F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363F0u;
        // 0x1363f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363f0) {
            ctx->pc = 0x136420u;
            goto label_136420;
        }
    }
    ctx->pc = 0x1363F8u;
label_1363f8:
    // 0x1363f8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1363f8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x1363fc: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x136400: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x136400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x136404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136408: 0x0  nop
    ctx->pc = 0x136408u;
    // NOP
    // 0x13640c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13640cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136410: 0x0  nop
    ctx->pc = 0x136410u;
    // NOP
    // 0x136414: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x136414u;
    {
        const bool branch_taken_0x136414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136414u;
        // 0x136418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136414) {
            ctx->pc = 0x136420u;
            goto label_136420;
        }
    }
    ctx->pc = 0x13641Cu;
    // 0x13641c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13641cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136420:
    // 0x136420: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x136420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x136424: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x136424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x136428: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x136428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13642c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x13642cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x136430: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x136430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x136434: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x136434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x136438: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x136438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13643c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x13643cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x136440: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x136440u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x136444: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x136444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136448: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x136448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13644c: 0x3e00008  jr          $ra
    ctx->pc = 0x13644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13644Cu;
        // 0x136450: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13644Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136454u;
    // 0x136454: 0x0  nop
    ctx->pc = 0x136454u;
    // NOP
    ctx->pc = 0x136458u;
}
