#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_00799FA8
// Address: 0x799fa8 - 0x79a3f8
void func_00799FA8_0x799fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799FA8_0x799fa8");
#endif

    switch (ctx->pc) {
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a300u: goto label_79a300;
        case 0x79a304u: goto label_79a304;
        case 0x79a308u: goto label_79a308;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a310u: goto label_79a310;
        case 0x79a314u: goto label_79a314;
        case 0x79a318u: goto label_79a318;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a320u: goto label_79a320;
        case 0x79a324u: goto label_79a324;
        case 0x79a328u: goto label_79a328;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a330u: goto label_79a330;
        case 0x79a334u: goto label_79a334;
        case 0x79a338u: goto label_79a338;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a340u: goto label_79a340;
        case 0x79a344u: goto label_79a344;
        case 0x79a348u: goto label_79a348;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a350u: goto label_79a350;
        case 0x79a354u: goto label_79a354;
        case 0x79a358u: goto label_79a358;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a360u: goto label_79a360;
        case 0x79a364u: goto label_79a364;
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3ccu: goto label_79a3cc;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3f4u: goto label_79a3f4;
        default: break;
    }

    ctx->pc = 0x799fa8u;

label_799fa8:
    // 0x799fa8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_799fac:
    // 0x799fac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799fb0:
    // 0x799fb0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_799fb4:
    // 0x799fb4: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_799fb8:
    // 0x799fb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x799fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_799fbc:
    // 0x799fbc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_799fc0:
    // 0x799fc0: 0x26048658  addiu       $a0, $s0, -0x79A8
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
label_799fc4:
    // 0x799fc4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_799fc8:
    // 0x799fc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fcc:
    // 0x799fcc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_799fd0:
    // 0x799fd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fd4:
    // 0x799fd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_799fd8:
    // 0x799fd8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x799fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_799fdc:
    // 0x799fdc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x799fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_799fe0:
    // 0x799fe0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x799fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_799fe4:
    // 0x799fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799fe8:
    // 0x799fe8: 0xc0afc42  jal         func_2BF108
label_799fec:
    if (ctx->pc == 0x799FECu) {
        ctx->pc = 0x799FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE8u;
        // 0x799fec: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF0u;
        goto label_799ff0;
    }
    ctx->pc = 0x799FE8u;
    SET_GPR_U32(ctx, 31, 0x799FF0u);
    ctx->pc = 0x799FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE8u;
    // 0x799fec: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799FE8u, 0x799FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF0u;
label_799ff0:
    // 0x799ff0: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799ff4:
    // 0x799ff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_799ff8:
    // 0x799ff8: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x799ff8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_799ffc:
    // 0x799ffc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a000:
    // 0x79a000: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_79a004:
    // 0x79a004: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_79a008:
    if (ctx->pc == 0x79A008u) {
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A00Cu;
        goto label_79a00c;
    }
    ctx->pc = 0x79A004u;
    {
        const bool branch_taken_0x79a004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a004) {
            ctx->pc = 0x79A02Cu;
            goto label_79a02c;
        }
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0xc1e6cde  jal         func_79B378
label_79a010:
    if (ctx->pc == 0x79A010u) {
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A014u;
        goto label_79a014;
    }
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B378u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a018:
    // 0x79a018: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a01c:
    // 0x79a01c: 0xc0b5692  jal         func_2D5A48
label_79a020:
    if (ctx->pc == 0x79A020u) {
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A024u;
        goto label_79a024;
    }
    ctx->pc = 0x79A01Cu;
    SET_GPR_U32(ctx, 31, 0x79A024u);
    ctx->pc = 0x79A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A01Cu;
    // 0x79a020: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A01Cu, 0x79A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_79a028:
    if (ctx->pc == 0x79A028u) {
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A02Cu;
        goto label_79a02c;
    }
    ctx->pc = 0x79A024u;
    {
        const bool branch_taken_0x79a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a024) {
            ctx->pc = 0x79A3C8u;
            goto label_79a3c8;
        }
    }
    ctx->pc = 0x79A02Cu;
label_79a02c:
    // 0x79a02c: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_79a030:
    // 0x79a030: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_79a034:
    // 0x79a034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_79a038:
    if (ctx->pc == 0x79A038u) {
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A03Cu;
        goto label_79a03c;
    }
    ctx->pc = 0x79A034u;
    {
        const bool branch_taken_0x79a034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a034) {
            ctx->pc = 0x79A068u;
            goto label_79a068;
        }
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a040:
    // 0x79a040: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
