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

// Function: func_0018D370
// Address: 0x18d370 - 0x18d698
void func_0018D370_0x18d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D370_0x18d370");
#endif

    switch (ctx->pc) {
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        default: break;
    }

    ctx->pc = 0x18d370u;

label_18d370:
    // 0x18d370: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18d374:
    // 0x18d374: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18d378:
    // 0x18d378: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18d37c:
    // 0x18d37c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18d37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d380:
    // 0x18d380: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18d384:
    // 0x18d384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d388:
    // 0x18d388: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18d38c:
    // 0x18d38c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18d390:
    // 0x18d390: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18d394:
    // 0x18d394: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18d398:
    // 0x18d398: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18d39c:
    // 0x18d39c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18d3a0:
    // 0x18d3a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18d3a4:
    // 0x18d3a4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18d3a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18d3a8:
    // 0x18d3a8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18d3a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18d3ac:
    // 0x18d3ac: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18d3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18d3b0:
    // 0x18d3b0: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_18d3b4:
    if (ctx->pc == 0x18D3B4u) {
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B8u;
        goto label_18d3b8;
    }
    ctx->pc = 0x18D3B0u;
    {
        const bool branch_taken_0x18d3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b0) {
            ctx->pc = 0x18D48Cu;
            goto label_18d48c;
        }
    }
    ctx->pc = 0x18D3B8u;
label_18d3b8:
    // 0x18d3b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18d3bc:
    if (ctx->pc == 0x18D3BCu) {
        ctx->pc = 0x18D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B8u;
        // 0x18d3bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3C0u;
        goto label_18d3c0;
    }
    ctx->pc = 0x18D3B8u;
    {
        const bool branch_taken_0x18d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B8u;
        // 0x18d3bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b8) {
            ctx->pc = 0x18D3D0u;
            goto label_18d3d0;
        }
    }
    ctx->pc = 0x18D3C0u;
label_18d3c0:
    // 0x18d3c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18d3c4:
    if (ctx->pc == 0x18D3C4u) {
        ctx->pc = 0x18D3C8u;
        goto label_18d3c8;
    }
    ctx->pc = 0x18D3C0u;
    {
        const bool branch_taken_0x18d3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3c0) {
            ctx->pc = 0x18D3E8u;
            goto label_18d3e8;
        }
    }
    ctx->pc = 0x18D3C8u;
label_18d3c8:
    // 0x18d3c8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_18d3cc:
    if (ctx->pc == 0x18D3CCu) {
        ctx->pc = 0x18D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3C8u;
        // 0x18d3cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D0u;
        goto label_18d3d0;
    }
    ctx->pc = 0x18D3C8u;
    {
        const bool branch_taken_0x18d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3C8u;
        // 0x18d3cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3c8) {
            ctx->pc = 0x18D508u;
            goto label_18d508;
        }
    }
    ctx->pc = 0x18D3D0u;
label_18d3d0:
    // 0x18d3d0: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_18d3d4:
    if (ctx->pc == 0x18D3D4u) {
        ctx->pc = 0x18D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D0u;
        // 0x18d3d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D8u;
        goto label_18d3d8;
    }
    ctx->pc = 0x18D3D0u;
    {
        const bool branch_taken_0x18d3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D0u;
        // 0x18d3d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3d0) {
            ctx->pc = 0x18D4B4u;
            goto label_18d4b4;
        }
    }
    ctx->pc = 0x18D3D8u;
label_18d3d8:
    // 0x18d3d8: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_18d3dc:
    if (ctx->pc == 0x18D3DCu) {
        ctx->pc = 0x18D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D8u;
        // 0x18d3dc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3E0u;
        goto label_18d3e0;
    }
    ctx->pc = 0x18D3D8u;
    {
        const bool branch_taken_0x18d3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d3d8) {
            ctx->pc = 0x18D3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D3D8u;
            // 0x18d3dc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D4F8u;
            goto label_18d4f8;
        }
    }
    ctx->pc = 0x18D3E0u;
label_18d3e0:
    // 0x18d3e0: 0x10000049  b           . + 4 + (0x49 << 2)
label_18d3e4:
    if (ctx->pc == 0x18D3E4u) {
        ctx->pc = 0x18D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E0u;
        // 0x18d3e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3E8u;
        goto label_18d3e8;
    }
    ctx->pc = 0x18D3E0u;
    {
        const bool branch_taken_0x18d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E0u;
        // 0x18d3e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3e0) {
            ctx->pc = 0x18D508u;
            goto label_18d508;
        }
    }
    ctx->pc = 0x18D3E8u;
