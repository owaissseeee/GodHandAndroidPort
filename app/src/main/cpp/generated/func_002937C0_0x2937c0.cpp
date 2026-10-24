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

// Function: func_002937C0
// Address: 0x2937c0 - 0x293c40
void func_002937C0_0x2937c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002937C0_0x2937c0");
#endif

    switch (ctx->pc) {
        case 0x2937fcu: goto label_2937fc;
        case 0x29380cu: goto label_29380c;
        case 0x293828u: goto label_293828;
        case 0x293840u: goto label_293840;
        case 0x29386cu: goto label_29386c;
        case 0x2938d8u: goto label_2938d8;
        case 0x293934u: goto label_293934;
        case 0x293944u: goto label_293944;
        case 0x293984u: goto label_293984;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a30u: goto label_293a30;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a80u: goto label_293a80;
        case 0x293a94u: goto label_293a94;
        case 0x293aa4u: goto label_293aa4;
        case 0x293ae4u: goto label_293ae4;
        case 0x293b30u: goto label_293b30;
        case 0x293b58u: goto label_293b58;
        default: break;
    }

    ctx->pc = 0x2937c0u;

    // 0x2937c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2937c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2937c4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2937c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2937c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2937c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937cc: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2937ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x2937d0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2937d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2937d4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2937d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2937d8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2937d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x2937dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2937dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937e0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x2937e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x2937e4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2937e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x2937e8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2937e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x2937ec: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2937ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2937f0: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2937f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2937f4: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2937F4u;
    SET_GPR_U32(ctx, 31, 0x2937FCu);
    ctx->pc = 0x2937F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937F4u;
    // 0x2937f8: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2937F4u, 0x2937FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937FCu;
label_2937fc:
    // 0x2937fc: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x2937FCu;
    {
        const bool branch_taken_0x2937fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937FCu;
        // 0x293800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937fc) {
            ctx->pc = 0x293C14u;
            goto label_293c14;
        }
    }
    ctx->pc = 0x293804u;
    // 0x293804: 0xc09cfb8  jal         func_273EE0
    ctx->pc = 0x293804u;
    SET_GPR_U32(ctx, 31, 0x29380Cu);
    ctx->pc = 0x293808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293804u;
    // 0x293808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273EE0u, 0x293804u, 0x29380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29380Cu;
label_29380c:
    // 0x29380c: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x29380Cu;
    {
        const bool branch_taken_0x29380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29380Cu;
        // 0x293810: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29380c) {
            ctx->pc = 0x293C10u;
            goto label_293c10;
        }
    }
    ctx->pc = 0x293814u;
    // 0x293814: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x293814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x293818: 0x146000fe  bnez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x293818u;
    {
        const bool branch_taken_0x293818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293818u;
        // 0x29381c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293818) {
            ctx->pc = 0x293C14u;
            goto label_293c14;
        }
    }
    ctx->pc = 0x293820u;
    // 0x293820: 0xc09bcc2  jal         func_26F308
    ctx->pc = 0x293820u;
    SET_GPR_U32(ctx, 31, 0x293828u);
    ctx->pc = 0x293824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293820u;
    // 0x293824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F308u, 0x293820u, 0x293828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293828u;
label_293828:
    // 0x293828: 0x144000fa  bnez        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x293828u;
    {
        const bool branch_taken_0x293828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293828u;
        // 0x29382c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293828) {
            ctx->pc = 0x293C14u;
            goto label_293c14;
        }
    }
    ctx->pc = 0x293830u;
    // 0x293830: 0x26120574  addiu       $s2, $s0, 0x574
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1396));
    // 0x293834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293838: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x293838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29383c: 0x0  nop
    ctx->pc = 0x29383cu;
    // NOP