label_79a044:
    // 0x79a044: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a048:
    // 0x79a048: 0xc0b0fa2  jal         func_2C3E88
label_79a04c:
    if (ctx->pc == 0x79A04Cu) {
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A050u;
        goto label_79a050;
    }
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79a054:
    // 0x79a054: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_79a058:
    // 0x79a058: 0xc0a58dc  jal         func_296370
label_79a05c:
    if (ctx->pc == 0x79A05Cu) {
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A060u;
        goto label_79a060;
    }
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x1000002d  b           . + 4 + (0x2D << 2)
label_79a064:
    if (ctx->pc == 0x79A064u) {
        ctx->pc = 0x79A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A060u;
        // 0x79a064: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A068u;
        goto label_79a068;
    }
    ctx->pc = 0x79A060u;
    {
        const bool branch_taken_0x79a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A060u;
        // 0x79a064: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a060) {
            ctx->pc = 0x79A118u;
            goto label_79a118;
        }
    }
    ctx->pc = 0x79A068u;
label_79a068:
    // 0x79a068: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a06c:
    // 0x79a06c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_79a070:
    // 0x79a070: 0x2442c118  addiu       $v0, $v0, -0x3EE8
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
label_79a074:
    // 0x79a074: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_79a078:
    // 0x79a078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a07c:
    // 0x79a07c: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_79a080:
    // 0x79a080: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a084:
    // 0x79a084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a088:
    // 0x79a088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a08c:
    // 0x79a08c: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_79a090:
    // 0x79a090: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a094:
    // 0x79a094: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a098:
    if (ctx->pc == 0x79A098u) {
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A09Cu;
        goto label_79a09c;
    }
    ctx->pc = 0x79A094u;
    {
        const bool branch_taken_0x79a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a094) {
            ctx->pc = 0x79A0D0u;
            goto label_79a0d0;
        }
    }
    ctx->pc = 0x79A09Cu;
label_79a09c:
    // 0x79a09c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a0a0:
    // 0x79a0a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a0a4:
    // 0x79a0a4: 0x0  nop
    ctx->pc = 0x79a0a4u;
    // NOP
label_79a0a8:
    // 0x79a0a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a0ac:
    // 0x79a0ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a0b0:
    // 0x79a0b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a0b4:
    // 0x79a0b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a0b8:
    // 0x79a0b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a0b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a0bc:
    // 0x79a0bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a0c0:
    if (ctx->pc == 0x79A0C0u) {
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0C4u;
        goto label_79a0c4;
    }
    ctx->pc = 0x79A0BCu;
    {
        const bool branch_taken_0x79a0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0bc) {
            ctx->pc = 0x79A0D0u;
            goto label_79a0d0;
        }
    }
    ctx->pc = 0x79A0C4u;
label_79a0c4:
    // 0x79a0c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a0c8:
    // 0x79a0c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a0cc:
    if (ctx->pc == 0x79A0CCu) {
        ctx->pc = 0x79A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C8u;
        // 0x79a0cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D0u;
        goto label_79a0d0;
    }
    ctx->pc = 0x79A0C8u;
    {
        const bool branch_taken_0x79a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a0c8) {
            ctx->pc = 0x79A0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0C8u;
            // 0x79a0cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0a8;
        }
    }
    ctx->pc = 0x79A0D0u;
label_79a0d0:
    // 0x79a0d0: 0xc053f66  jal         func_14FD98
label_79a0d4:
    if (ctx->pc == 0x79A0D4u) {
        ctx->pc = 0x79A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D0u;
        // 0x79a0d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D8u;
        goto label_79a0d8;
    }
    ctx->pc = 0x79A0D0u;
    SET_GPR_U32(ctx, 31, 0x79A0D8u);
    ctx->pc = 0x79A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D0u;
    // 0x79a0d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A0D0u, 0x79A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D8u;
label_79a0d8:
    // 0x79a0d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_79a0dc:
    if (ctx->pc == 0x79A0DCu) {
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E0u;
        goto label_79a0e0;
    }
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0D8u;
            // 0x79a0dc: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0ECu;
            goto label_79a0ec;
        }
    }
    ctx->pc = 0x79A0E0u;
label_79a0e0:
    // 0x79a0e0: 0xc0c49c2  jal         func_312708
