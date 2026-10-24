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

// Function: _doMC
// Address: 0x39d398 - 0x39d5b8
void _doMC_0x39d398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doMC_0x39d398");
#endif

    switch (ctx->pc) {
        case 0x39d398u: goto label_39d398;
        case 0x39d39cu: goto label_39d39c;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a4u: goto label_39d3a4;
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3acu: goto label_39d3ac;
        case 0x39d3b0u: goto label_39d3b0;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3b8u: goto label_39d3b8;
        case 0x39d3bcu: goto label_39d3bc;
        case 0x39d3c0u: goto label_39d3c0;
        case 0x39d3c4u: goto label_39d3c4;
        case 0x39d3c8u: goto label_39d3c8;
        case 0x39d3ccu: goto label_39d3cc;
        case 0x39d3d0u: goto label_39d3d0;
        case 0x39d3d4u: goto label_39d3d4;
        case 0x39d3d8u: goto label_39d3d8;
        case 0x39d3dcu: goto label_39d3dc;
        case 0x39d3e0u: goto label_39d3e0;
        case 0x39d3e4u: goto label_39d3e4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3ecu: goto label_39d3ec;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d3f4u: goto label_39d3f4;
        case 0x39d3f8u: goto label_39d3f8;
        case 0x39d3fcu: goto label_39d3fc;
        case 0x39d400u: goto label_39d400;
        case 0x39d404u: goto label_39d404;
        case 0x39d408u: goto label_39d408;
        case 0x39d40cu: goto label_39d40c;
        case 0x39d410u: goto label_39d410;
        case 0x39d414u: goto label_39d414;
        case 0x39d418u: goto label_39d418;
        case 0x39d41cu: goto label_39d41c;
        case 0x39d420u: goto label_39d420;
        case 0x39d424u: goto label_39d424;
        case 0x39d428u: goto label_39d428;
        case 0x39d42cu: goto label_39d42c;
        case 0x39d430u: goto label_39d430;
        case 0x39d434u: goto label_39d434;
        case 0x39d438u: goto label_39d438;
        case 0x39d43cu: goto label_39d43c;
        case 0x39d440u: goto label_39d440;
        case 0x39d444u: goto label_39d444;
        case 0x39d448u: goto label_39d448;
        case 0x39d44cu: goto label_39d44c;
        case 0x39d450u: goto label_39d450;
        case 0x39d454u: goto label_39d454;
        case 0x39d458u: goto label_39d458;
        case 0x39d45cu: goto label_39d45c;
        case 0x39d460u: goto label_39d460;
        case 0x39d464u: goto label_39d464;
        case 0x39d468u: goto label_39d468;
        case 0x39d46cu: goto label_39d46c;
        case 0x39d470u: goto label_39d470;
        case 0x39d474u: goto label_39d474;
        case 0x39d478u: goto label_39d478;
        case 0x39d47cu: goto label_39d47c;
        case 0x39d480u: goto label_39d480;
        case 0x39d484u: goto label_39d484;
        case 0x39d488u: goto label_39d488;
        case 0x39d48cu: goto label_39d48c;
        case 0x39d490u: goto label_39d490;
        case 0x39d494u: goto label_39d494;
        case 0x39d498u: goto label_39d498;
        case 0x39d49cu: goto label_39d49c;
        case 0x39d4a0u: goto label_39d4a0;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4a8u: goto label_39d4a8;
        case 0x39d4acu: goto label_39d4ac;
        case 0x39d4b0u: goto label_39d4b0;
        case 0x39d4b4u: goto label_39d4b4;
        case 0x39d4b8u: goto label_39d4b8;
        case 0x39d4bcu: goto label_39d4bc;
        case 0x39d4c0u: goto label_39d4c0;
        case 0x39d4c4u: goto label_39d4c4;
        case 0x39d4c8u: goto label_39d4c8;
        case 0x39d4ccu: goto label_39d4cc;
        case 0x39d4d0u: goto label_39d4d0;
        case 0x39d4d4u: goto label_39d4d4;
        case 0x39d4d8u: goto label_39d4d8;
        case 0x39d4dcu: goto label_39d4dc;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d4e4u: goto label_39d4e4;
        case 0x39d4e8u: goto label_39d4e8;
        case 0x39d4ecu: goto label_39d4ec;
        case 0x39d4f0u: goto label_39d4f0;
        case 0x39d4f4u: goto label_39d4f4;
        case 0x39d4f8u: goto label_39d4f8;
        case 0x39d4fcu: goto label_39d4fc;
        case 0x39d500u: goto label_39d500;
        case 0x39d504u: goto label_39d504;
        case 0x39d508u: goto label_39d508;
        case 0x39d50cu: goto label_39d50c;
        case 0x39d510u: goto label_39d510;
        case 0x39d514u: goto label_39d514;
        case 0x39d518u: goto label_39d518;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d520u: goto label_39d520;
        case 0x39d524u: goto label_39d524;
        case 0x39d528u: goto label_39d528;
        case 0x39d52cu: goto label_39d52c;
        case 0x39d530u: goto label_39d530;
        case 0x39d534u: goto label_39d534;
        case 0x39d538u: goto label_39d538;
        case 0x39d53cu: goto label_39d53c;
        case 0x39d540u: goto label_39d540;
        case 0x39d544u: goto label_39d544;
        case 0x39d548u: goto label_39d548;
        case 0x39d54cu: goto label_39d54c;
        case 0x39d550u: goto label_39d550;
        case 0x39d554u: goto label_39d554;
        case 0x39d558u: goto label_39d558;
        case 0x39d55cu: goto label_39d55c;
        case 0x39d560u: goto label_39d560;
        case 0x39d564u: goto label_39d564;
        case 0x39d568u: goto label_39d568;
        case 0x39d56cu: goto label_39d56c;
        case 0x39d570u: goto label_39d570;
        case 0x39d574u: goto label_39d574;
        case 0x39d578u: goto label_39d578;
        case 0x39d57cu: goto label_39d57c;
        case 0x39d580u: goto label_39d580;
        case 0x39d584u: goto label_39d584;
        case 0x39d588u: goto label_39d588;
        case 0x39d58cu: goto label_39d58c;
        case 0x39d590u: goto label_39d590;
        case 0x39d594u: goto label_39d594;
        case 0x39d598u: goto label_39d598;
        case 0x39d59cu: goto label_39d59c;
        case 0x39d5a0u: goto label_39d5a0;
        case 0x39d5a4u: goto label_39d5a4;
        case 0x39d5a8u: goto label_39d5a8;
        case 0x39d5acu: goto label_39d5ac;
        case 0x39d5b0u: goto label_39d5b0;
        case 0x39d5b4u: goto label_39d5b4;
        default: break;
    }

    ctx->pc = 0x39d398u;

