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

// Function: func_0031D3D0
// Address: 0x31d3d0 - 0x31d658
void func_0031D3D0_0x31d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D3D0_0x31d3d0");
#endif

    switch (ctx->pc) {
        case 0x31d3d0u: goto label_31d3d0;
        case 0x31d3d4u: goto label_31d3d4;
        case 0x31d3d8u: goto label_31d3d8;
        case 0x31d3dcu: goto label_31d3dc;
        case 0x31d3e0u: goto label_31d3e0;
        case 0x31d3e4u: goto label_31d3e4;
        case 0x31d3e8u: goto label_31d3e8;
        case 0x31d3ecu: goto label_31d3ec;
        case 0x31d3f0u: goto label_31d3f0;
        case 0x31d3f4u: goto label_31d3f4;
        case 0x31d3f8u: goto label_31d3f8;
        case 0x31d3fcu: goto label_31d3fc;
        case 0x31d400u: goto label_31d400;
        case 0x31d404u: goto label_31d404;
        case 0x31d408u: goto label_31d408;
        case 0x31d40cu: goto label_31d40c;
        case 0x31d410u: goto label_31d410;
        case 0x31d414u: goto label_31d414;
        case 0x31d418u: goto label_31d418;
        case 0x31d41cu: goto label_31d41c;
        case 0x31d420u: goto label_31d420;
        case 0x31d424u: goto label_31d424;
        case 0x31d428u: goto label_31d428;
        case 0x31d42cu: goto label_31d42c;
        case 0x31d430u: goto label_31d430;
        case 0x31d434u: goto label_31d434;
        case 0x31d438u: goto label_31d438;
        case 0x31d43cu: goto label_31d43c;
        case 0x31d440u: goto label_31d440;
        case 0x31d444u: goto label_31d444;
        case 0x31d448u: goto label_31d448;
        case 0x31d44cu: goto label_31d44c;
        case 0x31d450u: goto label_31d450;
        case 0x31d454u: goto label_31d454;
        case 0x31d458u: goto label_31d458;
        case 0x31d45cu: goto label_31d45c;
        case 0x31d460u: goto label_31d460;
        case 0x31d464u: goto label_31d464;
        case 0x31d468u: goto label_31d468;
        case 0x31d46cu: goto label_31d46c;
        case 0x31d470u: goto label_31d470;
        case 0x31d474u: goto label_31d474;
        case 0x31d478u: goto label_31d478;
        case 0x31d47cu: goto label_31d47c;
        case 0x31d480u: goto label_31d480;
        case 0x31d484u: goto label_31d484;
        case 0x31d488u: goto label_31d488;
        case 0x31d48cu: goto label_31d48c;
        case 0x31d490u: goto label_31d490;
        case 0x31d494u: goto label_31d494;
        case 0x31d498u: goto label_31d498;
        case 0x31d49cu: goto label_31d49c;
        case 0x31d4a0u: goto label_31d4a0;
        case 0x31d4a4u: goto label_31d4a4;
        case 0x31d4a8u: goto label_31d4a8;
        case 0x31d4acu: goto label_31d4ac;
        case 0x31d4b0u: goto label_31d4b0;
        case 0x31d4b4u: goto label_31d4b4;
        case 0x31d4b8u: goto label_31d4b8;
        case 0x31d4bcu: goto label_31d4bc;
        case 0x31d4c0u: goto label_31d4c0;
        case 0x31d4c4u: goto label_31d4c4;
        case 0x31d4c8u: goto label_31d4c8;
        case 0x31d4ccu: goto label_31d4cc;
        case 0x31d4d0u: goto label_31d4d0;
        case 0x31d4d4u: goto label_31d4d4;
        case 0x31d4d8u: goto label_31d4d8;
        case 0x31d4dcu: goto label_31d4dc;
        case 0x31d4e0u: goto label_31d4e0;
        case 0x31d4e4u: goto label_31d4e4;
        case 0x31d4e8u: goto label_31d4e8;
        case 0x31d4ecu: goto label_31d4ec;
        case 0x31d4f0u: goto label_31d4f0;
        case 0x31d4f4u: goto label_31d4f4;
        case 0x31d4f8u: goto label_31d4f8;
        case 0x31d4fcu: goto label_31d4fc;
        case 0x31d500u: goto label_31d500;
        case 0x31d504u: goto label_31d504;
        case 0x31d508u: goto label_31d508;
        case 0x31d50cu: goto label_31d50c;
        case 0x31d510u: goto label_31d510;
        case 0x31d514u: goto label_31d514;
        case 0x31d518u: goto label_31d518;
        case 0x31d51cu: goto label_31d51c;
        case 0x31d520u: goto label_31d520;
        case 0x31d524u: goto label_31d524;
        case 0x31d528u: goto label_31d528;
        case 0x31d52cu: goto label_31d52c;
        case 0x31d530u: goto label_31d530;
        case 0x31d534u: goto label_31d534;
        case 0x31d538u: goto label_31d538;
        case 0x31d53cu: goto label_31d53c;
        case 0x31d540u: goto label_31d540;
        case 0x31d544u: goto label_31d544;
        case 0x31d548u: goto label_31d548;
        case 0x31d54cu: goto label_31d54c;
        case 0x31d550u: goto label_31d550;
        case 0x31d554u: goto label_31d554;
        case 0x31d558u: goto label_31d558;
        case 0x31d55cu: goto label_31d55c;
        case 0x31d560u: goto label_31d560;
        case 0x31d564u: goto label_31d564;
        case 0x31d568u: goto label_31d568;
        case 0x31d56cu: goto label_31d56c;
        case 0x31d570u: goto label_31d570;
        case 0x31d574u: goto label_31d574;
        case 0x31d578u: goto label_31d578;
        case 0x31d57cu: goto label_31d57c;
        case 0x31d580u: goto label_31d580;
        case 0x31d584u: goto label_31d584;
        case 0x31d588u: goto label_31d588;
        case 0x31d58cu: goto label_31d58c;
        case 0x31d590u: goto label_31d590;
        case 0x31d594u: goto label_31d594;
        case 0x31d598u: goto label_31d598;
        case 0x31d59cu: goto label_31d59c;
        case 0x31d5a0u: goto label_31d5a0;
        case 0x31d5a4u: goto label_31d5a4;
        case 0x31d5a8u: goto label_31d5a8;
        case 0x31d5acu: goto label_31d5ac;
        case 0x31d5b0u: goto label_31d5b0;
        case 0x31d5b4u: goto label_31d5b4;
        case 0x31d5b8u: goto label_31d5b8;
        case 0x31d5bcu: goto label_31d5bc;
        case 0x31d5c0u: goto label_31d5c0;
        case 0x31d5c4u: goto label_31d5c4;
        case 0x31d5c8u: goto label_31d5c8;
        case 0x31d5ccu: goto label_31d5cc;
        case 0x31d5d0u: goto label_31d5d0;
        case 0x31d5d4u: goto label_31d5d4;
        case 0x31d5d8u: goto label_31d5d8;
        case 0x31d5dcu: goto label_31d5dc;
        case 0x31d5e0u: goto label_31d5e0;
        case 0x31d5e4u: goto label_31d5e4;
        case 0x31d5e8u: goto label_31d5e8;
        case 0x31d5ecu: goto label_31d5ec;
        case 0x31d5f0u: goto label_31d5f0;
        case 0x31d5f4u: goto label_31d5f4;
        case 0x31d5f8u: goto label_31d5f8;
        case 0x31d5fcu: goto label_31d5fc;
        case 0x31d600u: goto label_31d600;
        case 0x31d604u: goto label_31d604;
        case 0x31d608u: goto label_31d608;
        case 0x31d60cu: goto label_31d60c;
        case 0x31d610u: goto label_31d610;
        case 0x31d614u: goto label_31d614;
        case 0x31d618u: goto label_31d618;
        case 0x31d61cu: goto label_31d61c;
        case 0x31d620u: goto label_31d620;
        case 0x31d624u: goto label_31d624;
        case 0x31d628u: goto label_31d628;
        case 0x31d62cu: goto label_31d62c;
        case 0x31d630u: goto label_31d630;
        case 0x31d634u: goto label_31d634;
        case 0x31d638u: goto label_31d638;
        case 0x31d63cu: goto label_31d63c;
        case 0x31d640u: goto label_31d640;
        case 0x31d644u: goto label_31d644;
        case 0x31d648u: goto label_31d648;
        case 0x31d64cu: goto label_31d64c;
        case 0x31d650u: goto label_31d650;
        case 0x31d654u: goto label_31d654;
        default: break;
    }

    ctx->pc = 0x31d3d0u;