label_79a0e4:
    if (ctx->pc == 0x79A0E4u) {
        ctx->pc = 0x79A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E0u;
        // 0x79a0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E8u;
        goto label_79a0e8;
    }
    ctx->pc = 0x79A0E0u;
    SET_GPR_U32(ctx, 31, 0x79A0E8u);
    ctx->pc = 0x79A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E0u;
    // 0x79a0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x79A0E0u, 0x79A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E8u;
label_79a0e8:
    // 0x79a0e8: 0x8ea27a8c  lw          $v0, 0x7A8C($s5)
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
label_79a0ec:
    // 0x79a0ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79a0f0:
    // 0x79a0f0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_79a0f4:
    // 0x79a0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a0f8:
    // 0x79a0f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a0fc:
    // 0x79a0fc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a100:
    // 0x79a100: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_79a104:
    // 0x79a104: 0xc1e6af4  jal         func_79ABD0
label_79a108:
    if (ctx->pc == 0x79A108u) {
        ctx->pc = 0x79A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A104u;
        // 0x79a108: 0xaea27a8c  sw          $v0, 0x7A8C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A10Cu;
        goto label_79a10c;
    }
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0xaea27a8c  sw          $v0, 0x7A8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ABD0u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0xc1e6c88  jal         func_79B220
label_79a110:
    if (ctx->pc == 0x79A110u) {
        ctx->pc = 0x79A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A10Cu;
        // 0x79a110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A114u;
        goto label_79a114;
    }
    ctx->pc = 0x79A10Cu;
    SET_GPR_U32(ctx, 31, 0x79A114u);
    ctx->pc = 0x79A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A10Cu;
    // 0x79a110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B220u, 0x79A10Cu, 0x79A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A114u;
label_79a114:
    // 0x79a114: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_79a118:
    // 0x79a118: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_79a11c:
    if (ctx->pc == 0x79A11Cu) {
        ctx->pc = 0x79A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A118u;
        // 0x79a11c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A120u;
        goto label_79a120;
    }
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A118u;
        // 0x79a11c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a124:
    // 0x79a124: 0x2442c230  addiu       $v0, $v0, -0x3DD0
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
label_79a128:
    // 0x79a128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a12c:
    // 0x79a12c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a130:
    // 0x79a130: 0x800008  jr          $a0
label_79a134:
    if (ctx->pc == 0x79A134u) {
        ctx->pc = 0x79A138u;
        goto label_79a138;
    }
    ctx->pc = 0x79A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A138u: goto label_79a138;
            case 0x79A16Cu: goto label_79a16c;
            case 0x79A214u: goto label_79a214;
            case 0x79A244u: goto label_79a244;
            case 0x79A268u: goto label_79a268;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A130u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a13c:
    // 0x79a13c: 0xc0b0e6c  jal         func_2C39B0
label_79a140:
    if (ctx->pc == 0x79A140u) {
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A144u;
        goto label_79a144;
    }
    ctx->pc = 0x79A13Cu;
    SET_GPR_U32(ctx, 31, 0x79A144u);
    ctx->pc = 0x79A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A13Cu;
    // 0x79a140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A13Cu, 0x79A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0xc0b6dac  jal         func_2DB6B0
label_79a148:
    if (ctx->pc == 0x79A148u) {
        ctx->pc = 0x79A14Cu;
        goto label_79a14c;
    }
    ctx->pc = 0x79A144u;
    SET_GPR_U32(ctx, 31, 0x79A14Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A144u, 0x79A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A14Cu;
label_79a14c:
    // 0x79a14c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a150:
    // 0x79a150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a154:
    // 0x79a154: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_79a158:
    // 0x79a158: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79a15c:
    // 0x79a15c: 0xc0f809  jalr        $a2
label_79a160:
    if (ctx->pc == 0x79A160u) {
        ctx->pc = 0x79A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A15Cu;
        // 0x79a160: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A164u;
        goto label_79a164;
    }
    ctx->pc = 0x79A15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79A164u);
        ctx->pc = 0x79A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A15Cu;
        // 0x79a160: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A15Cu, 0x79A164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0x1000003e  b           . + 4 + (0x3E << 2)
label_79a168:
    if (ctx->pc == 0x79A168u) {
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A16Cu;
        goto label_79a16c;
    }
    ctx->pc = 0x79A164u;
    {
        const bool branch_taken_0x79a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a164) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A16Cu;
