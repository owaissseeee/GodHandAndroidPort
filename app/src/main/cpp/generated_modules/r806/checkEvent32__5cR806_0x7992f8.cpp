#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r806_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r806
{
// Function: checkEvent32__5cR806
// Address: 0x7992f8 - 0x7994d8
void checkEvent32__5cR806_0x7992f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkEvent32__5cR806_0x7992f8");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x7992f8u;

label_7992f8:
    // 0x7992f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_7992fc:
    // 0x7992fc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_799300:
    // 0x799300: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_799304:
    // 0x799304: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_799308:
    // 0x799308: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_79930c:
    // 0x79930c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799310:
    // 0x799310: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_799314:
    // 0x799314: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_799318:
    // 0x799318: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_79931c:
    // 0x79931c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_799320:
    // 0x799320: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_799324:
    // 0x799324: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
label_799328:
    // 0x799328: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_79932c:
    // 0x79932c: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
label_799330:
    // 0x799330: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_799334:
    // 0x799334: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_799338:
    // 0x799338: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_79933c:
    // 0x79933c: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
label_799340:
    // 0x799340: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799344:
    // 0x799344: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_799348:
    // 0x799348: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x799348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_79934c:
    // 0x79934c: 0x10000005  b           . + 4 + (0x5 << 2)
label_799350:
    if (ctx->pc == 0x799350u) {
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799354u;
        goto label_799354;
    }
    ctx->pc = 0x79934Cu;
    {
        const bool branch_taken_0x79934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79934c) {
            ctx->pc = 0x799364u;
            goto label_799364;
        }
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0x0  nop
    ctx->pc = 0x799354u;
    // NOP
label_799358:
    // 0x799358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79935c:
    // 0x79935c: 0xc0b56a8  jal         func_2D5AA0
label_799360:
    if (ctx->pc == 0x799360u) {
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799364u;
        goto label_799364;
    }
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799368:
    // 0x799368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79936c:
    // 0x79936c: 0xc0b0aa6  jal         func_2C2A98
label_799370:
    if (ctx->pc == 0x799370u) {
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799374u;
        goto label_799374;
    }
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799378:
    // 0x799378: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
label_79937c:
    if (ctx->pc == 0x79937Cu) {
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799380u;
        goto label_799380;
    }
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x799358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799358;
        }
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799384:
    // 0x799384: 0xc0b6cac  jal         func_2DB2B0
label_799388:
    if (ctx->pc == 0x799388u) {
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79938Cu;
        goto label_79938c;
    }
    ctx->pc = 0x799384u;
    SET_GPR_U32(ctx, 31, 0x79938Cu);
    ctx->pc = 0x799388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799384u;
    // 0x799388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799390:
    // 0x799390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799394:
    // 0x799394: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_799398:
    // 0x799398: 0xc0b6cac  jal         func_2DB2B0
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_7993a4:
    // 0x7993a4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_7993a8:
    // 0x7993a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7993a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7993ac:
    // 0x7993ac: 0x26646af0  addiu       $a0, $s3, 0x6AF0
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27376));
label_7993b0:
    // 0x7993b0: 0xc0a58dc  jal         func_296370
label_7993b4:
    if (ctx->pc == 0x7993B4u) {
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B8u;
        goto label_7993b8;
    }
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x8e848658  lw          $a0, -0x79A8($s4)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7993bc:
    // 0x7993bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_7993c0:
    // 0x7993c0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_7993c4:
    // 0x7993c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7993c8:
    // 0x7993c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7993cc:
    // 0x7993cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7993ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7993d0:
    // 0x7993d0: 0x8ea39b70  lw          $v1, -0x6490($s5)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
label_7993d4:
    // 0x7993d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7993d8:
    // 0x7993d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_7993dc:
    // 0x7993dc: 0xc0b6dac  jal         func_2DB6B0
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x7993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993DCu;
    // 0x7993e0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_7993e8:
    // 0x7993e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7993ec:
    // 0x7993ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7993ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7993f0:
    // 0x7993f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993f4:
    // 0x7993f4: 0x3c01402e  lui         $at, 0x402E
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16430 << 16));
label_7993f8:
    // 0x7993f8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_7993fc:
    // 0x7993fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799400:
    // 0x799400: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799404:
    // 0x799404: 0x3c01c0e3  lui         $at, 0xC0E3
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49379 << 16));
label_799408:
    // 0x799408: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79940c:
    // 0x79940c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79940cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799410:
    // 0x799410: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x799410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799414:
    // 0x799414: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x799414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799418:
    // 0x799418: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79941c:
    // 0x79941c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799420:
    // 0x799420: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799424:
    // 0x799424: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799428:
    // 0x799428: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79942c:
    // 0x79942c: 0x60f809  jalr        $v1
label_799430:
    if (ctx->pc == 0x799430u) {
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799434u;
        goto label_799434;
    }
    ctx->pc = 0x79942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799434u);
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799438:
    // 0x799438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79943c:
    // 0x79943c: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799440:
    // 0x799440: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_799444:
    // 0x799444: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x799444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_799448:
    // 0x799448: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79944c:
    // 0x79944c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x79944cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_799450:
    // 0x799450: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_799454:
    // 0x799454: 0x40f809  jalr        $v0
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79945Cu);
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79945cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_799460:
    // 0x799460: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
label_799464:
    // 0x799464: 0xc0a54b4  jal         func_2952D0
label_799468:
    if (ctx->pc == 0x799468u) {
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79946Cu;
        goto label_79946c;
    }
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x8ee4264c  lw          $a0, 0x264C($s7)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 9804)));
label_799470:
    // 0x799470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799474:
    // 0x799474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799478:
    // 0x799478: 0xc0b016c  jal         func_2C05B0
label_79947c:
    if (ctx->pc == 0x79947Cu) {
        ctx->pc = 0x79947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799478u;
        // 0x79947c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799480u;
        goto label_799480;
    }
    ctx->pc = 0x799478u;
    SET_GPR_U32(ctx, 31, 0x799480u);
    ctx->pc = 0x79947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799478u;
    // 0x79947c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799478u, 0x799480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799480u;
label_799480:
    // 0x799480: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799484:
    // 0x799484: 0x27c594d8  addiu       $a1, $fp, -0x6B28
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939864));
label_799488:
    // 0x799488: 0xc0b0e24  jal         func_2C3890
label_79948c:
    if (ctx->pc == 0x79948Cu) {
        ctx->pc = 0x79948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799488u;
        // 0x79948c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799490u;
        goto label_799490;
    }
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799494:
    // 0x799494: 0xc0b5692  jal         func_2D5A48
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    SET_GPR_U32(ctx, 31, 0x79949Cu);
    ctx->pc = 0x799498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799494u;
    // 0x799498: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7994a0:
    // 0x7994a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7994a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7994a4:
    // 0x7994a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7994a8:
    // 0x7994a8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7994a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7994ac:
    // 0x7994ac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7994b0:
    // 0x7994b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7994b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7994b4:
    // 0x7994b4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7994b8:
    // 0x7994b8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x7994b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7994bc:
    // 0x7994bc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x7994bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7994c0:
    // 0x7994c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7994c4:
    // 0x7994c4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x7994c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7994c8:
    // 0x7994c8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x7994c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7994cc:
    // 0x7994cc: 0x3e00008  jr          $ra
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x0  nop
    ctx->pc = 0x7994d4u;
    // NOP
    ctx->pc = 0x7994d8u;
}
} // namespace gh_r806