label_293840:
    // 0x293840: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x293844: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x293844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293848: 0x522000ee  beql        $s1, $zero, . + 4 + (0xEE << 2)
    ctx->pc = 0x293848u;
    {
        const bool branch_taken_0x293848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x293848) {
            ctx->pc = 0x29384Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293848u;
            // 0x29384c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x293850u;
    // 0x293850: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x293850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x293854: 0x584000eb  blezl       $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x293854u;
    {
        const bool branch_taken_0x293854 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x293854) {
            ctx->pc = 0x293858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293854u;
            // 0x293858: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x29385Cu;
    // 0x29385c: 0x523300e9  beql        $s1, $s3, . + 4 + (0xE9 << 2)
    ctx->pc = 0x29385Cu;
    {
        const bool branch_taken_0x29385c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x29385c) {
            ctx->pc = 0x293860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29385Cu;
            // 0x293860: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x293864u;
    // 0x293864: 0xc09cfae  jal         func_273EB8
    ctx->pc = 0x293864u;
    SET_GPR_U32(ctx, 31, 0x29386Cu);
    ctx->pc = 0x293868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293864u;
    // 0x293868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273EB8u, 0x293864u, 0x29386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29386Cu;
label_29386c:
    // 0x29386c: 0x504000e5  beql        $v0, $zero, . + 4 + (0xE5 << 2)
    ctx->pc = 0x29386Cu;
    {
        const bool branch_taken_0x29386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29386c) {
            ctx->pc = 0x293870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29386Cu;
            // 0x293870: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x293874u;
    // 0x293874: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x293874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x293878: 0x96620640  lhu         $v0, 0x640($s3)
    ctx->pc = 0x293878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1600)));
    // 0x29387c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29387cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x293880: 0x504000e0  beql        $v0, $zero, . + 4 + (0xE0 << 2)
    ctx->pc = 0x293880u;
    {
        const bool branch_taken_0x293880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293880) {
            ctx->pc = 0x293884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293880u;
            // 0x293884: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x293888u;
    // 0x293888: 0xc621054c  lwc1        $f1, 0x54C($s1)
    ctx->pc = 0x293888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29388c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29388cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293890: 0x0  nop
    ctx->pc = 0x293890u;
    // NOP
    // 0x293894: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x293894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293898: 0x0  nop
    ctx->pc = 0x293898u;
    // NOP
    // 0x29389c: 0x450300d9  bc1tl       . + 4 + (0xD9 << 2)
    ctx->pc = 0x29389Cu;
    {
        const bool branch_taken_0x29389c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29389c) {
            ctx->pc = 0x2938A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29389Cu;
            // 0x2938a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x2938A4u;
    // 0x2938a4: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x2938a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x2938a8: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2938A8u;
    {
        const bool branch_taken_0x2938a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2938a8) {
            ctx->pc = 0x2938ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2938A8u;
            // 0x2938ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x2938B0u;
    // 0x2938b0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2938b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2938b4: 0x3042090c  andi        $v0, $v0, 0x90C
    ctx->pc = 0x2938b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2316);
    // 0x2938b8: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2938B8u;
    {
        const bool branch_taken_0x2938b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2938b8) {
            ctx->pc = 0x2938BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2938B8u;
            // 0x2938bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C04u;
            goto label_293c04;
        }
    }
    ctx->pc = 0x2938C0u;
    // 0x2938c0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2938c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2938c4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2938c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2938c8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2938c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2938cc: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2938ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2938d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2938D0u;
    SET_GPR_U32(ctx, 31, 0x2938D8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2938D0u, 0x2938D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938D8u;
label_2938d8:
    // 0x2938d8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2938d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2938dc: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2938dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2938e0: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2938E0u;
    {
        const bool branch_taken_0x2938e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2938E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938E0u;
        // 0x2938e4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938e0) {
            ctx->pc = 0x293904u;
            goto label_293904;
        }
    }
    ctx->pc = 0x2938E8u;
    // 0x2938e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2938e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2938ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2938f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2938f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938f4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2938f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2938f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2938f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938fc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2938fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x293900: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x293900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293904:
    // 0x293904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293908: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x293908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29390c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x29390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x293910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293914: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x293914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x293918: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x293918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x29391c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29391cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x293920: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x293920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x293924: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x293924u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x293928: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x293928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29392c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29392Cu;
    SET_GPR_U32(ctx, 31, 0x293934u);
    ctx->pc = 0x293930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29392Cu;
    // 0x293930: 0xe7b40064  swc1        $f20, 0x64($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29392Cu, 0x293934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293934u;
label_293934:
    // 0x293934: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x293934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293938: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x293938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29393c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29393Cu;
    SET_GPR_U32(ctx, 31, 0x293944u);
    ctx->pc = 0x293940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29393Cu;
    // 0x293940: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29393Cu, 0x293944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293944u;
label_293944:
    // 0x293944: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x293944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29394c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29394cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293950: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x293950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x293954: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x293954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x293958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29395c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x293960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293964: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29396c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x29396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x293970: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x293970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29397c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x29397Cu;
    SET_GPR_U32(ctx, 31, 0x293984u);
    ctx->pc = 0x293980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29397Cu;
    // 0x293980: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x29397Cu, 0x293984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293984u;
label_293984:
    // 0x293984: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x293984u;
    {
        const bool branch_taken_0x293984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293984u;
        // 0x293988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293984) {
            ctx->pc = 0x293C14u;
            goto label_293c14;
        }
    }
    ctx->pc = 0x29398Cu;
    // 0x29398c: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x29398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x293990: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x293990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x293994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293998: 0x2443fd90  addiu       $v1, $v0, -0x270
    ctx->pc = 0x293998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x29399c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x29399cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2939a0: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2939a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2939a4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2939a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2939a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2939A8u;
    {
        const bool branch_taken_0x2939a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939A8u;
        // 0x2939ac: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939a8) {
            ctx->pc = 0x293A14u;
            goto label_293a14;
        }
    }
    ctx->pc = 0x2939B0u;
    // 0x2939b0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2939b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2939b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2939b8: 0x2442a7d0  addiu       $v0, $v0, -0x5830
    ctx->pc = 0x2939b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944720));
    // 0x2939bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2939bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2939c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2939c4: 0x800008  jr          $a0
    ctx->pc = 0x2939C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2939CCu: goto label_2939cc;
            case 0x2939DCu: goto label_2939dc;
            case 0x2939ECu: goto label_2939ec;
            case 0x2939FCu: goto label_2939fc;
            case 0x293A14u: goto label_293a14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2939C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2939CCu;
