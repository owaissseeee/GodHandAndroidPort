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

// Function: func_0017A1E0
// Address: 0x17a1e0 - 0x17a508
void func_0017A1E0_0x17a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017A1E0_0x17a1e0");
#endif

    switch (ctx->pc) {
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        case 0x17a258u: goto label_17a258;
        case 0x17a25cu: goto label_17a25c;
        case 0x17a260u: goto label_17a260;
        case 0x17a264u: goto label_17a264;
        case 0x17a268u: goto label_17a268;
        case 0x17a26cu: goto label_17a26c;
        case 0x17a270u: goto label_17a270;
        case 0x17a274u: goto label_17a274;
        case 0x17a278u: goto label_17a278;
        case 0x17a27cu: goto label_17a27c;
        case 0x17a280u: goto label_17a280;
        case 0x17a284u: goto label_17a284;
        case 0x17a288u: goto label_17a288;
        case 0x17a28cu: goto label_17a28c;
        case 0x17a290u: goto label_17a290;
        case 0x17a294u: goto label_17a294;
        case 0x17a298u: goto label_17a298;
        case 0x17a29cu: goto label_17a29c;
        case 0x17a2a0u: goto label_17a2a0;
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2a8u: goto label_17a2a8;
        case 0x17a2acu: goto label_17a2ac;
        case 0x17a2b0u: goto label_17a2b0;
        case 0x17a2b4u: goto label_17a2b4;
        case 0x17a2b8u: goto label_17a2b8;
        case 0x17a2bcu: goto label_17a2bc;
        case 0x17a2c0u: goto label_17a2c0;
        case 0x17a2c4u: goto label_17a2c4;
        case 0x17a2c8u: goto label_17a2c8;
        case 0x17a2ccu: goto label_17a2cc;
        case 0x17a2d0u: goto label_17a2d0;
        case 0x17a2d4u: goto label_17a2d4;
        case 0x17a2d8u: goto label_17a2d8;
        case 0x17a2dcu: goto label_17a2dc;
        case 0x17a2e0u: goto label_17a2e0;
        case 0x17a2e4u: goto label_17a2e4;
        case 0x17a2e8u: goto label_17a2e8;
        case 0x17a2ecu: goto label_17a2ec;
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        case 0x17a330u: goto label_17a330;
        case 0x17a334u: goto label_17a334;
        case 0x17a338u: goto label_17a338;
        case 0x17a33cu: goto label_17a33c;
        case 0x17a340u: goto label_17a340;
        case 0x17a344u: goto label_17a344;
        case 0x17a348u: goto label_17a348;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a350u: goto label_17a350;
        case 0x17a354u: goto label_17a354;
        case 0x17a358u: goto label_17a358;
        case 0x17a35cu: goto label_17a35c;
        case 0x17a360u: goto label_17a360;
        case 0x17a364u: goto label_17a364;
        case 0x17a368u: goto label_17a368;
        case 0x17a36cu: goto label_17a36c;
        case 0x17a370u: goto label_17a370;
        case 0x17a374u: goto label_17a374;
        case 0x17a378u: goto label_17a378;
        case 0x17a37cu: goto label_17a37c;
        case 0x17a380u: goto label_17a380;
        case 0x17a384u: goto label_17a384;
        case 0x17a388u: goto label_17a388;
        case 0x17a38cu: goto label_17a38c;
        case 0x17a390u: goto label_17a390;
        case 0x17a394u: goto label_17a394;
        case 0x17a398u: goto label_17a398;
        case 0x17a39cu: goto label_17a39c;
        case 0x17a3a0u: goto label_17a3a0;
        case 0x17a3a4u: goto label_17a3a4;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3b0u: goto label_17a3b0;
        case 0x17a3b4u: goto label_17a3b4;
        case 0x17a3b8u: goto label_17a3b8;
        case 0x17a3bcu: goto label_17a3bc;
        case 0x17a3c0u: goto label_17a3c0;
        case 0x17a3c4u: goto label_17a3c4;
        case 0x17a3c8u: goto label_17a3c8;
        case 0x17a3ccu: goto label_17a3cc;
        case 0x17a3d0u: goto label_17a3d0;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3dcu: goto label_17a3dc;
        case 0x17a3e0u: goto label_17a3e0;
        case 0x17a3e4u: goto label_17a3e4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a3ecu: goto label_17a3ec;
        case 0x17a3f0u: goto label_17a3f0;
        case 0x17a3f4u: goto label_17a3f4;
        case 0x17a3f8u: goto label_17a3f8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a400u: goto label_17a400;
        case 0x17a404u: goto label_17a404;
        case 0x17a408u: goto label_17a408;
        case 0x17a40cu: goto label_17a40c;
        case 0x17a410u: goto label_17a410;
        case 0x17a414u: goto label_17a414;
        case 0x17a418u: goto label_17a418;
        case 0x17a41cu: goto label_17a41c;
        case 0x17a420u: goto label_17a420;
        case 0x17a424u: goto label_17a424;
        case 0x17a428u: goto label_17a428;
        case 0x17a42cu: goto label_17a42c;
        case 0x17a430u: goto label_17a430;
        case 0x17a434u: goto label_17a434;
        case 0x17a438u: goto label_17a438;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a440u: goto label_17a440;
        case 0x17a444u: goto label_17a444;
        case 0x17a448u: goto label_17a448;
        case 0x17a44cu: goto label_17a44c;
        case 0x17a450u: goto label_17a450;
        case 0x17a454u: goto label_17a454;
        case 0x17a458u: goto label_17a458;
        case 0x17a45cu: goto label_17a45c;
        case 0x17a460u: goto label_17a460;
        case 0x17a464u: goto label_17a464;
        case 0x17a468u: goto label_17a468;
        case 0x17a46cu: goto label_17a46c;
        case 0x17a470u: goto label_17a470;
        case 0x17a474u: goto label_17a474;
        case 0x17a478u: goto label_17a478;
        case 0x17a47cu: goto label_17a47c;
        case 0x17a480u: goto label_17a480;
        case 0x17a484u: goto label_17a484;
        case 0x17a488u: goto label_17a488;
        case 0x17a48cu: goto label_17a48c;
        case 0x17a490u: goto label_17a490;
        case 0x17a494u: goto label_17a494;
        case 0x17a498u: goto label_17a498;
        case 0x17a49cu: goto label_17a49c;
        case 0x17a4a0u: goto label_17a4a0;
        case 0x17a4a4u: goto label_17a4a4;
        case 0x17a4a8u: goto label_17a4a8;
        case 0x17a4acu: goto label_17a4ac;
        case 0x17a4b0u: goto label_17a4b0;
        case 0x17a4b4u: goto label_17a4b4;
        case 0x17a4b8u: goto label_17a4b8;
        case 0x17a4bcu: goto label_17a4bc;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4c4u: goto label_17a4c4;
        case 0x17a4c8u: goto label_17a4c8;
        case 0x17a4ccu: goto label_17a4cc;
        case 0x17a4d0u: goto label_17a4d0;
        case 0x17a4d4u: goto label_17a4d4;
        case 0x17a4d8u: goto label_17a4d8;
        case 0x17a4dcu: goto label_17a4dc;
        case 0x17a4e0u: goto label_17a4e0;
        case 0x17a4e4u: goto label_17a4e4;
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a4ecu: goto label_17a4ec;
        case 0x17a4f0u: goto label_17a4f0;
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        default: break;
    }

    ctx->pc = 0x17a1e0u;