label_79a16c:
    // 0x79a16c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a170:
    // 0x79a170: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_79a174:
    // 0x79a174: 0x2442c118  addiu       $v0, $v0, -0x3EE8
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
label_79a178:
    // 0x79a178: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_79a17c:
    // 0x79a17c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a180:
    // 0x79a180: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_79a184:
    // 0x79a184: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a188:
    // 0x79a188: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a18c:
    // 0x79a18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a190:
    // 0x79a190: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a194:
    // 0x79a194: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a198:
    if (ctx->pc == 0x79A198u) {
        ctx->pc = 0x79A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A194u;
        // 0x79a198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A19Cu;
        goto label_79a19c;
    }
    ctx->pc = 0x79A194u;
    {
        const bool branch_taken_0x79a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A194u;
        // 0x79a198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a194) {
            ctx->pc = 0x79A1D0u;
            goto label_79a1d0;
        }
    }
    ctx->pc = 0x79A19Cu;
label_79a19c:
    // 0x79a19c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a1a0:
    // 0x79a1a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a1a4:
    // 0x79a1a4: 0x0  nop
    ctx->pc = 0x79a1a4u;
    // NOP
label_79a1a8:
    // 0x79a1a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a1ac:
    // 0x79a1ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a1b0:
    // 0x79a1b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a1b4:
    // 0x79a1b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a1b8:
    // 0x79a1b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a1bc:
    // 0x79a1bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a1c0:
    if (ctx->pc == 0x79A1C0u) {
        ctx->pc = 0x79A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1BCu;
        // 0x79a1c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C4u;
        goto label_79a1c4;
    }
    ctx->pc = 0x79A1BCu;
    {
        const bool branch_taken_0x79a1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1BCu;
        // 0x79a1c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1bc) {
            ctx->pc = 0x79A1D0u;
            goto label_79a1d0;
        }
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a1c8:
    // 0x79a1c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a1cc:
    if (ctx->pc == 0x79A1CCu) {
        ctx->pc = 0x79A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C8u;
        // 0x79a1cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D0u;
        goto label_79a1d0;
    }
    ctx->pc = 0x79A1C8u;
    {
        const bool branch_taken_0x79a1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1c8) {
            ctx->pc = 0x79A1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1C8u;
            // 0x79a1cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1a8;
        }
    }
    ctx->pc = 0x79A1D0u;
label_79a1d0:
    // 0x79a1d0: 0xc053f66  jal         func_14FD98
label_79a1d4:
    if (ctx->pc == 0x79A1D4u) {
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D8u;
        goto label_79a1d8;
    }
    ctx->pc = 0x79A1D0u;
    SET_GPR_U32(ctx, 31, 0x79A1D8u);
    ctx->pc = 0x79A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D0u;
    // 0x79a1d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A1D0u, 0x79A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_79a1dc:
    if (ctx->pc == 0x79A1DCu) {
        ctx->pc = 0x79A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D8u;
        // 0x79a1dc: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E0u;
        goto label_79a1e0;
    }
    ctx->pc = 0x79A1D8u;
    {
        const bool branch_taken_0x79a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1d8) {
            ctx->pc = 0x79A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1D8u;
            // 0x79a1dc: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1ECu;
            goto label_79a1ec;
        }
    }
    ctx->pc = 0x79A1E0u;
label_79a1e0:
    // 0x79a1e0: 0xc0c49c2  jal         func_312708
label_79a1e4:
    if (ctx->pc == 0x79A1E4u) {
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E8u;
        goto label_79a1e8;
    }
    ctx->pc = 0x79A1E0u;
    SET_GPR_U32(ctx, 31, 0x79A1E8u);
    ctx->pc = 0x79A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E0u;
    // 0x79a1e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x79A1E0u, 0x79A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E8u;
label_79a1e8:
    // 0x79a1e8: 0x8ea27a8c  lw          $v0, 0x7A8C($s5)
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
label_79a1ec:
    // 0x79a1ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79a1f0:
    // 0x79a1f0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_79a1f4:
    // 0x79a1f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f8:
    // 0x79a1f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a1fc:
    // 0x79a1fc: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_79a200:
    // 0x79a200: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_79a204:
    // 0x79a204: 0xc1e6af4  jal         func_79ABD0
label_79a208:
    if (ctx->pc == 0x79A208u) {
        ctx->pc = 0x79A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A204u;
        // 0x79a208: 0xaea27a8c  sw          $v0, 0x7A8C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A20Cu;
        goto label_79a20c;
    }
    ctx->pc = 0x79A204u;
    SET_GPR_U32(ctx, 31, 0x79A20Cu);
    ctx->pc = 0x79A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A204u;
    // 0x79a208: 0xaea27a8c  sw          $v0, 0x7A8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ABD0u, 0x79A204u, 0x79A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A20Cu;