label_18d3e8:
    // 0x18d3e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18d3ec:
    // 0x18d3ec: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d3f0:
    // 0x18d3f0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18d3f4:
    // 0x18d3f4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18d3f8:
    // 0x18d3f8: 0x40f809  jalr        $v0
label_18d3fc:
    if (ctx->pc == 0x18D3FCu) {
        ctx->pc = 0x18D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3F8u;
        // 0x18d3fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D400u;
        goto label_18d400;
    }
    ctx->pc = 0x18D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D400u);
        ctx->pc = 0x18D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3F8u;
        // 0x18d3fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D3F8u, 0x18D400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D400u;
label_18d400:
    // 0x18d400: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18d404:
    if (ctx->pc == 0x18D404u) {
        ctx->pc = 0x18D408u;
        goto label_18d408;
    }
    ctx->pc = 0x18D400u;
    {
        const bool branch_taken_0x18d400 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d400) {
            ctx->pc = 0x18D420u;
            goto label_18d420;
        }
    }
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d40c:
    // 0x18d40c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18d40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18d410:
    // 0x18d410: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d414:
    // 0x18d414: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18d414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18d418:
    // 0x18d418: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d41c:
    // 0x18d41c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18d41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18d420:
    // 0x18d420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d424:
    // 0x18d424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18d424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d428:
    // 0x18d428: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18d428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d42c:
    // 0x18d42c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d430:
    // 0x18d430: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_18d434:
    // 0x18d434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d438:
    // 0x18d438: 0xc0c1a0e  jal         func_306838
label_18d43c:
    if (ctx->pc == 0x18D43Cu) {
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D438u;
        // 0x18d43c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D440u;
        goto label_18d440;
    }
    ctx->pc = 0x18D438u;
    SET_GPR_U32(ctx, 31, 0x18D440u);
    ctx->pc = 0x18D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D438u;
    // 0x18d43c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18D438u, 0x18D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D440u;
label_18d440:
    // 0x18d440: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18d444:
    // 0x18d444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18d444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d448:
    // 0x18d448: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18d448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d44c:
    // 0x18d44c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18d44cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d450:
    // 0x18d450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d454:
    // 0x18d454: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x18d454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18d458:
    // 0x18d458: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d45c:
    // 0x18d45c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d460:
    // 0x18d460: 0xc0b2e92  jal         func_2CBA48
label_18d464:
    if (ctx->pc == 0x18D464u) {
        ctx->pc = 0x18D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D460u;
        // 0x18d464: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D468u;
        goto label_18d468;
    }
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D460u;
    // 0x18d464: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18D460u, 0x18D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0xc06363e  jal         func_18D8F8
label_18d46c:
    if (ctx->pc == 0x18D46Cu) {
        ctx->pc = 0x18D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D468u;
        // 0x18d46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D470u;
        goto label_18d470;
    }
    ctx->pc = 0x18D468u;
    SET_GPR_U32(ctx, 31, 0x18D470u);
    ctx->pc = 0x18D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D468u;
    // 0x18d46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D8F8u, 0x18D468u, 0x18D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D470u;
label_18d470:
    // 0x18d470: 0xc06de42  jal         func_1B7908
label_18d474:
    if (ctx->pc == 0x18D474u) {
        ctx->pc = 0x18D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D470u;
        // 0x18d474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D478u;
        goto label_18d478;
    }
    ctx->pc = 0x18D470u;
    SET_GPR_U32(ctx, 31, 0x18D478u);
    ctx->pc = 0x18D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D470u;
    // 0x18d474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18D470u, 0x18D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D478u;
label_18d478:
    // 0x18d478: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18d47c:
    // 0x18d47c: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x18d47cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_18d480:
    // 0x18d480: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18d480u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18d484:
    // 0x18d484: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18d484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18d488:
    // 0x18d488: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18d488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18d48c:
    // 0x18d48c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18d48cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18d490:
    // 0x18d490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18d494:
    // 0x18d494: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18d494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d498:
    // 0x18d498: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_18d49c:
    if (ctx->pc == 0x18D49Cu) {
        ctx->pc = 0x18D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D498u;
        // 0x18d49c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4A0u;
        goto label_18d4a0;
    }
    ctx->pc = 0x18D498u;
    {
        const bool branch_taken_0x18d498 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D498u;
        // 0x18d49c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d498) {
            ctx->pc = 0x18D504u;
            goto label_18d504;
        }
    }
    ctx->pc = 0x18D4A0u;