label_17a1e0:
    // 0x17a1e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_17a1e4:
    // 0x17a1e4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x17a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_17a1e8:
    // 0x17a1e8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x17a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_17a1ec:
    // 0x17a1ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17a1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a1f0:
    // 0x17a1f0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x17a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_17a1f4:
    // 0x17a1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a1f8:
    // 0x17a1f8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x17a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_17a1fc:
    // 0x17a1fc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x17a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_17a200:
    // 0x17a200: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_17a204:
    // 0x17a204: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x17a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_17a208:
    // 0x17a208: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x17a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_17a20c:
    // 0x17a20c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17a210:
    // 0x17a210: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17a214:
    // 0x17a214: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x17a214u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_17a218:
    // 0x17a218: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x17a218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_17a21c:
    // 0x17a21c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17a21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_17a220:
    // 0x17a220: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_17a224:
    if (ctx->pc == 0x17A224u) {
        ctx->pc = 0x17A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A220u;
        // 0x17a224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A228u;
        goto label_17a228;
    }
    ctx->pc = 0x17A220u;
    {
        const bool branch_taken_0x17a220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x17A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A220u;
        // 0x17a224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a220) {
            ctx->pc = 0x17A2FCu;
            goto label_17a2fc;
        }
    }
    ctx->pc = 0x17A228u;