label_31d3d0:
    // 0x31d3d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_31d3d4:
    // 0x31d3d4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x31d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_31d3d8:
    // 0x31d3d8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x31d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_31d3dc:
    // 0x31d3dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d3e0:
    // 0x31d3e0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x31d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_31d3e4:
    // 0x31d3e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31d3e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d3e8:
    // 0x31d3e8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x31d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_31d3ec:
    // 0x31d3ec: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x31d3ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_31d3f0:
    // 0x31d3f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x31d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_31d3f4:
    // 0x31d3f4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x31d3f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31d3f8:
    // 0x31d3f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x31d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_31d3fc:
    // 0x31d3fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31d3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d400:
    // 0x31d400: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x31d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_31d404:
    // 0x31d404: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_31d408:
    // 0x31d408: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31d40c:
    // 0x31d40c: 0xc0c3ea6  jal         func_30FA98
label_31d410:
    if (ctx->pc == 0x31D410u) {
        ctx->pc = 0x31D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D40Cu;
        // 0x31d410: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D414u;
        goto label_31d414;
    }
    ctx->pc = 0x31D40Cu;
    SET_GPR_U32(ctx, 31, 0x31D414u);
    ctx->pc = 0x31D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D40Cu;
    // 0x31d410: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x31D40Cu, 0x31D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D414u;
