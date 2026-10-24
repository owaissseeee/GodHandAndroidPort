#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r401_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r401
{
// Function: checkBattle__5cR401
// Address: 0x7992b0 - 0x799550
void checkBattle__5cR401_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR401_0x7992b0");
#endif

    switch (ctx->pc) {
        case 0x7992b0u: goto label_7992b0;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992bcu: goto label_7992bc;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992c4u: goto label_7992c4;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e4u: goto label_7992e4;
        case 0x7992e8u: goto label_7992e8;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f0u: goto label_7992f0;
        case 0x7992f4u: goto label_7992f4;
        case 0x7992f8u: goto label_7992f8;
        case 0x7992fcu: goto label_7992fc;
        case 0x799300u: goto label_799300;
        case 0x799304u: goto label_799304;
        case 0x799308u: goto label_799308;
        case 0x79930cu: goto label_79930c;
        case 0x799310u: goto label_799310;
        case 0x799314u: goto label_799314;
        case 0x799318u: goto label_799318;
        case 0x79931cu: goto label_79931c;
        case 0x799320u: goto label_799320;
        case 0x799324u: goto label_799324;
        case 0x799328u: goto label_799328;
        case 0x79932cu: goto label_79932c;
        case 0x799330u: goto label_799330;
        case 0x799334u: goto label_799334;
        case 0x799338u: goto label_799338;
        case 0x79933cu: goto label_79933c;
        case 0x799340u: goto label_799340;
        case 0x799344u: goto label_799344;
        case 0x799348u: goto label_799348;
        case 0x79934cu: goto label_79934c;
        case 0x799350u: goto label_799350;
        case 0x799354u: goto label_799354;
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        case 0x799360u: goto label_799360;
        case 0x799364u: goto label_799364;
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
        case 0x799370u: goto label_799370;
        case 0x799374u: goto label_799374;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        case 0x799380u: goto label_799380;
        case 0x799384u: goto label_799384;
        case 0x799388u: goto label_799388;
        case 0x79938cu: goto label_79938c;
        case 0x799390u: goto label_799390;
        case 0x799394u: goto label_799394;
        case 0x799398u: goto label_799398;
        case 0x79939cu: goto label_79939c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        default: break;
    }

    ctx->pc = 0x7992b0u;

label_7992b0:
    // 0x7992b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_7992b4:
    // 0x7992b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7992b8:
    // 0x7992b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7992bc:
    // 0x7992bc: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x7992bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_7992c0:
    // 0x7992c0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_7992c4:
    // 0x7992c4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x7992c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_7992c8:
    // 0x7992c8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_7992cc:
    // 0x7992cc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7992d0:
    // 0x7992d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_7992d4:
    // 0x7992d4: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_7992d8:
    // 0x7992d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_7992dc:
    // 0x7992dc: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
label_7992e0:
    // 0x7992e0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_7992e4:
    // 0x7992e4: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_7992e8:
    // 0x7992e8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_7992ec:
    // 0x7992ec: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_7992f0:
    // 0x7992f0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x7992f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_7992f4:
    // 0x7992f4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_7992f8:
    // 0x7992f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7992f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_7992fc:
    // 0x7992fc: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x7992fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_799300:
    // 0x799300: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x799300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_799304:
    // 0x799304: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_799308:
    // 0x799308: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x799308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_79930c:
    // 0x79930c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_799310:
    // 0x799310: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799314:
    // 0x799314: 0x4400059  bltz        $v0, . + 4 + (0x59 << 2)
label_799318:
    if (ctx->pc == 0x799318u) {
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79931Cu;
        goto label_79931c;
    }
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x79947Cu;
            goto label_79947c;
        }
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_799320:
    // 0x799320: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799324:
    // 0x799324: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799328:
    // 0x799328: 0x10000009  b           . + 4 + (0x9 << 2)