label_17a228:
    // 0x17a228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17a22c:
    if (ctx->pc == 0x17A22Cu) {
        ctx->pc = 0x17A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A228u;
        // 0x17a22c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A230u;
        goto label_17a230;
    }
    ctx->pc = 0x17A228u;
    {
        const bool branch_taken_0x17a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A228u;
        // 0x17a22c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a228) {
            ctx->pc = 0x17A240u;
            goto label_17a240;
        }
    }
    ctx->pc = 0x17A230u;
label_17a230:
    // 0x17a230: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17a234:
    if (ctx->pc == 0x17A234u) {
        ctx->pc = 0x17A238u;
        goto label_17a238;
    }
    ctx->pc = 0x17A230u;
    {
        const bool branch_taken_0x17a230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a230) {
            ctx->pc = 0x17A258u;
            goto label_17a258;
        }
    }
    ctx->pc = 0x17A238u;
label_17a238:
    // 0x17a238: 0x1000004f  b           . + 4 + (0x4F << 2)
label_17a23c:
    if (ctx->pc == 0x17A23Cu) {
        ctx->pc = 0x17A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A238u;
        // 0x17a23c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A240u;
        goto label_17a240;
    }
    ctx->pc = 0x17A238u;
    {
        const bool branch_taken_0x17a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A238u;
        // 0x17a23c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a238) {
            ctx->pc = 0x17A378u;
            goto label_17a378;
        }
    }
    ctx->pc = 0x17A240u;
label_17a240:
    // 0x17a240: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_17a244:
    if (ctx->pc == 0x17A244u) {
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A240u;
        // 0x17a244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A248u;
        goto label_17a248;
    }
    ctx->pc = 0x17A240u;
    {
        const bool branch_taken_0x17a240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A240u;
        // 0x17a244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a240) {
            ctx->pc = 0x17A324u;
            goto label_17a324;
        }
    }
    ctx->pc = 0x17A248u;
label_17a248:
    // 0x17a248: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_17a24c:
    if (ctx->pc == 0x17A24Cu) {
        ctx->pc = 0x17A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A248u;
        // 0x17a24c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A250u;
        goto label_17a250;
    }
    ctx->pc = 0x17A248u;
    {
        const bool branch_taken_0x17a248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a248) {
            ctx->pc = 0x17A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A248u;
            // 0x17a24c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A368u;
            goto label_17a368;
        }
    }
    ctx->pc = 0x17A250u;
label_17a250:
    // 0x17a250: 0x10000049  b           . + 4 + (0x49 << 2)
label_17a254:
    if (ctx->pc == 0x17A254u) {
        ctx->pc = 0x17A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A250u;
        // 0x17a254: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A258u;
        goto label_17a258;
    }
    ctx->pc = 0x17A250u;
    {
        const bool branch_taken_0x17a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A250u;
        // 0x17a254: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a250) {
            ctx->pc = 0x17A378u;
            goto label_17a378;
        }
    }
    ctx->pc = 0x17A258u;
label_17a258:
    // 0x17a258: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x17a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_17a25c:
    // 0x17a25c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_17a260:
    // 0x17a260: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17a264:
    // 0x17a264: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17a268:
    // 0x17a268: 0x40f809  jalr        $v0
label_17a26c:
    if (ctx->pc == 0x17A26Cu) {
        ctx->pc = 0x17A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A268u;
        // 0x17a26c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A270u;
        goto label_17a270;
    }
    ctx->pc = 0x17A268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A270u);
        ctx->pc = 0x17A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A268u;
        // 0x17a26c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A268u, 0x17A270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A270u;
label_17a270:
    // 0x17a270: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_17a274:
    if (ctx->pc == 0x17A274u) {
        ctx->pc = 0x17A278u;
        goto label_17a278;
    }
    ctx->pc = 0x17A270u;
    {
        const bool branch_taken_0x17a270 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a270) {
            ctx->pc = 0x17A290u;
            goto label_17a290;
        }
    }
    ctx->pc = 0x17A278u;