label_79a20c:
    // 0x79a20c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_79a210:
    if (ctx->pc == 0x79A210u) {
        ctx->pc = 0x79A214u;
        goto label_79a214;
    }
    ctx->pc = 0x79A20Cu;
    {
        const bool branch_taken_0x79a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a20c) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0xc1e6c88  jal         func_79B220
label_79a218:
    if (ctx->pc == 0x79A218u) {
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A21Cu;
        goto label_79a21c;
    }
    ctx->pc = 0x79A214u;
    SET_GPR_U32(ctx, 31, 0x79A21Cu);
    ctx->pc = 0x79A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A214u;
    // 0x79a218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B220u, 0x79A214u, 0x79A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0x26c47470  addiu       $a0, $s6, 0x7470
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
label_79a220:
    // 0x79a220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a224:
    // 0x79a224: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a228:
    // 0x79a228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a22c:
    // 0x79a22c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_79a230:
    // 0x79a230: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a234:
    // 0x79a234: 0xc0c1c82  jal         func_307208
label_79a238:
    if (ctx->pc == 0x79A238u) {
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A23Cu;
        goto label_79a23c;
    }
    ctx->pc = 0x79A234u;
    SET_GPR_U32(ctx, 31, 0x79A23Cu);
    ctx->pc = 0x79A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A234u;
    // 0x79a238: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A234u, 0x79A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A23Cu;
label_79a23c:
    // 0x79a23c: 0x10000008  b           . + 4 + (0x8 << 2)
label_79a240:
    if (ctx->pc == 0x79A240u) {
        ctx->pc = 0x79A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A23Cu;
        // 0x79a240: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A244u;
        goto label_79a244;
    }
    ctx->pc = 0x79A23Cu;
    {
        const bool branch_taken_0x79a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A23Cu;
        // 0x79a240: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a23c) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A244u;
label_79a244:
    // 0x79a244: 0x26c27470  addiu       $v0, $s6, 0x7470
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
label_79a248:
    // 0x79a248: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x79a248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
label_79a24c:
    // 0x79a24c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_79a250:
    if (ctx->pc == 0x79A250u) {
        ctx->pc = 0x79A254u;
        goto label_79a254;
    }
    ctx->pc = 0x79A24Cu;
    {
        const bool branch_taken_0x79a24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a24c) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A254u;
label_79a254:
    // 0x79a254: 0xc0b0f04  jal         func_2C3C10
label_79a258:
    if (ctx->pc == 0x79A258u) {
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A25Cu;
        goto label_79a25c;
    }
    ctx->pc = 0x79A254u;
    SET_GPR_U32(ctx, 31, 0x79A25Cu);
    ctx->pc = 0x79A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A254u;
    // 0x79a258: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A254u, 0x79A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a260:
    // 0x79a260: 0x10000009  b           . + 4 + (0x9 << 2)
label_79a264:
    if (ctx->pc == 0x79A264u) {
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A268u;
        goto label_79a268;
    }
    ctx->pc = 0x79A260u;
    {
        const bool branch_taken_0x79a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a260) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A268u;
label_79a268:
    // 0x79a268: 0xc0a572a  jal         func_295CA8
label_79a26c:
    if (ctx->pc == 0x79A26Cu) {
        ctx->pc = 0x79A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A268u;
        // 0x79a26c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A270u;
        goto label_79a270;
    }
    ctx->pc = 0x79A268u;
    SET_GPR_U32(ctx, 31, 0x79A270u);
    ctx->pc = 0x79A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A268u;
    // 0x79a26c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A268u, 0x79A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79a274:
    if (ctx->pc == 0x79A274u) {
        ctx->pc = 0x79A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A270u;
        // 0x79a274: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A278u;
        goto label_79a278;
    }
    ctx->pc = 0x79A270u;
    {
        const bool branch_taken_0x79a270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A270u;
        // 0x79a274: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a270) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A278u;
label_79a278:
    // 0x79a278: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a27c:
    // 0x79a27c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a280:
    // 0x79a280: 0xc0b56a8  jal         func_2D5AA0
label_79a284:
    if (ctx->pc == 0x79A284u) {
        ctx->pc = 0x79A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A280u;
        // 0x79a284: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A288u;
        goto label_79a288;
    }
    ctx->pc = 0x79A280u;
    SET_GPR_U32(ctx, 31, 0x79A288u);
    ctx->pc = 0x79A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A280u;
    // 0x79a284: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A280u, 0x79A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A288u;
label_79a288:
    // 0x79a288: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_79a28c:
    if (ctx->pc == 0x79A28Cu) {
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A290u;
        goto label_79a290;
    }
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A2A4u;
            goto label_79a2a4;
        }
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a294:
    // 0x79a294: 0xc0b56a8  jal         func_2D5AA0
label_79a298:
    if (ctx->pc == 0x79A298u) {
        ctx->pc = 0x79A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A294u;
        // 0x79a298: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A29Cu;
        goto label_79a29c;
    }
    ctx->pc = 0x79A294u;
    SET_GPR_U32(ctx, 31, 0x79A29Cu);
    ctx->pc = 0x79A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A294u;
    // 0x79a298: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A294u, 0x79A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A29Cu;
label_79a29c:
    // 0x79a29c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
label_79a2a0:
    if (ctx->pc == 0x79A2A0u) {
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A4u;
        goto label_79a2a4;
    }
    ctx->pc = 0x79A29Cu;
    {
        const bool branch_taken_0x79a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a29c) {
            ctx->pc = 0x79A118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a118;
        }
    }
    ctx->pc = 0x79A2A4u;
