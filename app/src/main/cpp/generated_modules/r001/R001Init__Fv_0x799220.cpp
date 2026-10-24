#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: R001Init__Fv
// Address: 0x799220 - 0x7997c0
void R001Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R001Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799284u: goto label_799284;
        case 0x799298u: goto label_799298;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992dcu: goto label_7992dc;
        case 0x799318u: goto label_799318;
        case 0x799348u: goto label_799348;
        case 0x799368u: goto label_799368;
        case 0x799388u: goto label_799388;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993f8u: goto label_7993f8;
        case 0x799428u: goto label_799428;
        case 0x799448u: goto label_799448;
        case 0x79945cu: goto label_79945c;
        case 0x79946cu: goto label_79946c;
        case 0x79947cu: goto label_79947c;
        case 0x799488u: goto label_799488;
        case 0x799490u: goto label_799490;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994f4u: goto label_7994f4;
        case 0x799500u: goto label_799500;
        case 0x799514u: goto label_799514;
        case 0x79952cu: goto label_79952c;
        case 0x799538u: goto label_799538;
        case 0x799544u: goto label_799544;
        case 0x799550u: goto label_799550;
        case 0x799564u: goto label_799564;
        case 0x799570u: goto label_799570;
        case 0x79957cu: goto label_79957c;
        case 0x799598u: goto label_799598;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995f4u: goto label_7995f4;
        case 0x799600u: goto label_799600;
        case 0x799614u: goto label_799614;
        case 0x799620u: goto label_799620;
        case 0x79962cu: goto label_79962c;
        case 0x799640u: goto label_799640;
        case 0x799658u: goto label_799658;
        case 0x799664u: goto label_799664;
        case 0x799670u: goto label_799670;
        case 0x799684u: goto label_799684;
        case 0x799690u: goto label_799690;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996f0u: goto label_7996f0;
        case 0x799708u: goto label_799708;
        case 0x799718u: goto label_799718;
        case 0x799724u: goto label_799724;
        case 0x799738u: goto label_799738;
        case 0x799754u: goto label_799754;
        case 0x799768u: goto label_799768;
        case 0x79977cu: goto label_79977c;
        case 0x799790u: goto label_799790;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x799224: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x799228: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79922c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799230: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x799234: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x799238: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x79923c: 0x26104220  addiu       $s0, $s0, 0x4220
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16928));
    // 0x799240: 0x26310d20  addiu       $s1, $s1, 0xD20
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3360));
    // 0x799244: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x799248: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79924c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799250: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x799250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x799254: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799258: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x799258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x79925c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799260: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x799260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x799264: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x799268: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x799268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x79926c: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x799270: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x799270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x799274: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799278: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79927c: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0x240503cb  addiu       $a1, $zero, 0x3CB
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 971));
    // 0x79928c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799290: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799290u;
    SET_GPR_U32(ctx, 31, 0x799298u);
    ctx->pc = 0x799294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799290u;
    // 0x799294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799290u, 0x799298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799298u;
label_799298:
    // 0x799298: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79929c: 0x24040628  addiu       $a0, $zero, 0x628
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1576));
    // 0x7992a0: 0xc1e6460  jal         func_799180
    ctx->pc = 0x7992A0u;
    SET_GPR_U32(ctx, 31, 0x7992A8u);
    ctx->pc = 0x7992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A0u;
    // 0x7992a4: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x7992A0u, 0x7992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A8u;