label_17a278:
    // 0x17a278: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a27c:
    // 0x17a27c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17a27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17a280:
    // 0x17a280: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a284:
    // 0x17a284: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17a284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17a288:
    // 0x17a288: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a28c:
    // 0x17a28c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17a290:
    // 0x17a290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17a294:
    // 0x17a294: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17a294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17a298:
    // 0x17a298: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x17a298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a29c:
    // 0x17a29c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2a0:
    // 0x17a2a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x17a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_17a2a4:
    // 0x17a2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2a8:
    // 0x17a2a8: 0xc0c1a0e  jal         func_306838
label_17a2ac:
    if (ctx->pc == 0x17A2ACu) {
        ctx->pc = 0x17A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2A8u;
        // 0x17a2ac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2B0u;
        goto label_17a2b0;
    }
    ctx->pc = 0x17A2A8u;
    SET_GPR_U32(ctx, 31, 0x17A2B0u);
    ctx->pc = 0x17A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2A8u;
    // 0x17a2ac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x17A2A8u, 0x17A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2B0u;
label_17a2b0:
    // 0x17a2b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_17a2b4:
    // 0x17a2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17a2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2b8:
    // 0x17a2b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17a2b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2bc:
    // 0x17a2bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2c0:
    // 0x17a2c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a2c4:
    // 0x17a2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2c8:
    // 0x17a2c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17a2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a2cc:
    // 0x17a2cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2d0:
    // 0x17a2d0: 0xc0b2e92  jal         func_2CBA48
label_17a2d4:
    if (ctx->pc == 0x17A2D4u) {
        ctx->pc = 0x17A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D0u;
        // 0x17a2d4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2D8u;
        goto label_17a2d8;
    }
    ctx->pc = 0x17A2D0u;
    SET_GPR_U32(ctx, 31, 0x17A2D8u);
    ctx->pc = 0x17A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2D0u;
    // 0x17a2d4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17A2D0u, 0x17A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2D8u;
label_17a2d8:
    // 0x17a2d8: 0xc05e9de  jal         func_17A778
label_17a2dc:
    if (ctx->pc == 0x17A2DCu) {
        ctx->pc = 0x17A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D8u;
        // 0x17a2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2E0u;
        goto label_17a2e0;
    }
    ctx->pc = 0x17A2D8u;
    SET_GPR_U32(ctx, 31, 0x17A2E0u);
    ctx->pc = 0x17A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2D8u;
    // 0x17a2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A778u, 0x17A2D8u, 0x17A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2E0u;
label_17a2e0:
    // 0x17a2e0: 0xc06de42  jal         func_1B7908
label_17a2e4:
    if (ctx->pc == 0x17A2E4u) {
        ctx->pc = 0x17A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2E0u;
        // 0x17a2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2E8u;
        goto label_17a2e8;
    }
    ctx->pc = 0x17A2E0u;
    SET_GPR_U32(ctx, 31, 0x17A2E8u);
    ctx->pc = 0x17A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2E0u;
    // 0x17a2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x17A2E0u, 0x17A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2E8u;
label_17a2e8:
    // 0x17a2e8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x17a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_17a2ec:
    // 0x17a2ec: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x17a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_17a2f0:
    // 0x17a2f0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17a2f4:
    // 0x17a2f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17a2f8:
    // 0x17a2f8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17a2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17a2fc:
    // 0x17a2fc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x17a2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_17a300:
    // 0x17a300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17a304:
    // 0x17a304: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17a308:
    // 0x17a308: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_17a30c:
    if (ctx->pc == 0x17A30Cu) {
        ctx->pc = 0x17A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A308u;
        // 0x17a30c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A310u;
        goto label_17a310;
    }
    ctx->pc = 0x17A308u;
    {
        const bool branch_taken_0x17a308 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A308u;
        // 0x17a30c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a308) {
            ctx->pc = 0x17A374u;
            goto label_17a374;
        }
    }
    ctx->pc = 0x17A310u;
label_17a310:
    // 0x17a310: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_17a314:
    // 0x17a314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17a314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a318:
    // 0x17a318: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17a318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17a31c:
    // 0x17a31c: 0x10000013  b           . + 4 + (0x13 << 2)
label_17a320:
    if (ctx->pc == 0x17A320u) {
        ctx->pc = 0x17A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A31Cu;
        // 0x17a320: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A324u;
        goto label_17a324;
    }
    ctx->pc = 0x17A31Cu;
    {
        const bool branch_taken_0x17a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A31Cu;
        // 0x17a320: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a31c) {
            ctx->pc = 0x17A36Cu;
            goto label_17a36c;
        }
    }
    ctx->pc = 0x17A324u;
