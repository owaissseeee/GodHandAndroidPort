#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: func_00799568
// Address: 0x799568 - 0x799750
void func_00799568_0x799568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799568_0x799568");
#endif

    switch (ctx->pc) {
        case 0x7995c0u: goto label_7995c0;
        case 0x7995d4u: goto label_7995d4;
        case 0x799600u: goto label_799600;
        case 0x79960cu: goto label_79960c;
        case 0x799614u: goto label_799614;
        case 0x799628u: goto label_799628;
        case 0x799634u: goto label_799634;
        case 0x79963cu: goto label_79963c;
        case 0x79964cu: goto label_79964c;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996f8u: goto label_7996f8;
        case 0x799700u: goto label_799700;
        case 0x799720u: goto label_799720;
        default: break;
    }

    ctx->pc = 0x799568u;

    // 0x799568: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79956c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799570: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x799570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x799574: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799578: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x799578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x79957c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x799580: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799584: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x799584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x799588: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x799588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x79958c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x799590: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x799590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x799594: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x799594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x799598: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x79959c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7995a0: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7995a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7995a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7995ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7995ACu;
    {
        const bool branch_taken_0x7995ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ac) {
            ctx->pc = 0x7995C0u;
            goto label_7995c0;
        }
    }
    ctx->pc = 0x7995B4u;
    // 0x7995b4: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7995b8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7995c4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7995c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995c8: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x7995cc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x7995d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995dc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7995e0: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x7995e4: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7995e8: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7995ec: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x7995ECu;
    {
        const bool branch_taken_0x7995ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ec) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x7995F4u;
    // 0x7995f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x79960Cu;
            goto label_79960c;
        }
    }
    ctx->pc = 0x7995FCu;
    // 0x7995fc: 0x0  nop
    ctx->pc = 0x7995fcu;
    // NOP
label_799600:
    // 0x799600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799604: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0xc09d594  jal         func_275650
    ctx->pc = 0x79960Cu;
    SET_GPR_U32(ctx, 31, 0x799614u);
    ctx->pc = 0x799610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79960Cu;
    // 0x799610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275650u, 0x79960Cu, 0x799614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799614u;
    {
        const bool branch_taken_0x799614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799614) {
            ctx->pc = 0x799600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799600;
        }
    }
    ctx->pc = 0x79961Cu;
label_79961c:
    // 0x79961c: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799620: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79962c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79962Cu;
    SET_GPR_U32(ctx, 31, 0x799634u);
    ctx->pc = 0x799630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79962Cu;
    // 0x799630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79962Cu, 0x799634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79963cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799640: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799644: 0xc0a56be  jal         func_295AF8
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AF8u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79964cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799650: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799654: 0x3c0142a6  lui         $at, 0x42A6
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17062 << 16));
    // 0x799658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79965c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799664: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x799668: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79966c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799670: 0x3c01c24a  lui         $at, 0xC24A
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49738 << 16));
    // 0x799674: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79967c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799684: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x799684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799688: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x79968c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79968cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x799690: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799694: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x799694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799698: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x799698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79969c: 0xc0a5682  jal         func_295A08
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A08u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7996a8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7996A8u;
    SET_GPR_U32(ctx, 31, 0x7996B0u);
    ctx->pc = 0x7996ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A8u;
    // 0x7996ac: 0x26a59a20  addiu       $a1, $s5, -0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7996A8u, 0x7996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996bc: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    // 0x7996c0: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x7996c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996c4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7996CCu;
    SET_GPR_U32(ctx, 31, 0x7996D4u);
    ctx->pc = 0x7996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996CCu;
    // 0x7996d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7996CCu, 0x7996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7996d8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x26e59a28  addiu       $a1, $s7, -0x65D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x7996e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7996ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0xc0a5682  jal         func_295A08
    ctx->pc = 0x7996F0u;
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->pc = 0x7996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A08u, 0x7996F0u, 0x7996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7996F8u;
    SET_GPR_U32(ctx, 31, 0x799700u);
    ctx->pc = 0x7996FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F8u;
    // 0x7996fc: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7996F8u, 0x799700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x8fc48658  lw          $a0, -0x79A8($fp)
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
    // 0x799704: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799708: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79970c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799710: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799714: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799718: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799718u;
    SET_GPR_U32(ctx, 31, 0x799720u);
    ctx->pc = 0x79971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799718u;
    // 0x79971c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x799720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799724: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x799724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799728: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x799728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79972c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79972cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799730: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x799730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799734: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x799734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799738: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x799738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79973c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x79973cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799740: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x799740u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799744: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799748: 0x3e00008  jr          $ra
    ctx->pc = 0x799748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799748u;
        // 0x79974c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799750u;
}
} // namespace gh_r303