label_79a2a4:
    // 0x79a2a4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a2a8:
    // 0x79a2a8: 0x26d07470  addiu       $s0, $s6, 0x7470
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
label_79a2ac:
    // 0x79a2ac: 0xc0b0fa2  jal         func_2C3E88
label_79a2b0:
    if (ctx->pc == 0x79A2B0u) {
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2B4u;
        goto label_79a2b4;
    }
    ctx->pc = 0x79A2ACu;
    SET_GPR_U32(ctx, 31, 0x79A2B4u);
    ctx->pc = 0x79A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ACu;
    // 0x79a2b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A2ACu, 0x79A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B4u;
label_79a2b4:
    // 0x79a2b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2b8:
    // 0x79a2b8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a2bc:
    // 0x79a2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2c0:
    // 0x79a2c0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a2c4:
    // 0x79a2c4: 0xc0b0e6c  jal         func_2C39B0
label_79a2c8:
    if (ctx->pc == 0x79A2C8u) {
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x3c172000  lui         $s7, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2CCu;
        goto label_79a2cc;
    }
    ctx->pc = 0x79A2C4u;
    SET_GPR_U32(ctx, 31, 0x79A2CCu);
    ctx->pc = 0x79A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2C4u;
    // 0x79a2c8: 0x3c172000  lui         $s7, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A2C4u, 0x79A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2CCu;
label_79a2cc:
    // 0x79a2cc: 0xc0b6dac  jal         func_2DB6B0
label_79a2d0:
    if (ctx->pc == 0x79A2D0u) {
        ctx->pc = 0x79A2D4u;
        goto label_79a2d4;
    }
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a2d8:
    // 0x79a2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2dc:
    // 0x79a2dc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_79a2e0:
    // 0x79a2e0: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79a2e4:
    // 0x79a2e4: 0xc0f809  jalr        $a2
label_79a2e8:
    if (ctx->pc == 0x79A2E8u) {
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2ECu;
        goto label_79a2ec;
    }
    ctx->pc = 0x79A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79A2ECu);
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2E4u, 0x79A2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a2f0:
    // 0x79a2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2f4:
    // 0x79a2f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a2f8:
    // 0x79a2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2fc:
    // 0x79a2fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a300:
    // 0x79a300: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79a304:
    // 0x79a304: 0xc0c1c82  jal         func_307208
label_79a308:
    if (ctx->pc == 0x79A308u) {
        ctx->pc = 0x79A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A304u;
        // 0x79a308: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A30Cu;
        goto label_79a30c;
    }
    ctx->pc = 0x79A304u;
    SET_GPR_U32(ctx, 31, 0x79A30Cu);
    ctx->pc = 0x79A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A304u;
    // 0x79a308: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A304u, 0x79A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a310:
    // 0x79a310: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_79a314:
    if (ctx->pc == 0x79A314u) {
        ctx->pc = 0x79A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A310u;
        // 0x79a314: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A318u;
        goto label_79a318;
    }
    ctx->pc = 0x79A310u;
    {
        const bool branch_taken_0x79a310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A310u;
        // 0x79a314: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a310) {
            ctx->pc = 0x79A354u;
            goto label_79a354;
        }
    }
    ctx->pc = 0x79A318u;