label_39d398:
    // 0x39d398: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39d398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_39d39c:
    // 0x39d39c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_39d3a0:
    // 0x39d3a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x39d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_39d3a4:
    // 0x39d3a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_39d3a8:
    // 0x39d3a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x39d3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_39d3ac:
    // 0x39d3ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x39d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_39d3b0:
    // 0x39d3b0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x39d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_39d3b4:
    // 0x39d3b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39d3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d3b8:
    // 0x39d3b8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x39d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_39d3bc:
    // 0x39d3bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x39d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_39d3c0:
    // 0x39d3c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x39d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_39d3c4:
    // 0x39d3c4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x39d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_39d3c8:
    // 0x39d3c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_39d3cc:
    // 0x39d3cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_39d3d0:
    // 0x39d3d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_39d3d4:
    // 0x39d3d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39d3d8:
    // 0x39d3d8: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x39d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_39d3dc:
    // 0x39d3dc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_39d3e0:
    if (ctx->pc == 0x39D3E0u) {
        ctx->pc = 0x39D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3DCu;
        // 0x39d3e0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3E4u;
        goto label_39d3e4;
    }
    ctx->pc = 0x39D3DCu;
    {
        const bool branch_taken_0x39d3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3DCu;
        // 0x39d3e0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3dc) {
            ctx->pc = 0x39D47Cu;
            goto label_39d47c;
        }
    }
    ctx->pc = 0x39D3E4u;