label_79932c:
    if (ctx->pc == 0x79932Cu) {
        ctx->pc = 0x79932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799328u;
        // 0x79932c: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799330u;
        goto label_799330;
    }
    ctx->pc = 0x799328u;
    {
        const bool branch_taken_0x799328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799328u;
        // 0x79932c: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799328) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_799334:
    // 0x799334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799338:
    // 0x799338: 0xc0a56e0  jal         func_295B80
label_79933c:
    if (ctx->pc == 0x79933Cu) {
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799340u;
        goto label_799340;
    }
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799344:
    // 0x799344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799348:
    // 0x799348: 0xc0b56a8  jal         func_2D5AA0
label_79934c:
    if (ctx->pc == 0x79934Cu) {
        ctx->pc = 0x79934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799348u;
        // 0x79934c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799350u;
        goto label_799350;
    }
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799354:
    // 0x799354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799358:
    // 0x799358: 0xc0b0aa6  jal         func_2C2A98
label_79935c:
    if (ctx->pc == 0x79935Cu) {
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799360u;
        goto label_799360;
    }
    ctx->pc = 0x799358u;
    SET_GPR_U32(ctx, 31, 0x799360u);
    ctx->pc = 0x79935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799358u;
    // 0x79935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799358u, 0x799360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799364:
    // 0x799364: 0x1443fff2  bne         $v0, $v1, . + 4 + (-0xE << 2)
label_799368:
    if (ctx->pc == 0x799368u) {
        ctx->pc = 0x79936Cu;
        goto label_79936c;
    }
    ctx->pc = 0x799364u;
    {
        const bool branch_taken_0x799364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799364) {
            ctx->pc = 0x799330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799330;
        }
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x10000006  b           . + 4 + (0x6 << 2)
label_799370:
    if (ctx->pc == 0x799370u) {
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799374u;
        goto label_799374;
    }
    ctx->pc = 0x79936Cu;
    {
        const bool branch_taken_0x79936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79936c) {
            ctx->pc = 0x799388u;
            goto label_799388;
        }
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x0  nop
    ctx->pc = 0x799374u;
    // NOP
label_799378:
    // 0x799378: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79937c:
    // 0x79937c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799380:
    // 0x799380: 0xc0b56a8  jal         func_2D5AA0
label_799384:
    if (ctx->pc == 0x799384u) {
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799388u;
        goto label_799388;
    }
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0xc0b0f90  jal         func_2C3E40
label_79938c:
    if (ctx->pc == 0x79938Cu) {
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799390u;
        goto label_799390;
    }
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x27c46af0  addiu       $a0, $fp, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799398u;
        goto label_799398;
    }
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x27c46af0  addiu       $a0, $fp, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 27376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x799378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799378;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0xc0a58dc  jal         func_296370
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7993a4:
    // 0x7993a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7993a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7993a8:
    // 0x7993a8: 0xc0b6dac  jal         func_2DB6B0
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x26316ab0  addiu       $s1, $s1, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x26316ab0  addiu       $s1, $s1, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x3c01c043  lui         $at, 0xC043
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49219 << 16));
label_7993b4:
    // 0x7993b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7993b8:
    // 0x7993b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7993b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7993bc:
    // 0x7993bc: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_7993c0:
    // 0x7993c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7993c4:
    // 0x7993c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993c8:
    // 0x7993c8: 0x3c01c150  lui         $at, 0xC150
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49488 << 16));
label_7993cc:
    // 0x7993cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7993d0:
    // 0x7993d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7993d4:
    // 0x7993d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7993d8:
    // 0x7993d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7993d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_7993dc:
    // 0x7993dc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x7993dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_7993e0:
    // 0x7993e0: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x7993e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_7993e4:
    // 0x7993e4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x7993e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_7993e8:
    // 0x7993e8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7993ec:
    // 0x7993ec: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_7993f0:
    // 0x7993f0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_7993f4:
    // 0x7993f4: 0x60f809  jalr        $v1
label_7993f8:
    if (ctx->pc == 0x7993F8u) {
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993FCu;
        goto label_7993fc;
    }
    ctx->pc = 0x7993F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7993FCu);
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799400:
    // 0x799400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799404:
    // 0x799404: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799408:
    // 0x799408: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x799408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_79940c:
    // 0x79940c: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x79940cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_799410:
    // 0x799410: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x799410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_799414:
    // 0x799414: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x799414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_799418:
    // 0x799418: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79941c:
    // 0x79941c: 0x40f809  jalr        $v0
label_799420:
    if (ctx->pc == 0x799420u) {
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799424u;
        goto label_799424;
    }
    ctx->pc = 0x79941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799424u);
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799428:
    // 0x799428: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79942c:
    // 0x79942c: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799430:
    // 0x799430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799434:
    // 0x799434: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_799438:
    // 0x799438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79943c:
    // 0x79943c: 0xc0a571c  jal         func_295C70