label_2939cc:
    // 0x2939cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2939ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2939d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2939d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2939d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2939D4u;
    {
        const bool branch_taken_0x2939d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939D4u;
        // 0x2939d8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939d4) {
            ctx->pc = 0x293A08u;
            goto label_293a08;
        }
    }
    ctx->pc = 0x2939DCu;
label_2939dc:
    // 0x2939dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2939dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2939e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2939e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2939e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2939E4u;
    {
        const bool branch_taken_0x2939e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939E4u;
        // 0x2939e8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939e4) {
            ctx->pc = 0x293A08u;
            goto label_293a08;
        }
    }
    ctx->pc = 0x2939ECu;
label_2939ec:
    // 0x2939ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2939f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2939f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2939f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2939F4u;
    {
        const bool branch_taken_0x2939f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939F4u;
        // 0x2939f8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939f4) {
            ctx->pc = 0x293A08u;
            goto label_293a08;
        }
    }
    ctx->pc = 0x2939FCu;
label_2939fc:
    // 0x2939fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2939fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a00: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x293a04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293a08:
    // 0x293a08: 0x0  nop
    ctx->pc = 0x293a08u;
    // NOP
    // 0x293a0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293a10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x293a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_293a14:
    // 0x293a14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293A14u;
    SET_GPR_U32(ctx, 31, 0x293A1Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293A14u, 0x293A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A1Cu;
label_293a1c:
    // 0x293a1c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x293a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x293a20: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x293a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x293a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a28: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293A28u;
    SET_GPR_U32(ctx, 31, 0x293A30u);
    ctx->pc = 0x293A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A28u;
    // 0x293a2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293A28u, 0x293A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A30u;
label_293a30:
    // 0x293a30: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x293a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293a34: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293A34u;
    SET_GPR_U32(ctx, 31, 0x293A3Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293A34u, 0x293A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A3Cu;
label_293a3c:
    // 0x293a3c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x293a40: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x293a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293a44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x293a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293a48: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x293a48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293a4c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293a50: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x293a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293a54: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x293a58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x293a58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293a5c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x293a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293a60: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a64: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x293a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293a68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293a6c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x293a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x293a70: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x293a70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x293a74: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x293a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x293a78: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x293A78u;
    SET_GPR_U32(ctx, 31, 0x293A80u);
    ctx->pc = 0x293A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A78u;
    // 0x293a7c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x293A78u, 0x293A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A80u;
label_293a80:
    // 0x293a80: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x293a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x293a84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x293a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x293a88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293a8c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x293A8Cu;
    SET_GPR_U32(ctx, 31, 0x293A94u);
    ctx->pc = 0x293A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A8Cu;
    // 0x293a90: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x293A8Cu, 0x293A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A94u;
label_293a94:
    // 0x293a94: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x293a98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293a98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293a9c: 0xc051e62  jal         func_147988
    ctx->pc = 0x293A9Cu;
    SET_GPR_U32(ctx, 31, 0x293AA4u);
    ctx->pc = 0x293AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A9Cu;
    // 0x293aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x293A9Cu, 0x293AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AA4u;
label_293aa4:
    // 0x293aa4: 0x12900006  beq         $s4, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293AA4u;
    {
        const bool branch_taken_0x293aa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x293AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AA4u;
        // 0x293aa8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293aa4) {
            ctx->pc = 0x293AC0u;
            goto label_293ac0;
        }
    }
    ctx->pc = 0x293AACu;
    // 0x293aac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x293aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x293ab0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293ab4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x293ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x293ab8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293abc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x293abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_293ac0:
    // 0x293ac0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x293ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x293ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293ac8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x293ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293acc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x293accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x293ad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ad4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x293ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x293ad8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x293ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293adc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293ADCu;
    SET_GPR_U32(ctx, 31, 0x293AE4u);
    ctx->pc = 0x293AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293ADCu;
    // 0x293ae0: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293ADCu, 0x293AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AE4u;
label_293ae4:
    // 0x293ae4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x293ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293ae8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x293ae8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293aec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293af0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x293af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293afc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x293afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x293b00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x293b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x293b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x293b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x293b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x293b10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293b18: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293b1c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x293b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x293b20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293b24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b28: 0xc04c784  jal         func_131E10
    ctx->pc = 0x293B28u;
    SET_GPR_U32(ctx, 31, 0x293B30u);
    ctx->pc = 0x293B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B28u;
    // 0x293b2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x293B28u, 0x293B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B30u;
label_293b30:
    // 0x293b30: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x293B30u;
    {
        const bool branch_taken_0x293b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B30u;
        // 0x293b34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b30) {
            ctx->pc = 0x293C10u;
            goto label_293c10;
        }
    }
    ctx->pc = 0x293B38u;
    // 0x293b38: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x293b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x293b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x293b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x293b48: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x293b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x293b4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x293b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b50: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293B50u;
    SET_GPR_U32(ctx, 31, 0x293B58u);
    ctx->pc = 0x293B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B50u;
    // 0x293b54: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293B50u, 0x293B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B58u;