label_7992a8:
    // 0x7992a8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ac: 0x8e44d6e8  lw          $a0, -0x2918($s2)
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x7992b0: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x7992b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992b8: 0xae02af00  sw          $v0, -0x5100($s0)
    ctx->pc = 0x7992b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946560), GPR_U32(ctx, 2));
    // 0x7992bc: 0x24841910  addiu       $a0, $a0, 0x1910
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    // 0x7992c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x7992c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992c4: 0xc04f906  jal         func_13E418
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E418u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x8e42d6e8  lw          $v0, -0x2918($s2)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x7992d0: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x7992d4: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0xac401a10  sw          $zero, 0x1A10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x8e43d6e8  lw          $v1, -0x2918($s2)
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x7992e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7992e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x7992e8: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x7992ec: 0xac621a10  sw          $v0, 0x1A10($v1)
    ctx->pc = 0x7992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6672), GPR_U32(ctx, 2));
    // 0x7992f0: 0x2486ae20  addiu       $a2, $a0, -0x51E0
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946336));
    // 0x7992f4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7992f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0x8083ae20  lb          $v1, -0x51E0($a0)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x79AE20u));
    // 0x799300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799308: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799314: 0x0  nop
    ctx->pc = 0x799314u;
    // NOP
label_799318:
    // 0x799318: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79931c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799320: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799324: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799328: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79932c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799338: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799338) {
            ctx->pc = 0x79933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799338u;
            // 0x79933c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799318;
        }
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x8e63af00  lw          $v1, -0x5100($s3)
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x79934c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79934cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799350: 0x8e62af00  lw          $v0, -0x5100($s3)
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x799354: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799358: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799358u;
    {
        const bool branch_taken_0x799358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x8202ae28  lb          $v0, -0x51D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799358) {
            ctx->pc = 0x79936Cu;
            goto label_79936c;
        }
    }
    ctx->pc = 0x799360u;
    // 0x799360: 0xc070968  jal         func_1C25A0
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25A0u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x8202ae28  lb          $v0, -0x51D8($s0)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946344)));
label_79936c:
    // 0x79936c: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799370: 0x2603ae28  addiu       $v1, $s0, -0x51D8
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946344));
    // 0x799374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x7993B0u;
            goto label_7993b0;
        }
    }
    ctx->pc = 0x799380u;
    // 0x799380: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799384: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799388:
    // 0x799388: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79938c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799390: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799394: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799398: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79939c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993B0u;
            goto label_7993b0;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993A8u;
    {
        const bool branch_taken_0x7993a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993a8) {
            ctx->pc = 0x7993ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993A8u;
            // 0x7993ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799388;
        }
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x8e63af00  lw          $v1, -0x5100($s3)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x7993bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x7993bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x7993c0: 0x8e62af00  lw          $v0, -0x5100($s3)
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x7993c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7993c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x82e2ae30  lb          $v0, -0x51D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294946352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993D0u;
    // 0x7993d0: 0xc070968  jal         func_1C25A0
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25A0u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x82e2ae30  lb          $v0, -0x51D0($s7)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294946352)));
label_7993dc:
    // 0x7993dc: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x7993e0: 0x26e3ae30  addiu       $v1, $s7, -0x51D0
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946352));
    // 0x7993e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7993E8u;
    {
        const bool branch_taken_0x7993e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E8u;
        // 0x7993ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e8) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x7993F0u;
    // 0x7993f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993f8:
    // 0x7993f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7993fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799404: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799408: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79940c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79940Cu;
    {
        const bool branch_taken_0x79940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79940c) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x799414u;
    // 0x799414: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799418u;
    {
        const bool branch_taken_0x799418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799418) {
            ctx->pc = 0x79941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799418u;
            // 0x79941c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993f8;
        }
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x8e63af00  lw          $v1, -0x5100($s3)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x79942c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x79942cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x799430: 0x8e62af00  lw          $v0, -0x5100($s3)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946560)));
    // 0x799434: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x799438: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0xc070968  jal         func_1C25A0
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25A0u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79944c:
    // 0x79944c: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x799450: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799454: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x2692ea60  addiu       $s2, $s4, -0x15A0
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799460: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x799464: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x799470: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x799474: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799480: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799490u;
    {
        const bool branch_taken_0x799490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x240400bf  addiu       $a0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799490) {
            ctx->pc = 0x7994ACu;
            goto label_7994ac;
        }
    }
    ctx->pc = 0x799498u;
    // 0x799498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79949c: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7994A4u;
    {
        const bool branch_taken_0x7994a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x240400bf  addiu       $a0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a4) {
            ctx->pc = 0x7994D4u;
            goto label_7994d4;
        }
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x7994b8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994B8u;
    SET_GPR_U32(ctx, 31, 0x7994C0u);
    ctx->pc = 0x7994BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B8u;
    // 0x7994bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994B8u, 0x7994C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C0u;
