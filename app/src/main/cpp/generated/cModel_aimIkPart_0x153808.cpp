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

// Function: cModel_aimIkPart
// Address: 0x153808 - 0x1538f0
void cModel_aimIkPart_0x153808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_aimIkPart_0x153808");
#endif

    switch (ctx->pc) {
        case 0x153848u: goto label_153848;
        case 0x153858u: goto label_153858;
        case 0x1538acu: goto label_1538ac;
        case 0x1538bcu: goto label_1538bc;
        case 0x1538c8u: goto label_1538c8;
        default: break;
    }

    ctx->pc = 0x153808u;

    // 0x153808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15380c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x15380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x153810: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153814: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x153814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x153818: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x153818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x15381c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153820: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x153820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x153824: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x153828: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x153828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15382c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15382cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153830: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x153830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x153834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153838: 0x8e340144  lw          $s4, 0x144($s1)
    ctx->pc = 0x153838u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x15383c: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x153840: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x153840u;
    SET_GPR_U32(ctx, 31, 0x153848u);
    ctx->pc = 0x153844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153840u;
    // 0x153844: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x153840u, 0x153848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153848u;
label_153848:
    // 0x153848: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x15384c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153850: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x153850u;
    SET_GPR_U32(ctx, 31, 0x153858u);
    ctx->pc = 0x153854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153850u;
    // 0x153854: 0x8e8600d0  lw          $a2, 0xD0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x153850u, 0x153858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153858u;
label_153858:
    // 0x153858: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x153858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x15385c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x15385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153860: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x153860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x153864: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x153864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153868: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x153868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15386c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15386cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x153870: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153874: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153878: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15387c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153880: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153880u;
    {
        const bool branch_taken_0x153880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153880u;
        // 0x153884: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153880) {
            ctx->pc = 0x15389Cu;
            goto label_15389c;
        }
    }
    ctx->pc = 0x153888u;
    // 0x153888: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x153888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15388c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x15388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153890: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x153890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x153894: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x153894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153898: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x153898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_15389c:
    // 0x15389c: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x15389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1538a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1538a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538a4: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x1538A4u;
    SET_GPR_U32(ctx, 31, 0x1538ACu);
    ctx->pc = 0x1538A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538A4u;
    // 0x1538a8: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x1538A4u, 0x1538ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538ACu;
label_1538ac:
    // 0x1538ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1538acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1538b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538b4: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x1538B4u;
    SET_GPR_U32(ctx, 31, 0x1538BCu);
    ctx->pc = 0x1538B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538B4u;
    // 0x1538b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x1538B4u, 0x1538BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538BCu;
label_1538bc:
    // 0x1538bc: 0x8e650250  lw          $a1, 0x250($s3)
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x1538c0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1538C0u;
    SET_GPR_U32(ctx, 31, 0x1538C8u);
    ctx->pc = 0x1538C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538C0u;
    // 0x1538c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1538C0u, 0x1538C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538C8u;
label_1538c8:
    // 0x1538c8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1538c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1538cc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1538ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1538d0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1538d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1538d4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1538d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1538d8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1538d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1538dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1538dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1538e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1538E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1538E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538E0u;
        // 0x1538e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1538E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1538E8u;
    // 0x1538e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1538ec: 0x0  nop
    ctx->pc = 0x1538ecu;
    // NOP
    ctx->pc = 0x1538f0u;
}