label_17a324:
    // 0x17a324: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x17a324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_17a328:
    // 0x17a328: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x17a328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_17a32c:
    // 0x17a32c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17a32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a330:
    // 0x17a330: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17a334:
    // 0x17a334: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17a334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17a338:
    // 0x17a338: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17a338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17a33c:
    // 0x17a33c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x17a33cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_17a340:
    // 0x17a340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17a340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a344:
    // 0x17a344: 0x0  nop
    ctx->pc = 0x17a344u;
    // NOP
label_17a348:
    // 0x17a348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a34c:
    // 0x17a34c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17a34cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_17a350:
    // 0x17a350: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_17a354:
    if (ctx->pc == 0x17A354u) {
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A358u;
        goto label_17a358;
    }
    ctx->pc = 0x17A350u;
    {
        const bool branch_taken_0x17a350 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a350) {
            ctx->pc = 0x17A374u;
            goto label_17a374;
        }
    }
    ctx->pc = 0x17A358u;
label_17a358:
    // 0x17a358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17a35c:
    // 0x17a35c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17a360:
    // 0x17a360: 0x10000003  b           . + 4 + (0x3 << 2)
label_17a364:
    if (ctx->pc == 0x17A364u) {
        ctx->pc = 0x17A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A360u;
        // 0x17a364: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A368u;
        goto label_17a368;
    }
    ctx->pc = 0x17A360u;
    {
        const bool branch_taken_0x17a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A360u;
        // 0x17a364: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a360) {
            ctx->pc = 0x17A370u;
            goto label_17a370;
        }
    }
    ctx->pc = 0x17A368u;
label_17a368:
    // 0x17a368: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17a368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_17a36c:
    // 0x17a36c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17a370:
    // 0x17a370: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17a370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17a374:
    // 0x17a374: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_17a378:
    // 0x17a378: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x17a378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a37c:
    // 0x17a37c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_17a380:
    if (ctx->pc == 0x17A380u) {
        ctx->pc = 0x17A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A37Cu;
        // 0x17a380: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A384u;
        goto label_17a384;
    }
    ctx->pc = 0x17A37Cu;
    {
        const bool branch_taken_0x17a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x17A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A37Cu;
        // 0x17a380: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a37c) {
            ctx->pc = 0x17A4CCu;
            goto label_17a4cc;
        }
    }
    ctx->pc = 0x17A384u;
label_17a384:
    // 0x17a384: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_17a388:
    // 0x17a388: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17a388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17a38c:
    // 0x17a38c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x17a38cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17a390:
    // 0x17a390: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x17a390u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_17a394:
    // 0x17a394: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x17a394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_17a398:
    // 0x17a398: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x17a398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_17a39c:
    // 0x17a39c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x17a39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_17a3a0:
    // 0x17a3a0: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x17a3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_17a3a4:
    // 0x17a3a4: 0x0  nop
    ctx->pc = 0x17a3a4u;
    // NOP
label_17a3a8:
    // 0x17a3a8: 0xc05ce40  jal         func_173900
label_17a3ac:
    if (ctx->pc == 0x17A3ACu) {
        ctx->pc = 0x17A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3A8u;
        // 0x17a3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3B0u;
        goto label_17a3b0;
    }
    ctx->pc = 0x17A3A8u;
    SET_GPR_U32(ctx, 31, 0x17A3B0u);
    ctx->pc = 0x17A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3A8u;
    // 0x17a3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x17A3A8u, 0x17A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3B0u;
label_17a3b0:
    // 0x17a3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a3b4:
    // 0x17a3b4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_17a3b8:
    if (ctx->pc == 0x17A3B8u) {
        ctx->pc = 0x17A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3B4u;
        // 0x17a3b8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3BCu;
        goto label_17a3bc;
    }
    ctx->pc = 0x17A3B4u;
    {
        const bool branch_taken_0x17a3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a3b4) {
            ctx->pc = 0x17A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A3B4u;
            // 0x17a3b8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A4A4u;
            goto label_17a4a4;
        }
    }
    ctx->pc = 0x17A3BCu;