label_293b58:
    // 0x293b58: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x293b58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293b5c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x293b5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293b60: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293b64: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x293b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293b68: 0x26620580  addiu       $v0, $s3, 0x580
    ctx->pc = 0x293b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
    // 0x293b6c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293B6Cu;
    {
        const bool branch_taken_0x293b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x293B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B6Cu;
        // 0x293b70: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b6c) {
            ctx->pc = 0x293B88u;
            goto label_293b88;
        }
    }
    ctx->pc = 0x293B74u;
    // 0x293b74: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293b78: 0xe6600580  swc1        $f0, 0x580($s3)
    ctx->pc = 0x293b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1408), bits); }
    // 0x293b7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293b80: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293b84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293b88:
    // 0x293b88: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x293b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x293b8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x293b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293b90: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x293b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x293b94: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x293b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x293b98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293b9c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x293b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x293ba0: 0xa26202f5  sb          $v0, 0x2F5($s3)
    ctx->pc = 0x293ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x293ba4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x293ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293ba8: 0xa26002f4  sb          $zero, 0x2F4($s3)
    ctx->pc = 0x293ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bac: 0xa26002f6  sb          $zero, 0x2F6($s3)
    ctx->pc = 0x293bacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bb0: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x293bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bb4: 0xae7106b4  sw          $s1, 0x6B4($s3)
    ctx->pc = 0x293bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 17));
    // 0x293bb8: 0xe6631720  swc1        $f3, 0x1720($s3)
    ctx->pc = 0x293bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5920), bits); }
    // 0x293bbc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x293BBCu;
    {
        const bool branch_taken_0x293bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BBCu;
        // 0x293bc0: 0xe662054c  swc1        $f2, 0x54C($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bbc) {
            ctx->pc = 0x293BDCu;
            goto label_293bdc;
        }
    }
    ctx->pc = 0x293BC4u;
    // 0x293bc4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x293bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293bc8: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x293bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x293bcc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x293bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293bd0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x293bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x293bd4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x293bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293bd8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x293bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_293bdc:
    // 0x293bdc: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x293bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x293be0: 0xe622054c  swc1        $f2, 0x54C($s1)
    ctx->pc = 0x293be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x293be4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x293be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x293be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293bec: 0xae3306b4  sw          $s3, 0x6B4($s1)
    ctx->pc = 0x293becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 19));
    // 0x293bf0: 0xe6231720  swc1        $f3, 0x1720($s1)
    ctx->pc = 0x293bf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5920), bits); }
    // 0x293bf4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x293bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bf8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x293bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x293BFCu;
    {
        const bool branch_taken_0x293bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BFCu;
        // 0x293c00: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bfc) {
            ctx->pc = 0x293C14u;
            goto label_293c14;
        }
    }
    ctx->pc = 0x293C04u;
label_293c04:
    // 0x293c04: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x293c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x293c08: 0x1440ff0d  bnez        $v0, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x293C08u;
    {
        const bool branch_taken_0x293c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C08u;
        // 0x293c0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c08) {
            ctx->pc = 0x293840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293840;
        }
    }
    ctx->pc = 0x293C10u;
label_293c10:
    // 0x293c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293c14:
    // 0x293c14: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x293c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x293c18: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x293c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x293c1c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x293c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x293c20: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x293c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x293c24: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x293c24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x293c28: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x293c28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x293c2c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x293c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x293c30: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x293c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293c34: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x293c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293c38: 0x3e00008  jr          $ra
    ctx->pc = 0x293C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C38u;
        // 0x293c3c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293C40u;
}