label_7994c0:
    // 0x7994c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c4: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7994C4u;
    SET_GPR_U32(ctx, 31, 0x7994CCu);
    ctx->pc = 0x7994C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C4u;
    // 0x7994c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7994C4u, 0x7994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7994CCu;
    {
        const bool branch_taken_0x7994cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x26d19b70  addiu       $s1, $s6, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x7994F8u;
            goto label_7994f8;
        }
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x7994e0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
label_7994f8:
    // 0x7994f8: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x7994F8u;
    SET_GPR_U32(ctx, 31, 0x799500u);
    ctx->pc = 0x7994FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F8u;
    // 0x7994fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x7994F8u, 0x799500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799500u;
    {
        const bool branch_taken_0x799500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799500) {
            ctx->pc = 0x79951Cu;
            goto label_79951c;
        }
    }
    ctx->pc = 0x799508u;
    // 0x799508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79950c: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79950Cu;
    SET_GPR_U32(ctx, 31, 0x799514u);
    ctx->pc = 0x799510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79950Cu;
    // 0x799510: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79950Cu, 0x799514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799514u;
    {
        const bool branch_taken_0x799514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799514) {
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x799520: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799524: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x799530: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x240400ca  addiu       $a0, $zero, 0xCA
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x79953c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799548: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799548u;
    SET_GPR_U32(ctx, 31, 0x799550u);
    ctx->pc = 0x79954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799548u;
    // 0x79954c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799548u, 0x799550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799550u;
    {
        const bool branch_taken_0x799550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799550) {
            ctx->pc = 0x799580u;
            goto label_799580;
        }
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x79955c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x240400ca  addiu       $a0, $zero, 0xCA
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x799568: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799574: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799580:
    // 0x799580: 0x26b06ab0  addiu       $s0, $s5, 0x6AB0
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x799584: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79958c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799590: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x2691ea60  addiu       $s1, $s4, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x26d29b70  addiu       $s2, $s6, -0x6490
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x79959c: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x7995a0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ac: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x7995B4u;
    SET_GPR_U32(ctx, 31, 0x7995BCu);
    ctx->pc = 0x7995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B4u;
    // 0x7995b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x7995B4u, 0x7995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995D8u;
            goto label_7995d8;
        }
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c8: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x7995C8u;
    SET_GPR_U32(ctx, 31, 0x7995D0u);
    ctx->pc = 0x7995CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C8u;
    // 0x7995cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x7995C8u, 0x7995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7995D0u;
    {
        const bool branch_taken_0x7995d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d0) {
            ctx->pc = 0x799608u;
            goto label_799608;
        }
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995dc: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7995dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x7995e0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x7995ec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x7995F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ECu;
    // 0x7995f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f8: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x26d19b70  addiu       $s1, $s6, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799600) {
            ctx->pc = 0x799624u;
            goto label_799624;
        }
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x79960c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79960Cu;
    SET_GPR_U32(ctx, 31, 0x799614u);
    ctx->pc = 0x799610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79960Cu;
    // 0x799610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79960Cu, 0x799614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799618: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
label_799624:
    // 0x799624: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799624u;
    SET_GPR_U32(ctx, 31, 0x79962Cu);
    ctx->pc = 0x799628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799624u;
    // 0x799628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79962Cu;
    {
        const bool branch_taken_0x79962c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79962Cu;
        // 0x799630: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79962c) {
            ctx->pc = 0x799648u;
            goto label_799648;
        }
    }
    ctx->pc = 0x799634u;
    // 0x799634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799638: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799640u;
    {
        const bool branch_taken_0x799640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799640) {
            ctx->pc = 0x799678u;
            goto label_799678;
        }
    }
    ctx->pc = 0x799648u;