label_31d414:
    // 0x31d414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31d414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d418:
    // 0x31d418: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_31d41c:
    if (ctx->pc == 0x31D41Cu) {
        ctx->pc = 0x31D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D418u;
        // 0x31d41c: 0x8c620214  lw          $v0, 0x214($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D420u;
        goto label_31d420;
    }
    ctx->pc = 0x31D418u;
    {
        const bool branch_taken_0x31d418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d418) {
            ctx->pc = 0x31D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D418u;
            // 0x31d41c: 0x8c620214  lw          $v0, 0x214($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D428u;
            goto label_31d428;
        }
    }
    ctx->pc = 0x31D420u;
label_31d420:
    // 0x31d420: 0x1000000c  b           . + 4 + (0xC << 2)
label_31d424:
    if (ctx->pc == 0x31D424u) {
        ctx->pc = 0x31D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D420u;
        // 0x31d424: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D428u;
        goto label_31d428;
    }
    ctx->pc = 0x31D420u;
    {
        const bool branch_taken_0x31d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D420u;
        // 0x31d424: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d420) {
            ctx->pc = 0x31D454u;
            goto label_31d454;
        }
    }
    ctx->pc = 0x31D428u;
label_31d428:
    // 0x31d428: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31d428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31d42c:
    // 0x31d42c: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x31d42cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
label_31d430:
    // 0x31d430: 0x24a59fc8  addiu       $a1, $a1, -0x6038
    ctx->pc = 0x31d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942664));
label_31d434:
    // 0x31d434: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31d434u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31d438:
    // 0x31d438: 0x2508e8d8  addiu       $t0, $t0, -0x1728
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961368));
label_31d43c:
    // 0x31d43c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31d440:
    // 0x31d440: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x31d440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31d444:
    // 0x31d444: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x31d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_31d448:
    // 0x31d448: 0xc0c7eba  jal         func_31FAE8