label_18d4a0:
    // 0x18d4a0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18d4a4:
    // 0x18d4a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d4a8:
    // 0x18d4a8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18d4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18d4ac:
    // 0x18d4ac: 0x10000013  b           . + 4 + (0x13 << 2)
label_18d4b0:
    if (ctx->pc == 0x18D4B0u) {
        ctx->pc = 0x18D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4ACu;
        // 0x18d4b0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4B4u;
        goto label_18d4b4;
    }
    ctx->pc = 0x18D4ACu;
    {
        const bool branch_taken_0x18d4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4ACu;
        // 0x18d4b0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4ac) {
            ctx->pc = 0x18D4FCu;
            goto label_18d4fc;
        }
    }
    ctx->pc = 0x18D4B4u;
label_18d4b4:
    // 0x18d4b4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18d4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18d4b8:
    // 0x18d4b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18d4bc:
    // 0x18d4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d4c0:
    // 0x18d4c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18d4c4:
    // 0x18d4c4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d4c8:
    // 0x18d4c8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18d4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18d4cc:
    // 0x18d4cc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d4ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18d4d0:
    // 0x18d4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d4d4:
    // 0x18d4d4: 0x0  nop
    ctx->pc = 0x18d4d4u;
    // NOP
label_18d4d8:
    // 0x18d4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18d4dc:
    // 0x18d4dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18d4dcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18d4e0:
    // 0x18d4e0: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_18d4e4:
    if (ctx->pc == 0x18D4E4u) {
        ctx->pc = 0x18D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E0u;
        // 0x18d4e4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4E8u;
        goto label_18d4e8;
    }
    ctx->pc = 0x18D4E0u;
    {
        const bool branch_taken_0x18d4e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E0u;
        // 0x18d4e4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4e0) {
            ctx->pc = 0x18D504u;
            goto label_18d504;
        }
    }
    ctx->pc = 0x18D4E8u;
label_18d4e8:
    // 0x18d4e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18d4ec:
    // 0x18d4ec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18d4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18d4f0:
    // 0x18d4f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d4f4:
    if (ctx->pc == 0x18D4F4u) {
        ctx->pc = 0x18D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F0u;
        // 0x18d4f4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4F8u;
        goto label_18d4f8;
    }
    ctx->pc = 0x18D4F0u;
    {
        const bool branch_taken_0x18d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F0u;
        // 0x18d4f4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f0) {
            ctx->pc = 0x18D500u;
            goto label_18d500;
        }
    }
    ctx->pc = 0x18D4F8u;
label_18d4f8:
    // 0x18d4f8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18d4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18d4fc:
    // 0x18d4fc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18d500:
    // 0x18d500: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18d500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18d504:
    // 0x18d504: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18d504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18d508:
    // 0x18d508: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18d508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d50c:
    // 0x18d50c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_18d510:
    if (ctx->pc == 0x18D510u) {
        ctx->pc = 0x18D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D50Cu;
        // 0x18d510: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D514u;
        goto label_18d514;
    }
    ctx->pc = 0x18D50Cu;
    {
        const bool branch_taken_0x18d50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x18D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D50Cu;
        // 0x18d510: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d50c) {
            ctx->pc = 0x18D65Cu;
            goto label_18d65c;
        }
    }
    ctx->pc = 0x18D514u;
label_18d514:
    // 0x18d514: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18d518:
    // 0x18d518: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18d518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18d51c:
    // 0x18d51c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18d520:
    // 0x18d520: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18d524:
    // 0x18d524: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_18d528:
    // 0x18d528: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_18d52c:
    // 0x18d52c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_18d530:
    // 0x18d530: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_18d534:
    // 0x18d534: 0x0  nop
    ctx->pc = 0x18d534u;
    // NOP
label_18d538:
    // 0x18d538: 0xc05ce40  jal         func_173900
label_18d53c:
    if (ctx->pc == 0x18D53Cu) {
        ctx->pc = 0x18D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D538u;
        // 0x18d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D540u;
        goto label_18d540;
    }
    ctx->pc = 0x18D538u;
    SET_GPR_U32(ctx, 31, 0x18D540u);
    ctx->pc = 0x18D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D538u;
    // 0x18d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18D538u, 0x18D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D540u;