label_799648:
    // 0x799648: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x79964c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79964cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799650: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799650u;
    SET_GPR_U32(ctx, 31, 0x799658u);
    ctx->pc = 0x799654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799650u;
    // 0x799654: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799650u, 0x799658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x79965c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79965Cu;
    SET_GPR_U32(ctx, 31, 0x799664u);
    ctx->pc = 0x799660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79965Cu;
    // 0x799660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79965Cu, 0x799664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799668: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799668u;
    SET_GPR_U32(ctx, 31, 0x799670u);
    ctx->pc = 0x79966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799668u;
    // 0x79966c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799668u, 0x799670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799670u;
    {
        const bool branch_taken_0x799670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799670u;
        // 0x799674: 0x8fc42f84  lw          $a0, 0x2F84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799670) {
            ctx->pc = 0x799694u;
            goto label_799694;
        }
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x79967c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79967Cu;
    SET_GPR_U32(ctx, 31, 0x799684u);
    ctx->pc = 0x799680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79967Cu;
    // 0x799680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79967Cu, 0x799684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799688: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x8fc42f84  lw          $a0, 0x2F84($fp)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
label_799694:
    // 0x799694: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799698: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79969c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0x24a59cf0  addiu       $a1, $a1, -0x6310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x2690ea60  addiu       $s0, $s4, -0x15A0
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x7996a8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7996ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b0: 0x247164f0  addiu       $s1, $v1, 0x64F0
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
    // 0x7996b4: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x7996B4u;
    SET_GPR_U32(ctx, 31, 0x7996BCu);
    ctx->pc = 0x7996B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B4u;
    // 0x7996b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x7996B4u, 0x7996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996BCu;
label_7996bc:
    // 0x7996bc: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7996c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7996c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7996c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d0: 0x24e79fc8  addiu       $a3, $a3, -0x6038
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942664));
    // 0x7996d4: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7996e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7996e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996e8: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799718u;
            goto label_799718;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x7996fc: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x799700: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79970c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799710: 0xc04d484  jal         func_135210
    ctx->pc = 0x799710u;
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->pc = 0x799714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x799710u, 0x799718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x79971c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79971Cu;
    SET_GPR_U32(ctx, 31, 0x799724u);
    ctx->pc = 0x799720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79971Cu;
    // 0x799720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79971Cu, 0x799724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799724u;
    {
        const bool branch_taken_0x799724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799724u;
        // 0x799728: 0x26b06ab0  addiu       $s0, $s5, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799724) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x79972Cu;
    // 0x79972c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799730: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x799730u;
    SET_GPR_U32(ctx, 31, 0x799738u);
    ctx->pc = 0x799734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799730u;
    // 0x799734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x799730u, 0x799738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799738u;
label_799738:
    // 0x799738: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x26b06ab0  addiu       $s0, $s5, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799738) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x799740u;
label_799740:
    // 0x799740: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799748: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79974c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79975c: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x79975cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x799760: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799760u;
    SET_GPR_U32(ctx, 31, 0x799768u);
    ctx->pc = 0x799764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799760u;
    // 0x799764: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799760u, 0x799768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x8fc42f84  lw          $a0, 0x2F84($fp)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
    // 0x79976c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799770: 0x24a5a158  addiu       $a1, $a1, -0x5EA8
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
    // 0x799774: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x8fc42f84  lw          $a0, 0x2F84($fp)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
    // 0x799780: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799784: 0x24a5a438  addiu       $a1, $a1, -0x5BC8
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943800));
    // 0x799788: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799788u;
    SET_GPR_U32(ctx, 31, 0x799790u);
    ctx->pc = 0x79978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799788u;
    // 0x79978c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799788u, 0x799790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799790u;
label_799790:
    // 0x799790: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x799790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799794: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x799794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799798: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x799798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79979c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79979cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7997a0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x7997a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7997a4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x7997a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7997a8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x7997a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7997ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x7997acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7997b0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x7997b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7997b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7997b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997C0u;
}
} // namespace gh_r001