label_799440:
    if (ctx->pc == 0x799440u) {
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799444u;
        goto label_799444;
    }
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C70u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0xc0a56ce  jal         func_295B38
label_799448:
    if (ctx->pc == 0x799448u) {
        ctx->pc = 0x799448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799444u;
        // 0x799448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79944Cu;
        goto label_79944c;
    }
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79944cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799450:
    // 0x799450: 0xc0a54b4  jal         func_2952D0
label_799454:
    if (ctx->pc == 0x799454u) {
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799458u;
        goto label_799458;
    }
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799458u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79945c:
    // 0x79945c: 0xc0a54b4  jal         func_2952D0
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799468:
    // 0x799468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79946c:
    // 0x79946c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_799470:
    // 0x799470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799474:
    // 0x799474: 0xc0b016c  jal         func_2C05B0
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x8ec2d6e8  lw          $v0, -0x2918($s6)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956776)));
label_799480:
    // 0x799480: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_799484:
    // 0x799484: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
label_799488:
    // 0x799488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79948c:
    // 0x79948c: 0x8c431f20  lw          $v1, 0x1F20($v0)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7968)));
label_799490:
    // 0x799490: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799494:
    // 0x799494: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_799498:
    // 0x799498: 0xc0b42ae  jal         func_2D0AB8
label_79949c:
    if (ctx->pc == 0x79949Cu) {
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0xac431f20  sw          $v1, 0x1F20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7968), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A0u;
        goto label_7994a0;
    }
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0xac431f20  sw          $v1, 0x1F20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7968), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994B4u;
            goto label_7994b4;
        }
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994ac:
    // 0x7994ac: 0xc0b56a8  jal         func_2D5AA0
label_7994b0:
    if (ctx->pc == 0x7994B0u) {
        ctx->pc = 0x7994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ACu;
        // 0x7994b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B4u;
        goto label_7994b4;
    }
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0xc0a572a  jal         func_295CA8
label_7994b8:
    if (ctx->pc == 0x7994B8u) {
        ctx->pc = 0x7994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B4u;
        // 0x7994b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994BCu;
        goto label_7994bc;
    }
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_7994c0:
    if (ctx->pc == 0x7994C0u) {
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C4u;
        goto label_7994c4;
    }
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x7994A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7994c8:
    // 0x7994c8: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_7994cc:
    // 0x7994cc: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7994d0:
    // 0x7994d0: 0x27c46af0  addiu       $a0, $fp, 0x6AF0
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 27376));
label_7994d4:
    // 0x7994d4: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_7994d8:
    // 0x7994d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7994dc:
    // 0x7994dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_7994e0:
    // 0x7994e0: 0xc0a58dc  jal         func_296370
label_7994e4:
    if (ctx->pc == 0x7994E4u) {
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E8u;
        goto label_7994e8;
    }
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7994ec:
    // 0x7994ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7994f0:
    // 0x7994f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7994f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7994f4:
    // 0x7994f4: 0x24467b00  addiu       $a2, $v0, 0x7B00
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
label_7994f8:
    // 0x7994f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994fc:
    // 0x7994fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799500:
    // 0x799500: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_799504:
    // 0x799504: 0xc0b1152  jal         func_2C4548
label_799508:
    if (ctx->pc == 0x799508u) {
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79950Cu;
        goto label_79950c;
    }
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799510:
    // 0x799510: 0xc0b5692  jal         func_2D5A48
label_799514:
    if (ctx->pc == 0x799514u) {
        ctx->pc = 0x799514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799510u;
        // 0x799514: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799518u;
        goto label_799518;
    }
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x799518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79951c:
    // 0x79951c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79951cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799520:
    // 0x799520: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x799520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_799524:
    // 0x799524: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x799524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799528:
    // 0x799528: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x799528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79952c:
    // 0x79952c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79952cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799530:
    // 0x799530: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x799530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799534:
    // 0x799534: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x799534u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799538:
    // 0x799538: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x799538u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79953c:
    // 0x79953c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_799540:
    // 0x799540: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x799540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_799544:
    // 0x799544: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x799544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799548:
    // 0x799548: 0x3e00008  jr          $ra
label_79954c:
    if (ctx->pc == 0x79954Cu) {
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799550u;
        goto label_fallthrough_0x799548;
    }
    ctx->pc = 0x799548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799548:
    ctx->pc = 0x799550u;
}
} // namespace gh_r401