label_79a318:
    // 0x79a318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79a31c:
    if (ctx->pc == 0x79A31Cu) {
        ctx->pc = 0x79A320u;
        goto label_79a320;
    }
    ctx->pc = 0x79A318u;
    {
        const bool branch_taken_0x79a318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a318) {
            ctx->pc = 0x79A330u;
            goto label_79a330;
        }
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_79a324:
    if (ctx->pc == 0x79A324u) {
        ctx->pc = 0x79A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A320u;
        // 0x79a324: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A328u;
        goto label_79a328;
    }
    ctx->pc = 0x79A320u;
    {
        const bool branch_taken_0x79a320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A320u;
        // 0x79a324: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a320) {
            ctx->pc = 0x79A340u;
            goto label_79a340;
        }
    }
    ctx->pc = 0x79A328u;
label_79a328:
    // 0x79a328: 0x1000001a  b           . + 4 + (0x1A << 2)
label_79a32c:
    if (ctx->pc == 0x79A32Cu) {
        ctx->pc = 0x79A330u;
        goto label_79a330;
    }
    ctx->pc = 0x79A328u;
    {
        const bool branch_taken_0x79a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a328) {
            ctx->pc = 0x79A394u;
            goto label_79a394;
        }
    }
    ctx->pc = 0x79A330u;
label_79a330:
    // 0x79a330: 0x123e000d  beq         $s1, $fp, . + 4 + (0xD << 2)
label_79a334:
    if (ctx->pc == 0x79A334u) {
        ctx->pc = 0x79A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A330u;
        // 0x79a334: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A338u;
        goto label_79a338;
    }
    ctx->pc = 0x79A330u;
    {
        const bool branch_taken_0x79a330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 30));
        ctx->pc = 0x79A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A330u;
        // 0x79a334: 0x8ea27a8c  lw          $v0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a330) {
            ctx->pc = 0x79A368u;
            goto label_79a368;
        }
    }
    ctx->pc = 0x79A338u;
label_79a338:
    // 0x79a338: 0x10000016  b           . + 4 + (0x16 << 2)
label_79a33c:
    if (ctx->pc == 0x79A33Cu) {
        ctx->pc = 0x79A340u;
        goto label_79a340;
    }
    ctx->pc = 0x79A338u;
    {
        const bool branch_taken_0x79a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a338) {
            ctx->pc = 0x79A394u;
            goto label_79a394;
        }
    }
    ctx->pc = 0x79A340u;
label_79a340:
    // 0x79a340: 0x24637470  addiu       $v1, $v1, 0x7470
    ctx->pc = 0x79a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
label_79a344:
    // 0x79a344: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x79a344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_79a348:
    // 0x79a348: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_79a34c:
    // 0x79a34c: 0x10000011  b           . + 4 + (0x11 << 2)
label_79a350:
    if (ctx->pc == 0x79A350u) {
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A354u;
        goto label_79a354;
    }
    ctx->pc = 0x79A34Cu;
    {
        const bool branch_taken_0x79a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a34c) {
            ctx->pc = 0x79A394u;
            goto label_79a394;
        }
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a358:
    // 0x79a358: 0xc1e6cde  jal         func_79B378
label_79a35c:
    if (ctx->pc == 0x79A35Cu) {
        ctx->pc = 0x79A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A358u;
        // 0x79a35c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A360u;
        goto label_79a360;
    }
    ctx->pc = 0x79A358u;
    SET_GPR_U32(ctx, 31, 0x79A360u);
    ctx->pc = 0x79A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A358u;
    // 0x79a35c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B378u, 0x79A358u, 0x79A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A360u;
label_79a360:
    // 0x79a360: 0x1000000c  b           . + 4 + (0xC << 2)
label_79a364:
    if (ctx->pc == 0x79A364u) {
        ctx->pc = 0x79A368u;
        goto label_79a368;
    }
    ctx->pc = 0x79A360u;
    {
        const bool branch_taken_0x79a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a360) {
            ctx->pc = 0x79A394u;
            goto label_79a394;
        }
    }
    ctx->pc = 0x79A368u;