label_31d44c:
    if (ctx->pc == 0x31D44Cu) {
        ctx->pc = 0x31D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D448u;
        // 0x31d44c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D450u;
        goto label_31d450;
    }
    ctx->pc = 0x31D448u;
    SET_GPR_U32(ctx, 31, 0x31D450u);
    ctx->pc = 0x31D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D448u;
    // 0x31d44c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31D448u, 0x31D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D450u;
label_31d450:
    // 0x31d450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31d450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d454:
    // 0x31d454: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x31d454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_31d458:
    // 0x31d458: 0x3c100200  lui         $s0, 0x200
    ctx->pc = 0x31d458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)512 << 16));
label_31d45c:
    // 0x31d45c: 0x11800a  movz        $s0, $zero, $s1
    ctx->pc = 0x31d45cu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_31d460:
    // 0x31d460: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x31d460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_31d464:
    // 0x31d464: 0xc0524c4  jal         func_149310
label_31d468:
    if (ctx->pc == 0x31D468u) {
        ctx->pc = 0x31D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D464u;
        // 0x31d468: 0x92760043  lbu         $s6, 0x43($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D46Cu;
        goto label_31d46c;
    }
    ctx->pc = 0x31D464u;
    SET_GPR_U32(ctx, 31, 0x31D46Cu);
    ctx->pc = 0x31D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D464u;
    // 0x31d468: 0x92760043  lbu         $s6, 0x43($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 67)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149310u, 0x31D464u, 0x31D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D46Cu;
label_31d46c:
    // 0x31d46c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x31d46cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31d470:
    // 0x31d470: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_31d474:
    // 0x31d474: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x31d474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_31d478:
    // 0x31d478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31d478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d47c:
    // 0x31d47c: 0xc07e290  jal         func_1F8A40
label_31d480:
    if (ctx->pc == 0x31D480u) {
        ctx->pc = 0x31D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D47Cu;
        // 0x31d480: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D484u;
        goto label_31d484;
    }
    ctx->pc = 0x31D47Cu;
    SET_GPR_U32(ctx, 31, 0x31D484u);
    ctx->pc = 0x31D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D47Cu;
    // 0x31d480: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A40u, 0x31D47Cu, 0x31D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D484u;
label_31d484:
    // 0x31d484: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31d484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d488:
    // 0x31d488: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x31d488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d48c:
    // 0x31d48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d490:
    // 0x31d490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31d490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31d494:
    // 0x31d494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31d494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d498:
    // 0x31d498: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d49c:
    // 0x31d49c: 0xc052108  jal         func_148420
label_31d4a0:
    if (ctx->pc == 0x31D4A0u) {
        ctx->pc = 0x31D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D49Cu;
        // 0x31d4a0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4A4u;
        goto label_31d4a4;
    }
    ctx->pc = 0x31D49Cu;
    SET_GPR_U32(ctx, 31, 0x31D4A4u);
    ctx->pc = 0x31D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D49Cu;
    // 0x31d4a0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148420u, 0x31D49Cu, 0x31D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4A4u;
label_31d4a4:
    // 0x31d4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d4a8:
    // 0x31d4a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31d4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d4ac:
    // 0x31d4ac: 0xc052d90  jal         func_14B640
label_31d4b0:
    if (ctx->pc == 0x31D4B0u) {
        ctx->pc = 0x31D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4ACu;
        // 0x31d4b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4B4u;
        goto label_31d4b4;
    }
    ctx->pc = 0x31D4ACu;
    SET_GPR_U32(ctx, 31, 0x31D4B4u);
    ctx->pc = 0x31D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4ACu;
    // 0x31d4b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B640u, 0x31D4ACu, 0x31D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4B4u;
label_31d4b4:
    // 0x31d4b4: 0xae330414  sw          $s3, 0x414($s1)
    ctx->pc = 0x31d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 19));
label_31d4b8:
    // 0x31d4b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x31d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_31d4bc:
    // 0x31d4bc: 0xae530320  sw          $s3, 0x320($s2)
    ctx->pc = 0x31d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 19));