label_17a3bc:
    // 0x17a3bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_17a3c0:
    // 0x17a3c0: 0xc0a4bd4  jal         func_292F50
label_17a3c4:
    if (ctx->pc == 0x17A3C4u) {
        ctx->pc = 0x17A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3C0u;
        // 0x17a3c4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3C8u;
        goto label_17a3c8;
    }
    ctx->pc = 0x17A3C0u;
    SET_GPR_U32(ctx, 31, 0x17A3C8u);
    ctx->pc = 0x17A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3C0u;
    // 0x17a3c4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x17A3C0u, 0x17A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3C8u;
label_17a3c8:
    // 0x17a3c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17a3c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17a3cc:
    // 0x17a3cc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x17a3ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17a3d0:
    // 0x17a3d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a3d4:
    // 0x17a3d4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a3d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a3d8:
    // 0x17a3d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17a3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17a3dc:
    // 0x17a3dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17a3dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17a3e0:
    // 0x17a3e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17a3e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17a3e4:
    // 0x17a3e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a3e8:
    // 0x17a3e8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x17a3e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17a3ec:
    // 0x17a3ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a3f0:
    // 0x17a3f0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17a3f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_17a3f4:
    // 0x17a3f4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x17a3f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_17a3f8:
    // 0x17a3f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17a3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17a3fc:
    // 0x17a3fc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a400:
    // 0x17a400: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x17a400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_17a404:
    // 0x17a404: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a408:
    // 0x17a408: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a40c:
    // 0x17a40c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17a40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17a410:
    // 0x17a410: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17a410u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17a414:
    // 0x17a414: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17a414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17a418:
    // 0x17a418: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a41c:
    // 0x17a41c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x17a41cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17a420:
    // 0x17a420: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a424:
    // 0x17a424: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17a424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17a428:
    // 0x17a428: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x17a428u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_17a42c:
    // 0x17a42c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17a42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17a430:
    // 0x17a430: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17a430u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_17a434:
    // 0x17a434: 0xc07df68  jal         func_1F7DA0
label_17a438:
    if (ctx->pc == 0x17A438u) {
        ctx->pc = 0x17A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A434u;
        // 0x17a438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A43Cu;
        goto label_17a43c;
    }
    ctx->pc = 0x17A434u;
    SET_GPR_U32(ctx, 31, 0x17A43Cu);
    ctx->pc = 0x17A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A434u;
    // 0x17a438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x17A434u, 0x17A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A43Cu;
label_17a43c:
    // 0x17a43c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a440:
    // 0x17a440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a444:
    // 0x17a444: 0xc051dca  jal         func_147728
label_17a448:
    if (ctx->pc == 0x17A448u) {
        ctx->pc = 0x17A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A444u;
        // 0x17a448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A44Cu;
        goto label_17a44c;
    }
    ctx->pc = 0x17A444u;
    SET_GPR_U32(ctx, 31, 0x17A44Cu);
    ctx->pc = 0x17A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A444u;
    // 0x17a448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x17A444u, 0x17A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A44Cu;
label_17a44c:
    // 0x17a44c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a450:
    // 0x17a450: 0xc051f10  jal         func_147C40
label_17a454:
    if (ctx->pc == 0x17A454u) {
        ctx->pc = 0x17A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A450u;
        // 0x17a454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A458u;
        goto label_17a458;
    }
    ctx->pc = 0x17A450u;
    SET_GPR_U32(ctx, 31, 0x17A458u);
    ctx->pc = 0x17A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A450u;
    // 0x17a454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x17A450u, 0x17A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A458u;
label_17a458:
    // 0x17a458: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a45c:
    // 0x17a45c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17a45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17a460:
    // 0x17a460: 0xc051efe  jal         func_147BF8
label_17a464:
    if (ctx->pc == 0x17A464u) {
        ctx->pc = 0x17A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A460u;
        // 0x17a464: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A468u;
        goto label_17a468;
    }
    ctx->pc = 0x17A460u;
    SET_GPR_U32(ctx, 31, 0x17A468u);
    ctx->pc = 0x17A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A460u;
    // 0x17a464: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x17A460u, 0x17A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A468u;
label_17a468:
    // 0x17a468: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x17a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17a46c:
    // 0x17a46c: 0xc051d4a  jal         func_147528