label_39d3e4:
    // 0x39d3e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x39d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_39d3e8:
    // 0x39d3e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39d3ec:
    // 0x39d3ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d3f0:
    // 0x39d3f0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_39d3f4:
    if (ctx->pc == 0x39D3F4u) {
        ctx->pc = 0x39D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3F0u;
        // 0x39d3f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3F8u;
        goto label_39d3f8;
    }
    ctx->pc = 0x39D3F0u;
    {
        const bool branch_taken_0x39d3f0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x39D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3F0u;
        // 0x39d3f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3f0) {
            ctx->pc = 0x39D48Cu;
            goto label_39d48c;
        }
    }
    ctx->pc = 0x39D3F8u;
label_39d3f8:
    // 0x39d3f8: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x39d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_39d3fc:
    // 0x39d3fc: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x39d3fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_39d400:
    // 0x39d400: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_39d404:
    // 0x39d404: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x39d404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_39d408:
    // 0x39d408: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x39d408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_39d40c:
    // 0x39d40c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x39d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39d410:
    // 0x39d410: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x39d410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_39d414:
    // 0x39d414: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x39d414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39d418:
    // 0x39d418: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x39d418u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_39d41c:
    // 0x39d41c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x39d41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_39d420:
    // 0x39d420: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x39d420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_39d424:
    // 0x39d424: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39d424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_39d428:
    // 0x39d428: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x39d428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_39d42c:
    // 0x39d42c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x39d42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_39d430:
    // 0x39d430: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x39d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_39d434:
    // 0x39d434: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x39d434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_39d438:
    // 0x39d438: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x39d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_39d43c:
    // 0x39d43c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d440:
    // 0x39d440: 0x60f809  jalr        $v1
label_39d444:
    if (ctx->pc == 0x39D444u) {
        ctx->pc = 0x39D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D440u;
        // 0x39d444: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D448u;
        goto label_39d448;
    }
    ctx->pc = 0x39D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D448u);
        ctx->pc = 0x39D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D440u;
        // 0x39d444: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D440u, 0x39D448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D448u;
label_39d448:
    // 0x39d448: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x39d448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_39d44c:
    // 0x39d44c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x39d44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_39d450:
    // 0x39d450: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d454:
    // 0x39d454: 0x40f809  jalr        $v0
label_39d458:
    if (ctx->pc == 0x39D458u) {
        ctx->pc = 0x39D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D454u;
        // 0x39d458: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D45Cu;
        goto label_39d45c;
    }
    ctx->pc = 0x39D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D45Cu);
        ctx->pc = 0x39D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D454u;
        // 0x39d458: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D454u, 0x39D45Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D45Cu;
label_39d45c:
    // 0x39d45c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39d460:
    // 0x39d460: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x39d460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_39d464:
    // 0x39d464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d468:
    // 0x39d468: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x39d468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39d46c:
    // 0x39d46c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_39d470:
    if (ctx->pc == 0x39D470u) {
        ctx->pc = 0x39D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D46Cu;
        // 0x39d470: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D474u;
        goto label_39d474;
    }
    ctx->pc = 0x39D46Cu;
    {
        const bool branch_taken_0x39d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D46Cu;
        // 0x39d470: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d46c) {
            ctx->pc = 0x39D410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d410;
        }
    }
    ctx->pc = 0x39D474u;
label_39d474:
    // 0x39d474: 0x10000009  b           . + 4 + (0x9 << 2)
label_39d478:
    if (ctx->pc == 0x39D478u) {
        ctx->pc = 0x39D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D474u;
        // 0x39d478: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D47Cu;
        goto label_39d47c;
    }
    ctx->pc = 0x39D474u;
    {
        const bool branch_taken_0x39d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D474u;
        // 0x39d478: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d474) {
            ctx->pc = 0x39D49Cu;
            goto label_39d49c;
        }
    }
    ctx->pc = 0x39D47Cu;