label_31d4c0:
    // 0x31d4c0: 0x8c627a9c  lw          $v0, 0x7A9C($v1)
    ctx->pc = 0x31d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31388)));
label_31d4c4:
    // 0x31d4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31d4c8:
    if (ctx->pc == 0x31D4C8u) {
        ctx->pc = 0x31D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4C4u;
        // 0x31d4c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4CCu;
        goto label_31d4cc;
    }
    ctx->pc = 0x31D4C4u;
    {
        const bool branch_taken_0x31d4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4C4u;
        // 0x31d4c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4c4) {
            ctx->pc = 0x31D4DCu;
            goto label_31d4dc;
        }
    }
    ctx->pc = 0x31D4CCu;
label_31d4cc:
    // 0x31d4cc: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x31d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_31d4d0:
    // 0x31d4d0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x31d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_31d4d4:
    // 0x31d4d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31d4d8:
    // 0x31d4d8: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x31d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
label_31d4dc:
    // 0x31d4dc: 0x8e420320  lw          $v0, 0x320($s2)
    ctx->pc = 0x31d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_31d4e0:
    // 0x31d4e0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_31d4e4:
    // 0x31d4e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x31d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_31d4e8:
    // 0x31d4e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31d4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_31d4ec:
    // 0x31d4ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d4f0:
    if (ctx->pc == 0x31D4F0u) {
        ctx->pc = 0x31D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4ECu;
        // 0x31d4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4F4u;
        goto label_31d4f4;
    }
    ctx->pc = 0x31D4ECu;
    {
        const bool branch_taken_0x31d4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4ECu;
        // 0x31d4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4ec) {
            ctx->pc = 0x31D4FCu;
            goto label_31d4fc;
        }
    }
    ctx->pc = 0x31D4F4u;
label_31d4f4:
    // 0x31d4f4: 0xc0c74ae  jal         func_31D2B8
label_31d4f8:
    if (ctx->pc == 0x31D4F8u) {
        ctx->pc = 0x31D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4F4u;
        // 0x31d4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4FCu;
        goto label_31d4fc;
    }
    ctx->pc = 0x31D4F4u;
    SET_GPR_U32(ctx, 31, 0x31D4FCu);
    ctx->pc = 0x31D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4F4u;
    // 0x31d4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D2B8u, 0x31D4F4u, 0x31D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4FCu;
label_31d4fc:
    // 0x31d4fc: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x31d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_31d500:
    // 0x31d500: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31d500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31d504:
    // 0x31d504: 0xae5702f8  sw          $s7, 0x2F8($s2)
    ctx->pc = 0x31d504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 23));
label_31d508:
    // 0x31d508: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x31d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_31d50c:
    // 0x31d50c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x31d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_31d510:
    // 0x31d510: 0xa25602fd  sb          $s6, 0x2FD($s2)
    ctx->pc = 0x31d510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 765), (uint8_t)GPR_U32(ctx, 22));
label_31d514:
    // 0x31d514: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x31d514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_31d518:
    // 0x31d518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31d51c:
    // 0x31d51c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31d51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31d520:
    // 0x31d520: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x31d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d524:
    // 0x31d524: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x31d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d528:
    // 0x31d528: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x31d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d52c:
    // 0x31d52c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31d52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31d530:
    // 0x31d530: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31d530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31d534:
    // 0x31d534: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x31d534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31d538:
    // 0x31d538: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
label_31d53c:
    if (ctx->pc == 0x31D53Cu) {
        ctx->pc = 0x31D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D538u;
        // 0x31d53c: 0xe4a3000c  swc1        $f3, 0xC($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D540u;
        goto label_31d540;
    }
    ctx->pc = 0x31D538u;
    {
        const bool branch_taken_0x31d538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x31D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D538u;
        // 0x31d53c: 0xe4a3000c  swc1        $f3, 0xC($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d538) {
            ctx->pc = 0x31D558u;
            goto label_31d558;
        }
    }
    ctx->pc = 0x31D540u;