label_17a470:
    if (ctx->pc == 0x17A470u) {
        ctx->pc = 0x17A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A46Cu;
        // 0x17a470: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A474u;
        goto label_17a474;
    }
    ctx->pc = 0x17A46Cu;
    SET_GPR_U32(ctx, 31, 0x17A474u);
    ctx->pc = 0x17A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A46Cu;
    // 0x17a470: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x17A46Cu, 0x17A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A474u;
label_17a474:
    // 0x17a474: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x17a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a478:
    // 0x17a478: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x17a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a47c:
    // 0x17a47c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17a47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_17a480:
    // 0x17a480: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17a484:
    // 0x17a484: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x17a484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a488:
    // 0x17a488: 0x0  nop
    ctx->pc = 0x17a488u;
    // NOP
label_17a48c:
    // 0x17a48c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17a490:
    if (ctx->pc == 0x17A490u) {
        ctx->pc = 0x17A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A48Cu;
        // 0x17a490: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A494u;
        goto label_17a494;
    }
    ctx->pc = 0x17A48Cu;
    {
        const bool branch_taken_0x17a48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A48Cu;
        // 0x17a490: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a48c) {
            ctx->pc = 0x17A4A0u;
            goto label_17a4a0;
        }
    }
    ctx->pc = 0x17A494u;
label_17a494:
    // 0x17a494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a498:
    // 0x17a498: 0xc05bd90  jal         func_16F640
label_17a49c:
    if (ctx->pc == 0x17A49Cu) {
        ctx->pc = 0x17A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A498u;
        // 0x17a49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4A0u;
        goto label_17a4a0;
    }
    ctx->pc = 0x17A498u;
    SET_GPR_U32(ctx, 31, 0x17A4A0u);
    ctx->pc = 0x17A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A498u;
    // 0x17a49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17A498u, 0x17A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4A0u;
label_17a4a0:
    // 0x17a4a0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17a4a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17a4a4:
    // 0x17a4a4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_17a4a8:
    // 0x17a4a8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_17a4ac:
    // 0x17a4ac: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_17a4b0:
    // 0x17a4b0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_17a4b4:
    // 0x17a4b4: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x17a4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_17a4b8:
    // 0x17a4b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17a4bc:
    if (ctx->pc == 0x17A4BCu) {
        ctx->pc = 0x17A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4B8u;
        // 0x17a4bc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4C0u;
        goto label_17a4c0;
    }
    ctx->pc = 0x17A4B8u;
    {
        const bool branch_taken_0x17a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4B8u;
        // 0x17a4bc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4b8) {
            ctx->pc = 0x17A4CCu;
            goto label_17a4cc;
        }
    }
    ctx->pc = 0x17A4C0u;
label_17a4c0:
    // 0x17a4c0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_17a4c4:
    // 0x17a4c4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_17a4c8:
    if (ctx->pc == 0x17A4C8u) {
        ctx->pc = 0x17A4CCu;
        goto label_17a4cc;
    }
    ctx->pc = 0x17A4C4u;
    {
        const bool branch_taken_0x17a4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x17a4c4) {
            ctx->pc = 0x17A3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a3a8;
        }
    }
    ctx->pc = 0x17A4CCu;
label_17a4cc:
    // 0x17a4cc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x17a4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_17a4d0:
    // 0x17a4d0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x17a4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17a4d4:
    // 0x17a4d4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x17a4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_17a4d8:
    // 0x17a4d8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x17a4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17a4dc:
    // 0x17a4dc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x17a4dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17a4e0:
    // 0x17a4e0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x17a4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17a4e4:
    // 0x17a4e4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x17a4e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17a4e8:
    // 0x17a4e8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x17a4e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17a4ec:
    // 0x17a4ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17a4ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17a4f0:
    // 0x17a4f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17a4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17a4f4:
    // 0x17a4f4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x17a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17a4f8:
    // 0x17a4f8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x17a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17a4fc:
    // 0x17a4fc: 0x3e00008  jr          $ra
label_17a500:
    if (ctx->pc == 0x17A500u) {
        ctx->pc = 0x17A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4FCu;
        // 0x17a500: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A504u;
        goto label_17a504;
    }
    ctx->pc = 0x17A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4FCu;
        // 0x17a500: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A504u;
label_17a504:
    // 0x17a504: 0x0  nop
    ctx->pc = 0x17a504u;
    // NOP
    ctx->pc = 0x17a508u;
}