label_18d540:
    // 0x18d540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d544:
    // 0x18d544: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18d548:
    if (ctx->pc == 0x18D548u) {
        ctx->pc = 0x18D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D544u;
        // 0x18d548: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D54Cu;
        goto label_18d54c;
    }
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D544u;
            // 0x18d548: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D634u;
            goto label_18d634;
        }
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18d550:
    // 0x18d550: 0xc0a4bd4  jal         func_292F50
label_18d554:
    if (ctx->pc == 0x18D554u) {
        ctx->pc = 0x18D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D550u;
        // 0x18d554: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D558u;
        goto label_18d558;
    }
    ctx->pc = 0x18D550u;
    SET_GPR_U32(ctx, 31, 0x18D558u);
    ctx->pc = 0x18D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D550u;
    // 0x18d554: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18D550u, 0x18D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D558u;
label_18d558:
    // 0x18d558: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18d558u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18d55c:
    // 0x18d55c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18d55cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18d560:
    // 0x18d560: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d564:
    // 0x18d564: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d564u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18d568:
    // 0x18d568: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18d568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18d56c:
    // 0x18d56c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18d56cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18d570:
    // 0x18d570: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18d570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d574:
    // 0x18d574: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d578:
    // 0x18d578: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18d578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18d57c:
    // 0x18d57c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d580:
    // 0x18d580: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18d580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18d584:
    // 0x18d584: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18d584u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18d588:
    // 0x18d588: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18d588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d58c:
    // 0x18d58c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d590:
    // 0x18d590: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18d590u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18d594:
    // 0x18d594: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d598:
    // 0x18d598: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18d59c:
    // 0x18d59c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18d59cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18d5a0:
    // 0x18d5a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18d5a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18d5a4:
    // 0x18d5a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18d5a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d5a8:
    // 0x18d5a8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d5ac:
    // 0x18d5ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18d5acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18d5b0:
    // 0x18d5b0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d5b4:
    // 0x18d5b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18d5b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18d5b8:
    // 0x18d5b8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18d5b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18d5bc:
    // 0x18d5bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18d5bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d5c0:
    // 0x18d5c0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18d5c4:
    // 0x18d5c4: 0xc07df68  jal         func_1F7DA0
label_18d5c8:
    if (ctx->pc == 0x18D5C8u) {
        ctx->pc = 0x18D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C4u;
        // 0x18d5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5CCu;
        goto label_18d5cc;
    }
    ctx->pc = 0x18D5C4u;
    SET_GPR_U32(ctx, 31, 0x18D5CCu);
    ctx->pc = 0x18D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5C4u;
    // 0x18d5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18D5C4u, 0x18D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5CCu;
label_18d5cc:
    // 0x18d5cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d5d0:
    // 0x18d5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d5d4:
    // 0x18d5d4: 0xc051dca  jal         func_147728
label_18d5d8:
    if (ctx->pc == 0x18D5D8u) {
        ctx->pc = 0x18D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D4u;
        // 0x18d5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5DCu;
        goto label_18d5dc;
    }
    ctx->pc = 0x18D5D4u;
    SET_GPR_U32(ctx, 31, 0x18D5DCu);
    ctx->pc = 0x18D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D4u;
    // 0x18d5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18D5D4u, 0x18D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5DCu;
label_18d5dc:
    // 0x18d5dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d5e0:
    // 0x18d5e0: 0xc051f10  jal         func_147C40
label_18d5e4:
    if (ctx->pc == 0x18D5E4u) {
        ctx->pc = 0x18D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E0u;
        // 0x18d5e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E8u;
        goto label_18d5e8;
    }
    ctx->pc = 0x18D5E0u;
    SET_GPR_U32(ctx, 31, 0x18D5E8u);
    ctx->pc = 0x18D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E0u;
    // 0x18d5e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18D5E0u, 0x18D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d5ec:
    // 0x18d5ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18d5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18d5f0:
    // 0x18d5f0: 0xc051efe  jal         func_147BF8