label_31d540:
    // 0x31d540: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d544:
    // 0x31d544: 0xe6400110  swc1        $f0, 0x110($s2)
    ctx->pc = 0x31d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
label_31d548:
    // 0x31d548: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31d548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d54c:
    // 0x31d54c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x31d54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31d550:
    // 0x31d550: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d554:
    // 0x31d554: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x31d554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_31d558:
    // 0x31d558: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x31d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d55c:
    // 0x31d55c: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x31d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_31d560:
    // 0x31d560: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x31d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d564:
    // 0x31d564: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x31d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d568:
    // 0x31d568: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31d56c:
    // 0x31d56c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31d56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31d570:
    // 0x31d570: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x31d570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31d574:
    // 0x31d574: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_31d578:
    if (ctx->pc == 0x31D578u) {
        ctx->pc = 0x31D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D574u;
        // 0x31d578: 0xe4a3000c  swc1        $f3, 0xC($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D57Cu;
        goto label_31d57c;
    }
    ctx->pc = 0x31D574u;
    {
        const bool branch_taken_0x31d574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x31D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D574u;
        // 0x31d578: 0xe4a3000c  swc1        $f3, 0xC($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d574) {
            ctx->pc = 0x31D594u;
            goto label_31d594;
        }
    }
    ctx->pc = 0x31D57Cu;
label_31d57c:
    // 0x31d57c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d580:
    // 0x31d580: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x31d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
label_31d584:
    // 0x31d584: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d588:
    // 0x31d588: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x31d588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_31d58c:
    // 0x31d58c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d590:
    // 0x31d590: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_31d594:
    // 0x31d594: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x31d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d598:
    // 0x31d598: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x31d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d59c:
    // 0x31d59c: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x31d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d5a0:
    // 0x31d5a0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x31d5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31d5a4:
    // 0x31d5a4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x31d5a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31d5a8:
    // 0x31d5a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31d5ac:
    // 0x31d5ac: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x31d5acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_31d5b0:
    // 0x31d5b0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x31d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_31d5b4:
    // 0x31d5b4: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_31d5b8:
    if (ctx->pc == 0x31D5B8u) {
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B4u;
        // 0x31d5b8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5BCu;
        goto label_31d5bc;
    }
    ctx->pc = 0x31D5B4u;
    {
        const bool branch_taken_0x31d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B4u;
        // 0x31d5b8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5b4) {
            ctx->pc = 0x31D5D0u;
            goto label_31d5d0;
        }
    }
    ctx->pc = 0x31D5BCu;
label_31d5bc:
    // 0x31d5bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x31d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_31d5c0:
    // 0x31d5c0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d5c4:
    // 0x31d5c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x31d5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_31d5c8:
    // 0x31d5c8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d5cc:
    // 0x31d5cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x31d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_31d5d0:
    // 0x31d5d0: 0xc07df68  jal         func_1F7DA0
label_31d5d4:
    if (ctx->pc == 0x31D5D4u) {
        ctx->pc = 0x31D5D8u;
        goto label_31d5d8;
    }
    ctx->pc = 0x31D5D0u;
    SET_GPR_U32(ctx, 31, 0x31D5D8u);
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x31D5D0u, 0x31D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5D8u;
label_31d5d8:
    // 0x31d5d8: 0xc0530ca  jal         func_14C328
label_31d5dc:
    if (ctx->pc == 0x31D5DCu) {
        ctx->pc = 0x31D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5D8u;
        // 0x31d5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5E0u;
        goto label_31d5e0;
    }
    ctx->pc = 0x31D5D8u;
    SET_GPR_U32(ctx, 31, 0x31D5E0u);
    ctx->pc = 0x31D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5D8u;
    // 0x31d5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C328u, 0x31D5D8u, 0x31D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5E0u;
label_31d5e0:
    // 0x31d5e0: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x31d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_31d5e4:
    // 0x31d5e4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x31d5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_31d5e8:
    // 0x31d5e8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x31d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_31d5ec:
    // 0x31d5ec: 0x40f809  jalr        $v0