label_79a368:
    // 0x79a368: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x79a368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_79a36c:
    // 0x79a36c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_79a370:
    if (ctx->pc == 0x79A370u) {
        ctx->pc = 0x79A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A36Cu;
        // 0x79a370: 0x26c47470  addiu       $a0, $s6, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A374u;
        goto label_79a374;
    }
    ctx->pc = 0x79A36Cu;
    {
        const bool branch_taken_0x79a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A36Cu;
        // 0x79a370: 0x26c47470  addiu       $a0, $s6, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a36c) {
            ctx->pc = 0x79A394u;
            goto label_79a394;
        }
    }
    ctx->pc = 0x79A374u;
label_79a374:
    // 0x79a374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a378:
    // 0x79a378: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a37c:
    // 0x79a37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a380:
    // 0x79a380: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79a380u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_79a384:
    // 0x79a384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a388:
    // 0x79a388: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a38c:
    // 0x79a38c: 0xc0c1c82  jal         func_307208
label_79a390:
    if (ctx->pc == 0x79A390u) {
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A394u;
        goto label_79a394;
    }
    ctx->pc = 0x79A38Cu;
    SET_GPR_U32(ctx, 31, 0x79A394u);
    ctx->pc = 0x79A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A38Cu;
    // 0x79a390: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A38Cu, 0x79A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_79a398:
    if (ctx->pc == 0x79A398u) {
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A39Cu;
        goto label_79a39c;
    }
    ctx->pc = 0x79A394u;
    {
        const bool branch_taken_0x79a394 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a394) {
            ctx->pc = 0x79A3B0u;
            goto label_79a3b0;
        }
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a3a0:
    // 0x79a3a0: 0xc0b56a8  jal         func_2D5AA0
label_79a3a4:
    if (ctx->pc == 0x79A3A4u) {
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A8u;
        goto label_79a3a8;
    }
    ctx->pc = 0x79A3A0u;
    SET_GPR_U32(ctx, 31, 0x79A3A8u);
    ctx->pc = 0x79A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A0u;
    // 0x79a3a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3A0u, 0x79A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_79a3ac:
    if (ctx->pc == 0x79A3ACu) {
        ctx->pc = 0x79A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A8u;
        // 0x79a3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B0u;
        goto label_79a3b0;
    }
    ctx->pc = 0x79A3A8u;
    {
        const bool branch_taken_0x79a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A8u;
        // 0x79a3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a8) {
            ctx->pc = 0x79A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a310;
        }
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0xc0b0f04  jal         func_2C3C10
label_79a3b4:
    if (ctx->pc == 0x79A3B4u) {
        ctx->pc = 0x79A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B0u;
        // 0x79a3b4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B8u;
        goto label_79a3b8;
    }
    ctx->pc = 0x79A3B0u;
    SET_GPR_U32(ctx, 31, 0x79A3B8u);
    ctx->pc = 0x79A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B0u;
    // 0x79a3b4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A3B0u, 0x79A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a3bc:
    // 0x79a3bc: 0xc0b5692  jal         func_2D5A48
label_79a3c0:
    if (ctx->pc == 0x79A3C0u) {
        ctx->pc = 0x79A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3BCu;
        // 0x79a3c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3C4u;
        goto label_79a3c4;
    }
    ctx->pc = 0x79A3BCu;
    SET_GPR_U32(ctx, 31, 0x79A3C4u);
    ctx->pc = 0x79A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3BCu;
    // 0x79a3c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A3BCu, 0x79A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C4u;
label_79a3c4:
    // 0x79a3c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79a3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a3c8:
    // 0x79a3c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79a3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a3cc:
    // 0x79a3cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79a3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a3d0:
    // 0x79a3d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79a3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a3d4:
    // 0x79a3d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x79a3d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a3d8:
    // 0x79a3d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79a3d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a3dc:
    // 0x79a3dc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x79a3dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a3e0:
    // 0x79a3e0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x79a3e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a3e4:
    // 0x79a3e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x79a3e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a3e8:
    // 0x79a3e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a3ec:
    // 0x79a3ec: 0x3e00008  jr          $ra
label_79a3f0:
    if (ctx->pc == 0x79A3F0u) {
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3F4u;
        goto label_79a3f4;
    }
    ctx->pc = 0x79A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3F4u;
label_79a3f4:
    // 0x79a3f4: 0x0  nop
    ctx->pc = 0x79a3f4u;
    // NOP
    ctx->pc = 0x79a3f8u;
}
} // namespace gh_r700