label_39d47c:
    // 0x39d47c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x39d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_39d480:
    // 0x39d480: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x39d480u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_39d484:
    // 0x39d484: 0x10000004  b           . + 4 + (0x4 << 2)
label_39d488:
    if (ctx->pc == 0x39D488u) {
        ctx->pc = 0x39D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D484u;
        // 0x39d488: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D48Cu;
        goto label_39d48c;
    }
    ctx->pc = 0x39D484u;
    {
        const bool branch_taken_0x39d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D484u;
        // 0x39d488: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d484) {
            ctx->pc = 0x39D498u;
            goto label_39d498;
        }
    }
    ctx->pc = 0x39D48Cu;
label_39d48c:
    // 0x39d48c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x39d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_39d490:
    // 0x39d490: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x39d490u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_39d494:
    // 0x39d494: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39d494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_39d498:
    // 0x39d498: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39d49c:
    // 0x39d49c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_39d4a0:
    // 0x39d4a0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x39d4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39d4a4:
    // 0x39d4a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39d4a8:
    // 0x39d4a8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x39d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39d4ac:
    // 0x39d4ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39d4b0:
    // 0x39d4b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_39d4b4:
    if (ctx->pc == 0x39D4B4u) {
        ctx->pc = 0x39D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4B0u;
        // 0x39d4b4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4B8u;
        goto label_39d4b8;
    }
    ctx->pc = 0x39D4B0u;
    {
        const bool branch_taken_0x39d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4B0u;
        // 0x39d4b4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4b0) {
            ctx->pc = 0x39D4D0u;
            goto label_39d4d0;
        }
    }
    ctx->pc = 0x39D4B8u;
label_39d4b8:
    // 0x39d4b8: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x39d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_39d4bc:
    // 0x39d4bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_39d4c0:
    if (ctx->pc == 0x39D4C0u) {
        ctx->pc = 0x39D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4BCu;
        // 0x39d4c0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4C4u;
        goto label_39d4c4;
    }
    ctx->pc = 0x39D4BCu;
    {
        const bool branch_taken_0x39d4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4BCu;
        // 0x39d4c0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4bc) {
            ctx->pc = 0x39D4D0u;
            goto label_39d4d0;
        }
    }
    ctx->pc = 0x39D4C4u;
label_39d4c4:
    // 0x39d4c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d4c8:
    // 0x39d4c8: 0xc0e70e4  jal         func_39C390
label_39d4cc:
    if (ctx->pc == 0x39D4CCu) {
        ctx->pc = 0x39D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4C8u;
        // 0x39d4cc: 0x24a5e6c8  addiu       $a1, $a1, -0x1938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4D0u;
        goto label_39d4d0;
    }
    ctx->pc = 0x39D4C8u;
    SET_GPR_U32(ctx, 31, 0x39D4D0u);
    ctx->pc = 0x39D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D4C8u;
    // 0x39d4cc: 0x24a5e6c8  addiu       $a1, $a1, -0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39D4C8u, 0x39D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D4D0u;
label_39d4d0:
    // 0x39d4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39d4d4:
    // 0x39d4d4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_39d4d8:
    // 0x39d4d8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x39d4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_39d4dc:
    // 0x39d4dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39d4e0:
    // 0x39d4e0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x39d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39d4e4:
    // 0x39d4e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39d4e8:
    // 0x39d4e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_39d4ec:
    if (ctx->pc == 0x39D4ECu) {
        ctx->pc = 0x39D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E8u;
        // 0x39d4ec: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4F0u;
        goto label_39d4f0;
    }
    ctx->pc = 0x39D4E8u;
    {
        const bool branch_taken_0x39d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E8u;
        // 0x39d4ec: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4e8) {
            ctx->pc = 0x39D530u;
            goto label_39d530;
        }
    }
    ctx->pc = 0x39D4F0u;