label_31d5f0:
    if (ctx->pc == 0x31D5F0u) {
        ctx->pc = 0x31D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5ECu;
        // 0x31d5f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5F4u;
        goto label_31d5f4;
    }
    ctx->pc = 0x31D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D5F4u);
        ctx->pc = 0x31D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5ECu;
        // 0x31d5f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D5ECu, 0x31D5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D5F4u;
label_31d5f4:
    // 0x31d5f4: 0xc0527ae  jal         func_149EB8
label_31d5f8:
    if (ctx->pc == 0x31D5F8u) {
        ctx->pc = 0x31D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5F4u;
        // 0x31d5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5FCu;
        goto label_31d5fc;
    }
    ctx->pc = 0x31D5F4u;
    SET_GPR_U32(ctx, 31, 0x31D5FCu);
    ctx->pc = 0x31D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5F4u;
    // 0x31d5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x31D5F4u, 0x31D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5FCu;
label_31d5fc:
    // 0x31d5fc: 0x8e420350  lw          $v0, 0x350($s2)
    ctx->pc = 0x31d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_31d600:
    // 0x31d600: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31d600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_31d604:
    // 0x31d604: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31d608:
    // 0x31d608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_31d60c:
    if (ctx->pc == 0x31D60Cu) {
        ctx->pc = 0x31D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D608u;
        // 0x31d60c: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D610u;
        goto label_31d610;
    }
    ctx->pc = 0x31D608u;
    {
        const bool branch_taken_0x31d608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D608u;
        // 0x31d60c: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d608) {
            ctx->pc = 0x31D61Cu;
            goto label_31d61c;
        }
    }
    ctx->pc = 0x31D610u;
label_31d610:
    // 0x31d610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d614:
    // 0x31d614: 0xc0c4a74  jal         func_3129D0
label_31d618:
    if (ctx->pc == 0x31D618u) {
        ctx->pc = 0x31D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D614u;
        // 0x31d618: 0x24844c50  addiu       $a0, $a0, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D61Cu;
        goto label_31d61c;
    }
    ctx->pc = 0x31D614u;
    SET_GPR_U32(ctx, 31, 0x31D61Cu);
    ctx->pc = 0x31D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D614u;
    // 0x31d618: 0x24844c50  addiu       $a0, $a0, 0x4C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3129D0u, 0x31D614u, 0x31D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D61Cu;
label_31d61c:
    // 0x31d61c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31d620:
    // 0x31d620: 0xc07e298  jal         func_1F8A60
label_31d624:
    if (ctx->pc == 0x31D624u) {
        ctx->pc = 0x31D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D620u;
        // 0x31d624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D628u;
        goto label_31d628;
    }
    ctx->pc = 0x31D620u;
    SET_GPR_U32(ctx, 31, 0x31D628u);
    ctx->pc = 0x31D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D620u;
    // 0x31d624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A60u, 0x31D620u, 0x31D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D628u;
label_31d628:
    // 0x31d628: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x31d628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31d62c:
    // 0x31d62c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x31d62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31d630:
    // 0x31d630: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x31d630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31d634:
    // 0x31d634: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x31d634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31d638:
    // 0x31d638: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x31d638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31d63c:
    // 0x31d63c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x31d63cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31d640:
    // 0x31d640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31d640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d644:
    // 0x31d644: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x31d644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d648:
    // 0x31d648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31d64c:
    // 0x31d64c: 0x3e00008  jr          $ra
label_31d650:
    if (ctx->pc == 0x31D650u) {
        ctx->pc = 0x31D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D64Cu;
        // 0x31d650: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D654u;
        goto label_31d654;
    }
    ctx->pc = 0x31D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D64Cu;
        // 0x31d650: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D654u;
label_31d654:
    // 0x31d654: 0x0  nop
    ctx->pc = 0x31d654u;
    // NOP
    ctx->pc = 0x31d658u;
}