label_18d5f4:
    if (ctx->pc == 0x18D5F4u) {
        ctx->pc = 0x18D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5F0u;
        // 0x18d5f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5F8u;
        goto label_18d5f8;
    }
    ctx->pc = 0x18D5F0u;
    SET_GPR_U32(ctx, 31, 0x18D5F8u);
    ctx->pc = 0x18D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5F0u;
    // 0x18d5f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18D5F0u, 0x18D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5F8u;
label_18d5f8:
    // 0x18d5f8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18d5fc:
    // 0x18d5fc: 0xc051d4a  jal         func_147528
label_18d600:
    if (ctx->pc == 0x18D600u) {
        ctx->pc = 0x18D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5FCu;
        // 0x18d600: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D604u;
        goto label_18d604;
    }
    ctx->pc = 0x18D5FCu;
    SET_GPR_U32(ctx, 31, 0x18D604u);
    ctx->pc = 0x18D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5FCu;
    // 0x18d600: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18D5FCu, 0x18D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D604u;
label_18d604:
    // 0x18d604: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d608:
    // 0x18d608: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d60c:
    // 0x18d60c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18d610:
    // 0x18d610: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d614:
    // 0x18d614: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18d614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d618:
    // 0x18d618: 0x0  nop
    ctx->pc = 0x18d618u;
    // NOP
label_18d61c:
    // 0x18d61c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18d620:
    if (ctx->pc == 0x18D620u) {
        ctx->pc = 0x18D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D61Cu;
        // 0x18d620: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D624u;
        goto label_18d624;
    }
    ctx->pc = 0x18D61Cu;
    {
        const bool branch_taken_0x18d61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D61Cu;
        // 0x18d620: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d61c) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D624u;
label_18d624:
    // 0x18d624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d628:
    // 0x18d628: 0xc05bd90  jal         func_16F640
label_18d62c:
    if (ctx->pc == 0x18D62Cu) {
        ctx->pc = 0x18D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D628u;
        // 0x18d62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D630u;
        goto label_18d630;
    }
    ctx->pc = 0x18D628u;
    SET_GPR_U32(ctx, 31, 0x18D630u);
    ctx->pc = 0x18D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D628u;
    // 0x18d62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18D628u, 0x18D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D630u;
label_18d630:
    // 0x18d630: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18d634:
    // 0x18d634: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18d638:
    // 0x18d638: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18d63c:
    // 0x18d63c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18d640:
    // 0x18d640: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18d644:
    // 0x18d644: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x18d644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_18d648:
    // 0x18d648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18d64c:
    if (ctx->pc == 0x18D64Cu) {
        ctx->pc = 0x18D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D648u;
        // 0x18d64c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D650u;
        goto label_18d650;
    }
    ctx->pc = 0x18D648u;
    {
        const bool branch_taken_0x18d648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D648u;
        // 0x18d64c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d648) {
            ctx->pc = 0x18D65Cu;
            goto label_18d65c;
        }
    }
    ctx->pc = 0x18D650u;
label_18d650:
    // 0x18d650: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18d650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18d654:
    // 0x18d654: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18d658:
    if (ctx->pc == 0x18D658u) {
        ctx->pc = 0x18D65Cu;
        goto label_18d65c;
    }
    ctx->pc = 0x18D654u;
    {
        const bool branch_taken_0x18d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18d654) {
            ctx->pc = 0x18D538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d538;
        }
    }
    ctx->pc = 0x18D65Cu;
label_18d65c:
    // 0x18d65c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18d65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18d660:
    // 0x18d660: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18d660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18d664:
    // 0x18d664: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18d664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18d668:
    // 0x18d668: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18d668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18d66c:
    // 0x18d66c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18d66cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18d670:
    // 0x18d670: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18d670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18d674:
    // 0x18d674: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18d674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18d678:
    // 0x18d678: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18d678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18d67c:
    // 0x18d67c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18d67cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18d680:
    // 0x18d680: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18d680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18d684:
    // 0x18d684: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18d688:
    // 0x18d688: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d68c:
    // 0x18d68c: 0x3e00008  jr          $ra
label_18d690:
    if (ctx->pc == 0x18D690u) {
        ctx->pc = 0x18D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D68Cu;
        // 0x18d690: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D694u;
        goto label_18d694;
    }
    ctx->pc = 0x18D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D68Cu;
        // 0x18d690: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D694u;
label_18d694:
    // 0x18d694: 0x0  nop
    ctx->pc = 0x18d694u;
    // NOP
    ctx->pc = 0x18d698u;
}