label_39d4f0:
    // 0x39d4f0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x39d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_39d4f4:
    // 0x39d4f4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x39d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_39d4f8:
    // 0x39d4f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d4fc:
    // 0x39d4fc: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x39d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_39d500:
    // 0x39d500: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39d500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39d504:
    // 0x39d504: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39d504u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39d508:
    // 0x39d508: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39d508u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_39d50c:
    // 0x39d50c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39d50cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d510:
    // 0x39d510: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39d510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39d514:
    // 0x39d514: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39d514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d518:
    // 0x39d518: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39d518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d51c:
    // 0x39d51c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39d51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39d520:
    // 0x39d520: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39d520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39d524:
    // 0x39d524: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39d524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d528:
    // 0x39d528: 0x80e7baa  j           func_39EEA8
label_39d52c:
    if (ctx->pc == 0x39D52Cu) {
        ctx->pc = 0x39D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D528u;
        // 0x39d52c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D530u;
        goto label_39d530;
    }
    ctx->pc = 0x39D528u;
    ctx->pc = 0x39D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D528u;
    // 0x39d52c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EEA8u, 0x39D528u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39D530u;
label_39d530:
    // 0x39d530: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x39d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_39d534:
    // 0x39d534: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_39d538:
    if (ctx->pc == 0x39D538u) {
        ctx->pc = 0x39D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D534u;
        // 0x39d538: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D53Cu;
        goto label_39d53c;
    }
    ctx->pc = 0x39D534u;
    {
        const bool branch_taken_0x39d534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D534u;
        // 0x39d538: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d534) {
            ctx->pc = 0x39D574u;
            goto label_39d574;
        }
    }
    ctx->pc = 0x39D53Cu;
label_39d53c:
    // 0x39d53c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39d53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39d540:
    // 0x39d540: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x39d540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_39d544:
    // 0x39d544: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39d544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d548:
    // 0x39d548: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39d548u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39d54c:
    // 0x39d54c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39d54cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_39d550:
    // 0x39d550: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39d550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d554:
    // 0x39d554: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39d554u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39d558:
    // 0x39d558: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39d558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d55c:
    // 0x39d55c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39d55cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d560:
    // 0x39d560: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39d560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39d564:
    // 0x39d564: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39d564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39d568:
    // 0x39d568: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39d568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d56c:
    // 0x39d56c: 0x80e7baa  j           func_39EEA8
label_39d570:
    if (ctx->pc == 0x39D570u) {
        ctx->pc = 0x39D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D56Cu;
        // 0x39d570: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D574u;
        goto label_39d574;
    }
    ctx->pc = 0x39D56Cu;
    ctx->pc = 0x39D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D56Cu;
    // 0x39d570: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EEA8u, 0x39D56Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39D574u;
label_39d574:
    // 0x39d574: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x39d574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_39d578:
    // 0x39d578: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x39d578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_39d57c:
    // 0x39d57c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d580:
    // 0x39d580: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x39d580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_39d584:
    // 0x39d584: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39d584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39d588:
    // 0x39d588: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39d588u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39d58c:
    // 0x39d58c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39d58cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_39d590:
    // 0x39d590: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39d590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d594:
    // 0x39d594: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39d594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39d598:
    // 0x39d598: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39d598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d59c:
    // 0x39d59c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39d59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d5a0:
    // 0x39d5a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39d5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39d5a4:
    // 0x39d5a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39d5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39d5a8:
    // 0x39d5a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39d5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d5ac:
    // 0x39d5ac: 0x80e7b6e  j           func_39EDB8
label_39d5b0:
    if (ctx->pc == 0x39D5B0u) {
        ctx->pc = 0x39D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5ACu;
        // 0x39d5b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5B4u;
        goto label_39d5b4;
    }
    ctx->pc = 0x39D5ACu;
    ctx->pc = 0x39D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D5ACu;
    // 0x39d5b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EDB8u, 0x39D5ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39D5B4u;
label_39d5b4:
    // 0x39d5b4: 0x0  nop
    ctx->pc = 0x39d5b4u;
    // NOP
    ctx->pc = 0x39d5b8u;
}
