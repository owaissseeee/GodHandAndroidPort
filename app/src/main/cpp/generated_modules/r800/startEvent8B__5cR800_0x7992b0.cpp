#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r800_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r800
{
// Function: startEvent8B__5cR800
// Address: 0x7992b0 - 0x7993a8
void startEvent8B__5cR800_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startEvent8B__5cR800_0x7992b0");
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
        default: break;
    }

    ctx->pc = 0x7992b0u;

label_7992b0:
    // 0x7992b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_7992b4:
    // 0x7992b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7992b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_7992b8:
    // 0x7992b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7992b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7992bc:
    // 0x7992bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x7992bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_7992c0:
    // 0x7992c0: 0xc0b6dac  jal         func_2DB6B0
label_7992c4:
    if (ctx->pc == 0x7992C4u) {
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992C8u;
        goto label_7992c8;
    }
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7992cc:
    // 0x7992cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7992ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7992d0:
    // 0x7992d0: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_7992d4:
    // 0x7992d4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_7992d8:
    // 0x7992d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7992d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7992dc:
    // 0x7992dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7992e0:
    // 0x7992e0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_7992e4:
    // 0x7992e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7992e8:
    // 0x7992e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7992e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7992ec:
    // 0x7992ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7992f0:
    // 0x7992f0: 0x3c0141fa  lui         $at, 0x41FA
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16890 << 16));
label_7992f4:
    // 0x7992f4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_7992f8:
    // 0x7992f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7992f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7992fc:
    // 0x7992fc: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x7992fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799300:
    // 0x799300: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x799300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799304:
    // 0x799304: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_799308:
    // 0x799308: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79930c:
    // 0x79930c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_799310:
    // 0x799310: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799314:
    // 0x799314: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799318:
    // 0x799318: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79931c:
    // 0x79931c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799320:
    // 0x799320: 0x60f809  jalr        $v1
label_799324:
    if (ctx->pc == 0x799324u) {
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799328u;
        goto label_799328;
    }
    ctx->pc = 0x799320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799328u);
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799320u, 0x799328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79932c:
    // 0x79932c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799330:
    // 0x799330: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799334:
    // 0x799334: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799338:
    // 0x799338: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79933c:
    // 0x79933c: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x79933cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799340:
    // 0x799340: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799344:
    // 0x799344: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x799344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_799348:
    // 0x799348: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79934c:
    // 0x79934c: 0x40f809  jalr        $v0
label_799350:
    if (ctx->pc == 0x799350u) {
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799354u;
        goto label_799354;
    }
    ctx->pc = 0x79934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799354u);
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79934Cu, 0x799354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_799358:
    // 0x799358: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_79935c:
    // 0x79935c: 0x8c668658  lw          $a2, -0x79A8($v1)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_799360:
    // 0x799360: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799364:
    // 0x799364: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
label_799368:
    // 0x799368: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_79936c:
    // 0x79936c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_799370:
    // 0x799370: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_799374:
    // 0x799374: 0xc0a58dc  jal         func_296370
label_799378:
    if (ctx->pc == 0x799378u) {
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79937Cu;
        goto label_79937c;
    }
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799380:
    // 0x799380: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_799384:
    // 0x799384: 0xc0b5692  jal         func_2D5A48
label_799388:
    if (ctx->pc == 0x799388u) {
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79938Cu;
        goto label_79938c;
    }
    ctx->pc = 0x799384u;
    SET_GPR_U32(ctx, 31, 0x79938Cu);
    ctx->pc = 0x799388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799384u;
    // 0x799388: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79938cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799390:
    // 0x799390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799394:
    // 0x799394: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x799394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_799398:
    // 0x799398: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x799398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79939c:
    // 0x79939c: 0x3e00008  jr          $ra
label_7993a0:
    if (ctx->pc == 0x7993A0u) {
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A4u;
        goto label_7993a4;
    }
    ctx->pc = 0x79939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0x0  nop
    ctx->pc = 0x7993a4u;
    // NOP
    ctx->pc = 0x7993a8u;
}
} // namespace gh_r800
