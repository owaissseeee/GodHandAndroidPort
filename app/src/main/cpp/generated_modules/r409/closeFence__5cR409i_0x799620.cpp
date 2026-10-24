#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: closeFence__5cR409i
// Address: 0x799620 - 0x7997e8
void closeFence__5cR409i_0x799620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("closeFence__5cR409i_0x799620");
#endif

    switch (ctx->pc) {
        case 0x79965cu: goto label_79965c;
        case 0x799688u: goto label_799688;
        case 0x799708u: goto label_799708;
        case 0x799758u: goto label_799758;
        case 0x79977cu: goto label_79977c;
        case 0x799788u: goto label_799788;
        case 0x799798u: goto label_799798;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997d0u: goto label_7997d0;
        default: break;
    }

    ctx->pc = 0x799620u;

    // 0x799620: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x799624: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x799624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x799628: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x799628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x79962c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x79962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x799630: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0xffbf0160  sd          $ra, 0x160($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799630) {
            ctx->pc = 0x799664u;
            goto label_799664;
        }
    }
    ctx->pc = 0x799638u;
    // 0x799638: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79963c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799640: 0x8c43c180  lw          $v1, -0x3E80($v0)
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C180u));
    // 0x799644: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799648: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79964c: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x799650: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799654: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799688u;
            goto label_799688;
        }
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799668: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79966c: 0x8c43c180  lw          $v1, -0x3E80($v0)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C180u));
    // 0x799670: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799674: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799678: 0x24a5c028  addiu       $a1, $a1, -0x3FD8
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
    // 0x79967c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799680: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x799688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79968c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799690: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x799690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799694: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x799694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799698: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x799698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79969c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x79969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996a0: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x7996a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996a4: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x7996a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996a8: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x7996a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996ac: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x7996acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996b0: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996b4: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x7996b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996b8: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996bc: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x7996bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996c0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7996c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7996c4: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x7996c8: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x7996c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7996cc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7996d0: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x7996d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7996d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7996d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7996dc: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x7996e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7996e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7996e4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x7996e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x7996e8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x7996e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x7996ec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x7996ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x7996f0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x7996f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x7996f4: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x7996f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x7996f8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x7996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x7996fc: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x7996fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x799700: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x799700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x799704: 0x0  nop
    ctx->pc = 0x799704u;
    // NOP
label_799708:
    // 0x799708: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79970c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799710: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799714: 0x0  nop
    ctx->pc = 0x799714u;
    // NOP
    // 0x799718: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799718) {
            ctx->pc = 0x799708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799708;
        }
    }
    ctx->pc = 0x799720u;
    // 0x799720: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x799724: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799728: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79972c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799730: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x799734: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79973c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x799740: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799744: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x799744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x799748: 0x24e77b00  addiu       $a3, $a3, 0x7B00
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31488));
    // 0x79974c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799750: 0xc071ada  jal         func_1C6B68
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B68u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79975c: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x799760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799764: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x799768: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79976c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799770: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799774: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79977Cu;
    {
        const bool branch_taken_0x79977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79977c) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x799784u;
    // 0x799784: 0x0  nop
    ctx->pc = 0x799784u;
    // NOP
label_799788:
    // 0x799788: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79978c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799790: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799790u;
    SET_GPR_U32(ctx, 31, 0x799798u);
    ctx->pc = 0x799794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799790u;
    // 0x799794: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799790u, 0x799798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799798u;
label_799798:
    // 0x799798: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799798u;
    SET_GPR_U32(ctx, 31, 0x7997A0u);
    ctx->pc = 0x79979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799798u;
    // 0x79979c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799798u, 0x7997A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0x1050fff9  beq         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7997A0u;
    {
        const bool branch_taken_0x7997a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x2644ee00  addiu       $a0, $s2, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a0) {
            ctx->pc = 0x799788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799788;
        }
    }
    ctx->pc = 0x7997A8u;
    // 0x7997a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997ac: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x7997b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997bc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7997BCu;
    SET_GPR_U32(ctx, 31, 0x7997C4u);
    ctx->pc = 0x7997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997BCu;
    // 0x7997c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7997c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x7997d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x7997d4: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x7997d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x7997d8: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x7997d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x7997dc: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x7997e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7997E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997E8u;
}
} // namespace gh_r409
