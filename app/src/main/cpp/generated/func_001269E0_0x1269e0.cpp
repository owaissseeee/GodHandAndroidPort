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

// Function: func_001269E0
// Address: 0x1269e0 - 0x129430
void func_001269E0_0x1269e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001269E0_0x1269e0");
#endif

    switch (ctx->pc) {
        case 0x126a74u: goto label_126a74;
        case 0x126a90u: goto label_126a90;
        case 0x126af0u: goto label_126af0;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b88u: goto label_126b88;
        case 0x126be8u: goto label_126be8;
        case 0x126c04u: goto label_126c04;
        case 0x126c64u: goto label_126c64;
        case 0x126c80u: goto label_126c80;
        case 0x126ce0u: goto label_126ce0;
        case 0x126cfcu: goto label_126cfc;
        case 0x126d5cu: goto label_126d5c;
        case 0x126d80u: goto label_126d80;
        case 0x126de0u: goto label_126de0;
        case 0x126dfcu: goto label_126dfc;
        case 0x126e5cu: goto label_126e5c;
        case 0x126e78u: goto label_126e78;
        case 0x126ed8u: goto label_126ed8;
        case 0x126ef4u: goto label_126ef4;
        case 0x126f54u: goto label_126f54;
        case 0x126f78u: goto label_126f78;
        case 0x126fd8u: goto label_126fd8;
        case 0x126ffcu: goto label_126ffc;
        case 0x12705cu: goto label_12705c;
        case 0x127078u: goto label_127078;
        case 0x1270d8u: goto label_1270d8;
        case 0x1270f4u: goto label_1270f4;
        case 0x127154u: goto label_127154;
        case 0x127170u: goto label_127170;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271ecu: goto label_1271ec;
        case 0x12724cu: goto label_12724c;
        case 0x127268u: goto label_127268;
        case 0x1272c8u: goto label_1272c8;
        case 0x1272e4u: goto label_1272e4;
        case 0x127344u: goto label_127344;
        case 0x127360u: goto label_127360;
        case 0x1273c0u: goto label_1273c0;
        case 0x1273dcu: goto label_1273dc;
        case 0x12743cu: goto label_12743c;
        case 0x127458u: goto label_127458;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274dcu: goto label_1274dc;
        case 0x12753cu: goto label_12753c;
        case 0x127558u: goto label_127558;
        case 0x1275b8u: goto label_1275b8;
        case 0x1275dcu: goto label_1275dc;
        case 0x12763cu: goto label_12763c;
        case 0x127660u: goto label_127660;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276ecu: goto label_1276ec;
        case 0x12774cu: goto label_12774c;
        case 0x127768u: goto label_127768;
        case 0x1277c8u: goto label_1277c8;
        case 0x1277e4u: goto label_1277e4;
        case 0x127844u: goto label_127844;
        case 0x127868u: goto label_127868;
        case 0x1278d0u: goto label_1278d0;
        case 0x1278f4u: goto label_1278f4;
        case 0x12795cu: goto label_12795c;
        case 0x127978u: goto label_127978;
        case 0x1279d8u: goto label_1279d8;
        case 0x1279f4u: goto label_1279f4;
        case 0x127a6cu: goto label_127a6c;
        case 0x127a90u: goto label_127a90;
        case 0x127b04u: goto label_127b04;
        case 0x127b20u: goto label_127b20;
        case 0x127b40u: goto label_127b40;
        case 0x127b5cu: goto label_127b5c;
        case 0x127bbcu: goto label_127bbc;
        case 0x127be0u: goto label_127be0;
        case 0x127c40u: goto label_127c40;
        case 0x127c64u: goto label_127c64;
        case 0x127cc4u: goto label_127cc4;
        case 0x127ce0u: goto label_127ce0;
        case 0x127d40u: goto label_127d40;
        case 0x127d5cu: goto label_127d5c;
        case 0x127dbcu: goto label_127dbc;
        case 0x127dd8u: goto label_127dd8;
        case 0x127e38u: goto label_127e38;
        case 0x127e54u: goto label_127e54;
        case 0x127eb4u: goto label_127eb4;
        case 0x127ed0u: goto label_127ed0;
        case 0x127f30u: goto label_127f30;
        case 0x127f4cu: goto label_127f4c;
        case 0x127facu: goto label_127fac;
        case 0x127fc8u: goto label_127fc8;
        case 0x128028u: goto label_128028;
        case 0x128044u: goto label_128044;
        case 0x1280a4u: goto label_1280a4;
        case 0x1280c0u: goto label_1280c0;
        case 0x128120u: goto label_128120;
        case 0x128144u: goto label_128144;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281c0u: goto label_1281c0;
        case 0x128220u: goto label_128220;
        case 0x12823cu: goto label_12823c;
        case 0x12828cu: goto label_12828c;
        case 0x1282b8u: goto label_1282b8;
        case 0x1282d4u: goto label_1282d4;
        case 0x128334u: goto label_128334;
        case 0x128350u: goto label_128350;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283ccu: goto label_1283cc;
        case 0x12842cu: goto label_12842c;
        case 0x128448u: goto label_128448;
        case 0x1284a8u: goto label_1284a8;
        case 0x1284c4u: goto label_1284c4;
        case 0x128524u: goto label_128524;
        case 0x128540u: goto label_128540;
        case 0x1285a0u: goto label_1285a0;
        case 0x1285bcu: goto label_1285bc;
        case 0x12861cu: goto label_12861c;
        case 0x128638u: goto label_128638;
        case 0x128698u: goto label_128698;
        case 0x1286bcu: goto label_1286bc;
        case 0x12871cu: goto label_12871c;
        case 0x128738u: goto label_128738;
        case 0x12879cu: goto label_12879c;
        case 0x1287b8u: goto label_1287b8;
        case 0x128818u: goto label_128818;
        case 0x128834u: goto label_128834;
        case 0x128894u: goto label_128894;
        case 0x1288b0u: goto label_1288b0;
        case 0x128924u: goto label_128924;
        case 0x128948u: goto label_128948;
        case 0x1289a8u: goto label_1289a8;
        case 0x1289ccu: goto label_1289cc;
        case 0x128a2cu: goto label_128a2c;
        case 0x128a48u: goto label_128a48;
        case 0x128ab8u: goto label_128ab8;
        case 0x128ad4u: goto label_128ad4;
        case 0x128b34u: goto label_128b34;
        case 0x128b50u: goto label_128b50;
        case 0x128bb0u: goto label_128bb0;
        case 0x128bccu: goto label_128bcc;
        case 0x128c3cu: goto label_128c3c;
        case 0x128c58u: goto label_128c58;
        case 0x128cb8u: goto label_128cb8;
        case 0x128cd4u: goto label_128cd4;
        case 0x128d44u: goto label_128d44;
        case 0x128d60u: goto label_128d60;
        case 0x128dc0u: goto label_128dc0;
        case 0x128ddcu: goto label_128ddc;
        case 0x128e4cu: goto label_128e4c;
        case 0x128e68u: goto label_128e68;
        case 0x128ec8u: goto label_128ec8;
        case 0x128ee4u: goto label_128ee4;
        case 0x128f44u: goto label_128f44;
        case 0x128f60u: goto label_128f60;
        case 0x128fc0u: goto label_128fc0;
        case 0x128fdcu: goto label_128fdc;
        case 0x12904cu: goto label_12904c;
        case 0x129068u: goto label_129068;
        case 0x1290d8u: goto label_1290d8;
        case 0x1290f4u: goto label_1290f4;
        case 0x129164u: goto label_129164;
        case 0x129188u: goto label_129188;
        case 0x1291e8u: goto label_1291e8;
        case 0x12920cu: goto label_12920c;
        case 0x12926cu: goto label_12926c;
        case 0x129288u: goto label_129288;
        case 0x1292e8u: goto label_1292e8;
        case 0x129304u: goto label_129304;
        case 0x129364u: goto label_129364;
        case 0x129380u: goto label_129380;
        case 0x1293ecu: goto label_1293ec;
        case 0x12940cu: goto label_12940c;
        default: break;
    }

    ctx->pc = 0x1269e0u;

    // 0x1269e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1269e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1269e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1269e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1269e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1269ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1269ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1269f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1269f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269f4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1269f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1269f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1269f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1269fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x126a00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x126a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x126a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126a08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x126a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x126a0c: 0x965005f2  lhu         $s0, 0x5F2($s2)
    ctx->pc = 0x126a0cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1522)));
    // 0x126a10: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x126a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126a14: 0x53800b  movn        $s0, $v0, $s3
    ctx->pc = 0x126a14u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x126a18: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x126a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x126a1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x126a20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126a24: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126A24u;
    {
        const bool branch_taken_0x126a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x126A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A24u;
        // 0x126a28: 0x2ca20072  sltiu       $v0, $a1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a24) {
            ctx->pc = 0x126A34u;
            goto label_126a34;
        }
    }
    ctx->pc = 0x126A2Cu;
    // 0x126a2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x126a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x126a30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_126a34:
    // 0x126a34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126A34u;
    {
        const bool branch_taken_0x126a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A34u;
        // 0x126a38: 0xa2401684  sb          $zero, 0x1684($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a34) {
            ctx->pc = 0x126A58u;
            goto label_126a58;
        }
    }
    ctx->pc = 0x126A3Cu;
    // 0x126a3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x126a40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x126a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x126a44: 0x2442cb80  addiu       $v0, $v0, -0x3480
    ctx->pc = 0x126a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953856));
    // 0x126a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x126a4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126a50: 0x800008  jr          $a0
    ctx->pc = 0x126A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126A58u: goto label_126a58;
            case 0x126AD4u: goto label_126ad4;
            case 0x126B50u: goto label_126b50;
            case 0x126BCCu: goto label_126bcc;
            case 0x126C48u: goto label_126c48;
            case 0x126CC4u: goto label_126cc4;
            case 0x126D40u: goto label_126d40;
            case 0x126DC4u: goto label_126dc4;
            case 0x126E40u: goto label_126e40;
            case 0x126EBCu: goto label_126ebc;
            case 0x126F38u: goto label_126f38;
            case 0x126FBCu: goto label_126fbc;
            case 0x127040u: goto label_127040;
            case 0x1270BCu: goto label_1270bc;
            case 0x127138u: goto label_127138;
            case 0x1271B4u: goto label_1271b4;
            case 0x127230u: goto label_127230;
            case 0x1272ACu: goto label_1272ac;
            case 0x127328u: goto label_127328;
            case 0x1273A4u: goto label_1273a4;
            case 0x127420u: goto label_127420;
            case 0x12749Cu: goto label_12749c;
            case 0x127520u: goto label_127520;
            case 0x12759Cu: goto label_12759c;
            case 0x127620u: goto label_127620;
            case 0x1276B4u: goto label_1276b4;
            case 0x127730u: goto label_127730;
            case 0x1277ACu: goto label_1277ac;
            case 0x127828u: goto label_127828;
            case 0x1278B4u: goto label_1278b4;
            case 0x127940u: goto label_127940;
            case 0x1279BCu: goto label_1279bc;
            case 0x127A50u: goto label_127a50;
            case 0x127AD4u: goto label_127ad4;
            case 0x127BA0u: goto label_127ba0;
            case 0x127C24u: goto label_127c24;
            case 0x127CA8u: goto label_127ca8;
            case 0x127D24u: goto label_127d24;
            case 0x127DA0u: goto label_127da0;
            case 0x127E1Cu: goto label_127e1c;
            case 0x127E98u: goto label_127e98;
            case 0x127F14u: goto label_127f14;
            case 0x127F90u: goto label_127f90;
            case 0x12800Cu: goto label_12800c;
            case 0x128088u: goto label_128088;
            case 0x128104u: goto label_128104;
            case 0x128188u: goto label_128188;
            case 0x128204u: goto label_128204;
            case 0x12829Cu: goto label_12829c;
            case 0x128318u: goto label_128318;
            case 0x128394u: goto label_128394;
            case 0x128410u: goto label_128410;
            case 0x12848Cu: goto label_12848c;
            case 0x128508u: goto label_128508;
            case 0x128584u: goto label_128584;
            case 0x128600u: goto label_128600;
            case 0x12867Cu: goto label_12867c;
            case 0x128700u: goto label_128700;
            case 0x128780u: goto label_128780;
            case 0x1287FCu: goto label_1287fc;
            case 0x128878u: goto label_128878;
            case 0x128908u: goto label_128908;
            case 0x12898Cu: goto label_12898c;
            case 0x128A10u: goto label_128a10;
            case 0x128A9Cu: goto label_128a9c;
            case 0x128B18u: goto label_128b18;
            case 0x128B94u: goto label_128b94;
            case 0x128C20u: goto label_128c20;
            case 0x128C9Cu: goto label_128c9c;
            case 0x128D28u: goto label_128d28;
            case 0x128DA4u: goto label_128da4;
            case 0x128E30u: goto label_128e30;
            case 0x128EACu: goto label_128eac;
            case 0x128F28u: goto label_128f28;
            case 0x128FA4u: goto label_128fa4;
            case 0x129030u: goto label_129030;
            case 0x1290BCu: goto label_1290bc;
            case 0x129148u: goto label_129148;
            case 0x1291CCu: goto label_1291cc;
            case 0x129250u: goto label_129250;
            case 0x1292CCu: goto label_1292cc;
            case 0x129348u: goto label_129348;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126A58u;
label_126a58:
    // 0x126a58: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a64: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126a68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a6c: 0xc042902  jal         func_10A408
    ctx->pc = 0x126A6Cu;
    SET_GPR_U32(ctx, 31, 0x126A74u);
    ctx->pc = 0x126A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A6Cu;
    // 0x126a70: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126A6Cu, 0x126A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A74u;
label_126a74:
    // 0x126a74: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a80: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126a84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a88: 0xc042908  jal         func_10A420
    ctx->pc = 0x126A88u;
    SET_GPR_U32(ctx, 31, 0x126A90u);
    ctx->pc = 0x126A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A88u;
    // 0x126a8c: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126A88u, 0x126A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A90u;
label_126a90:
    // 0x126a90: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126A90u;
    {
        const bool branch_taken_0x126a90 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A90u;
        // 0x126a94: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a90) {
            ctx->pc = 0x126AACu;
            goto label_126aac;
        }
    }
    ctx->pc = 0x126A98u;
    // 0x126a98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126A98u;
    {
        const bool branch_taken_0x126a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126a98) {
            ctx->pc = 0x126A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126A98u;
            // 0x126a9c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126ABCu;
            goto label_126abc;
        }
    }
    ctx->pc = 0x126AA0u;
    // 0x126aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126aa4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126AA4u;
    {
        const bool branch_taken_0x126aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126aa4) {
            ctx->pc = 0x126AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126AA4u;
            // 0x126aa8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AC8u;
            goto label_126ac8;
        }
    }
    ctx->pc = 0x126AACu;
label_126aac:
    // 0x126aac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126ab0: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126ab4: 0x10000a42  b           . + 4 + (0xA42 << 2)
    ctx->pc = 0x126AB4u;
    {
        const bool branch_taken_0x126ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AB4u;
        // 0x126ab8: 0x8c4400e4  lw          $a0, 0xE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ab4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126ABCu;
label_126abc:
    // 0x126abc: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126ac0: 0x10000a3f  b           . + 4 + (0xA3F << 2)
    ctx->pc = 0x126AC0u;
    {
        const bool branch_taken_0x126ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AC0u;
        // 0x126ac4: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ac0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126AC8u;
label_126ac8:
    // 0x126ac8: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126acc: 0x10000a3c  b           . + 4 + (0xA3C << 2)
    ctx->pc = 0x126ACCu;
    {
        const bool branch_taken_0x126acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ACCu;
        // 0x126ad0: 0x8c4400ec  lw          $a0, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126acc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126AD4u;
label_126ad4:
    // 0x126ad4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ae0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ae8: 0xc042902  jal         func_10A408
    ctx->pc = 0x126AE8u;
    SET_GPR_U32(ctx, 31, 0x126AF0u);
    ctx->pc = 0x126AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AE8u;
    // 0x126aec: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126AE8u, 0x126AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AF0u;
label_126af0:
    // 0x126af0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126afc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b04: 0xc042908  jal         func_10A420
    ctx->pc = 0x126B04u;
    SET_GPR_U32(ctx, 31, 0x126B0Cu);
    ctx->pc = 0x126B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B04u;
    // 0x126b08: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126B04u, 0x126B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B0Cu;
label_126b0c:
    // 0x126b0c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126B0Cu;
    {
        const bool branch_taken_0x126b0c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B0Cu;
        // 0x126b10: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b0c) {
            ctx->pc = 0x126B28u;
            goto label_126b28;
        }
    }
    ctx->pc = 0x126B14u;
    // 0x126b14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B14u;
            // 0x126b18: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B38u;
            goto label_126b38;
        }
    }
    ctx->pc = 0x126B1Cu;
    // 0x126b1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126b20: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126B20u;
    {
        const bool branch_taken_0x126b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126b20) {
            ctx->pc = 0x126B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B20u;
            // 0x126b24: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B44u;
            goto label_126b44;
        }
    }
    ctx->pc = 0x126B28u;
label_126b28:
    // 0x126b28: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126b2c: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126b30: 0x10000a23  b           . + 4 + (0xA23 << 2)
    ctx->pc = 0x126B30u;
    {
        const bool branch_taken_0x126b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B30u;
        // 0x126b34: 0x8c440984  lw          $a0, 0x984($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b30) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126B38u;
label_126b38:
    // 0x126b38: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126b3c: 0x10000a20  b           . + 4 + (0xA20 << 2)
    ctx->pc = 0x126B3Cu;
    {
        const bool branch_taken_0x126b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B3Cu;
        // 0x126b40: 0x8c440984  lw          $a0, 0x984($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b3c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126B44u;
label_126b44:
    // 0x126b44: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x126b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x126b48: 0x10000a1d  b           . + 4 + (0xA1D << 2)
    ctx->pc = 0x126B48u;
    {
        const bool branch_taken_0x126b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B48u;
        // 0x126b4c: 0x8c440988  lw          $a0, 0x988($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b48) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126B50u;
label_126b50:
    // 0x126b50: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b5c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126b60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b64: 0xc042902  jal         func_10A408
    ctx->pc = 0x126B64u;
    SET_GPR_U32(ctx, 31, 0x126B6Cu);
    ctx->pc = 0x126B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B64u;
    // 0x126b68: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126B64u, 0x126B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B6Cu;
label_126b6c:
    // 0x126b6c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126b7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b80: 0xc042908  jal         func_10A420
    ctx->pc = 0x126B80u;
    SET_GPR_U32(ctx, 31, 0x126B88u);
    ctx->pc = 0x126B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B80u;
    // 0x126b84: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126B80u, 0x126B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B88u;
label_126b88:
    // 0x126b88: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126B88u;
    {
        const bool branch_taken_0x126b88 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B88u;
        // 0x126b8c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b88) {
            ctx->pc = 0x126BA4u;
            goto label_126ba4;
        }
    }
    ctx->pc = 0x126B90u;
    // 0x126b90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126B90u;
    {
        const bool branch_taken_0x126b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b90) {
            ctx->pc = 0x126B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B90u;
            // 0x126b94: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126BB4u;
            goto label_126bb4;
        }
    }
    ctx->pc = 0x126B98u;
    // 0x126b98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126b9c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126B9Cu;
    {
        const bool branch_taken_0x126b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126b9c) {
            ctx->pc = 0x126BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B9Cu;
            // 0x126ba0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126BC0u;
            goto label_126bc0;
        }
    }
    ctx->pc = 0x126BA4u;
label_126ba4:
    // 0x126ba4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126ba8: 0x8c430860  lw          $v1, 0x860($v0)
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2144)));
    // 0x126bac: 0x10000a04  b           . + 4 + (0xA04 << 2)
    ctx->pc = 0x126BACu;
    {
        const bool branch_taken_0x126bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BACu;
        // 0x126bb0: 0x8c440864  lw          $a0, 0x864($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bac) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126BB4u;
label_126bb4:
    // 0x126bb4: 0x8c430860  lw          $v1, 0x860($v0)
    ctx->pc = 0x126bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2144)));
    // 0x126bb8: 0x10000a01  b           . + 4 + (0xA01 << 2)
    ctx->pc = 0x126BB8u;
    {
        const bool branch_taken_0x126bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BB8u;
        // 0x126bbc: 0x8c440868  lw          $a0, 0x868($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bb8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126BC0u;
label_126bc0:
    // 0x126bc0: 0x8c430860  lw          $v1, 0x860($v0)
    ctx->pc = 0x126bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2144)));
    // 0x126bc4: 0x100009fe  b           . + 4 + (0x9FE << 2)
    ctx->pc = 0x126BC4u;
    {
        const bool branch_taken_0x126bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BC4u;
        // 0x126bc8: 0x8c44086c  lw          $a0, 0x86C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bc4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126BCCu;
label_126bcc:
    // 0x126bcc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bd8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126be0: 0xc042902  jal         func_10A408
    ctx->pc = 0x126BE0u;
    SET_GPR_U32(ctx, 31, 0x126BE8u);
    ctx->pc = 0x126BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BE0u;
    // 0x126be4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126BE0u, 0x126BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BE8u;
label_126be8:
    // 0x126be8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bf4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126bf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bfc: 0xc042908  jal         func_10A420
    ctx->pc = 0x126BFCu;
    SET_GPR_U32(ctx, 31, 0x126C04u);
    ctx->pc = 0x126C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BFCu;
    // 0x126c00: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126BFCu, 0x126C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C04u;
label_126c04:
    // 0x126c04: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126C04u;
    {
        const bool branch_taken_0x126c04 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C04u;
        // 0x126c08: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c04) {
            ctx->pc = 0x126C20u;
            goto label_126c20;
        }
    }
    ctx->pc = 0x126C0Cu;
    // 0x126c0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C0Cu;
    {
        const bool branch_taken_0x126c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c0c) {
            ctx->pc = 0x126C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C0Cu;
            // 0x126c10: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C30u;
            goto label_126c30;
        }
    }
    ctx->pc = 0x126C14u;
    // 0x126c14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126c18: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C18u;
    {
        const bool branch_taken_0x126c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126c18) {
            ctx->pc = 0x126C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C18u;
            // 0x126c1c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C3Cu;
            goto label_126c3c;
        }
    }
    ctx->pc = 0x126C20u;
label_126c20:
    // 0x126c20: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126c24: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126c28: 0x100009e5  b           . + 4 + (0x9E5 << 2)
    ctx->pc = 0x126C28u;
    {
        const bool branch_taken_0x126c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C28u;
        // 0x126c2c: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c28) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126C30u;
label_126c30:
    // 0x126c30: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126c34: 0x100009e2  b           . + 4 + (0x9E2 << 2)
    ctx->pc = 0x126C34u;
    {
        const bool branch_taken_0x126c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C34u;
        // 0x126c38: 0x8c44008c  lw          $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c34) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126C3Cu;
label_126c3c:
    // 0x126c3c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126c40: 0x100009df  b           . + 4 + (0x9DF << 2)
    ctx->pc = 0x126C40u;
    {
        const bool branch_taken_0x126c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C40u;
        // 0x126c44: 0x8c440090  lw          $a0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c40) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126C48u;
label_126c48:
    // 0x126c48: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c54: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126c58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c5c: 0xc042902  jal         func_10A408
    ctx->pc = 0x126C5Cu;
    SET_GPR_U32(ctx, 31, 0x126C64u);
    ctx->pc = 0x126C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C5Cu;
    // 0x126c60: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126C5Cu, 0x126C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C64u;
label_126c64:
    // 0x126c64: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c70: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c78: 0xc042908  jal         func_10A420
    ctx->pc = 0x126C78u;
    SET_GPR_U32(ctx, 31, 0x126C80u);
    ctx->pc = 0x126C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C78u;
    // 0x126c7c: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126C78u, 0x126C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C80u;
label_126c80:
    // 0x126c80: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126C80u;
    {
        const bool branch_taken_0x126c80 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C80u;
        // 0x126c84: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c80) {
            ctx->pc = 0x126C9Cu;
            goto label_126c9c;
        }
    }
    ctx->pc = 0x126C88u;
    // 0x126c88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C88u;
    {
        const bool branch_taken_0x126c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c88) {
            ctx->pc = 0x126C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C88u;
            // 0x126c8c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CACu;
            goto label_126cac;
        }
    }
    ctx->pc = 0x126C90u;
    // 0x126c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126c94: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C94u;
    {
        const bool branch_taken_0x126c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126c94) {
            ctx->pc = 0x126C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C94u;
            // 0x126c98: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CB8u;
            goto label_126cb8;
        }
    }
    ctx->pc = 0x126C9Cu;
label_126c9c:
    // 0x126c9c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126ca0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126ca4: 0x100009c6  b           . + 4 + (0x9C6 << 2)
    ctx->pc = 0x126CA4u;
    {
        const bool branch_taken_0x126ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA4u;
        // 0x126ca8: 0x8c44095c  lw          $a0, 0x95C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ca4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126CACu;
label_126cac:
    // 0x126cac: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126cb0: 0x100009c3  b           . + 4 + (0x9C3 << 2)
    ctx->pc = 0x126CB0u;
    {
        const bool branch_taken_0x126cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB0u;
        // 0x126cb4: 0x8c44095c  lw          $a0, 0x95C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cb0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126CB8u;
label_126cb8:
    // 0x126cb8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x126cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x126cbc: 0x100009c0  b           . + 4 + (0x9C0 << 2)
    ctx->pc = 0x126CBCu;
    {
        const bool branch_taken_0x126cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CBCu;
        // 0x126cc0: 0x8c440960  lw          $a0, 0x960($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cbc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126CC4u;
label_126cc4:
    // 0x126cc4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cd0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x126cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cd8: 0xc042902  jal         func_10A408
    ctx->pc = 0x126CD8u;
    SET_GPR_U32(ctx, 31, 0x126CE0u);
    ctx->pc = 0x126CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CD8u;
    // 0x126cdc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126CD8u, 0x126CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CE0u;
label_126ce0:
    // 0x126ce0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x126cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cf4: 0xc042908  jal         func_10A420
    ctx->pc = 0x126CF4u;
    SET_GPR_U32(ctx, 31, 0x126CFCu);
    ctx->pc = 0x126CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CF4u;
    // 0x126cf8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126CF4u, 0x126CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CFCu;
label_126cfc:
    // 0x126cfc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126CFCu;
    {
        const bool branch_taken_0x126cfc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CFCu;
        // 0x126d00: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cfc) {
            ctx->pc = 0x126D18u;
            goto label_126d18;
        }
    }
    ctx->pc = 0x126D04u;
    // 0x126d04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126D04u;
    {
        const bool branch_taken_0x126d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d04) {
            ctx->pc = 0x126D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D04u;
            // 0x126d08: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D28u;
            goto label_126d28;
        }
    }
    ctx->pc = 0x126D0Cu;
    // 0x126d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126d10: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126D10u;
    {
        const bool branch_taken_0x126d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126d10) {
            ctx->pc = 0x126D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D10u;
            // 0x126d14: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D34u;
            goto label_126d34;
        }
    }
    ctx->pc = 0x126D18u;
label_126d18:
    // 0x126d18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126d1c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x126d20: 0x100009a7  b           . + 4 + (0x9A7 << 2)
    ctx->pc = 0x126D20u;
    {
        const bool branch_taken_0x126d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D20u;
        // 0x126d24: 0x8c440098  lw          $a0, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d20) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126D28u;
label_126d28:
    // 0x126d28: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x126d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x126d2c: 0x100009a4  b           . + 4 + (0x9A4 << 2)
    ctx->pc = 0x126D2Cu;
    {
        const bool branch_taken_0x126d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D2Cu;
        // 0x126d30: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d2c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126D34u;
label_126d34:
    // 0x126d34: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x126d38: 0x100009a1  b           . + 4 + (0x9A1 << 2)
    ctx->pc = 0x126D38u;
    {
        const bool branch_taken_0x126d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D38u;
        // 0x126d3c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d38) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126D40u;
label_126d40:
    // 0x126d40: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d4c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d54: 0xc042902  jal         func_10A408
    ctx->pc = 0x126D54u;
    SET_GPR_U32(ctx, 31, 0x126D5Cu);
    ctx->pc = 0x126D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D54u;
    // 0x126d58: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126D54u, 0x126D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D5Cu;
label_126d5c:
    // 0x126d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126d60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126d64: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d70: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d78: 0xc042908  jal         func_10A420
    ctx->pc = 0x126D78u;
    SET_GPR_U32(ctx, 31, 0x126D80u);
    ctx->pc = 0x126D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D78u;
    // 0x126d7c: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126D78u, 0x126D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D80u;
label_126d80:
    // 0x126d80: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126D80u;
    {
        const bool branch_taken_0x126d80 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D80u;
        // 0x126d84: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d80) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126D88u;
    // 0x126d88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126D88u;
    {
        const bool branch_taken_0x126d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d88) {
            ctx->pc = 0x126D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D88u;
            // 0x126d8c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DACu;
            goto label_126dac;
        }
    }
    ctx->pc = 0x126D90u;
    // 0x126d90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126d94: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126D94u;
    {
        const bool branch_taken_0x126d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126d94) {
            ctx->pc = 0x126D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D94u;
            // 0x126d98: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DB8u;
            goto label_126db8;
        }
    }
    ctx->pc = 0x126D9Cu;
label_126d9c:
    // 0x126d9c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126da0: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x126da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x126da4: 0x10000986  b           . + 4 + (0x986 << 2)
    ctx->pc = 0x126DA4u;
    {
        const bool branch_taken_0x126da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DA4u;
        // 0x126da8: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126da4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126DACu;
label_126dac:
    // 0x126dac: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x126dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x126db0: 0x10000983  b           . + 4 + (0x983 << 2)
    ctx->pc = 0x126DB0u;
    {
        const bool branch_taken_0x126db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DB0u;
        // 0x126db4: 0x8c440848  lw          $a0, 0x848($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126db0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126DB8u;
label_126db8:
    // 0x126db8: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x126db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x126dbc: 0x10000980  b           . + 4 + (0x980 << 2)
    ctx->pc = 0x126DBCu;
    {
        const bool branch_taken_0x126dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DBCu;
        // 0x126dc0: 0x8c44084c  lw          $a0, 0x84C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dbc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126DC4u;
label_126dc4:
    // 0x126dc4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dd0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126dd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dd8: 0xc042902  jal         func_10A408
    ctx->pc = 0x126DD8u;
    SET_GPR_U32(ctx, 31, 0x126DE0u);
    ctx->pc = 0x126DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126DD8u;
    // 0x126ddc: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126DD8u, 0x126DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DE0u;
label_126de0:
    // 0x126de0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dec: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126df0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126df4: 0xc042908  jal         func_10A420
    ctx->pc = 0x126DF4u;
    SET_GPR_U32(ctx, 31, 0x126DFCu);
    ctx->pc = 0x126DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126DF4u;
    // 0x126df8: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126DF4u, 0x126DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DFCu;
label_126dfc:
    // 0x126dfc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126DFCu;
    {
        const bool branch_taken_0x126dfc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DFCu;
        // 0x126e00: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dfc) {
            ctx->pc = 0x126E18u;
            goto label_126e18;
        }
    }
    ctx->pc = 0x126E04u;
    // 0x126e04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126E04u;
    {
        const bool branch_taken_0x126e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e04) {
            ctx->pc = 0x126E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E04u;
            // 0x126e08: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126E28u;
            goto label_126e28;
        }
    }
    ctx->pc = 0x126E0Cu;
    // 0x126e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126e10: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126E10u;
    {
        const bool branch_taken_0x126e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126e10) {
            ctx->pc = 0x126E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E10u;
            // 0x126e14: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126E34u;
            goto label_126e34;
        }
    }
    ctx->pc = 0x126E18u;
label_126e18:
    // 0x126e18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126e1c: 0x8c430850  lw          $v1, 0x850($v0)
    ctx->pc = 0x126e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
    // 0x126e20: 0x10000967  b           . + 4 + (0x967 << 2)
    ctx->pc = 0x126E20u;
    {
        const bool branch_taken_0x126e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E20u;
        // 0x126e24: 0x8c440854  lw          $a0, 0x854($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e20) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126E28u;
label_126e28:
    // 0x126e28: 0x8c430850  lw          $v1, 0x850($v0)
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
    // 0x126e2c: 0x10000964  b           . + 4 + (0x964 << 2)
    ctx->pc = 0x126E2Cu;
    {
        const bool branch_taken_0x126e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E2Cu;
        // 0x126e30: 0x8c440858  lw          $a0, 0x858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e2c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126E34u;
label_126e34:
    // 0x126e34: 0x8c430850  lw          $v1, 0x850($v0)
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
    // 0x126e38: 0x10000961  b           . + 4 + (0x961 << 2)
    ctx->pc = 0x126E38u;
    {
        const bool branch_taken_0x126e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E38u;
        // 0x126e3c: 0x8c44085c  lw          $a0, 0x85C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e38) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126E40u;
label_126e40:
    // 0x126e40: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e4c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126e50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126e50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e54: 0xc042902  jal         func_10A408
    ctx->pc = 0x126E54u;
    SET_GPR_U32(ctx, 31, 0x126E5Cu);
    ctx->pc = 0x126E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E54u;
    // 0x126e58: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126E54u, 0x126E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E5Cu;
label_126e5c:
    // 0x126e5c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e68: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e70: 0xc042908  jal         func_10A420
    ctx->pc = 0x126E70u;
    SET_GPR_U32(ctx, 31, 0x126E78u);
    ctx->pc = 0x126E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E70u;
    // 0x126e74: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126E70u, 0x126E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E78u;
label_126e78:
    // 0x126e78: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126E78u;
    {
        const bool branch_taken_0x126e78 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E78u;
        // 0x126e7c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e78) {
            ctx->pc = 0x126E94u;
            goto label_126e94;
        }
    }
    ctx->pc = 0x126E80u;
    // 0x126e80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E80u;
            // 0x126e84: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126EA4u;
            goto label_126ea4;
        }
    }
    ctx->pc = 0x126E88u;
    // 0x126e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126e8c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126E8Cu;
    {
        const bool branch_taken_0x126e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126e8c) {
            ctx->pc = 0x126E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E8Cu;
            // 0x126e90: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126EB0u;
            goto label_126eb0;
        }
    }
    ctx->pc = 0x126E94u;
label_126e94:
    // 0x126e94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126e98: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126e9c: 0x10000948  b           . + 4 + (0x948 << 2)
    ctx->pc = 0x126E9Cu;
    {
        const bool branch_taken_0x126e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E9Cu;
        // 0x126ea0: 0x8c4400f4  lw          $a0, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e9c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126EA4u;
label_126ea4:
    // 0x126ea4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126ea8: 0x10000945  b           . + 4 + (0x945 << 2)
    ctx->pc = 0x126EA8u;
    {
        const bool branch_taken_0x126ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EA8u;
        // 0x126eac: 0x8c4400f8  lw          $a0, 0xF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ea8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126EB0u;
label_126eb0:
    // 0x126eb0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126eb4: 0x10000942  b           . + 4 + (0x942 << 2)
    ctx->pc = 0x126EB4u;
    {
        const bool branch_taken_0x126eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EB4u;
        // 0x126eb8: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126eb4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126EBCu;
label_126ebc:
    // 0x126ebc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ec8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ed0: 0xc042902  jal         func_10A408
    ctx->pc = 0x126ED0u;
    SET_GPR_U32(ctx, 31, 0x126ED8u);
    ctx->pc = 0x126ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126ED0u;
    // 0x126ed4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126ED0u, 0x126ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126ED8u;
label_126ed8:
    // 0x126ed8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ee4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126eec: 0xc042908  jal         func_10A420
    ctx->pc = 0x126EECu;
    SET_GPR_U32(ctx, 31, 0x126EF4u);
    ctx->pc = 0x126EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EECu;
    // 0x126ef0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126EECu, 0x126EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EF4u;
label_126ef4:
    // 0x126ef4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126EF4u;
    {
        const bool branch_taken_0x126ef4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF4u;
        // 0x126ef8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ef4) {
            ctx->pc = 0x126F10u;
            goto label_126f10;
        }
    }
    ctx->pc = 0x126EFCu;
    // 0x126efc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126EFCu;
    {
        const bool branch_taken_0x126efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126efc) {
            ctx->pc = 0x126F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126EFCu;
            // 0x126f00: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F20u;
            goto label_126f20;
        }
    }
    ctx->pc = 0x126F04u;
    // 0x126f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126f08: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126F08u;
    {
        const bool branch_taken_0x126f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126f08) {
            ctx->pc = 0x126F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126F08u;
            // 0x126f0c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F2Cu;
            goto label_126f2c;
        }
    }
    ctx->pc = 0x126F10u;
label_126f10:
    // 0x126f10: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126f14: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126f18: 0x10000929  b           . + 4 + (0x929 << 2)
    ctx->pc = 0x126F18u;
    {
        const bool branch_taken_0x126f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F18u;
        // 0x126f1c: 0x8c44098c  lw          $a0, 0x98C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f18) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126F20u;
label_126f20:
    // 0x126f20: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126f24: 0x10000926  b           . + 4 + (0x926 << 2)
    ctx->pc = 0x126F24u;
    {
        const bool branch_taken_0x126f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0x8c44098c  lw          $a0, 0x98C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f24) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126F2Cu;
label_126f2c:
    // 0x126f2c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x126f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x126f30: 0x10000923  b           . + 4 + (0x923 << 2)
    ctx->pc = 0x126F30u;
    {
        const bool branch_taken_0x126f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F30u;
        // 0x126f34: 0x8c440990  lw          $a0, 0x990($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f30) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126F38u;
label_126f38:
    // 0x126f38: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f44: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126f48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f4c: 0xc042902  jal         func_10A408
    ctx->pc = 0x126F4Cu;
    SET_GPR_U32(ctx, 31, 0x126F54u);
    ctx->pc = 0x126F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F4Cu;
    // 0x126f50: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126F4Cu, 0x126F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F54u;
label_126f54:
    // 0x126f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126f58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126f5c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f68: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126f6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f70: 0xc042908  jal         func_10A420
    ctx->pc = 0x126F70u;
    SET_GPR_U32(ctx, 31, 0x126F78u);
    ctx->pc = 0x126F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F70u;
    // 0x126f74: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126F70u, 0x126F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F78u;
label_126f78:
    // 0x126f78: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126F78u;
    {
        const bool branch_taken_0x126f78 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x126F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F78u;
        // 0x126f7c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f78) {
            ctx->pc = 0x126F94u;
            goto label_126f94;
        }
    }
    ctx->pc = 0x126F80u;
    // 0x126f80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x126F80u;
    {
        const bool branch_taken_0x126f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126f80) {
            ctx->pc = 0x126F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126F80u;
            // 0x126f84: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126FA4u;
            goto label_126fa4;
        }
    }
    ctx->pc = 0x126F88u;
    // 0x126f88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126f8c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126F8Cu;
    {
        const bool branch_taken_0x126f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x126f8c) {
            ctx->pc = 0x126F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126F8Cu;
            // 0x126f90: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126FB0u;
            goto label_126fb0;
        }
    }
    ctx->pc = 0x126F94u;
label_126f94:
    // 0x126f94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x126f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x126f98: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x126f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x126f9c: 0x10000908  b           . + 4 + (0x908 << 2)
    ctx->pc = 0x126F9Cu;
    {
        const bool branch_taken_0x126f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F9Cu;
        // 0x126fa0: 0x8c4403f4  lw          $a0, 0x3F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f9c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126FA4u;
label_126fa4:
    // 0x126fa4: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x126fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x126fa8: 0x10000905  b           . + 4 + (0x905 << 2)
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA8u;
        // 0x126fac: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126FB0u;
label_126fb0:
    // 0x126fb0: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x126fb4: 0x10000902  b           . + 4 + (0x902 << 2)
    ctx->pc = 0x126FB4u;
    {
        const bool branch_taken_0x126fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FB4u;
        // 0x126fb8: 0x8c4403fc  lw          $a0, 0x3FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fb4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x126FBCu;
label_126fbc:
    // 0x126fbc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x126fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126fcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fd0: 0xc042902  jal         func_10A408
    ctx->pc = 0x126FD0u;
    SET_GPR_U32(ctx, 31, 0x126FD8u);
    ctx->pc = 0x126FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FD0u;
    // 0x126fd4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x126FD0u, 0x126FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FD8u;
label_126fd8:
    // 0x126fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126fdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126fe0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x126fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x126fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fec: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126ff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ff4: 0xc042908  jal         func_10A420
    ctx->pc = 0x126FF4u;
    SET_GPR_U32(ctx, 31, 0x126FFCu);
    ctx->pc = 0x126FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FF4u;
    // 0x126ff8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x126FF4u, 0x126FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FFCu;
label_126ffc:
    // 0x126ffc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126FFCu;
    {
        const bool branch_taken_0x126ffc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FFCu;
        // 0x127000: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ffc) {
            ctx->pc = 0x127018u;
            goto label_127018;
        }
    }
    ctx->pc = 0x127004u;
    // 0x127004: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127004u;
    {
        const bool branch_taken_0x127004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127004) {
            ctx->pc = 0x127008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127004u;
            // 0x127008: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x12700Cu;
    // 0x12700c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127010: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127010u;
    {
        const bool branch_taken_0x127010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127010) {
            ctx->pc = 0x127014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127010u;
            // 0x127014: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127034u;
            goto label_127034;
        }
    }
    ctx->pc = 0x127018u;
label_127018:
    // 0x127018: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12701c: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x12701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x127020: 0x100008e7  b           . + 4 + (0x8E7 << 2)
    ctx->pc = 0x127020u;
    {
        const bool branch_taken_0x127020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127020u;
        // 0x127024: 0x8c440994  lw          $a0, 0x994($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127020) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127028u;
label_127028:
    // 0x127028: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x12702c: 0x100008e4  b           . + 4 + (0x8E4 << 2)
    ctx->pc = 0x12702Cu;
    {
        const bool branch_taken_0x12702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12702Cu;
        // 0x127030: 0x8c440994  lw          $a0, 0x994($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12702c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127034u;
label_127034:
    // 0x127034: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x127034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x127038: 0x100008e1  b           . + 4 + (0x8E1 << 2)
    ctx->pc = 0x127038u;
    {
        const bool branch_taken_0x127038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127038u;
        // 0x12703c: 0x8c440998  lw          $a0, 0x998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127038) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127040u;
label_127040:
    // 0x127040: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12704c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127054: 0xc042902  jal         func_10A408
    ctx->pc = 0x127054u;
    SET_GPR_U32(ctx, 31, 0x12705Cu);
    ctx->pc = 0x127058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127054u;
    // 0x127058: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127054u, 0x12705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12705Cu;
label_12705c:
    // 0x12705c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127068: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x127068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12706c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12706cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127070: 0xc042908  jal         func_10A420
    ctx->pc = 0x127070u;
    SET_GPR_U32(ctx, 31, 0x127078u);
    ctx->pc = 0x127074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127070u;
    // 0x127074: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127070u, 0x127078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127078u;
label_127078:
    // 0x127078: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127078u;
    {
        const bool branch_taken_0x127078 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127078) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127080u;
    // 0x127080: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127080u;
    {
        const bool branch_taken_0x127080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127080) {
            ctx->pc = 0x127084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127080u;
            // 0x127084: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1270A4u;
            goto label_1270a4;
        }
    }
    ctx->pc = 0x127088u;
    // 0x127088: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12708c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12708Cu;
    {
        const bool branch_taken_0x12708c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12708c) {
            ctx->pc = 0x127090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12708Cu;
            // 0x127090: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1270B0u;
            goto label_1270b0;
        }
    }
    ctx->pc = 0x127094u;
label_127094:
    // 0x127094: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127098: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x127098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x12709c: 0x100008c8  b           . + 4 + (0x8C8 << 2)
    ctx->pc = 0x12709Cu;
    {
        const bool branch_taken_0x12709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12709Cu;
        // 0x1270a0: 0x8c4401d4  lw          $a0, 0x1D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12709c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1270A4u;
label_1270a4:
    // 0x1270a4: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1270a8: 0x100008c5  b           . + 4 + (0x8C5 << 2)
    ctx->pc = 0x1270A8u;
    {
        const bool branch_taken_0x1270a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270A8u;
        // 0x1270ac: 0x8c4401d8  lw          $a0, 0x1D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270a8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1270B0u;
label_1270b0:
    // 0x1270b0: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x1270b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1270b4: 0x100008c2  b           . + 4 + (0x8C2 << 2)
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B4u;
        // 0x1270b8: 0x8c4401dc  lw          $a0, 0x1DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1270BCu;
label_1270bc:
    // 0x1270bc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1270c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1270c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1270c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270c8: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1270cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1270ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270d0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1270D0u;
    SET_GPR_U32(ctx, 31, 0x1270D8u);
    ctx->pc = 0x1270D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1270D0u;
    // 0x1270d4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1270D0u, 0x1270D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270D8u;
label_1270d8:
    // 0x1270d8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1270d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1270dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1270e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270e4: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1270e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1270e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270ec: 0xc042908  jal         func_10A420
    ctx->pc = 0x1270ECu;
    SET_GPR_U32(ctx, 31, 0x1270F4u);
    ctx->pc = 0x1270F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1270ECu;
    // 0x1270f0: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1270ECu, 0x1270F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270F4u;
label_1270f4:
    // 0x1270f4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1270F4u;
    {
        const bool branch_taken_0x1270f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1270F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270F4u;
        // 0x1270f8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f4) {
            ctx->pc = 0x127110u;
            goto label_127110;
        }
    }
    ctx->pc = 0x1270FCu;
    // 0x1270fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1270FCu;
    {
        const bool branch_taken_0x1270fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1270fc) {
            ctx->pc = 0x127100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1270FCu;
            // 0x127100: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127120u;
            goto label_127120;
        }
    }
    ctx->pc = 0x127104u;
    // 0x127104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127108: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127108u;
    {
        const bool branch_taken_0x127108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127108) {
            ctx->pc = 0x12710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127108u;
            // 0x12710c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12712Cu;
            goto label_12712c;
        }
    }
    ctx->pc = 0x127110u;
label_127110:
    // 0x127110: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127114: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x127114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x127118: 0x100008a9  b           . + 4 + (0x8A9 << 2)
    ctx->pc = 0x127118u;
    {
        const bool branch_taken_0x127118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127118u;
        // 0x12711c: 0x8c44096c  lw          $a0, 0x96C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127118) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127120u;
label_127120:
    // 0x127120: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x127120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x127124: 0x100008a6  b           . + 4 + (0x8A6 << 2)
    ctx->pc = 0x127124u;
    {
        const bool branch_taken_0x127124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127124u;
        // 0x127128: 0x8c44096c  lw          $a0, 0x96C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127124) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12712Cu;
label_12712c:
    // 0x12712c: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x12712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x127130: 0x100008a3  b           . + 4 + (0x8A3 << 2)
    ctx->pc = 0x127130u;
    {
        const bool branch_taken_0x127130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127130u;
        // 0x127134: 0x8c440970  lw          $a0, 0x970($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127130) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127138u;
label_127138:
    // 0x127138: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12713c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127144: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x127144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127148: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12714c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12714Cu;
    SET_GPR_U32(ctx, 31, 0x127154u);
    ctx->pc = 0x127150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12714Cu;
    // 0x127150: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12714Cu, 0x127154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127154u;
label_127154:
    // 0x127154: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12715c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12715cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127160: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127164: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127168: 0xc042908  jal         func_10A420
    ctx->pc = 0x127168u;
    SET_GPR_U32(ctx, 31, 0x127170u);
    ctx->pc = 0x12716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127168u;
    // 0x12716c: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127168u, 0x127170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127170u;
label_127170:
    // 0x127170: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127170u;
    {
        const bool branch_taken_0x127170 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127170u;
        // 0x127174: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127170) {
            ctx->pc = 0x12718Cu;
            goto label_12718c;
        }
    }
    ctx->pc = 0x127178u;
    // 0x127178: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127178u;
    {
        const bool branch_taken_0x127178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127178) {
            ctx->pc = 0x12717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127178u;
            // 0x12717c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12719Cu;
            goto label_12719c;
        }
    }
    ctx->pc = 0x127180u;
    // 0x127180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127184: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127184u;
    {
        const bool branch_taken_0x127184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127184) {
            ctx->pc = 0x127188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127184u;
            // 0x127188: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1271A8u;
            goto label_1271a8;
        }
    }
    ctx->pc = 0x12718Cu;
label_12718c:
    // 0x12718c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127190: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x127190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x127194: 0x1000088a  b           . + 4 + (0x88A << 2)
    ctx->pc = 0x127194u;
    {
        const bool branch_taken_0x127194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127194u;
        // 0x127198: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127194) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12719Cu;
label_12719c:
    // 0x12719c: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x12719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x1271a0: 0x10000887  b           . + 4 + (0x887 << 2)
    ctx->pc = 0x1271A0u;
    {
        const bool branch_taken_0x1271a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271A0u;
        // 0x1271a4: 0x8c440184  lw          $a0, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271a0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1271A8u;
label_1271a8:
    // 0x1271a8: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x1271ac: 0x10000884  b           . + 4 + (0x884 << 2)
    ctx->pc = 0x1271ACu;
    {
        const bool branch_taken_0x1271ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ACu;
        // 0x1271b0: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271ac) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1271b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1271bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271c0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1271c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1271c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1271c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271c8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1271C8u;
    SET_GPR_U32(ctx, 31, 0x1271D0u);
    ctx->pc = 0x1271CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271C8u;
    // 0x1271cc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1271C8u, 0x1271D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271D0u;
label_1271d0:
    // 0x1271d0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1271d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1271d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1271d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271dc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1271dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1271e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1271e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271e4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1271E4u;
    SET_GPR_U32(ctx, 31, 0x1271ECu);
    ctx->pc = 0x1271E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271E4u;
    // 0x1271e8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1271E4u, 0x1271ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271ECu;
label_1271ec:
    // 0x1271ec: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1271ECu;
    {
        const bool branch_taken_0x1271ec = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1271F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ECu;
        // 0x1271f0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271ec) {
            ctx->pc = 0x127208u;
            goto label_127208;
        }
    }
    ctx->pc = 0x1271F4u;
    // 0x1271f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1271F4u;
    {
        const bool branch_taken_0x1271f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1271f4) {
            ctx->pc = 0x1271F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1271F4u;
            // 0x1271f8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127218u;
            goto label_127218;
        }
    }
    ctx->pc = 0x1271FCu;
    // 0x1271fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1271fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127200: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127200u;
    {
        const bool branch_taken_0x127200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127200) {
            ctx->pc = 0x127204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127200u;
            // 0x127204: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127224u;
            goto label_127224;
        }
    }
    ctx->pc = 0x127208u;
label_127208:
    // 0x127208: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12720c: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x12720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x127210: 0x1000086b  b           . + 4 + (0x86B << 2)
    ctx->pc = 0x127210u;
    {
        const bool branch_taken_0x127210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127210u;
        // 0x127214: 0x8c440460  lw          $a0, 0x460($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127210) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127218u;
label_127218:
    // 0x127218: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x127218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x12721c: 0x10000868  b           . + 4 + (0x868 << 2)
    ctx->pc = 0x12721Cu;
    {
        const bool branch_taken_0x12721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12721Cu;
        // 0x127220: 0x8c440464  lw          $a0, 0x464($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12721c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127224u;
label_127224:
    // 0x127224: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x127224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x127228: 0x10000865  b           . + 4 + (0x865 << 2)
    ctx->pc = 0x127228u;
    {
        const bool branch_taken_0x127228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127228u;
        // 0x12722c: 0x8c440468  lw          $a0, 0x468($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127228) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127230u;
label_127230:
    // 0x127230: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12723c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12723cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127244: 0xc042902  jal         func_10A408
    ctx->pc = 0x127244u;
    SET_GPR_U32(ctx, 31, 0x12724Cu);
    ctx->pc = 0x127248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127244u;
    // 0x127248: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127244u, 0x12724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12724Cu;
label_12724c:
    // 0x12724c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12724cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12725c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12725cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127260: 0xc042908  jal         func_10A420
    ctx->pc = 0x127260u;
    SET_GPR_U32(ctx, 31, 0x127268u);
    ctx->pc = 0x127264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127260u;
    // 0x127264: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127260u, 0x127268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127268u;
label_127268:
    // 0x127268: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127268u;
    {
        const bool branch_taken_0x127268 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127268u;
        // 0x12726c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127268) {
            ctx->pc = 0x127284u;
            goto label_127284;
        }
    }
    ctx->pc = 0x127270u;
    // 0x127270: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127270u;
    {
        const bool branch_taken_0x127270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127270) {
            ctx->pc = 0x127274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127270u;
            // 0x127274: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127294u;
            goto label_127294;
        }
    }
    ctx->pc = 0x127278u;
    // 0x127278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12727c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12727Cu;
    {
        const bool branch_taken_0x12727c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12727c) {
            ctx->pc = 0x127280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12727Cu;
            // 0x127280: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x127284u;
label_127284:
    // 0x127284: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127288: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x127288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x12728c: 0x1000084c  b           . + 4 + (0x84C << 2)
    ctx->pc = 0x12728Cu;
    {
        const bool branch_taken_0x12728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12728Cu;
        // 0x127290: 0x8c440974  lw          $a0, 0x974($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12728c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127294u;
label_127294:
    // 0x127294: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x127298: 0x10000849  b           . + 4 + (0x849 << 2)
    ctx->pc = 0x127298u;
    {
        const bool branch_taken_0x127298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127298u;
        // 0x12729c: 0x8c440974  lw          $a0, 0x974($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127298) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1272A0u;
label_1272a0:
    // 0x1272a0: 0x8c43045c  lw          $v1, 0x45C($v0)
    ctx->pc = 0x1272a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
    // 0x1272a4: 0x10000846  b           . + 4 + (0x846 << 2)
    ctx->pc = 0x1272A4u;
    {
        const bool branch_taken_0x1272a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272A4u;
        // 0x1272a8: 0x8c440978  lw          $a0, 0x978($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272a4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1272ACu;
label_1272ac:
    // 0x1272ac: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1272acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1272b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1272b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1272b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272b8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1272bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1272bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272c0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1272C0u;
    SET_GPR_U32(ctx, 31, 0x1272C8u);
    ctx->pc = 0x1272C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272C0u;
    // 0x1272c4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1272C0u, 0x1272C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272C8u;
label_1272c8:
    // 0x1272c8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1272c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1272cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1272ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1272d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272d4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1272d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1272d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272dc: 0xc042908  jal         func_10A420
    ctx->pc = 0x1272DCu;
    SET_GPR_U32(ctx, 31, 0x1272E4u);
    ctx->pc = 0x1272E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272DCu;
    // 0x1272e0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1272DCu, 0x1272E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272E4u;
label_1272e4:
    // 0x1272e4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1272E4u;
    {
        const bool branch_taken_0x1272e4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1272E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272E4u;
        // 0x1272e8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272e4) {
            ctx->pc = 0x127300u;
            goto label_127300;
        }
    }
    ctx->pc = 0x1272ECu;
    // 0x1272ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1272ECu;
    {
        const bool branch_taken_0x1272ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1272ec) {
            ctx->pc = 0x1272F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272ECu;
            // 0x1272f0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127310u;
            goto label_127310;
        }
    }
    ctx->pc = 0x1272F4u;
    // 0x1272f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1272f8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1272F8u;
    {
        const bool branch_taken_0x1272f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1272f8) {
            ctx->pc = 0x1272FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272F8u;
            // 0x1272fc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12731Cu;
            goto label_12731c;
        }
    }
    ctx->pc = 0x127300u;
label_127300:
    // 0x127300: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127304: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x127304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x127308: 0x1000082d  b           . + 4 + (0x82D << 2)
    ctx->pc = 0x127308u;
    {
        const bool branch_taken_0x127308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127308u;
        // 0x12730c: 0x8c440470  lw          $a0, 0x470($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127308) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127310u;
label_127310:
    // 0x127310: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x127310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x127314: 0x1000082a  b           . + 4 + (0x82A << 2)
    ctx->pc = 0x127314u;
    {
        const bool branch_taken_0x127314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127314u;
        // 0x127318: 0x8c440474  lw          $a0, 0x474($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127314) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12731Cu;
label_12731c:
    // 0x12731c: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x127320: 0x10000827  b           . + 4 + (0x827 << 2)
    ctx->pc = 0x127320u;
    {
        const bool branch_taken_0x127320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127320u;
        // 0x127324: 0x8c440478  lw          $a0, 0x478($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127320) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127328u;
label_127328:
    // 0x127328: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12732c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127334: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12733c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12733Cu;
    SET_GPR_U32(ctx, 31, 0x127344u);
    ctx->pc = 0x127340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12733Cu;
    // 0x127340: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12733Cu, 0x127344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127344u;
label_127344:
    // 0x127344: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12734c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12734cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127350: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127358: 0xc042908  jal         func_10A420
    ctx->pc = 0x127358u;
    SET_GPR_U32(ctx, 31, 0x127360u);
    ctx->pc = 0x12735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127358u;
    // 0x12735c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127358u, 0x127360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127360u;
label_127360:
    // 0x127360: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127360u;
    {
        const bool branch_taken_0x127360 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127360u;
        // 0x127364: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127360) {
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x127368u;
    // 0x127368: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127368u;
    {
        const bool branch_taken_0x127368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127368) {
            ctx->pc = 0x12736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127368u;
            // 0x12736c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12738Cu;
            goto label_12738c;
        }
    }
    ctx->pc = 0x127370u;
    // 0x127370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127374: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127374u;
    {
        const bool branch_taken_0x127374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127374) {
            ctx->pc = 0x127378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127374u;
            // 0x127378: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127398u;
            goto label_127398;
        }
    }
    ctx->pc = 0x12737Cu;
label_12737c:
    // 0x12737c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127380: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x127380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x127384: 0x1000080e  b           . + 4 + (0x80E << 2)
    ctx->pc = 0x127384u;
    {
        const bool branch_taken_0x127384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127384u;
        // 0x127388: 0x8c44099c  lw          $a0, 0x99C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127384) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12738Cu;
label_12738c:
    // 0x12738c: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x12738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x127390: 0x1000080b  b           . + 4 + (0x80B << 2)
    ctx->pc = 0x127390u;
    {
        const bool branch_taken_0x127390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127390u;
        // 0x127394: 0x8c44099c  lw          $a0, 0x99C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127390) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127398u;
label_127398:
    // 0x127398: 0x8c43046c  lw          $v1, 0x46C($v0)
    ctx->pc = 0x127398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    // 0x12739c: 0x10000808  b           . + 4 + (0x808 << 2)
    ctx->pc = 0x12739Cu;
    {
        const bool branch_taken_0x12739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12739Cu;
        // 0x1273a0: 0x8c4409a0  lw          $a0, 0x9A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12739c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1273A4u;
label_1273a4:
    // 0x1273a4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1273a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1273a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1273a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273ac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1273acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1273b0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1273b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1273b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1273b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273b8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1273B8u;
    SET_GPR_U32(ctx, 31, 0x1273C0u);
    ctx->pc = 0x1273BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273B8u;
    // 0x1273bc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1273B8u, 0x1273C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273C0u;
label_1273c0:
    // 0x1273c0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1273c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1273c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1273c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1273c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1273cc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1273d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1273d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273d4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1273D4u;
    SET_GPR_U32(ctx, 31, 0x1273DCu);
    ctx->pc = 0x1273D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273D4u;
    // 0x1273d8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1273D4u, 0x1273DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273DCu;
label_1273dc:
    // 0x1273dc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1273DCu;
    {
        const bool branch_taken_0x1273dc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1273E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273DCu;
        // 0x1273e0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273dc) {
            ctx->pc = 0x1273F8u;
            goto label_1273f8;
        }
    }
    ctx->pc = 0x1273E4u;
    // 0x1273e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1273E4u;
    {
        const bool branch_taken_0x1273e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1273e4) {
            ctx->pc = 0x1273E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1273E4u;
            // 0x1273e8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127408u;
            goto label_127408;
        }
    }
    ctx->pc = 0x1273ECu;
    // 0x1273ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1273f0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1273F0u;
    {
        const bool branch_taken_0x1273f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1273f0) {
            ctx->pc = 0x1273F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1273F0u;
            // 0x1273f4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127414u;
            goto label_127414;
        }
    }
    ctx->pc = 0x1273F8u;
label_1273f8:
    // 0x1273f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1273f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1273fc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1273fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x127400: 0x100007ef  b           . + 4 + (0x7EF << 2)
    ctx->pc = 0x127400u;
    {
        const bool branch_taken_0x127400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127400u;
        // 0x127404: 0x8c440134  lw          $a0, 0x134($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127400) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127408u;
label_127408:
    // 0x127408: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x127408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12740c: 0x100007ec  b           . + 4 + (0x7EC << 2)
    ctx->pc = 0x12740Cu;
    {
        const bool branch_taken_0x12740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12740Cu;
        // 0x127410: 0x8c440138  lw          $a0, 0x138($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12740c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127414u;
label_127414:
    // 0x127414: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x127418: 0x100007e9  b           . + 4 + (0x7E9 << 2)
    ctx->pc = 0x127418u;
    {
        const bool branch_taken_0x127418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127418u;
        // 0x12741c: 0x8c44013c  lw          $a0, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127418) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127420u;
label_127420:
    // 0x127420: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127428: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x127428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12742c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x127430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127434: 0xc042902  jal         func_10A408
    ctx->pc = 0x127434u;
    SET_GPR_U32(ctx, 31, 0x12743Cu);
    ctx->pc = 0x127438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127434u;
    // 0x127438: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127434u, 0x12743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12743Cu;
label_12743c:
    // 0x12743c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127444: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127448: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12744c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12744cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127450: 0xc042908  jal         func_10A420
    ctx->pc = 0x127450u;
    SET_GPR_U32(ctx, 31, 0x127458u);
    ctx->pc = 0x127454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127450u;
    // 0x127454: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127450u, 0x127458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127458u;
label_127458:
    // 0x127458: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127458u;
    {
        const bool branch_taken_0x127458 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127458u;
        // 0x12745c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127458) {
            ctx->pc = 0x127474u;
            goto label_127474;
        }
    }
    ctx->pc = 0x127460u;
    // 0x127460: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127460u;
    {
        const bool branch_taken_0x127460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127460) {
            ctx->pc = 0x127464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127460u;
            // 0x127464: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127484u;
            goto label_127484;
        }
    }
    ctx->pc = 0x127468u;
    // 0x127468: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12746c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12746Cu;
    {
        const bool branch_taken_0x12746c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12746c) {
            ctx->pc = 0x127470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12746Cu;
            // 0x127470: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127490u;
            goto label_127490;
        }
    }
    ctx->pc = 0x127474u;
label_127474:
    // 0x127474: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127478: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x127478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12747c: 0x100007d0  b           . + 4 + (0x7D0 << 2)
    ctx->pc = 0x12747Cu;
    {
        const bool branch_taken_0x12747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12747Cu;
        // 0x127480: 0x8c4409a4  lw          $a0, 0x9A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12747c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127484u;
label_127484:
    // 0x127484: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x127488: 0x100007cd  b           . + 4 + (0x7CD << 2)
    ctx->pc = 0x127488u;
    {
        const bool branch_taken_0x127488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127488u;
        // 0x12748c: 0x8c4409a4  lw          $a0, 0x9A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127488) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127490u;
label_127490:
    // 0x127490: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x127490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x127494: 0x100007ca  b           . + 4 + (0x7CA << 2)
    ctx->pc = 0x127494u;
    {
        const bool branch_taken_0x127494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127494u;
        // 0x127498: 0x8c4409a8  lw          $a0, 0x9A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127494) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12749Cu;
label_12749c:
    // 0x12749c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1274a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1274a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1274a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274a8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1274a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1274ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1274acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274b0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1274B0u;
    SET_GPR_U32(ctx, 31, 0x1274B8u);
    ctx->pc = 0x1274B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274B0u;
    // 0x1274b4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1274B0u, 0x1274B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274B8u;
label_1274b8:
    // 0x1274b8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1274b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1274bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1274bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1274c0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1274c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1274c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1274c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1274c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274cc: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1274ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1274d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1274d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274d4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1274D4u;
    SET_GPR_U32(ctx, 31, 0x1274DCu);
    ctx->pc = 0x1274D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274D4u;
    // 0x1274d8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1274D4u, 0x1274DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274DCu;
label_1274dc:
    // 0x1274dc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1274DCu;
    {
        const bool branch_taken_0x1274dc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1274E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274DCu;
        // 0x1274e0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274dc) {
            ctx->pc = 0x1274F8u;
            goto label_1274f8;
        }
    }
    ctx->pc = 0x1274E4u;
    // 0x1274e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1274E4u;
    {
        const bool branch_taken_0x1274e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1274e4) {
            ctx->pc = 0x1274E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1274E4u;
            // 0x1274e8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127508u;
            goto label_127508;
        }
    }
    ctx->pc = 0x1274ECu;
    // 0x1274ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1274ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1274f0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1274F0u;
    {
        const bool branch_taken_0x1274f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1274f0) {
            ctx->pc = 0x1274F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1274F0u;
            // 0x1274f4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127514u;
            goto label_127514;
        }
    }
    ctx->pc = 0x1274F8u;
label_1274f8:
    // 0x1274f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1274fc: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1274fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x127500: 0x100007af  b           . + 4 + (0x7AF << 2)
    ctx->pc = 0x127500u;
    {
        const bool branch_taken_0x127500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127500u;
        // 0x127504: 0x8c440114  lw          $a0, 0x114($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127500) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127508u;
label_127508:
    // 0x127508: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x127508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x12750c: 0x100007ac  b           . + 4 + (0x7AC << 2)
    ctx->pc = 0x12750Cu;
    {
        const bool branch_taken_0x12750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12750Cu;
        // 0x127510: 0x8c440118  lw          $a0, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12750c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127514u;
label_127514:
    // 0x127514: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x127514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x127518: 0x100007a9  b           . + 4 + (0x7A9 << 2)
    ctx->pc = 0x127518u;
    {
        const bool branch_taken_0x127518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127518u;
        // 0x12751c: 0x8c44011c  lw          $a0, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127518) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127520u;
label_127520:
    // 0x127520: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12752c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x12752cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x127530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127534: 0xc042902  jal         func_10A408
    ctx->pc = 0x127534u;
    SET_GPR_U32(ctx, 31, 0x12753Cu);
    ctx->pc = 0x127538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127534u;
    // 0x127538: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127534u, 0x12753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12753Cu;
label_12753c:
    // 0x12753c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12753cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127548: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x127548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12754c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12754cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127550: 0xc042908  jal         func_10A420
    ctx->pc = 0x127550u;
    SET_GPR_U32(ctx, 31, 0x127558u);
    ctx->pc = 0x127554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127550u;
    // 0x127554: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127550u, 0x127558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127558u;
label_127558:
    // 0x127558: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127558u;
    {
        const bool branch_taken_0x127558 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127558u;
        // 0x12755c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127558) {
            ctx->pc = 0x127574u;
            goto label_127574;
        }
    }
    ctx->pc = 0x127560u;
    // 0x127560: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127560u;
    {
        const bool branch_taken_0x127560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127560) {
            ctx->pc = 0x127564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127560u;
            // 0x127564: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127584u;
            goto label_127584;
        }
    }
    ctx->pc = 0x127568u;
    // 0x127568: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12756c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12756Cu;
    {
        const bool branch_taken_0x12756c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12756c) {
            ctx->pc = 0x127570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12756Cu;
            // 0x127570: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127590u;
            goto label_127590;
        }
    }
    ctx->pc = 0x127574u;
label_127574:
    // 0x127574: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127578: 0x8c430554  lw          $v1, 0x554($v0)
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
    // 0x12757c: 0x10000790  b           . + 4 + (0x790 << 2)
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12757Cu;
        // 0x127580: 0x8c440558  lw          $a0, 0x558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12757c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127584u;
label_127584:
    // 0x127584: 0x8c430554  lw          $v1, 0x554($v0)
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
    // 0x127588: 0x1000078d  b           . + 4 + (0x78D << 2)
    ctx->pc = 0x127588u;
    {
        const bool branch_taken_0x127588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127588u;
        // 0x12758c: 0x8c44055c  lw          $a0, 0x55C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127588) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127590u;
label_127590:
    // 0x127590: 0x8c430554  lw          $v1, 0x554($v0)
    ctx->pc = 0x127590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
    // 0x127594: 0x1000078a  b           . + 4 + (0x78A << 2)
    ctx->pc = 0x127594u;
    {
        const bool branch_taken_0x127594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127594u;
        // 0x127598: 0x8c440560  lw          $a0, 0x560($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127594) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12759Cu;
label_12759c:
    // 0x12759c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1275a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1275a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1275a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1275a8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1275a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1275ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1275acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1275B0u;
    SET_GPR_U32(ctx, 31, 0x1275B8u);
    ctx->pc = 0x1275B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275B0u;
    // 0x1275b4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1275B0u, 0x1275B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275B8u;
label_1275b8:
    // 0x1275b8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1275bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1275bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1275c0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1275c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1275c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1275c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1275cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1275d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1275d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275d4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1275D4u;
    SET_GPR_U32(ctx, 31, 0x1275DCu);
    ctx->pc = 0x1275D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275D4u;
    // 0x1275d8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1275D4u, 0x1275DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275DCu;
label_1275dc:
    // 0x1275dc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1275DCu;
    {
        const bool branch_taken_0x1275dc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275DCu;
        // 0x1275e0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275dc) {
            ctx->pc = 0x1275F8u;
            goto label_1275f8;
        }
    }
    ctx->pc = 0x1275E4u;
    // 0x1275e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1275E4u;
    {
        const bool branch_taken_0x1275e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1275e4) {
            ctx->pc = 0x1275E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275E4u;
            // 0x1275e8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127608u;
            goto label_127608;
        }
    }
    ctx->pc = 0x1275ECu;
    // 0x1275ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1275ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1275f0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1275F0u;
    {
        const bool branch_taken_0x1275f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1275f0) {
            ctx->pc = 0x1275F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275F0u;
            // 0x1275f4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127614u;
            goto label_127614;
        }
    }
    ctx->pc = 0x1275F8u;
label_1275f8:
    // 0x1275f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1275fc: 0x8c430430  lw          $v1, 0x430($v0)
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x127600: 0x1000076f  b           . + 4 + (0x76F << 2)
    ctx->pc = 0x127600u;
    {
        const bool branch_taken_0x127600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127600u;
        // 0x127604: 0x8c440434  lw          $a0, 0x434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127600) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127608u;
label_127608:
    // 0x127608: 0x8c430430  lw          $v1, 0x430($v0)
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x12760c: 0x1000076c  b           . + 4 + (0x76C << 2)
    ctx->pc = 0x12760Cu;
    {
        const bool branch_taken_0x12760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12760Cu;
        // 0x127610: 0x8c440438  lw          $a0, 0x438($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12760c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127614u;
label_127614:
    // 0x127614: 0x8c430430  lw          $v1, 0x430($v0)
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x127618: 0x10000769  b           . + 4 + (0x769 << 2)
    ctx->pc = 0x127618u;
    {
        const bool branch_taken_0x127618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127618u;
        // 0x12761c: 0x8c44043c  lw          $a0, 0x43C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127618) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127620u;
label_127620:
    // 0x127620: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127628: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12762c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x12762cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x127630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127634: 0xc042902  jal         func_10A408
    ctx->pc = 0x127634u;
    SET_GPR_U32(ctx, 31, 0x12763Cu);
    ctx->pc = 0x127638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127634u;
    // 0x127638: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127634u, 0x12763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12763Cu;
label_12763c:
    // 0x12763c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12763cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x127640: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127644: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12764c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127650: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x127654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127658: 0xc042908  jal         func_10A420
    ctx->pc = 0x127658u;
    SET_GPR_U32(ctx, 31, 0x127660u);
    ctx->pc = 0x12765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127658u;
    // 0x12765c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127658u, 0x127660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127660u;
label_127660:
    // 0x127660: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127660u;
    {
        const bool branch_taken_0x127660 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127660u;
        // 0x127664: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127660) {
            ctx->pc = 0x12767Cu;
            goto label_12767c;
        }
    }
    ctx->pc = 0x127668u;
    // 0x127668: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127668u;
    {
        const bool branch_taken_0x127668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127668) {
            ctx->pc = 0x12766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127668u;
            // 0x12766c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12768Cu;
            goto label_12768c;
        }
    }
    ctx->pc = 0x127670u;
    // 0x127670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127674: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127674u;
    {
        const bool branch_taken_0x127674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127674) {
            ctx->pc = 0x127678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127674u;
            // 0x127678: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127698u;
            goto label_127698;
        }
    }
    ctx->pc = 0x12767Cu;
label_12767c:
    // 0x12767c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127680: 0x8c430544  lw          $v1, 0x544($v0)
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
    // 0x127684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x127684u;
    {
        const bool branch_taken_0x127684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127684u;
        // 0x127688: 0x8c440548  lw          $a0, 0x548($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127684) {
            ctx->pc = 0x1276A0u;
            goto label_1276a0;
        }
    }
    ctx->pc = 0x12768Cu;
label_12768c:
    // 0x12768c: 0x8c430544  lw          $v1, 0x544($v0)
    ctx->pc = 0x12768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
    // 0x127690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x127690u;
    {
        const bool branch_taken_0x127690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127690u;
        // 0x127694: 0x8c44054c  lw          $a0, 0x54C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127690) {
            ctx->pc = 0x1276A0u;
            goto label_1276a0;
        }
    }
    ctx->pc = 0x127698u;
label_127698:
    // 0x127698: 0x8c430544  lw          $v1, 0x544($v0)
    ctx->pc = 0x127698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
    // 0x12769c: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x12769cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_1276a0:
    // 0x1276a0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1276a4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1276a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1276ac: 0x10000746  b           . + 4 + (0x746 << 2)
    ctx->pc = 0x1276ACu;
    {
        const bool branch_taken_0x1276ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276ACu;
        // 0x1276b0: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276ac) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x1276B4u;
label_1276b4:
    // 0x1276b4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1276b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1276b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1276bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276c0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1276c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1276c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276c8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1276C8u;
    SET_GPR_U32(ctx, 31, 0x1276D0u);
    ctx->pc = 0x1276CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276C8u;
    // 0x1276cc: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1276C8u, 0x1276D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276D0u;
label_1276d0:
    // 0x1276d0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1276d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1276d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276dc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1276dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1276e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1276e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276e4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1276E4u;
    SET_GPR_U32(ctx, 31, 0x1276ECu);
    ctx->pc = 0x1276E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276E4u;
    // 0x1276e8: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1276E4u, 0x1276ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276ECu;
label_1276ec:
    // 0x1276ec: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1276ECu;
    {
        const bool branch_taken_0x1276ec = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1276F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276ECu;
        // 0x1276f0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276ec) {
            ctx->pc = 0x127708u;
            goto label_127708;
        }
    }
    ctx->pc = 0x1276F4u;
    // 0x1276f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1276F4u;
    {
        const bool branch_taken_0x1276f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1276f4) {
            ctx->pc = 0x1276F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1276F4u;
            // 0x1276f8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127718u;
            goto label_127718;
        }
    }
    ctx->pc = 0x1276FCu;
    // 0x1276fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1276fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127700: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127700u;
    {
        const bool branch_taken_0x127700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127700) {
            ctx->pc = 0x127704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127700u;
            // 0x127704: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127724u;
            goto label_127724;
        }
    }
    ctx->pc = 0x127708u;
label_127708:
    // 0x127708: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12770c: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x127710: 0x1000072b  b           . + 4 + (0x72B << 2)
    ctx->pc = 0x127710u;
    {
        const bool branch_taken_0x127710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127710u;
        // 0x127714: 0x8c4402cc  lw          $a0, 0x2CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127710) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127718u;
label_127718:
    // 0x127718: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x12771c: 0x10000728  b           . + 4 + (0x728 << 2)
    ctx->pc = 0x12771Cu;
    {
        const bool branch_taken_0x12771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12771Cu;
        // 0x127720: 0x8c4402d0  lw          $a0, 0x2D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12771c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127724u;
label_127724:
    // 0x127724: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x127728: 0x10000725  b           . + 4 + (0x725 << 2)
    ctx->pc = 0x127728u;
    {
        const bool branch_taken_0x127728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127728u;
        // 0x12772c: 0x8c4402d4  lw          $a0, 0x2D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127728) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127730u;
label_127730:
    // 0x127730: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12773c: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x12773cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127744: 0xc042902  jal         func_10A408
    ctx->pc = 0x127744u;
    SET_GPR_U32(ctx, 31, 0x12774Cu);
    ctx->pc = 0x127748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127744u;
    // 0x127748: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127744u, 0x12774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12774Cu;
label_12774c:
    // 0x12774c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127758: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12775c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12775cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127760: 0xc042908  jal         func_10A420
    ctx->pc = 0x127760u;
    SET_GPR_U32(ctx, 31, 0x127768u);
    ctx->pc = 0x127764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127760u;
    // 0x127764: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127760u, 0x127768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127768u;
label_127768:
    // 0x127768: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127768u;
    {
        const bool branch_taken_0x127768 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127768u;
        // 0x12776c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127768) {
            ctx->pc = 0x127784u;
            goto label_127784;
        }
    }
    ctx->pc = 0x127770u;
    // 0x127770: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127770u;
    {
        const bool branch_taken_0x127770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127770) {
            ctx->pc = 0x127774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127770u;
            // 0x127774: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127794u;
            goto label_127794;
        }
    }
    ctx->pc = 0x127778u;
    // 0x127778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12777c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12777Cu;
    {
        const bool branch_taken_0x12777c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12777c) {
            ctx->pc = 0x127780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12777Cu;
            // 0x127780: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1277A0u;
            goto label_1277a0;
        }
    }
    ctx->pc = 0x127784u;
label_127784:
    // 0x127784: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127788: 0x8c4303e0  lw          $v1, 0x3E0($v0)
    ctx->pc = 0x127788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
    // 0x12778c: 0x1000070c  b           . + 4 + (0x70C << 2)
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0x8c4403e4  lw          $a0, 0x3E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12778c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127794u;
label_127794:
    // 0x127794: 0x8c4303e0  lw          $v1, 0x3E0($v0)
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
    // 0x127798: 0x10000709  b           . + 4 + (0x709 << 2)
    ctx->pc = 0x127798u;
    {
        const bool branch_taken_0x127798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127798u;
        // 0x12779c: 0x8c4403e8  lw          $a0, 0x3E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127798) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1277A0u;
label_1277a0:
    // 0x1277a0: 0x8c4303e0  lw          $v1, 0x3E0($v0)
    ctx->pc = 0x1277a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
    // 0x1277a4: 0x10000706  b           . + 4 + (0x706 << 2)
    ctx->pc = 0x1277A4u;
    {
        const bool branch_taken_0x1277a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A4u;
        // 0x1277a8: 0x8c4403ec  lw          $a0, 0x3EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277a4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1277ACu;
label_1277ac:
    // 0x1277ac: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1277b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1277b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277b4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1277b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1277b8: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1277b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1277bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1277bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277c0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1277C0u;
    SET_GPR_U32(ctx, 31, 0x1277C8u);
    ctx->pc = 0x1277C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277C0u;
    // 0x1277c4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1277C0u, 0x1277C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277C8u;
label_1277c8:
    // 0x1277c8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1277cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1277ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1277d4: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1277d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1277d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1277d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277dc: 0xc042908  jal         func_10A420
    ctx->pc = 0x1277DCu;
    SET_GPR_U32(ctx, 31, 0x1277E4u);
    ctx->pc = 0x1277E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277DCu;
    // 0x1277e0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1277DCu, 0x1277E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277E4u;
label_1277e4:
    // 0x1277e4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1277E4u;
    {
        const bool branch_taken_0x1277e4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1277E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E4u;
        // 0x1277e8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e4) {
            ctx->pc = 0x127800u;
            goto label_127800;
        }
    }
    ctx->pc = 0x1277ECu;
    // 0x1277ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1277ECu;
    {
        const bool branch_taken_0x1277ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1277ec) {
            ctx->pc = 0x1277F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1277ECu;
            // 0x1277f0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127810u;
            goto label_127810;
        }
    }
    ctx->pc = 0x1277F4u;
    // 0x1277f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1277f8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1277F8u;
    {
        const bool branch_taken_0x1277f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1277f8) {
            ctx->pc = 0x1277FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1277F8u;
            // 0x1277fc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12781Cu;
            goto label_12781c;
        }
    }
    ctx->pc = 0x127800u;
label_127800:
    // 0x127800: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127804: 0x8c4302f8  lw          $v1, 0x2F8($v0)
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x127808: 0x100006ed  b           . + 4 + (0x6ED << 2)
    ctx->pc = 0x127808u;
    {
        const bool branch_taken_0x127808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127808u;
        // 0x12780c: 0x8c4402fc  lw          $a0, 0x2FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127808) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127810u;
label_127810:
    // 0x127810: 0x8c4302f8  lw          $v1, 0x2F8($v0)
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x127814: 0x100006ea  b           . + 4 + (0x6EA << 2)
    ctx->pc = 0x127814u;
    {
        const bool branch_taken_0x127814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127814u;
        // 0x127818: 0x8c440300  lw          $a0, 0x300($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127814) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12781Cu;
label_12781c:
    // 0x12781c: 0x8c4302f8  lw          $v1, 0x2F8($v0)
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x127820: 0x100006e7  b           . + 4 + (0x6E7 << 2)
    ctx->pc = 0x127820u;
    {
        const bool branch_taken_0x127820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127820u;
        // 0x127824: 0x8c440304  lw          $a0, 0x304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127820) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127828u;
label_127828:
    // 0x127828: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12782c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127830: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127834: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12783c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12783Cu;
    SET_GPR_U32(ctx, 31, 0x127844u);
    ctx->pc = 0x127840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12783Cu;
    // 0x127840: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12783Cu, 0x127844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127844u;
label_127844:
    // 0x127844: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x127848: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12784c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127854: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127858: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12785c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12785cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127860: 0xc042908  jal         func_10A420
    ctx->pc = 0x127860u;
    SET_GPR_U32(ctx, 31, 0x127868u);
    ctx->pc = 0x127864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127860u;
    // 0x127864: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127860u, 0x127868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127868u;
label_127868:
    // 0x127868: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x127868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12786c: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12786Cu;
    {
        const bool branch_taken_0x12786c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12786Cu;
        // 0x127870: 0xa2421603  sb          $v0, 0x1603($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5635), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12786c) {
            ctx->pc = 0x12788Cu;
            goto label_12788c;
        }
    }
    ctx->pc = 0x127874u;
    // 0x127874: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x127874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x127878: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127878u;
    {
        const bool branch_taken_0x127878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127878) {
            ctx->pc = 0x12787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127878u;
            // 0x12787c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12789Cu;
            goto label_12789c;
        }
    }
    ctx->pc = 0x127880u;
    // 0x127880: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127884: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127884u;
    {
        const bool branch_taken_0x127884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127884) {
            ctx->pc = 0x127888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127884u;
            // 0x127888: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1278A8u;
            goto label_1278a8;
        }
    }
    ctx->pc = 0x12788Cu;
label_12788c:
    // 0x12788c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127890: 0x8c4302e8  lw          $v1, 0x2E8($v0)
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x127894: 0x100006ca  b           . + 4 + (0x6CA << 2)
    ctx->pc = 0x127894u;
    {
        const bool branch_taken_0x127894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127894u;
        // 0x127898: 0x8c4402ec  lw          $a0, 0x2EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127894) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12789Cu;
label_12789c:
    // 0x12789c: 0x8c4302e8  lw          $v1, 0x2E8($v0)
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x1278a0: 0x100006c7  b           . + 4 + (0x6C7 << 2)
    ctx->pc = 0x1278A0u;
    {
        const bool branch_taken_0x1278a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A0u;
        // 0x1278a4: 0x8c4402f0  lw          $a0, 0x2F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278a0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1278A8u;
label_1278a8:
    // 0x1278a8: 0x8c4302e8  lw          $v1, 0x2E8($v0)
    ctx->pc = 0x1278a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x1278ac: 0x100006c4  b           . + 4 + (0x6C4 << 2)
    ctx->pc = 0x1278ACu;
    {
        const bool branch_taken_0x1278ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278ACu;
        // 0x1278b0: 0x8c4402f4  lw          $a0, 0x2F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278ac) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1278B4u;
label_1278b4:
    // 0x1278b4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1278b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1278b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1278b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278bc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1278bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1278c0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1278c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1278c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1278c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278c8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1278C8u;
    SET_GPR_U32(ctx, 31, 0x1278D0u);
    ctx->pc = 0x1278CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278C8u;
    // 0x1278cc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1278C8u, 0x1278D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278D0u;
label_1278d0:
    // 0x1278d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1278d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1278d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1278d8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1278d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1278dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1278dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278e0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1278e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1278e4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1278e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1278e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278ec: 0xc042908  jal         func_10A420
    ctx->pc = 0x1278ECu;
    SET_GPR_U32(ctx, 31, 0x1278F4u);
    ctx->pc = 0x1278F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278ECu;
    // 0x1278f0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1278ECu, 0x1278F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278F4u;
label_1278f4:
    // 0x1278f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1278f8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1278F8u;
    {
        const bool branch_taken_0x1278f8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1278FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278F8u;
        // 0x1278fc: 0xa2421603  sb          $v0, 0x1603($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5635), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278f8) {
            ctx->pc = 0x127918u;
            goto label_127918;
        }
    }
    ctx->pc = 0x127900u;
    // 0x127900: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x127900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x127904: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127904u;
    {
        const bool branch_taken_0x127904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127904) {
            ctx->pc = 0x127908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127904u;
            // 0x127908: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127928u;
            goto label_127928;
        }
    }
    ctx->pc = 0x12790Cu;
    // 0x12790c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127910: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127910u;
    {
        const bool branch_taken_0x127910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127910) {
            ctx->pc = 0x127914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127910u;
            // 0x127914: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127934u;
            goto label_127934;
        }
    }
    ctx->pc = 0x127918u;
label_127918:
    // 0x127918: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12791c: 0x8c4305a4  lw          $v1, 0x5A4($v0)
    ctx->pc = 0x12791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    // 0x127920: 0x10000604  b           . + 4 + (0x604 << 2)
    ctx->pc = 0x127920u;
    {
        const bool branch_taken_0x127920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127920u;
        // 0x127924: 0x8c4405a8  lw          $a0, 0x5A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127920) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x127928u;
label_127928:
    // 0x127928: 0x8c4305a4  lw          $v1, 0x5A4($v0)
    ctx->pc = 0x127928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    // 0x12792c: 0x10000601  b           . + 4 + (0x601 << 2)
    ctx->pc = 0x12792Cu;
    {
        const bool branch_taken_0x12792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12792Cu;
        // 0x127930: 0x8c4405ac  lw          $a0, 0x5AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12792c) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x127934u;
label_127934:
    // 0x127934: 0x8c4305a4  lw          $v1, 0x5A4($v0)
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    // 0x127938: 0x100005fe  b           . + 4 + (0x5FE << 2)
    ctx->pc = 0x127938u;
    {
        const bool branch_taken_0x127938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127938u;
        // 0x12793c: 0x8c4405b0  lw          $a0, 0x5B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127938) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x127940u;
label_127940:
    // 0x127940: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127948: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x127948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12794c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127954: 0xc042902  jal         func_10A408
    ctx->pc = 0x127954u;
    SET_GPR_U32(ctx, 31, 0x12795Cu);
    ctx->pc = 0x127958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127954u;
    // 0x127958: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127954u, 0x12795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12795Cu;
label_12795c:
    // 0x12795c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127964: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127968: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12796c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12796cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127970: 0xc042908  jal         func_10A420
    ctx->pc = 0x127970u;
    SET_GPR_U32(ctx, 31, 0x127978u);
    ctx->pc = 0x127974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127970u;
    // 0x127974: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127970u, 0x127978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127978u;
label_127978:
    // 0x127978: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127978u;
    {
        const bool branch_taken_0x127978 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127978u;
        // 0x12797c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127978) {
            ctx->pc = 0x127994u;
            goto label_127994;
        }
    }
    ctx->pc = 0x127980u;
    // 0x127980: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127980u;
    {
        const bool branch_taken_0x127980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127980) {
            ctx->pc = 0x127984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127980u;
            // 0x127984: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1279A4u;
            goto label_1279a4;
        }
    }
    ctx->pc = 0x127988u;
    // 0x127988: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12798c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12798Cu;
    {
        const bool branch_taken_0x12798c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12798c) {
            ctx->pc = 0x127990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12798Cu;
            // 0x127990: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1279B0u;
            goto label_1279b0;
        }
    }
    ctx->pc = 0x127994u;
label_127994:
    // 0x127994: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127998: 0x8c430534  lw          $v1, 0x534($v0)
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
    // 0x12799c: 0x10000688  b           . + 4 + (0x688 << 2)
    ctx->pc = 0x12799Cu;
    {
        const bool branch_taken_0x12799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12799Cu;
        // 0x1279a0: 0x8c440538  lw          $a0, 0x538($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12799c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1279A4u;
label_1279a4:
    // 0x1279a4: 0x8c430534  lw          $v1, 0x534($v0)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
    // 0x1279a8: 0x10000685  b           . + 4 + (0x685 << 2)
    ctx->pc = 0x1279A8u;
    {
        const bool branch_taken_0x1279a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A8u;
        // 0x1279ac: 0x8c44053c  lw          $a0, 0x53C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279a8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1279B0u;
label_1279b0:
    // 0x1279b0: 0x8c430534  lw          $v1, 0x534($v0)
    ctx->pc = 0x1279b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
    // 0x1279b4: 0x10000682  b           . + 4 + (0x682 << 2)
    ctx->pc = 0x1279B4u;
    {
        const bool branch_taken_0x1279b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B4u;
        // 0x1279b8: 0x8c440540  lw          $a0, 0x540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279b4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1279BCu;
label_1279bc:
    // 0x1279bc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1279bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1279c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1279c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1279c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1279c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1279c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1279cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1279ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279d0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1279D0u;
    SET_GPR_U32(ctx, 31, 0x1279D8u);
    ctx->pc = 0x1279D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279D0u;
    // 0x1279d4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1279D0u, 0x1279D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279D8u;
label_1279d8:
    // 0x1279d8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1279dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1279dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1279e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1279e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1279e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1279e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279ec: 0xc042908  jal         func_10A420
    ctx->pc = 0x1279ECu;
    SET_GPR_U32(ctx, 31, 0x1279F4u);
    ctx->pc = 0x1279F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279ECu;
    // 0x1279f0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1279ECu, 0x1279F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279F4u;
label_1279f4:
    // 0x1279f4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1279F4u;
    {
        const bool branch_taken_0x1279f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1279F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F4u;
        // 0x1279f8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f4) {
            ctx->pc = 0x127A10u;
            goto label_127a10;
        }
    }
    ctx->pc = 0x1279FCu;
    // 0x1279fc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1279FCu;
    {
        const bool branch_taken_0x1279fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1279fc) {
            ctx->pc = 0x127A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1279FCu;
            // 0x127a00: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A28u;
            goto label_127a28;
        }
    }
    ctx->pc = 0x127A04u;
    // 0x127a04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127a08: 0x5202000c  beql        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x127A08u;
    {
        const bool branch_taken_0x127a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127a08) {
            ctx->pc = 0x127A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A08u;
            // 0x127a0c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A3Cu;
            goto label_127a3c;
        }
    }
    ctx->pc = 0x127A10u;
label_127a10:
    // 0x127a10: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127a14: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x127a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x127a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127a1c: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x127a20: 0x10000667  b           . + 4 + (0x667 << 2)
    ctx->pc = 0x127A20u;
    {
        const bool branch_taken_0x127a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A20u;
        // 0x127a24: 0x8c440124  lw          $a0, 0x124($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a20) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127A28u;
label_127a28:
    // 0x127a28: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x127a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x127a2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127a30: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x127a34: 0x10000662  b           . + 4 + (0x662 << 2)
    ctx->pc = 0x127A34u;
    {
        const bool branch_taken_0x127a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A34u;
        // 0x127a38: 0x8c440128  lw          $a0, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a34) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127A3Cu;
label_127a3c:
    // 0x127a3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x127a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x127a40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127a44: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x127a48: 0x1000065d  b           . + 4 + (0x65D << 2)
    ctx->pc = 0x127A48u;
    {
        const bool branch_taken_0x127a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A48u;
        // 0x127a4c: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a48) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127A50u;
label_127a50:
    // 0x127a50: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a58: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127a5c: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127a60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a64: 0xc042902  jal         func_10A408
    ctx->pc = 0x127A64u;
    SET_GPR_U32(ctx, 31, 0x127A6Cu);
    ctx->pc = 0x127A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A64u;
    // 0x127a68: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127A64u, 0x127A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A6Cu;
label_127a6c:
    // 0x127a6c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x127a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x127a70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127a74: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a7c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127a80: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127a84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a88: 0xc042908  jal         func_10A420
    ctx->pc = 0x127A88u;
    SET_GPR_U32(ctx, 31, 0x127A90u);
    ctx->pc = 0x127A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A88u;
    // 0x127a8c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127A88u, 0x127A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A90u;
label_127a90:
    // 0x127a90: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127A90u;
    {
        const bool branch_taken_0x127a90 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A90u;
        // 0x127a94: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a90) {
            ctx->pc = 0x127AACu;
            goto label_127aac;
        }
    }
    ctx->pc = 0x127A98u;
    // 0x127a98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127A98u;
    {
        const bool branch_taken_0x127a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a98) {
            ctx->pc = 0x127A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A98u;
            // 0x127a9c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127ABCu;
            goto label_127abc;
        }
    }
    ctx->pc = 0x127AA0u;
    // 0x127aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127aa4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127AA4u;
    {
        const bool branch_taken_0x127aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127aa4) {
            ctx->pc = 0x127AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127AA4u;
            // 0x127aa8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127AC8u;
            goto label_127ac8;
        }
    }
    ctx->pc = 0x127AACu;
label_127aac:
    // 0x127aac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127ab0: 0x8c430524  lw          $v1, 0x524($v0)
    ctx->pc = 0x127ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x127ab4: 0x10000642  b           . + 4 + (0x642 << 2)
    ctx->pc = 0x127AB4u;
    {
        const bool branch_taken_0x127ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB4u;
        // 0x127ab8: 0x8c440528  lw          $a0, 0x528($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ab4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127ABCu;
label_127abc:
    // 0x127abc: 0x8c430524  lw          $v1, 0x524($v0)
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x127ac0: 0x1000063f  b           . + 4 + (0x63F << 2)
    ctx->pc = 0x127AC0u;
    {
        const bool branch_taken_0x127ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AC0u;
        // 0x127ac4: 0x8c44052c  lw          $a0, 0x52C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ac0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127AC8u;
label_127ac8:
    // 0x127ac8: 0x8c430524  lw          $v1, 0x524($v0)
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x127acc: 0x1000063c  b           . + 4 + (0x63C << 2)
    ctx->pc = 0x127ACCu;
    {
        const bool branch_taken_0x127acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ACCu;
        // 0x127ad0: 0x8c440530  lw          $a0, 0x530($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127acc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127AD4u;
label_127ad4:
    // 0x127ad4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x127ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x127ad8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x127ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x127adc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127ae0: 0x8c627a0c  lw          $v0, 0x7A0C($v1)
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x127ae4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x127AE4u;
    {
        const bool branch_taken_0x127ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AE4u;
        // 0x127ae8: 0x8e451668  lw          $a1, 0x1668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ae4) {
            ctx->pc = 0x127B28u;
            goto label_127b28;
        }
    }
    ctx->pc = 0x127AECu;
    // 0x127aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127af4: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127afc: 0xc042902  jal         func_10A408
    ctx->pc = 0x127AFCu;
    SET_GPR_U32(ctx, 31, 0x127B04u);
    ctx->pc = 0x127B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AFCu;
    // 0x127b00: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127AFCu, 0x127B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B04u;
label_127b04:
    // 0x127b04: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b0c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127b10: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b18: 0xc042908  jal         func_10A420
    ctx->pc = 0x127B18u;
    SET_GPR_U32(ctx, 31, 0x127B20u);
    ctx->pc = 0x127B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B18u;
    // 0x127b1c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127B18u, 0x127B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B20u;
label_127b20:
    // 0x127b20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x127B20u;
    {
        const bool branch_taken_0x127b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b20) {
            ctx->pc = 0x127B5Cu;
            goto label_127b5c;
        }
    }
    ctx->pc = 0x127B28u;
label_127b28:
    // 0x127b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127b30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b38: 0xc042902  jal         func_10A408
    ctx->pc = 0x127B38u;
    SET_GPR_U32(ctx, 31, 0x127B40u);
    ctx->pc = 0x127B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B38u;
    // 0x127b3c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127B38u, 0x127B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B40u;
label_127b40:
    // 0x127b40: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b48: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b54: 0xc042908  jal         func_10A420
    ctx->pc = 0x127B54u;
    SET_GPR_U32(ctx, 31, 0x127B5Cu);
    ctx->pc = 0x127B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B54u;
    // 0x127b58: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127B54u, 0x127B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B5Cu;
label_127b5c:
    // 0x127b5c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127B5Cu;
    {
        const bool branch_taken_0x127b5c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B5Cu;
        // 0x127b60: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b5c) {
            ctx->pc = 0x127B78u;
            goto label_127b78;
        }
    }
    ctx->pc = 0x127B64u;
    // 0x127b64: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127B64u;
    {
        const bool branch_taken_0x127b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b64) {
            ctx->pc = 0x127B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127B64u;
            // 0x127b68: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127B88u;
            goto label_127b88;
        }
    }
    ctx->pc = 0x127B6Cu;
    // 0x127b6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127b70: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127B70u;
    {
        const bool branch_taken_0x127b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127b70) {
            ctx->pc = 0x127B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127B70u;
            // 0x127b74: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127B94u;
            goto label_127b94;
        }
    }
    ctx->pc = 0x127B78u;
label_127b78:
    // 0x127b78: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127b7c: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x127b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x127b80: 0x1000060f  b           . + 4 + (0x60F << 2)
    ctx->pc = 0x127B80u;
    {
        const bool branch_taken_0x127b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B80u;
        // 0x127b84: 0x8c440588  lw          $a0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b80) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127B88u;
label_127b88:
    // 0x127b88: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x127b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x127b8c: 0x1000060c  b           . + 4 + (0x60C << 2)
    ctx->pc = 0x127B8Cu;
    {
        const bool branch_taken_0x127b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B8Cu;
        // 0x127b90: 0x8c44058c  lw          $a0, 0x58C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b8c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127B94u;
label_127b94:
    // 0x127b94: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x127b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x127b98: 0x10000609  b           . + 4 + (0x609 << 2)
    ctx->pc = 0x127B98u;
    {
        const bool branch_taken_0x127b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B98u;
        // 0x127b9c: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b98) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127BA0u;
label_127ba0:
    // 0x127ba0: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127ba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127bac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127bb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bb4: 0xc042902  jal         func_10A408
    ctx->pc = 0x127BB4u;
    SET_GPR_U32(ctx, 31, 0x127BBCu);
    ctx->pc = 0x127BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BB4u;
    // 0x127bb8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127BB4u, 0x127BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BBCu;
label_127bbc:
    // 0x127bbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x127bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x127bc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127bc4: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bcc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127bd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bd8: 0xc042908  jal         func_10A420
    ctx->pc = 0x127BD8u;
    SET_GPR_U32(ctx, 31, 0x127BE0u);
    ctx->pc = 0x127BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BD8u;
    // 0x127bdc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127BD8u, 0x127BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BE0u;
label_127be0:
    // 0x127be0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127BE0u;
    {
        const bool branch_taken_0x127be0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BE0u;
        // 0x127be4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127be0) {
            ctx->pc = 0x127BFCu;
            goto label_127bfc;
        }
    }
    ctx->pc = 0x127BE8u;
    // 0x127be8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127BE8u;
    {
        const bool branch_taken_0x127be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127be8) {
            ctx->pc = 0x127BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127BE8u;
            // 0x127bec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127C0Cu;
            goto label_127c0c;
        }
    }
    ctx->pc = 0x127BF0u;
    // 0x127bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127bf4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127BF4u;
    {
        const bool branch_taken_0x127bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127bf4) {
            ctx->pc = 0x127BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127BF4u;
            // 0x127bf8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127C18u;
            goto label_127c18;
        }
    }
    ctx->pc = 0x127BFCu;
label_127bfc:
    // 0x127bfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127c00: 0x8c43062c  lw          $v1, 0x62C($v0)
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1580)));
    // 0x127c04: 0x100005ee  b           . + 4 + (0x5EE << 2)
    ctx->pc = 0x127C04u;
    {
        const bool branch_taken_0x127c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C04u;
        // 0x127c08: 0x8c440630  lw          $a0, 0x630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c04) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127C0Cu;
label_127c0c:
    // 0x127c0c: 0x8c43062c  lw          $v1, 0x62C($v0)
    ctx->pc = 0x127c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1580)));
    // 0x127c10: 0x100005eb  b           . + 4 + (0x5EB << 2)
    ctx->pc = 0x127C10u;
    {
        const bool branch_taken_0x127c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C10u;
        // 0x127c14: 0x8c440634  lw          $a0, 0x634($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c10) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127C18u;
label_127c18:
    // 0x127c18: 0x8c43062c  lw          $v1, 0x62C($v0)
    ctx->pc = 0x127c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1580)));
    // 0x127c1c: 0x100005e8  b           . + 4 + (0x5E8 << 2)
    ctx->pc = 0x127C1Cu;
    {
        const bool branch_taken_0x127c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C1Cu;
        // 0x127c20: 0x8c440638  lw          $a0, 0x638($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c1c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127C24u;
label_127c24:
    // 0x127c24: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c2c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x127c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127c30: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x127c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127c34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c38: 0xc042902  jal         func_10A408
    ctx->pc = 0x127C38u;
    SET_GPR_U32(ctx, 31, 0x127C40u);
    ctx->pc = 0x127C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C38u;
    // 0x127c3c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127C38u, 0x127C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C40u;
label_127c40:
    // 0x127c40: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x127c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x127c44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127c48: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c50: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x127c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127c54: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x127c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127c58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c5c: 0xc042908  jal         func_10A420
    ctx->pc = 0x127C5Cu;
    SET_GPR_U32(ctx, 31, 0x127C64u);
    ctx->pc = 0x127C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C5Cu;
    // 0x127c60: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127C5Cu, 0x127C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C64u;
label_127c64:
    // 0x127c64: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127C64u;
    {
        const bool branch_taken_0x127c64 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C64u;
        // 0x127c68: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c64) {
            ctx->pc = 0x127C80u;
            goto label_127c80;
        }
    }
    ctx->pc = 0x127C6Cu;
    // 0x127c6c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127C6Cu;
    {
        const bool branch_taken_0x127c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c6c) {
            ctx->pc = 0x127C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127C6Cu;
            // 0x127c70: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127C90u;
            goto label_127c90;
        }
    }
    ctx->pc = 0x127C74u;
    // 0x127c74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127c78: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127C78u;
    {
        const bool branch_taken_0x127c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127c78) {
            ctx->pc = 0x127C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127C78u;
            // 0x127c7c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127C9Cu;
            goto label_127c9c;
        }
    }
    ctx->pc = 0x127C80u;
label_127c80:
    // 0x127c80: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127c84: 0x8c4305c4  lw          $v1, 0x5C4($v0)
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x127c88: 0x100005cd  b           . + 4 + (0x5CD << 2)
    ctx->pc = 0x127C88u;
    {
        const bool branch_taken_0x127c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C88u;
        // 0x127c8c: 0x8c4405c8  lw          $a0, 0x5C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c88) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127C90u;
label_127c90:
    // 0x127c90: 0x8c4305c4  lw          $v1, 0x5C4($v0)
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x127c94: 0x100005ca  b           . + 4 + (0x5CA << 2)
    ctx->pc = 0x127C94u;
    {
        const bool branch_taken_0x127c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C94u;
        // 0x127c98: 0x8c4405cc  lw          $a0, 0x5CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c94) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127C9Cu;
label_127c9c:
    // 0x127c9c: 0x8c4305c4  lw          $v1, 0x5C4($v0)
    ctx->pc = 0x127c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x127ca0: 0x100005c7  b           . + 4 + (0x5C7 << 2)
    ctx->pc = 0x127CA0u;
    {
        const bool branch_taken_0x127ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CA0u;
        // 0x127ca4: 0x8c4405d0  lw          $a0, 0x5D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ca0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127CA8u;
label_127ca8:
    // 0x127ca8: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cb0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127cb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127cb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cbc: 0xc042902  jal         func_10A408
    ctx->pc = 0x127CBCu;
    SET_GPR_U32(ctx, 31, 0x127CC4u);
    ctx->pc = 0x127CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CBCu;
    // 0x127cc0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127CBCu, 0x127CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CC4u;
label_127cc4:
    // 0x127cc4: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ccc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127cd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cd8: 0xc042908  jal         func_10A420
    ctx->pc = 0x127CD8u;
    SET_GPR_U32(ctx, 31, 0x127CE0u);
    ctx->pc = 0x127CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CD8u;
    // 0x127cdc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127CD8u, 0x127CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CE0u;
label_127ce0:
    // 0x127ce0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127CE0u;
    {
        const bool branch_taken_0x127ce0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CE0u;
        // 0x127ce4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ce0) {
            ctx->pc = 0x127CFCu;
            goto label_127cfc;
        }
    }
    ctx->pc = 0x127CE8u;
    // 0x127ce8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127CE8u;
    {
        const bool branch_taken_0x127ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ce8) {
            ctx->pc = 0x127CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127CE8u;
            // 0x127cec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D0Cu;
            goto label_127d0c;
        }
    }
    ctx->pc = 0x127CF0u;
    // 0x127cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127cf4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127CF4u;
    {
        const bool branch_taken_0x127cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127cf4) {
            ctx->pc = 0x127CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127CF4u;
            // 0x127cf8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D18u;
            goto label_127d18;
        }
    }
    ctx->pc = 0x127CFCu;
label_127cfc:
    // 0x127cfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127d00: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x127d04: 0x100005ae  b           . + 4 + (0x5AE << 2)
    ctx->pc = 0x127D04u;
    {
        const bool branch_taken_0x127d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D04u;
        // 0x127d08: 0x8c440598  lw          $a0, 0x598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d04) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127D0Cu;
label_127d0c:
    // 0x127d0c: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x127d10: 0x100005ab  b           . + 4 + (0x5AB << 2)
    ctx->pc = 0x127D10u;
    {
        const bool branch_taken_0x127d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D10u;
        // 0x127d14: 0x8c44059c  lw          $a0, 0x59C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d10) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127D18u;
label_127d18:
    // 0x127d18: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x127d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x127d1c: 0x100005a8  b           . + 4 + (0x5A8 << 2)
    ctx->pc = 0x127D1Cu;
    {
        const bool branch_taken_0x127d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D1Cu;
        // 0x127d20: 0x8c4405a0  lw          $a0, 0x5A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d1c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127D24u;
label_127d24:
    // 0x127d24: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127d30: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x127d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d38: 0xc042902  jal         func_10A408
    ctx->pc = 0x127D38u;
    SET_GPR_U32(ctx, 31, 0x127D40u);
    ctx->pc = 0x127D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127D38u;
    // 0x127d3c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127D38u, 0x127D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D40u;
label_127d40:
    // 0x127d40: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d48: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127d4c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d54: 0xc042908  jal         func_10A420
    ctx->pc = 0x127D54u;
    SET_GPR_U32(ctx, 31, 0x127D5Cu);
    ctx->pc = 0x127D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127D54u;
    // 0x127d58: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127D54u, 0x127D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D5Cu;
label_127d5c:
    // 0x127d5c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127D5Cu;
    {
        const bool branch_taken_0x127d5c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D5Cu;
        // 0x127d60: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d5c) {
            ctx->pc = 0x127D78u;
            goto label_127d78;
        }
    }
    ctx->pc = 0x127D64u;
    // 0x127d64: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127D64u;
    {
        const bool branch_taken_0x127d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127d64) {
            ctx->pc = 0x127D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127D64u;
            // 0x127d68: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D88u;
            goto label_127d88;
        }
    }
    ctx->pc = 0x127D6Cu;
    // 0x127d6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127d70: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127D70u;
    {
        const bool branch_taken_0x127d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127d70) {
            ctx->pc = 0x127D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127D70u;
            // 0x127d74: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D94u;
            goto label_127d94;
        }
    }
    ctx->pc = 0x127D78u;
label_127d78:
    // 0x127d78: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127d7c: 0x8c430574  lw          $v1, 0x574($v0)
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
    // 0x127d80: 0x1000058f  b           . + 4 + (0x58F << 2)
    ctx->pc = 0x127D80u;
    {
        const bool branch_taken_0x127d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D80u;
        // 0x127d84: 0x8c440578  lw          $a0, 0x578($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d80) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127D88u;
label_127d88:
    // 0x127d88: 0x8c430574  lw          $v1, 0x574($v0)
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
    // 0x127d8c: 0x1000058c  b           . + 4 + (0x58C << 2)
    ctx->pc = 0x127D8Cu;
    {
        const bool branch_taken_0x127d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D8Cu;
        // 0x127d90: 0x8c44057c  lw          $a0, 0x57C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d8c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127D94u;
label_127d94:
    // 0x127d94: 0x8c430574  lw          $v1, 0x574($v0)
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
    // 0x127d98: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x127D98u;
    {
        const bool branch_taken_0x127d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D98u;
        // 0x127d9c: 0x8c440580  lw          $a0, 0x580($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d98) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127DA0u;
label_127da0:
    // 0x127da0: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127da8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127dac: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127db4: 0xc042902  jal         func_10A408
    ctx->pc = 0x127DB4u;
    SET_GPR_U32(ctx, 31, 0x127DBCu);
    ctx->pc = 0x127DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127DB4u;
    // 0x127db8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127DB4u, 0x127DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DBCu;
label_127dbc:
    // 0x127dbc: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127dc8: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x127dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x127dcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dd0: 0xc042908  jal         func_10A420
    ctx->pc = 0x127DD0u;
    SET_GPR_U32(ctx, 31, 0x127DD8u);
    ctx->pc = 0x127DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127DD0u;
    // 0x127dd4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127DD0u, 0x127DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DD8u;
label_127dd8:
    // 0x127dd8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127DD8u;
    {
        const bool branch_taken_0x127dd8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DD8u;
        // 0x127ddc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127dd8) {
            ctx->pc = 0x127DF4u;
            goto label_127df4;
        }
    }
    ctx->pc = 0x127DE0u;
    // 0x127de0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127DE0u;
    {
        const bool branch_taken_0x127de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127de0) {
            ctx->pc = 0x127DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127DE0u;
            // 0x127de4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E04u;
            goto label_127e04;
        }
    }
    ctx->pc = 0x127DE8u;
    // 0x127de8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127dec: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127DECu;
    {
        const bool branch_taken_0x127dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127dec) {
            ctx->pc = 0x127DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127DECu;
            // 0x127df0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E10u;
            goto label_127e10;
        }
    }
    ctx->pc = 0x127DF4u;
label_127df4:
    // 0x127df4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127df8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127dfc: 0x10000570  b           . + 4 + (0x570 << 2)
    ctx->pc = 0x127DFCu;
    {
        const bool branch_taken_0x127dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DFCu;
        // 0x127e00: 0x8c4400a8  lw          $a0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127dfc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E04u;
label_127e04:
    // 0x127e04: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127e08: 0x1000056d  b           . + 4 + (0x56D << 2)
    ctx->pc = 0x127E08u;
    {
        const bool branch_taken_0x127e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E08u;
        // 0x127e0c: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e08) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E10u;
label_127e10:
    // 0x127e10: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127e14: 0x1000056a  b           . + 4 + (0x56A << 2)
    ctx->pc = 0x127E14u;
    {
        const bool branch_taken_0x127e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E14u;
        // 0x127e18: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e14) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E1Cu;
label_127e1c:
    // 0x127e1c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127e28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127e2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e30: 0xc042902  jal         func_10A408
    ctx->pc = 0x127E30u;
    SET_GPR_U32(ctx, 31, 0x127E38u);
    ctx->pc = 0x127E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E30u;
    // 0x127e34: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127E30u, 0x127E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E38u;
label_127e38:
    // 0x127e38: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127e44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127e48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e4c: 0xc042908  jal         func_10A420
    ctx->pc = 0x127E4Cu;
    SET_GPR_U32(ctx, 31, 0x127E54u);
    ctx->pc = 0x127E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E4Cu;
    // 0x127e50: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127E4Cu, 0x127E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E54u;
label_127e54:
    // 0x127e54: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127E54u;
    {
        const bool branch_taken_0x127e54 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E54u;
        // 0x127e58: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e54) {
            ctx->pc = 0x127E70u;
            goto label_127e70;
        }
    }
    ctx->pc = 0x127E5Cu;
    // 0x127e5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127E5Cu;
    {
        const bool branch_taken_0x127e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127e5c) {
            ctx->pc = 0x127E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E5Cu;
            // 0x127e60: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E80u;
            goto label_127e80;
        }
    }
    ctx->pc = 0x127E64u;
    // 0x127e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127e68: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127E68u;
    {
        const bool branch_taken_0x127e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127e68) {
            ctx->pc = 0x127E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E68u;
            // 0x127e6c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E8Cu;
            goto label_127e8c;
        }
    }
    ctx->pc = 0x127E70u;
label_127e70:
    // 0x127e70: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127e74: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127e78: 0x10000551  b           . + 4 + (0x551 << 2)
    ctx->pc = 0x127E78u;
    {
        const bool branch_taken_0x127e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E78u;
        // 0x127e7c: 0x8c4400a8  lw          $a0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e78) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E80u;
label_127e80:
    // 0x127e80: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127e84: 0x1000054e  b           . + 4 + (0x54E << 2)
    ctx->pc = 0x127E84u;
    {
        const bool branch_taken_0x127e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E84u;
        // 0x127e88: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e84) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E8Cu;
label_127e8c:
    // 0x127e8c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127e90: 0x1000054b  b           . + 4 + (0x54B << 2)
    ctx->pc = 0x127E90u;
    {
        const bool branch_taken_0x127e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E90u;
        // 0x127e94: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e90) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127E98u;
label_127e98:
    // 0x127e98: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127ea4: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x127ea8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127eac: 0xc042902  jal         func_10A408
    ctx->pc = 0x127EACu;
    SET_GPR_U32(ctx, 31, 0x127EB4u);
    ctx->pc = 0x127EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EACu;
    // 0x127eb0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127EACu, 0x127EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EB4u;
label_127eb4:
    // 0x127eb4: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ebc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127ec0: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x127ec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ec8: 0xc042908  jal         func_10A420
    ctx->pc = 0x127EC8u;
    SET_GPR_U32(ctx, 31, 0x127ED0u);
    ctx->pc = 0x127ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EC8u;
    // 0x127ecc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127EC8u, 0x127ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ED0u;
label_127ed0:
    // 0x127ed0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127ED0u;
    {
        const bool branch_taken_0x127ed0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED0u;
        // 0x127ed4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ed0) {
            ctx->pc = 0x127EECu;
            goto label_127eec;
        }
    }
    ctx->pc = 0x127ED8u;
    // 0x127ed8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127ED8u;
    {
        const bool branch_taken_0x127ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ed8) {
            ctx->pc = 0x127EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127ED8u;
            // 0x127edc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127EFCu;
            goto label_127efc;
        }
    }
    ctx->pc = 0x127EE0u;
    // 0x127ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127ee4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127EE4u;
    {
        const bool branch_taken_0x127ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127ee4) {
            ctx->pc = 0x127EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127EE4u;
            // 0x127ee8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127F08u;
            goto label_127f08;
        }
    }
    ctx->pc = 0x127EECu;
label_127eec:
    // 0x127eec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127ef0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127ef4: 0x10000532  b           . + 4 + (0x532 << 2)
    ctx->pc = 0x127EF4u;
    {
        const bool branch_taken_0x127ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x8c440964  lw          $a0, 0x964($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ef4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127f00: 0x1000052f  b           . + 4 + (0x52F << 2)
    ctx->pc = 0x127F00u;
    {
        const bool branch_taken_0x127f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F00u;
        // 0x127f04: 0x8c440964  lw          $a0, 0x964($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f00) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127F08u;
label_127f08:
    // 0x127f08: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x127f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x127f0c: 0x1000052c  b           . + 4 + (0x52C << 2)
    ctx->pc = 0x127F0Cu;
    {
        const bool branch_taken_0x127f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F0Cu;
        // 0x127f10: 0x8c440968  lw          $a0, 0x968($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f0c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127F14u;
label_127f14:
    // 0x127f14: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127f20: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127f24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f28: 0xc042902  jal         func_10A408
    ctx->pc = 0x127F28u;
    SET_GPR_U32(ctx, 31, 0x127F30u);
    ctx->pc = 0x127F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F28u;
    // 0x127f2c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127F28u, 0x127F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F30u;
label_127f30:
    // 0x127f30: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127f3c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127f40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f44: 0xc042908  jal         func_10A420
    ctx->pc = 0x127F44u;
    SET_GPR_U32(ctx, 31, 0x127F4Cu);
    ctx->pc = 0x127F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F44u;
    // 0x127f48: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127F44u, 0x127F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F4Cu;
label_127f4c:
    // 0x127f4c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127F4Cu;
    {
        const bool branch_taken_0x127f4c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f4c) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127F54u;
    // 0x127f54: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127F54u;
    {
        const bool branch_taken_0x127f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127f54) {
            ctx->pc = 0x127F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127F54u;
            // 0x127f58: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127F78u;
            goto label_127f78;
        }
    }
    ctx->pc = 0x127F5Cu;
    // 0x127f5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127f60: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127F60u;
    {
        const bool branch_taken_0x127f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127f60) {
            ctx->pc = 0x127F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127F60u;
            // 0x127f64: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127F84u;
            goto label_127f84;
        }
    }
    ctx->pc = 0x127F68u;
label_127f68:
    // 0x127f68: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127f6c: 0x8c4305e4  lw          $v1, 0x5E4($v0)
    ctx->pc = 0x127f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
    // 0x127f70: 0x10000513  b           . + 4 + (0x513 << 2)
    ctx->pc = 0x127F70u;
    {
        const bool branch_taken_0x127f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F70u;
        // 0x127f74: 0x8c4405e8  lw          $a0, 0x5E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f70) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127F78u;
label_127f78:
    // 0x127f78: 0x8c4305e4  lw          $v1, 0x5E4($v0)
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
    // 0x127f7c: 0x10000510  b           . + 4 + (0x510 << 2)
    ctx->pc = 0x127F7Cu;
    {
        const bool branch_taken_0x127f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x8c4405ec  lw          $a0, 0x5EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f7c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127F84u;
label_127f84:
    // 0x127f84: 0x8c4305e4  lw          $v1, 0x5E4($v0)
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
    // 0x127f88: 0x1000050d  b           . + 4 + (0x50D << 2)
    ctx->pc = 0x127F88u;
    {
        const bool branch_taken_0x127f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F88u;
        // 0x127f8c: 0x8c4405f0  lw          $a0, 0x5F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f88) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127F90u;
label_127f90:
    // 0x127f90: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x127f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x127f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127f9c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x127f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x127fa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127fa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fa4: 0xc042902  jal         func_10A408
    ctx->pc = 0x127FA4u;
    SET_GPR_U32(ctx, 31, 0x127FACu);
    ctx->pc = 0x127FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FA4u;
    // 0x127fa8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x127FA4u, 0x127FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FACu;
label_127fac:
    // 0x127fac: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x127facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x127fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x127fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127fb8: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x127fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fc0: 0xc042908  jal         func_10A420
    ctx->pc = 0x127FC0u;
    SET_GPR_U32(ctx, 31, 0x127FC8u);
    ctx->pc = 0x127FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FC0u;
    // 0x127fc4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x127FC0u, 0x127FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FC8u;
label_127fc8:
    // 0x127fc8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127FC8u;
    {
        const bool branch_taken_0x127fc8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x127FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FC8u;
        // 0x127fcc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fc8) {
            ctx->pc = 0x127FE4u;
            goto label_127fe4;
        }
    }
    ctx->pc = 0x127FD0u;
    // 0x127fd0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127FD0u;
    {
        const bool branch_taken_0x127fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127fd0) {
            ctx->pc = 0x127FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127FD0u;
            // 0x127fd4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127FF4u;
            goto label_127ff4;
        }
    }
    ctx->pc = 0x127FD8u;
    // 0x127fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127fdc: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127FDCu;
    {
        const bool branch_taken_0x127fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127fdc) {
            ctx->pc = 0x127FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127FDCu;
            // 0x127fe0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128000u;
            goto label_128000;
        }
    }
    ctx->pc = 0x127FE4u;
label_127fe4:
    // 0x127fe4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x127fe8: 0x8c4305f4  lw          $v1, 0x5F4($v0)
    ctx->pc = 0x127fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1524)));
    // 0x127fec: 0x100004f4  b           . + 4 + (0x4F4 << 2)
    ctx->pc = 0x127FECu;
    {
        const bool branch_taken_0x127fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FECu;
        // 0x127ff0: 0x8c4405f8  lw          $a0, 0x5F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fec) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x127FF4u;
label_127ff4:
    // 0x127ff4: 0x8c4305f4  lw          $v1, 0x5F4($v0)
    ctx->pc = 0x127ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1524)));
    // 0x127ff8: 0x100004f1  b           . + 4 + (0x4F1 << 2)
    ctx->pc = 0x127FF8u;
    {
        const bool branch_taken_0x127ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FF8u;
        // 0x127ffc: 0x8c4405fc  lw          $a0, 0x5FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ff8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128000u;
label_128000:
    // 0x128000: 0x8c4305f4  lw          $v1, 0x5F4($v0)
    ctx->pc = 0x128000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1524)));
    // 0x128004: 0x100004ee  b           . + 4 + (0x4EE << 2)
    ctx->pc = 0x128004u;
    {
        const bool branch_taken_0x128004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128004u;
        // 0x128008: 0x8c440600  lw          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128004) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12800Cu;
label_12800c:
    // 0x12800c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128014: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128018: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x128018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12801c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12801cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128020: 0xc042902  jal         func_10A408
    ctx->pc = 0x128020u;
    SET_GPR_U32(ctx, 31, 0x128028u);
    ctx->pc = 0x128024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128020u;
    // 0x128024: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128020u, 0x128028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128028u;
label_128028:
    // 0x128028: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x12802c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128030: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x128030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128034: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x128038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12803c: 0xc042908  jal         func_10A420
    ctx->pc = 0x12803Cu;
    SET_GPR_U32(ctx, 31, 0x128044u);
    ctx->pc = 0x128040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12803Cu;
    // 0x128040: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x12803Cu, 0x128044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128044u;
label_128044:
    // 0x128044: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128044u;
    {
        const bool branch_taken_0x128044 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128044u;
        // 0x128048: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128044) {
            ctx->pc = 0x128060u;
            goto label_128060;
        }
    }
    ctx->pc = 0x12804Cu;
    // 0x12804c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12804Cu;
    {
        const bool branch_taken_0x12804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12804c) {
            ctx->pc = 0x128050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12804Cu;
            // 0x128050: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128070u;
            goto label_128070;
        }
    }
    ctx->pc = 0x128054u;
    // 0x128054: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128058: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128058u;
    {
        const bool branch_taken_0x128058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128058) {
            ctx->pc = 0x12805Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128058u;
            // 0x12805c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12807Cu;
            goto label_12807c;
        }
    }
    ctx->pc = 0x128060u;
label_128060:
    // 0x128060: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128064: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x128064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x128068: 0x100004d5  b           . + 4 + (0x4D5 << 2)
    ctx->pc = 0x128068u;
    {
        const bool branch_taken_0x128068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128068u;
        // 0x12806c: 0x8c4406d0  lw          $a0, 0x6D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128068) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128070u;
label_128070:
    // 0x128070: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x128070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x128074: 0x100004d2  b           . + 4 + (0x4D2 << 2)
    ctx->pc = 0x128074u;
    {
        const bool branch_taken_0x128074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128074u;
        // 0x128078: 0x8c4406d4  lw          $a0, 0x6D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128074) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12807Cu;
label_12807c:
    // 0x12807c: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x128080: 0x100004cf  b           . + 4 + (0x4CF << 2)
    ctx->pc = 0x128080u;
    {
        const bool branch_taken_0x128080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128080u;
        // 0x128084: 0x8c4406d8  lw          $a0, 0x6D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128080) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128088u;
label_128088:
    // 0x128088: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12808c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128094: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12809c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12809Cu;
    SET_GPR_U32(ctx, 31, 0x1280A4u);
    ctx->pc = 0x1280A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12809Cu;
    // 0x1280a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12809Cu, 0x1280A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280A4u;
label_1280a4:
    // 0x1280a4: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1280a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1280a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1280a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1280b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1280b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280b8: 0xc042908  jal         func_10A420
    ctx->pc = 0x1280B8u;
    SET_GPR_U32(ctx, 31, 0x1280C0u);
    ctx->pc = 0x1280BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280B8u;
    // 0x1280bc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1280B8u, 0x1280C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280C0u;
label_1280c0:
    // 0x1280c0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1280C0u;
    {
        const bool branch_taken_0x1280c0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1280C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280C0u;
        // 0x1280c4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280c0) {
            ctx->pc = 0x1280DCu;
            goto label_1280dc;
        }
    }
    ctx->pc = 0x1280C8u;
    // 0x1280c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1280C8u;
    {
        const bool branch_taken_0x1280c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1280c8) {
            ctx->pc = 0x1280CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1280C8u;
            // 0x1280cc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1280ECu;
            goto label_1280ec;
        }
    }
    ctx->pc = 0x1280D0u;
    // 0x1280d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1280d4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1280D4u;
    {
        const bool branch_taken_0x1280d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1280d4) {
            ctx->pc = 0x1280D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1280D4u;
            // 0x1280d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1280F8u;
            goto label_1280f8;
        }
    }
    ctx->pc = 0x1280DCu;
label_1280dc:
    // 0x1280dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1280e0: 0x8c4305d4  lw          $v1, 0x5D4($v0)
    ctx->pc = 0x1280e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1492)));
    // 0x1280e4: 0x100004b6  b           . + 4 + (0x4B6 << 2)
    ctx->pc = 0x1280E4u;
    {
        const bool branch_taken_0x1280e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280E4u;
        // 0x1280e8: 0x8c4405d8  lw          $a0, 0x5D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280e4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1280ECu;
label_1280ec:
    // 0x1280ec: 0x8c4305d4  lw          $v1, 0x5D4($v0)
    ctx->pc = 0x1280ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1492)));
    // 0x1280f0: 0x100004b3  b           . + 4 + (0x4B3 << 2)
    ctx->pc = 0x1280F0u;
    {
        const bool branch_taken_0x1280f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280F0u;
        // 0x1280f4: 0x8c4405dc  lw          $a0, 0x5DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280f0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1280F8u;
label_1280f8:
    // 0x1280f8: 0x8c4305d4  lw          $v1, 0x5D4($v0)
    ctx->pc = 0x1280f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1492)));
    // 0x1280fc: 0x100004b0  b           . + 4 + (0x4B0 << 2)
    ctx->pc = 0x1280FCu;
    {
        const bool branch_taken_0x1280fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280FCu;
        // 0x128100: 0x8c4405e0  lw          $a0, 0x5E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280fc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128104u;
label_128104:
    // 0x128104: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12810c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128110: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x128110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x128114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128118: 0xc042902  jal         func_10A408
    ctx->pc = 0x128118u;
    SET_GPR_U32(ctx, 31, 0x128120u);
    ctx->pc = 0x12811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128118u;
    // 0x12811c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128118u, 0x128120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128120u;
label_128120:
    // 0x128120: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x128120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x128124: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x128124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x128128: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x12812c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128130: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128134: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12813c: 0xc042908  jal         func_10A420
    ctx->pc = 0x12813Cu;
    SET_GPR_U32(ctx, 31, 0x128144u);
    ctx->pc = 0x128140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12813Cu;
    // 0x128140: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x12813Cu, 0x128144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128144u;
label_128144:
    // 0x128144: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128144u;
    {
        const bool branch_taken_0x128144 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128144u;
        // 0x128148: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128144) {
            ctx->pc = 0x128160u;
            goto label_128160;
        }
    }
    ctx->pc = 0x12814Cu;
    // 0x12814c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12814Cu;
    {
        const bool branch_taken_0x12814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12814c) {
            ctx->pc = 0x128150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12814Cu;
            // 0x128150: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128170u;
            goto label_128170;
        }
    }
    ctx->pc = 0x128154u;
    // 0x128154: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128158: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128158u;
    {
        const bool branch_taken_0x128158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128158) {
            ctx->pc = 0x12815Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128158u;
            // 0x12815c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12817Cu;
            goto label_12817c;
        }
    }
    ctx->pc = 0x128160u;
label_128160:
    // 0x128160: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128164: 0x8c4302d8  lw          $v1, 0x2D8($v0)
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x128168: 0x10000495  b           . + 4 + (0x495 << 2)
    ctx->pc = 0x128168u;
    {
        const bool branch_taken_0x128168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128168u;
        // 0x12816c: 0x8c4402dc  lw          $a0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128168) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128170u;
label_128170:
    // 0x128170: 0x8c4302d8  lw          $v1, 0x2D8($v0)
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x128174: 0x10000492  b           . + 4 + (0x492 << 2)
    ctx->pc = 0x128174u;
    {
        const bool branch_taken_0x128174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128174u;
        // 0x128178: 0x8c4402dc  lw          $a0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128174) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12817Cu;
label_12817c:
    // 0x12817c: 0x8c4302d8  lw          $v1, 0x2D8($v0)
    ctx->pc = 0x12817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x128180: 0x1000048f  b           . + 4 + (0x48F << 2)
    ctx->pc = 0x128180u;
    {
        const bool branch_taken_0x128180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128180u;
        // 0x128184: 0x8c4402dc  lw          $a0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128180) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128188u;
label_128188:
    // 0x128188: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12818c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128190: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x128190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128194: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x128198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12819c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12819Cu;
    SET_GPR_U32(ctx, 31, 0x1281A4u);
    ctx->pc = 0x1281A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12819Cu;
    // 0x1281a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12819Cu, 0x1281A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281A4u;
label_1281a4:
    // 0x1281a4: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1281a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1281a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1281a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1281acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1281b0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1281b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1281b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281b8: 0xc042908  jal         func_10A420
    ctx->pc = 0x1281B8u;
    SET_GPR_U32(ctx, 31, 0x1281C0u);
    ctx->pc = 0x1281BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281B8u;
    // 0x1281bc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1281B8u, 0x1281C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281C0u;
label_1281c0:
    // 0x1281c0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1281C0u;
    {
        const bool branch_taken_0x1281c0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281C0u;
        // 0x1281c4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281c0) {
            ctx->pc = 0x1281DCu;
            goto label_1281dc;
        }
    }
    ctx->pc = 0x1281C8u;
    // 0x1281c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1281C8u;
    {
        const bool branch_taken_0x1281c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1281c8) {
            ctx->pc = 0x1281CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1281C8u;
            // 0x1281cc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281ECu;
            goto label_1281ec;
        }
    }
    ctx->pc = 0x1281D0u;
    // 0x1281d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1281d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1281d4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1281D4u;
    {
        const bool branch_taken_0x1281d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1281d4) {
            ctx->pc = 0x1281D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1281D4u;
            // 0x1281d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281F8u;
            goto label_1281f8;
        }
    }
    ctx->pc = 0x1281DCu;
label_1281dc:
    // 0x1281dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1281dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1281e0: 0x8c43063c  lw          $v1, 0x63C($v0)
    ctx->pc = 0x1281e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1596)));
    // 0x1281e4: 0x10000476  b           . + 4 + (0x476 << 2)
    ctx->pc = 0x1281E4u;
    {
        const bool branch_taken_0x1281e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E4u;
        // 0x1281e8: 0x8c440640  lw          $a0, 0x640($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1281ECu;
label_1281ec:
    // 0x1281ec: 0x8c43063c  lw          $v1, 0x63C($v0)
    ctx->pc = 0x1281ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1596)));
    // 0x1281f0: 0x10000473  b           . + 4 + (0x473 << 2)
    ctx->pc = 0x1281F0u;
    {
        const bool branch_taken_0x1281f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281F0u;
        // 0x1281f4: 0x8c440644  lw          $a0, 0x644($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1281F8u;
label_1281f8:
    // 0x1281f8: 0x8c43063c  lw          $v1, 0x63C($v0)
    ctx->pc = 0x1281f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1596)));
    // 0x1281fc: 0x10000470  b           . + 4 + (0x470 << 2)
    ctx->pc = 0x1281FCu;
    {
        const bool branch_taken_0x1281fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281FCu;
        // 0x128200: 0x8c440648  lw          $a0, 0x648($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281fc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128204u;
label_128204:
    // 0x128204: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12820c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x12820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x128210: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128218: 0xc042902  jal         func_10A408
    ctx->pc = 0x128218u;
    SET_GPR_U32(ctx, 31, 0x128220u);
    ctx->pc = 0x12821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128218u;
    // 0x12821c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128218u, 0x128220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128220u;
label_128220:
    // 0x128220: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128228: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x128228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12822c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128234: 0xc042908  jal         func_10A420
    ctx->pc = 0x128234u;
    SET_GPR_U32(ctx, 31, 0x12823Cu);
    ctx->pc = 0x128238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128234u;
    // 0x128238: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128234u, 0x12823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12823Cu;
label_12823c:
    // 0x12823c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12823Cu;
    {
        const bool branch_taken_0x12823c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12823Cu;
        // 0x128240: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12823c) {
            ctx->pc = 0x128258u;
            goto label_128258;
        }
    }
    ctx->pc = 0x128244u;
    // 0x128244: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128244u;
    {
        const bool branch_taken_0x128244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128244) {
            ctx->pc = 0x128248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128244u;
            // 0x128248: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128268u;
            goto label_128268;
        }
    }
    ctx->pc = 0x12824Cu;
    // 0x12824c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128250: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128250u;
    {
        const bool branch_taken_0x128250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128250) {
            ctx->pc = 0x128254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128250u;
            // 0x128254: 0x8e451668  lw          $a1, 0x1668($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128274u;
            goto label_128274;
        }
    }
    ctx->pc = 0x128258u;
label_128258:
    // 0x128258: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12825c: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x128260: 0x10000457  b           . + 4 + (0x457 << 2)
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128260u;
        // 0x128264: 0x8c440568  lw          $a0, 0x568($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128260) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128268u;
label_128268:
    // 0x128268: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x128268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x12826c: 0x10000454  b           . + 4 + (0x454 << 2)
    ctx->pc = 0x12826Cu;
    {
        const bool branch_taken_0x12826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12826Cu;
        // 0x128270: 0x8c44056c  lw          $a0, 0x56C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12826c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128274u;
label_128274:
    // 0x128274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128278: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x128278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12827c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x12827cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x128280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128284: 0xc042902  jal         func_10A408
    ctx->pc = 0x128284u;
    SET_GPR_U32(ctx, 31, 0x12828Cu);
    ctx->pc = 0x128288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128284u;
    // 0x128288: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128284u, 0x12828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12828Cu;
label_12828c:
    // 0x12828c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128290: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x128294: 0x1000044a  b           . + 4 + (0x44A << 2)
    ctx->pc = 0x128294u;
    {
        const bool branch_taken_0x128294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128294u;
        // 0x128298: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128294) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12829Cu;
label_12829c:
    // 0x12829c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1282a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1282a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1282a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282a8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1282ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1282acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282b0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1282B0u;
    SET_GPR_U32(ctx, 31, 0x1282B8u);
    ctx->pc = 0x1282B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282B0u;
    // 0x1282b4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1282B0u, 0x1282B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282B8u;
label_1282b8:
    // 0x1282b8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1282bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1282bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1282c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1282c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1282c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1282c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282cc: 0xc042908  jal         func_10A420
    ctx->pc = 0x1282CCu;
    SET_GPR_U32(ctx, 31, 0x1282D4u);
    ctx->pc = 0x1282D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282CCu;
    // 0x1282d0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1282CCu, 0x1282D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282D4u;
label_1282d4:
    // 0x1282d4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1282D4u;
    {
        const bool branch_taken_0x1282d4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1282D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D4u;
        // 0x1282d8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d4) {
            ctx->pc = 0x1282F0u;
            goto label_1282f0;
        }
    }
    ctx->pc = 0x1282DCu;
    // 0x1282dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282DCu;
    {
        const bool branch_taken_0x1282dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1282dc) {
            ctx->pc = 0x1282E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1282DCu;
            // 0x1282e0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128300u;
            goto label_128300;
        }
    }
    ctx->pc = 0x1282E4u;
    // 0x1282e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1282e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1282e8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282E8u;
    {
        const bool branch_taken_0x1282e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1282e8) {
            ctx->pc = 0x1282ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1282E8u;
            // 0x1282ec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12830Cu;
            goto label_12830c;
        }
    }
    ctx->pc = 0x1282F0u;
label_1282f0:
    // 0x1282f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1282f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1282f4: 0x8c43064c  lw          $v1, 0x64C($v0)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    // 0x1282f8: 0x10000431  b           . + 4 + (0x431 << 2)
    ctx->pc = 0x1282F8u;
    {
        const bool branch_taken_0x1282f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F8u;
        // 0x1282fc: 0x8c440650  lw          $a0, 0x650($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282f8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128300u;
label_128300:
    // 0x128300: 0x8c43064c  lw          $v1, 0x64C($v0)
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    // 0x128304: 0x1000042e  b           . + 4 + (0x42E << 2)
    ctx->pc = 0x128304u;
    {
        const bool branch_taken_0x128304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128304u;
        // 0x128308: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128304) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12830Cu;
label_12830c:
    // 0x12830c: 0x8c43064c  lw          $v1, 0x64C($v0)
    ctx->pc = 0x12830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    // 0x128310: 0x1000042b  b           . + 4 + (0x42B << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0x8c440658  lw          $a0, 0x658($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12831c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128324: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12832c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12832Cu;
    SET_GPR_U32(ctx, 31, 0x128334u);
    ctx->pc = 0x128330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12832Cu;
    // 0x128330: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12832Cu, 0x128334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128334u;
label_128334:
    // 0x128334: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12833c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12833cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128340: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128348: 0xc042908  jal         func_10A420
    ctx->pc = 0x128348u;
    SET_GPR_U32(ctx, 31, 0x128350u);
    ctx->pc = 0x12834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128348u;
    // 0x12834c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128348u, 0x128350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128350u;
label_128350:
    // 0x128350: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128350u;
    {
        const bool branch_taken_0x128350 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128350u;
        // 0x128354: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128350) {
            ctx->pc = 0x12836Cu;
            goto label_12836c;
        }
    }
    ctx->pc = 0x128358u;
    // 0x128358: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128358u;
    {
        const bool branch_taken_0x128358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128358) {
            ctx->pc = 0x12835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128358u;
            // 0x12835c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12837Cu;
            goto label_12837c;
        }
    }
    ctx->pc = 0x128360u;
    // 0x128360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128364: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128364u;
    {
        const bool branch_taken_0x128364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128364) {
            ctx->pc = 0x128368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128364u;
            // 0x128368: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128388u;
            goto label_128388;
        }
    }
    ctx->pc = 0x12836Cu;
label_12836c:
    // 0x12836c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128370: 0x8c43065c  lw          $v1, 0x65C($v0)
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x128374: 0x10000412  b           . + 4 + (0x412 << 2)
    ctx->pc = 0x128374u;
    {
        const bool branch_taken_0x128374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128374u;
        // 0x128378: 0x8c440660  lw          $a0, 0x660($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128374) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12837Cu;
label_12837c:
    // 0x12837c: 0x8c43065c  lw          $v1, 0x65C($v0)
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x128380: 0x1000040f  b           . + 4 + (0x40F << 2)
    ctx->pc = 0x128380u;
    {
        const bool branch_taken_0x128380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128380u;
        // 0x128384: 0x8c440664  lw          $a0, 0x664($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128380) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128388u;
label_128388:
    // 0x128388: 0x8c43065c  lw          $v1, 0x65C($v0)
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x12838c: 0x1000040c  b           . + 4 + (0x40C << 2)
    ctx->pc = 0x12838Cu;
    {
        const bool branch_taken_0x12838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12838Cu;
        // 0x128390: 0x8c440668  lw          $a0, 0x668($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12838c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128394u;
label_128394:
    // 0x128394: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12839c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12839cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283a0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1283a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1283a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1283a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283a8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1283A8u;
    SET_GPR_U32(ctx, 31, 0x1283B0u);
    ctx->pc = 0x1283ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283A8u;
    // 0x1283ac: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1283A8u, 0x1283B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283B0u;
label_1283b0:
    // 0x1283b0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1283b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1283b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1283b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1283b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1283bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1283c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1283c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283c4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1283C4u;
    SET_GPR_U32(ctx, 31, 0x1283CCu);
    ctx->pc = 0x1283C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283C4u;
    // 0x1283c8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1283C4u, 0x1283CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283CCu;
label_1283cc:
    // 0x1283cc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1283CCu;
    {
        const bool branch_taken_0x1283cc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1283D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283CCu;
        // 0x1283d0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283cc) {
            ctx->pc = 0x1283E8u;
            goto label_1283e8;
        }
    }
    ctx->pc = 0x1283D4u;
    // 0x1283d4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1283D4u;
    {
        const bool branch_taken_0x1283d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1283d4) {
            ctx->pc = 0x1283D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1283D4u;
            // 0x1283d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1283F8u;
            goto label_1283f8;
        }
    }
    ctx->pc = 0x1283DCu;
    // 0x1283dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1283e0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1283E0u;
    {
        const bool branch_taken_0x1283e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1283e0) {
            ctx->pc = 0x1283E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1283E0u;
            // 0x1283e4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128404u;
            goto label_128404;
        }
    }
    ctx->pc = 0x1283E8u;
label_1283e8:
    // 0x1283e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1283ec: 0x8c43066c  lw          $v1, 0x66C($v0)
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1644)));
    // 0x1283f0: 0x100003f3  b           . + 4 + (0x3F3 << 2)
    ctx->pc = 0x1283F0u;
    {
        const bool branch_taken_0x1283f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F0u;
        // 0x1283f4: 0x8c440670  lw          $a0, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283f0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1283F8u;
label_1283f8:
    // 0x1283f8: 0x8c43066c  lw          $v1, 0x66C($v0)
    ctx->pc = 0x1283f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1644)));
    // 0x1283fc: 0x100003f0  b           . + 4 + (0x3F0 << 2)
    ctx->pc = 0x1283FCu;
    {
        const bool branch_taken_0x1283fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283FCu;
        // 0x128400: 0x8c440674  lw          $a0, 0x674($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283fc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128404u;
label_128404:
    // 0x128404: 0x8c43066c  lw          $v1, 0x66C($v0)
    ctx->pc = 0x128404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1644)));
    // 0x128408: 0x100003ed  b           . + 4 + (0x3ED << 2)
    ctx->pc = 0x128408u;
    {
        const bool branch_taken_0x128408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128408u;
        // 0x12840c: 0x8c440678  lw          $a0, 0x678($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128408) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128410u;
label_128410:
    // 0x128410: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12841c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12841cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128424: 0xc042902  jal         func_10A408
    ctx->pc = 0x128424u;
    SET_GPR_U32(ctx, 31, 0x12842Cu);
    ctx->pc = 0x128428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128424u;
    // 0x128428: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128424u, 0x12842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12842Cu;
label_12842c:
    // 0x12842c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128438: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12843c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12843cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128440: 0xc042908  jal         func_10A420
    ctx->pc = 0x128440u;
    SET_GPR_U32(ctx, 31, 0x128448u);
    ctx->pc = 0x128444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128440u;
    // 0x128444: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128440u, 0x128448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128448u;
label_128448:
    // 0x128448: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128448u;
    {
        const bool branch_taken_0x128448 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128448u;
        // 0x12844c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128448) {
            ctx->pc = 0x128464u;
            goto label_128464;
        }
    }
    ctx->pc = 0x128450u;
    // 0x128450: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128450u;
    {
        const bool branch_taken_0x128450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128450) {
            ctx->pc = 0x128454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128450u;
            // 0x128454: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128474u;
            goto label_128474;
        }
    }
    ctx->pc = 0x128458u;
    // 0x128458: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12845c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12845Cu;
    {
        const bool branch_taken_0x12845c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12845c) {
            ctx->pc = 0x128460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12845Cu;
            // 0x128460: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128480u;
            goto label_128480;
        }
    }
    ctx->pc = 0x128464u;
label_128464:
    // 0x128464: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128468: 0x8c43067c  lw          $v1, 0x67C($v0)
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
    // 0x12846c: 0x100003d4  b           . + 4 + (0x3D4 << 2)
    ctx->pc = 0x12846Cu;
    {
        const bool branch_taken_0x12846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12846Cu;
        // 0x128470: 0x8c440680  lw          $a0, 0x680($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12846c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128474u;
label_128474:
    // 0x128474: 0x8c43067c  lw          $v1, 0x67C($v0)
    ctx->pc = 0x128474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
    // 0x128478: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x128478u;
    {
        const bool branch_taken_0x128478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128478u;
        // 0x12847c: 0x8c440684  lw          $a0, 0x684($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128478) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128480u;
label_128480:
    // 0x128480: 0x8c43067c  lw          $v1, 0x67C($v0)
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
    // 0x128484: 0x100003ce  b           . + 4 + (0x3CE << 2)
    ctx->pc = 0x128484u;
    {
        const bool branch_taken_0x128484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128484u;
        // 0x128488: 0x8c440688  lw          $a0, 0x688($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128484) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12848Cu;
label_12848c:
    // 0x12848c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128498: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12849c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12849cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1284A0u;
    SET_GPR_U32(ctx, 31, 0x1284A8u);
    ctx->pc = 0x1284A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284A0u;
    // 0x1284a4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1284A0u, 0x1284A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284A8u;
label_1284a8:
    // 0x1284a8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1284ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1284acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1284b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1284b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1284b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1284b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284bc: 0xc042908  jal         func_10A420
    ctx->pc = 0x1284BCu;
    SET_GPR_U32(ctx, 31, 0x1284C4u);
    ctx->pc = 0x1284C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284BCu;
    // 0x1284c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1284BCu, 0x1284C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284C4u;
label_1284c4:
    // 0x1284c4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1284C4u;
    {
        const bool branch_taken_0x1284c4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1284C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284C4u;
        // 0x1284c8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284c4) {
            ctx->pc = 0x1284E0u;
            goto label_1284e0;
        }
    }
    ctx->pc = 0x1284CCu;
    // 0x1284cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1284CCu;
    {
        const bool branch_taken_0x1284cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1284cc) {
            ctx->pc = 0x1284D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1284CCu;
            // 0x1284d0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284F0u;
            goto label_1284f0;
        }
    }
    ctx->pc = 0x1284D4u;
    // 0x1284d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1284d8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1284D8u;
    {
        const bool branch_taken_0x1284d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1284d8) {
            ctx->pc = 0x1284DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1284D8u;
            // 0x1284dc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284FCu;
            goto label_1284fc;
        }
    }
    ctx->pc = 0x1284E0u;
label_1284e0:
    // 0x1284e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1284e4: 0x8c43068c  lw          $v1, 0x68C($v0)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
    // 0x1284e8: 0x100003b5  b           . + 4 + (0x3B5 << 2)
    ctx->pc = 0x1284E8u;
    {
        const bool branch_taken_0x1284e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284E8u;
        // 0x1284ec: 0x8c440690  lw          $a0, 0x690($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284e8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1284F0u;
label_1284f0:
    // 0x1284f0: 0x8c43068c  lw          $v1, 0x68C($v0)
    ctx->pc = 0x1284f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
    // 0x1284f4: 0x100003b2  b           . + 4 + (0x3B2 << 2)
    ctx->pc = 0x1284F4u;
    {
        const bool branch_taken_0x1284f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284F4u;
        // 0x1284f8: 0x8c440694  lw          $a0, 0x694($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284f4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1284FCu;
label_1284fc:
    // 0x1284fc: 0x8c43068c  lw          $v1, 0x68C($v0)
    ctx->pc = 0x1284fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
    // 0x128500: 0x100003af  b           . + 4 + (0x3AF << 2)
    ctx->pc = 0x128500u;
    {
        const bool branch_taken_0x128500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128500u;
        // 0x128504: 0x8c440698  lw          $a0, 0x698($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128500) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128508u;
label_128508:
    // 0x128508: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12850c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128510: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128514: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x128514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x128518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12851c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12851Cu;
    SET_GPR_U32(ctx, 31, 0x128524u);
    ctx->pc = 0x128520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12851Cu;
    // 0x128520: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12851Cu, 0x128524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128524u;
label_128524:
    // 0x128524: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12852c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12852cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128530: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x128530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x128534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128538: 0xc042908  jal         func_10A420
    ctx->pc = 0x128538u;
    SET_GPR_U32(ctx, 31, 0x128540u);
    ctx->pc = 0x12853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128538u;
    // 0x12853c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128538u, 0x128540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128540u;
label_128540:
    // 0x128540: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128540u;
    {
        const bool branch_taken_0x128540 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128540u;
        // 0x128544: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128540) {
            ctx->pc = 0x12855Cu;
            goto label_12855c;
        }
    }
    ctx->pc = 0x128548u;
    // 0x128548: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128548u;
    {
        const bool branch_taken_0x128548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128548) {
            ctx->pc = 0x12854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128548u;
            // 0x12854c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12856Cu;
            goto label_12856c;
        }
    }
    ctx->pc = 0x128550u;
    // 0x128550: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128554: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128554u;
    {
        const bool branch_taken_0x128554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128554) {
            ctx->pc = 0x128558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128554u;
            // 0x128558: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128578u;
            goto label_128578;
        }
    }
    ctx->pc = 0x12855Cu;
label_12855c:
    // 0x12855c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128560: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x128564: 0x10000396  b           . + 4 + (0x396 << 2)
    ctx->pc = 0x128564u;
    {
        const bool branch_taken_0x128564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128564u;
        // 0x128568: 0x8c440328  lw          $a0, 0x328($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128564) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12856Cu;
label_12856c:
    // 0x12856c: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x12856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x128570: 0x10000393  b           . + 4 + (0x393 << 2)
    ctx->pc = 0x128570u;
    {
        const bool branch_taken_0x128570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128570u;
        // 0x128574: 0x8c44032c  lw          $a0, 0x32C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128570) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128578u;
label_128578:
    // 0x128578: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x128578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x12857c: 0x10000390  b           . + 4 + (0x390 << 2)
    ctx->pc = 0x12857Cu;
    {
        const bool branch_taken_0x12857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12857Cu;
        // 0x128580: 0x8c440330  lw          $a0, 0x330($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12857c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128584u;
label_128584:
    // 0x128584: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12858c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12858cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128590: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x128590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x128594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128598: 0xc042902  jal         func_10A408
    ctx->pc = 0x128598u;
    SET_GPR_U32(ctx, 31, 0x1285A0u);
    ctx->pc = 0x12859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128598u;
    // 0x12859c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128598u, 0x1285A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285A0u;
label_1285a0:
    // 0x1285a0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1285a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1285a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1285a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285a8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1285a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1285ac: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1285acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1285b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1285b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285b4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1285B4u;
    SET_GPR_U32(ctx, 31, 0x1285BCu);
    ctx->pc = 0x1285B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285B4u;
    // 0x1285b8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1285B4u, 0x1285BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285BCu;
label_1285bc:
    // 0x1285bc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1285BCu;
    {
        const bool branch_taken_0x1285bc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285BCu;
        // 0x1285c0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285bc) {
            ctx->pc = 0x1285D8u;
            goto label_1285d8;
        }
    }
    ctx->pc = 0x1285C4u;
    // 0x1285c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1285C4u;
    {
        const bool branch_taken_0x1285c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1285c4) {
            ctx->pc = 0x1285C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285C4u;
            // 0x1285c8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1285E8u;
            goto label_1285e8;
        }
    }
    ctx->pc = 0x1285CCu;
    // 0x1285cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1285ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1285d0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1285D0u;
    {
        const bool branch_taken_0x1285d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1285d0) {
            ctx->pc = 0x1285D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285D0u;
            // 0x1285d4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1285F4u;
            goto label_1285f4;
        }
    }
    ctx->pc = 0x1285D8u;
label_1285d8:
    // 0x1285d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1285d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1285dc: 0x8c4305b4  lw          $v1, 0x5B4($v0)
    ctx->pc = 0x1285dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x1285e0: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x1285E0u;
    {
        const bool branch_taken_0x1285e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285E0u;
        // 0x1285e4: 0x8c4405b8  lw          $a0, 0x5B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285e0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1285E8u;
label_1285e8:
    // 0x1285e8: 0x8c4305b4  lw          $v1, 0x5B4($v0)
    ctx->pc = 0x1285e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x1285ec: 0x10000374  b           . + 4 + (0x374 << 2)
    ctx->pc = 0x1285ECu;
    {
        const bool branch_taken_0x1285ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285ECu;
        // 0x1285f0: 0x8c4405bc  lw          $a0, 0x5BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285ec) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1285F4u;
label_1285f4:
    // 0x1285f4: 0x8c4305b4  lw          $v1, 0x5B4($v0)
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x1285f8: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x1285F8u;
    {
        const bool branch_taken_0x1285f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285F8u;
        // 0x1285fc: 0x8c4405c0  lw          $a0, 0x5C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285f8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128600u;
label_128600:
    // 0x128600: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12860c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12860cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128614: 0xc042902  jal         func_10A408
    ctx->pc = 0x128614u;
    SET_GPR_U32(ctx, 31, 0x12861Cu);
    ctx->pc = 0x128618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128614u;
    // 0x128618: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128614u, 0x12861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12861Cu;
label_12861c:
    // 0x12861c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12861cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128628: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12862c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12862cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128630: 0xc042908  jal         func_10A420
    ctx->pc = 0x128630u;
    SET_GPR_U32(ctx, 31, 0x128638u);
    ctx->pc = 0x128634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128630u;
    // 0x128634: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128630u, 0x128638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128638u;
label_128638:
    // 0x128638: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128638u;
    {
        const bool branch_taken_0x128638 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128638u;
        // 0x12863c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128638) {
            ctx->pc = 0x128654u;
            goto label_128654;
        }
    }
    ctx->pc = 0x128640u;
    // 0x128640: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128640u;
    {
        const bool branch_taken_0x128640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128640) {
            ctx->pc = 0x128644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128640u;
            // 0x128644: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128664u;
            goto label_128664;
        }
    }
    ctx->pc = 0x128648u;
    // 0x128648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12864c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12864Cu;
    {
        const bool branch_taken_0x12864c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12864c) {
            ctx->pc = 0x128650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12864Cu;
            // 0x128650: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128670u;
            goto label_128670;
        }
    }
    ctx->pc = 0x128654u;
label_128654:
    // 0x128654: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128658: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x128658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x12865c: 0x10000358  b           . + 4 + (0x358 << 2)
    ctx->pc = 0x12865Cu;
    {
        const bool branch_taken_0x12865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12865Cu;
        // 0x128660: 0x8c440338  lw          $a0, 0x338($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12865c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128664u;
label_128664:
    // 0x128664: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x128668: 0x10000355  b           . + 4 + (0x355 << 2)
    ctx->pc = 0x128668u;
    {
        const bool branch_taken_0x128668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128668u;
        // 0x12866c: 0x8c44033c  lw          $a0, 0x33C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128668) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128670u;
label_128670:
    // 0x128670: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x128670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x128674: 0x10000352  b           . + 4 + (0x352 << 2)
    ctx->pc = 0x128674u;
    {
        const bool branch_taken_0x128674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128674u;
        // 0x128678: 0x8c440340  lw          $a0, 0x340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128674) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12867Cu;
label_12867c:
    // 0x12867c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12867cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128688: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x128688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12868c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12868cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128690: 0xc042902  jal         func_10A408
    ctx->pc = 0x128690u;
    SET_GPR_U32(ctx, 31, 0x128698u);
    ctx->pc = 0x128694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128690u;
    // 0x128694: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128690u, 0x128698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128698u;
label_128698:
    // 0x128698: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x128698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x12869c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12869cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1286a0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1286a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1286a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1286a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1286a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286ac: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1286acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1286b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1286b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286b4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1286B4u;
    SET_GPR_U32(ctx, 31, 0x1286BCu);
    ctx->pc = 0x1286B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1286B4u;
    // 0x1286b8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1286B4u, 0x1286BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286BCu;
label_1286bc:
    // 0x1286bc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1286BCu;
    {
        const bool branch_taken_0x1286bc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1286C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286BCu;
        // 0x1286c0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286bc) {
            ctx->pc = 0x1286D8u;
            goto label_1286d8;
        }
    }
    ctx->pc = 0x1286C4u;
    // 0x1286c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1286C4u;
    {
        const bool branch_taken_0x1286c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1286c4) {
            ctx->pc = 0x1286C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1286C4u;
            // 0x1286c8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1286E8u;
            goto label_1286e8;
        }
    }
    ctx->pc = 0x1286CCu;
    // 0x1286cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1286d0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1286D0u;
    {
        const bool branch_taken_0x1286d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286d0) {
            ctx->pc = 0x1286D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1286D0u;
            // 0x1286d4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1286F4u;
            goto label_1286f4;
        }
    }
    ctx->pc = 0x1286D8u;
label_1286d8:
    // 0x1286d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1286dc: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x1286dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x1286e0: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x1286E0u;
    {
        const bool branch_taken_0x1286e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286E0u;
        // 0x1286e4: 0x8c440704  lw          $a0, 0x704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286e0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1286E8u;
label_1286e8:
    // 0x1286e8: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x1286e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x1286ec: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x1286ECu;
    {
        const bool branch_taken_0x1286ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286ECu;
        // 0x1286f0: 0x8c440708  lw          $a0, 0x708($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286ec) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1286F4u;
label_1286f4:
    // 0x1286f4: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x1286f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x1286f8: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x1286F8u;
    {
        const bool branch_taken_0x1286f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286F8u;
        // 0x1286fc: 0x8c44070c  lw          $a0, 0x70C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286f8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128700u;
label_128700:
    // 0x128700: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128708: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12870c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12870cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128714: 0xc042902  jal         func_10A408
    ctx->pc = 0x128714u;
    SET_GPR_U32(ctx, 31, 0x12871Cu);
    ctx->pc = 0x128718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128714u;
    // 0x128718: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128714u, 0x12871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12871Cu;
label_12871c:
    // 0x12871c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12871cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128724: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128728: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x128728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12872c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12872cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128730: 0xc042908  jal         func_10A420
    ctx->pc = 0x128730u;
    SET_GPR_U32(ctx, 31, 0x128738u);
    ctx->pc = 0x128734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128730u;
    // 0x128734: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128730u, 0x128738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128738u;
label_128738:
    // 0x128738: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128738u;
    {
        const bool branch_taken_0x128738 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128738u;
        // 0x12873c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128738) {
            ctx->pc = 0x128754u;
            goto label_128754;
        }
    }
    ctx->pc = 0x128740u;
    // 0x128740: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128740) {
            ctx->pc = 0x128744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128740u;
            // 0x128744: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128768u;
            goto label_128768;
        }
    }
    ctx->pc = 0x128748u;
    // 0x128748: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12874c: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12874Cu;
    {
        const bool branch_taken_0x12874c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12874c) {
            ctx->pc = 0x128750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12874Cu;
            // 0x128750: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128774u;
            goto label_128774;
        }
    }
    ctx->pc = 0x128754u;
label_128754:
    // 0x128754: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x128754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128758: 0x8c620420  lw          $v0, 0x420($v1)
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1056)));
    // 0x12875c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x12875cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128760: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x128760u;
    {
        const bool branch_taken_0x128760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128760u;
        // 0x128764: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128760) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128768u;
label_128768:
    // 0x128768: 0x8c430420  lw          $v1, 0x420($v0)
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1056)));
    // 0x12876c: 0x10000314  b           . + 4 + (0x314 << 2)
    ctx->pc = 0x12876Cu;
    {
        const bool branch_taken_0x12876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12876Cu;
        // 0x128770: 0x8c440428  lw          $a0, 0x428($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12876c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128774u;
label_128774:
    // 0x128774: 0x8c430420  lw          $v1, 0x420($v0)
    ctx->pc = 0x128774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1056)));
    // 0x128778: 0x10000311  b           . + 4 + (0x311 << 2)
    ctx->pc = 0x128778u;
    {
        const bool branch_taken_0x128778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128778u;
        // 0x12877c: 0x8c44042c  lw          $a0, 0x42C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128778) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128780u;
label_128780:
    // 0x128780: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128788: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12878c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128794: 0xc042902  jal         func_10A408
    ctx->pc = 0x128794u;
    SET_GPR_U32(ctx, 31, 0x12879Cu);
    ctx->pc = 0x128798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128794u;
    // 0x128798: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128794u, 0x12879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12879Cu;
label_12879c:
    // 0x12879c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12879cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1287a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1287a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1287a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1287a8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1287ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1287acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b0: 0xc042908  jal         func_10A420
    ctx->pc = 0x1287B0u;
    SET_GPR_U32(ctx, 31, 0x1287B8u);
    ctx->pc = 0x1287B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287B0u;
    // 0x1287b4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1287B0u, 0x1287B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287B8u;
label_1287b8:
    // 0x1287b8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1287B8u;
    {
        const bool branch_taken_0x1287b8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1287BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287B8u;
        // 0x1287bc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287b8) {
            ctx->pc = 0x1287D4u;
            goto label_1287d4;
        }
    }
    ctx->pc = 0x1287C0u;
    // 0x1287c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287C0u;
    {
        const bool branch_taken_0x1287c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1287c0) {
            ctx->pc = 0x1287C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287C0u;
            // 0x1287c4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1287E4u;
            goto label_1287e4;
        }
    }
    ctx->pc = 0x1287C8u;
    // 0x1287c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1287cc: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287CCu;
    {
        const bool branch_taken_0x1287cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1287cc) {
            ctx->pc = 0x1287D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287CCu;
            // 0x1287d0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1287F0u;
            goto label_1287f0;
        }
    }
    ctx->pc = 0x1287D4u;
label_1287d4:
    // 0x1287d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1287d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1287d8: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x1287d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x1287dc: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1287DCu;
    {
        const bool branch_taken_0x1287dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287DCu;
        // 0x1287e0: 0x8c440414  lw          $a0, 0x414($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287dc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1287E4u;
label_1287e4:
    // 0x1287e4: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x1287e8: 0x100002f5  b           . + 4 + (0x2F5 << 2)
    ctx->pc = 0x1287E8u;
    {
        const bool branch_taken_0x1287e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287E8u;
        // 0x1287ec: 0x8c440418  lw          $a0, 0x418($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287e8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1287F0u;
label_1287f0:
    // 0x1287f0: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x1287f4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x1287F4u;
    {
        const bool branch_taken_0x1287f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F4u;
        // 0x1287f8: 0x8c44041c  lw          $a0, 0x41C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287f4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1287FCu;
label_1287fc:
    // 0x1287fc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128804: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128808: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12880c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12880cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128810: 0xc042902  jal         func_10A408
    ctx->pc = 0x128810u;
    SET_GPR_U32(ctx, 31, 0x128818u);
    ctx->pc = 0x128814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128810u;
    // 0x128814: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128810u, 0x128818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128818u;
label_128818:
    // 0x128818: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x12881c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128820: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128824: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12882c: 0xc042908  jal         func_10A420
    ctx->pc = 0x12882Cu;
    SET_GPR_U32(ctx, 31, 0x128834u);
    ctx->pc = 0x128830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12882Cu;
    // 0x128830: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x12882Cu, 0x128834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128834u;
label_128834:
    // 0x128834: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128834u;
    {
        const bool branch_taken_0x128834 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128834u;
        // 0x128838: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128834) {
            ctx->pc = 0x128850u;
            goto label_128850;
        }
    }
    ctx->pc = 0x12883Cu;
    // 0x12883c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12883Cu;
    {
        const bool branch_taken_0x12883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12883c) {
            ctx->pc = 0x128840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12883Cu;
            // 0x128840: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128860u;
            goto label_128860;
        }
    }
    ctx->pc = 0x128844u;
    // 0x128844: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128848: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128848u;
    {
        const bool branch_taken_0x128848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128848) {
            ctx->pc = 0x12884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128848u;
            // 0x12884c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12886Cu;
            goto label_12886c;
        }
    }
    ctx->pc = 0x128850u;
label_128850:
    // 0x128850: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128854: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x128854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x128858: 0x100002d9  b           . + 4 + (0x2D9 << 2)
    ctx->pc = 0x128858u;
    {
        const bool branch_taken_0x128858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128858u;
        // 0x12885c: 0x8c440404  lw          $a0, 0x404($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128858) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128860u;
label_128860:
    // 0x128860: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x128864: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x128864u;
    {
        const bool branch_taken_0x128864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128864u;
        // 0x128868: 0x8c440408  lw          $a0, 0x408($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128864) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12886Cu;
label_12886c:
    // 0x12886c: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x128870: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x128870u;
    {
        const bool branch_taken_0x128870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128870u;
        // 0x128874: 0x8c44040c  lw          $a0, 0x40C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128870) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128878u;
label_128878:
    // 0x128878: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12887c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128880: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128884: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x128884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12888c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12888Cu;
    SET_GPR_U32(ctx, 31, 0x128894u);
    ctx->pc = 0x128890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12888Cu;
    // 0x128890: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12888Cu, 0x128894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128894u;
label_128894:
    // 0x128894: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12889c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1288a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1288a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1288a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288a8: 0xc042908  jal         func_10A420
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x1288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288A8u;
    // 0x1288ac: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1288B0u;
    {
        const bool branch_taken_0x1288b0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1288B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288B0u;
        // 0x1288b4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288b0) {
            ctx->pc = 0x1288CCu;
            goto label_1288cc;
        }
    }
    ctx->pc = 0x1288B8u;
    // 0x1288b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1288B8u;
    {
        const bool branch_taken_0x1288b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1288b8) {
            ctx->pc = 0x1288BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1288B8u;
            // 0x1288bc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1288DCu;
            goto label_1288dc;
        }
    }
    ctx->pc = 0x1288C0u;
    // 0x1288c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1288c4: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1288C4u;
    {
        const bool branch_taken_0x1288c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1288c4) {
            ctx->pc = 0x1288C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1288C4u;
            // 0x1288c8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1288E8u;
            goto label_1288e8;
        }
    }
    ctx->pc = 0x1288CCu;
label_1288cc:
    // 0x1288cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1288d0: 0x8c430440  lw          $v1, 0x440($v0)
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x1288d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1288D4u;
    {
        const bool branch_taken_0x1288d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288D4u;
        // 0x1288d8: 0x8c440444  lw          $a0, 0x444($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288d4) {
            ctx->pc = 0x1288F0u;
            goto label_1288f0;
        }
    }
    ctx->pc = 0x1288DCu;
label_1288dc:
    // 0x1288dc: 0x8c430440  lw          $v1, 0x440($v0)
    ctx->pc = 0x1288dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x1288e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1288E0u;
    {
        const bool branch_taken_0x1288e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288E0u;
        // 0x1288e4: 0x8c440448  lw          $a0, 0x448($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288e0) {
            ctx->pc = 0x1288F0u;
            goto label_1288f0;
        }
    }
    ctx->pc = 0x1288E8u;
label_1288e8:
    // 0x1288e8: 0x8c430440  lw          $v1, 0x440($v0)
    ctx->pc = 0x1288e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x1288ec: 0x8c44044c  lw          $a0, 0x44C($v0)
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
label_1288f0:
    // 0x1288f0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1288f4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1288f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1288fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1288fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128900: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x128900u;
    {
        const bool branch_taken_0x128900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128900u;
        // 0x128904: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128900) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128908u;
label_128908:
    // 0x128908: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12890c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128914: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12891c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12891Cu;
    SET_GPR_U32(ctx, 31, 0x128924u);
    ctx->pc = 0x128920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12891Cu;
    // 0x128920: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12891Cu, 0x128924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128924u;
label_128924:
    // 0x128924: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x128924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x128928: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x128928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12892c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12892cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128938: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12893c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12893cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128940: 0xc042908  jal         func_10A420
    ctx->pc = 0x128940u;
    SET_GPR_U32(ctx, 31, 0x128948u);
    ctx->pc = 0x128944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128940u;
    // 0x128944: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128940u, 0x128948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128948u;
label_128948:
    // 0x128948: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128948u;
    {
        const bool branch_taken_0x128948 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128948u;
        // 0x12894c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128948) {
            ctx->pc = 0x128964u;
            goto label_128964;
        }
    }
    ctx->pc = 0x128950u;
    // 0x128950: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128950u;
    {
        const bool branch_taken_0x128950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128950) {
            ctx->pc = 0x128954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128950u;
            // 0x128954: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128974u;
            goto label_128974;
        }
    }
    ctx->pc = 0x128958u;
    // 0x128958: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12895c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12895Cu;
    {
        const bool branch_taken_0x12895c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12895c) {
            ctx->pc = 0x128960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12895Cu;
            // 0x128960: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128980u;
            goto label_128980;
        }
    }
    ctx->pc = 0x128964u;
label_128964:
    // 0x128964: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128968: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x12896c: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x8c440480  lw          $a0, 0x480($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128974u;
label_128974:
    // 0x128974: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x128978: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x128978u;
    {
        const bool branch_taken_0x128978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128978u;
        // 0x12897c: 0x8c440484  lw          $a0, 0x484($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128978) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128980u;
label_128980:
    // 0x128980: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x128980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x128984: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x128984u;
    {
        const bool branch_taken_0x128984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128984u;
        // 0x128988: 0x8c440488  lw          $a0, 0x488($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128984) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12898Cu;
label_12898c:
    // 0x12898c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x12898cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128998: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x128998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12899c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12899cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289a0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1289A0u;
    SET_GPR_U32(ctx, 31, 0x1289A8u);
    ctx->pc = 0x1289A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1289A0u;
    // 0x1289a4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1289A0u, 0x1289A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289A8u;
label_1289a8:
    // 0x1289a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1289ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1289acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1289b0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1289b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1289b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1289b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289bc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1289bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1289c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1289c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289c4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1289C4u;
    SET_GPR_U32(ctx, 31, 0x1289CCu);
    ctx->pc = 0x1289C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1289C4u;
    // 0x1289c8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1289C4u, 0x1289CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289CCu;
label_1289cc:
    // 0x1289cc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1289CCu;
    {
        const bool branch_taken_0x1289cc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1289D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289CCu;
        // 0x1289d0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289cc) {
            ctx->pc = 0x1289E8u;
            goto label_1289e8;
        }
    }
    ctx->pc = 0x1289D4u;
    // 0x1289d4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1289D4u;
    {
        const bool branch_taken_0x1289d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1289d4) {
            ctx->pc = 0x1289D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289D4u;
            // 0x1289d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289F8u;
            goto label_1289f8;
        }
    }
    ctx->pc = 0x1289DCu;
    // 0x1289dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1289dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1289e0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1289E0u;
    {
        const bool branch_taken_0x1289e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1289e0) {
            ctx->pc = 0x1289E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289E0u;
            // 0x1289e4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A04u;
            goto label_128a04;
        }
    }
    ctx->pc = 0x1289E8u;
label_1289e8:
    // 0x1289e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1289ec: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x1289ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x1289f0: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289F0u;
        // 0x1289f4: 0x8c44048c  lw          $a0, 0x48C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1289F8u;
label_1289f8:
    // 0x1289f8: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x1289f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x1289fc: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289FCu;
        // 0x128a00: 0x8c44048c  lw          $a0, 0x48C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128A04u;
label_128a04:
    // 0x128a04: 0x8c43047c  lw          $v1, 0x47C($v0)
    ctx->pc = 0x128a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    // 0x128a08: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x128A08u;
    {
        const bool branch_taken_0x128a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A08u;
        // 0x128a0c: 0x8c440490  lw          $a0, 0x490($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a08) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128A10u;
label_128a10:
    // 0x128a10: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a1c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128a20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a24: 0xc042902  jal         func_10A408
    ctx->pc = 0x128A24u;
    SET_GPR_U32(ctx, 31, 0x128A2Cu);
    ctx->pc = 0x128A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A24u;
    // 0x128a28: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128A24u, 0x128A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A2Cu;
label_128a2c:
    // 0x128a2c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a38: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128a3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a40: 0xc042908  jal         func_10A420
    ctx->pc = 0x128A40u;
    SET_GPR_U32(ctx, 31, 0x128A48u);
    ctx->pc = 0x128A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A40u;
    // 0x128a44: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128A40u, 0x128A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A48u;
label_128a48:
    // 0x128a48: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128A48u;
    {
        const bool branch_taken_0x128a48 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A48u;
        // 0x128a4c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a48) {
            ctx->pc = 0x128A64u;
            goto label_128a64;
        }
    }
    ctx->pc = 0x128A50u;
    // 0x128a50: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128A50u;
    {
        const bool branch_taken_0x128a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a50) {
            ctx->pc = 0x128A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A50u;
            // 0x128a54: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A74u;
            goto label_128a74;
        }
    }
    ctx->pc = 0x128A58u;
    // 0x128a58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128a5c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128A5Cu;
    {
        const bool branch_taken_0x128a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128a5c) {
            ctx->pc = 0x128A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A5Cu;
            // 0x128a60: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A80u;
            goto label_128a80;
        }
    }
    ctx->pc = 0x128A64u;
label_128a64:
    // 0x128a64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128a68: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x128a6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128A6Cu;
    {
        const bool branch_taken_0x128a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A6Cu;
        // 0x128a70: 0x8c440714  lw          $a0, 0x714($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a6c) {
            ctx->pc = 0x128A88u;
            goto label_128a88;
        }
    }
    ctx->pc = 0x128A74u;
label_128a74:
    // 0x128a74: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x128a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x128a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128A78u;
    {
        const bool branch_taken_0x128a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A78u;
        // 0x128a7c: 0x8c440718  lw          $a0, 0x718($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a78) {
            ctx->pc = 0x128A88u;
            goto label_128a88;
        }
    }
    ctx->pc = 0x128A80u;
label_128a80:
    // 0x128a80: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x128a84: 0x8c44071c  lw          $a0, 0x71C($v0)
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
label_128a88:
    // 0x128a88: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128a8c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x128a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x128a90: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x128a94: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x128A94u;
    {
        const bool branch_taken_0x128a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A94u;
        // 0x128a98: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a94) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128A9Cu;
label_128a9c:
    // 0x128a9c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ab0: 0xc042902  jal         func_10A408
    ctx->pc = 0x128AB0u;
    SET_GPR_U32(ctx, 31, 0x128AB8u);
    ctx->pc = 0x128AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AB0u;
    // 0x128ab4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128AB0u, 0x128AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AB8u;
label_128ab8:
    // 0x128ab8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ac4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128acc: 0xc042908  jal         func_10A420
    ctx->pc = 0x128ACCu;
    SET_GPR_U32(ctx, 31, 0x128AD4u);
    ctx->pc = 0x128AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128ACCu;
    // 0x128ad0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128ACCu, 0x128AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AD4u;
label_128ad4:
    // 0x128ad4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128AD4u;
    {
        const bool branch_taken_0x128ad4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AD4u;
        // 0x128ad8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ad4) {
            ctx->pc = 0x128AF0u;
            goto label_128af0;
        }
    }
    ctx->pc = 0x128ADCu;
    // 0x128adc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128ADCu;
    {
        const bool branch_taken_0x128adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128adc) {
            ctx->pc = 0x128AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128ADCu;
            // 0x128ae0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B00u;
            goto label_128b00;
        }
    }
    ctx->pc = 0x128AE4u;
    // 0x128ae4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ae8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128AE8u;
    {
        const bool branch_taken_0x128ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128ae8) {
            ctx->pc = 0x128AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128AE8u;
            // 0x128aec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B0Cu;
            goto label_128b0c;
        }
    }
    ctx->pc = 0x128AF0u;
label_128af0:
    // 0x128af0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128af4: 0x8c430720  lw          $v1, 0x720($v0)
    ctx->pc = 0x128af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
    // 0x128af8: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x128AF8u;
    {
        const bool branch_taken_0x128af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AF8u;
        // 0x128afc: 0x8c440724  lw          $a0, 0x724($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128af8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B00u;
label_128b00:
    // 0x128b00: 0x8c430720  lw          $v1, 0x720($v0)
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
    // 0x128b04: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x128B04u;
    {
        const bool branch_taken_0x128b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B04u;
        // 0x128b08: 0x8c440728  lw          $a0, 0x728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b04) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B0Cu;
label_128b0c:
    // 0x128b0c: 0x8c430720  lw          $v1, 0x720($v0)
    ctx->pc = 0x128b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
    // 0x128b10: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x128B10u;
    {
        const bool branch_taken_0x128b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B10u;
        // 0x128b14: 0x8c44072c  lw          $a0, 0x72C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b10) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B18u;
label_128b18:
    // 0x128b18: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b24: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x128b28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b2c: 0xc042902  jal         func_10A408
    ctx->pc = 0x128B2Cu;
    SET_GPR_U32(ctx, 31, 0x128B34u);
    ctx->pc = 0x128B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B2Cu;
    // 0x128b30: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128B2Cu, 0x128B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B34u;
label_128b34:
    // 0x128b34: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b40: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x128b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x128b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b48: 0xc042908  jal         func_10A420
    ctx->pc = 0x128B48u;
    SET_GPR_U32(ctx, 31, 0x128B50u);
    ctx->pc = 0x128B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B48u;
    // 0x128b4c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128B48u, 0x128B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B50u;
label_128b50:
    // 0x128b50: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128B50u;
    {
        const bool branch_taken_0x128b50 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B50u;
        // 0x128b54: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b50) {
            ctx->pc = 0x128B6Cu;
            goto label_128b6c;
        }
    }
    ctx->pc = 0x128B58u;
    // 0x128b58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128B58u;
    {
        const bool branch_taken_0x128b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128b58) {
            ctx->pc = 0x128B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128B58u;
            // 0x128b5c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B60u;
    // 0x128b60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128b64: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128B64u;
            // 0x128b68: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B88u;
            goto label_128b88;
        }
    }
    ctx->pc = 0x128B6Cu;
label_128b6c:
    // 0x128b6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128b70: 0x8c430770  lw          $v1, 0x770($v0)
    ctx->pc = 0x128b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x128b74: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x128B74u;
    {
        const bool branch_taken_0x128b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B74u;
        // 0x128b78: 0x8c440774  lw          $a0, 0x774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b74) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B7Cu;
label_128b7c:
    // 0x128b7c: 0x8c430770  lw          $v1, 0x770($v0)
    ctx->pc = 0x128b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x128b80: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x128B80u;
    {
        const bool branch_taken_0x128b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B80u;
        // 0x128b84: 0x8c440778  lw          $a0, 0x778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b80) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B88u;
label_128b88:
    // 0x128b88: 0x8c430770  lw          $v1, 0x770($v0)
    ctx->pc = 0x128b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x128b8c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x128B8Cu;
    {
        const bool branch_taken_0x128b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B8Cu;
        // 0x128b90: 0x8c44077c  lw          $a0, 0x77C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b8c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128B94u;
label_128b94:
    // 0x128b94: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ba0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128ba4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ba8: 0xc042902  jal         func_10A408
    ctx->pc = 0x128BA8u;
    SET_GPR_U32(ctx, 31, 0x128BB0u);
    ctx->pc = 0x128BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BA8u;
    // 0x128bac: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128BA8u, 0x128BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BB0u;
label_128bb0:
    // 0x128bb0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bbc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x128bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x128bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bc4: 0xc042908  jal         func_10A420
    ctx->pc = 0x128BC4u;
    SET_GPR_U32(ctx, 31, 0x128BCCu);
    ctx->pc = 0x128BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BC4u;
    // 0x128bc8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128BC4u, 0x128BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BCCu;
label_128bcc:
    // 0x128bcc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128BCCu;
    {
        const bool branch_taken_0x128bcc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BCCu;
        // 0x128bd0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bcc) {
            ctx->pc = 0x128BE8u;
            goto label_128be8;
        }
    }
    ctx->pc = 0x128BD4u;
    // 0x128bd4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128BD4u;
    {
        const bool branch_taken_0x128bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128bd4) {
            ctx->pc = 0x128BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128BD4u;
            // 0x128bd8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128BF8u;
            goto label_128bf8;
        }
    }
    ctx->pc = 0x128BDCu;
    // 0x128bdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128be0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128BE0u;
    {
        const bool branch_taken_0x128be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128be0) {
            ctx->pc = 0x128BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128BE0u;
            // 0x128be4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128C04u;
            goto label_128c04;
        }
    }
    ctx->pc = 0x128BE8u;
label_128be8:
    // 0x128be8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128bec: 0x8c430780  lw          $v1, 0x780($v0)
    ctx->pc = 0x128becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x128bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128BF0u;
    {
        const bool branch_taken_0x128bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BF0u;
        // 0x128bf4: 0x8c440784  lw          $a0, 0x784($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bf0) {
            ctx->pc = 0x128C0Cu;
            goto label_128c0c;
        }
    }
    ctx->pc = 0x128BF8u;
label_128bf8:
    // 0x128bf8: 0x8c430780  lw          $v1, 0x780($v0)
    ctx->pc = 0x128bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x128bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128BFCu;
    {
        const bool branch_taken_0x128bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BFCu;
        // 0x128c00: 0x8c440788  lw          $a0, 0x788($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bfc) {
            ctx->pc = 0x128C0Cu;
            goto label_128c0c;
        }
    }
    ctx->pc = 0x128C04u;
label_128c04:
    // 0x128c04: 0x8c430780  lw          $v1, 0x780($v0)
    ctx->pc = 0x128c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x128c08: 0x8c44078c  lw          $a0, 0x78C($v0)
    ctx->pc = 0x128c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_128c0c:
    // 0x128c0c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128c10: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x128c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x128c14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128c18: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x128C18u;
    {
        const bool branch_taken_0x128c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C18u;
        // 0x128c1c: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c18) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128C20u;
label_128c20:
    // 0x128c20: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c28: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128c2c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x128c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128c30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c34: 0xc042902  jal         func_10A408
    ctx->pc = 0x128C34u;
    SET_GPR_U32(ctx, 31, 0x128C3Cu);
    ctx->pc = 0x128C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C34u;
    // 0x128c38: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128C34u, 0x128C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C3Cu;
label_128c3c:
    // 0x128c3c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128c48: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c50: 0xc042908  jal         func_10A420
    ctx->pc = 0x128C50u;
    SET_GPR_U32(ctx, 31, 0x128C58u);
    ctx->pc = 0x128C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C50u;
    // 0x128c54: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128C50u, 0x128C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C58u;
label_128c58:
    // 0x128c58: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128C58u;
    {
        const bool branch_taken_0x128c58 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C58u;
        // 0x128c5c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c58) {
            ctx->pc = 0x128C74u;
            goto label_128c74;
        }
    }
    ctx->pc = 0x128C60u;
    // 0x128c60: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128C60u;
    {
        const bool branch_taken_0x128c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128c60) {
            ctx->pc = 0x128C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128C60u;
            // 0x128c64: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128C84u;
            goto label_128c84;
        }
    }
    ctx->pc = 0x128C68u;
    // 0x128c68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128c6c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128C6Cu;
    {
        const bool branch_taken_0x128c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128c6c) {
            ctx->pc = 0x128C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128C6Cu;
            // 0x128c70: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128C90u;
            goto label_128c90;
        }
    }
    ctx->pc = 0x128C74u;
label_128c74:
    // 0x128c74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128c78: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x128c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
    // 0x128c7c: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x128C7Cu;
    {
        const bool branch_taken_0x128c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C7Cu;
        // 0x128c80: 0x8c440794  lw          $a0, 0x794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c7c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128C84u;
label_128c84:
    // 0x128c84: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x128c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
    // 0x128c88: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x128C88u;
    {
        const bool branch_taken_0x128c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C88u;
        // 0x128c8c: 0x8c440798  lw          $a0, 0x798($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c88) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128C90u;
label_128c90:
    // 0x128c90: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x128c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
    // 0x128c94: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x128C94u;
    {
        const bool branch_taken_0x128c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C94u;
        // 0x128c98: 0x8c44079c  lw          $a0, 0x79C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c94) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128C9Cu;
label_128c9c:
    // 0x128c9c: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ca4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ca8: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x128cac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb0: 0xc042902  jal         func_10A408
    ctx->pc = 0x128CB0u;
    SET_GPR_U32(ctx, 31, 0x128CB8u);
    ctx->pc = 0x128CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CB0u;
    // 0x128cb4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128CB0u, 0x128CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CB8u;
label_128cb8:
    // 0x128cb8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cc0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128cc4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x128cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x128cc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ccc: 0xc042908  jal         func_10A420
    ctx->pc = 0x128CCCu;
    SET_GPR_U32(ctx, 31, 0x128CD4u);
    ctx->pc = 0x128CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CCCu;
    // 0x128cd0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128CCCu, 0x128CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CD4u;
label_128cd4:
    // 0x128cd4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128CD4u;
    {
        const bool branch_taken_0x128cd4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CD4u;
        // 0x128cd8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cd4) {
            ctx->pc = 0x128CF0u;
            goto label_128cf0;
        }
    }
    ctx->pc = 0x128CDCu;
    // 0x128cdc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128CDCu;
    {
        const bool branch_taken_0x128cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128cdc) {
            ctx->pc = 0x128CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128CDCu;
            // 0x128ce0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128D00u;
            goto label_128d00;
        }
    }
    ctx->pc = 0x128CE4u;
    // 0x128ce4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ce8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128CE8u;
    {
        const bool branch_taken_0x128ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128ce8) {
            ctx->pc = 0x128CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128CE8u;
            // 0x128cec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128D0Cu;
            goto label_128d0c;
        }
    }
    ctx->pc = 0x128CF0u;
label_128cf0:
    // 0x128cf0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128cf4: 0x8c430730  lw          $v1, 0x730($v0)
    ctx->pc = 0x128cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x128cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128CF8u;
    {
        const bool branch_taken_0x128cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CF8u;
        // 0x128cfc: 0x8c440734  lw          $a0, 0x734($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cf8) {
            ctx->pc = 0x128D14u;
            goto label_128d14;
        }
    }
    ctx->pc = 0x128D00u;
label_128d00:
    // 0x128d00: 0x8c430730  lw          $v1, 0x730($v0)
    ctx->pc = 0x128d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x128d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128D04u;
    {
        const bool branch_taken_0x128d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D04u;
        // 0x128d08: 0x8c440738  lw          $a0, 0x738($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d04) {
            ctx->pc = 0x128D14u;
            goto label_128d14;
        }
    }
    ctx->pc = 0x128D0Cu;
label_128d0c:
    // 0x128d0c: 0x8c430730  lw          $v1, 0x730($v0)
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x128d10: 0x8c44073c  lw          $a0, 0x73C($v0)
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1852)));
label_128d14:
    // 0x128d14: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x128d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128d18: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x128d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x128d1c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x128d20: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x128D20u;
    {
        const bool branch_taken_0x128d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D20u;
        // 0x128d24: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d20) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128D28u;
label_128d28:
    // 0x128d28: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d30: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x128d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128d34: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128d38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d3c: 0xc042902  jal         func_10A408
    ctx->pc = 0x128D3Cu;
    SET_GPR_U32(ctx, 31, 0x128D44u);
    ctx->pc = 0x128D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D3Cu;
    // 0x128d40: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128D3Cu, 0x128D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D44u;
label_128d44:
    // 0x128d44: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x128d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128d50: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d58: 0xc042908  jal         func_10A420
    ctx->pc = 0x128D58u;
    SET_GPR_U32(ctx, 31, 0x128D60u);
    ctx->pc = 0x128D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D58u;
    // 0x128d5c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128D58u, 0x128D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D60u;
label_128d60:
    // 0x128d60: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128D60u;
    {
        const bool branch_taken_0x128d60 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D60u;
        // 0x128d64: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d60) {
            ctx->pc = 0x128D7Cu;
            goto label_128d7c;
        }
    }
    ctx->pc = 0x128D68u;
    // 0x128d68: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D68u;
    {
        const bool branch_taken_0x128d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128d68) {
            ctx->pc = 0x128D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128D68u;
            // 0x128d6c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128D8Cu;
            goto label_128d8c;
        }
    }
    ctx->pc = 0x128D70u;
    // 0x128d70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128d74: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D74u;
    {
        const bool branch_taken_0x128d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128d74) {
            ctx->pc = 0x128D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128D74u;
            // 0x128d78: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128D98u;
            goto label_128d98;
        }
    }
    ctx->pc = 0x128D7Cu;
label_128d7c:
    // 0x128d7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128d80: 0x8c430740  lw          $v1, 0x740($v0)
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1856)));
    // 0x128d84: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x128D84u;
    {
        const bool branch_taken_0x128d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D84u;
        // 0x128d88: 0x8c440744  lw          $a0, 0x744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d84) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128D8Cu;
label_128d8c:
    // 0x128d8c: 0x8c430740  lw          $v1, 0x740($v0)
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1856)));
    // 0x128d90: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x128D90u;
    {
        const bool branch_taken_0x128d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D90u;
        // 0x128d94: 0x8c440748  lw          $a0, 0x748($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d90) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128D98u;
label_128d98:
    // 0x128d98: 0x8c430740  lw          $v1, 0x740($v0)
    ctx->pc = 0x128d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1856)));
    // 0x128d9c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x128D9Cu;
    {
        const bool branch_taken_0x128d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D9Cu;
        // 0x128da0: 0x8c44074c  lw          $a0, 0x74C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d9c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128DA4u;
label_128da4:
    // 0x128da4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128db0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x128db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128db8: 0xc042902  jal         func_10A408
    ctx->pc = 0x128DB8u;
    SET_GPR_U32(ctx, 31, 0x128DC0u);
    ctx->pc = 0x128DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB8u;
    // 0x128dbc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128DB8u, 0x128DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DC0u;
label_128dc0:
    // 0x128dc0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dcc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x128dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128dd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd4: 0xc042908  jal         func_10A420
    ctx->pc = 0x128DD4u;
    SET_GPR_U32(ctx, 31, 0x128DDCu);
    ctx->pc = 0x128DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DD4u;
    // 0x128dd8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128DD4u, 0x128DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DDCu;
label_128ddc:
    // 0x128ddc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128DDCu;
    {
        const bool branch_taken_0x128ddc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DDCu;
        // 0x128de0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ddc) {
            ctx->pc = 0x128DF8u;
            goto label_128df8;
        }
    }
    ctx->pc = 0x128DE4u;
    // 0x128de4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128DE4u;
    {
        const bool branch_taken_0x128de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128de4) {
            ctx->pc = 0x128DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128DE4u;
            // 0x128de8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128E08u;
            goto label_128e08;
        }
    }
    ctx->pc = 0x128DECu;
    // 0x128dec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128df0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128DF0u;
    {
        const bool branch_taken_0x128df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128df0) {
            ctx->pc = 0x128DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128DF0u;
            // 0x128df4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128E14u;
            goto label_128e14;
        }
    }
    ctx->pc = 0x128DF8u;
label_128df8:
    // 0x128df8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128dfc: 0x8c430750  lw          $v1, 0x750($v0)
    ctx->pc = 0x128dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1872)));
    // 0x128e00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128E00u;
    {
        const bool branch_taken_0x128e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E00u;
        // 0x128e04: 0x8c440754  lw          $a0, 0x754($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e00) {
            ctx->pc = 0x128E1Cu;
            goto label_128e1c;
        }
    }
    ctx->pc = 0x128E08u;
label_128e08:
    // 0x128e08: 0x8c430750  lw          $v1, 0x750($v0)
    ctx->pc = 0x128e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1872)));
    // 0x128e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128E0Cu;
    {
        const bool branch_taken_0x128e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E0Cu;
        // 0x128e10: 0x8c440758  lw          $a0, 0x758($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e0c) {
            ctx->pc = 0x128E1Cu;
            goto label_128e1c;
        }
    }
    ctx->pc = 0x128E14u;
label_128e14:
    // 0x128e14: 0x8c430750  lw          $v1, 0x750($v0)
    ctx->pc = 0x128e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1872)));
    // 0x128e18: 0x8c44075c  lw          $a0, 0x75C($v0)
    ctx->pc = 0x128e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1884)));
label_128e1c:
    // 0x128e1c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128e20: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x128e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x128e24: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x128e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x128e28: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x128E28u;
    {
        const bool branch_taken_0x128e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E28u;
        // 0x128e2c: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e28) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x128E30u;
label_128e30:
    // 0x128e30: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e38: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x128e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128e3c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x128e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x128e40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e44: 0xc042902  jal         func_10A408
    ctx->pc = 0x128E44u;
    SET_GPR_U32(ctx, 31, 0x128E4Cu);
    ctx->pc = 0x128E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E44u;
    // 0x128e48: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128E44u, 0x128E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E4Cu;
label_128e4c:
    // 0x128e4c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128e58: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x128e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x128e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e60: 0xc042908  jal         func_10A420
    ctx->pc = 0x128E60u;
    SET_GPR_U32(ctx, 31, 0x128E68u);
    ctx->pc = 0x128E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E60u;
    // 0x128e64: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128E60u, 0x128E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E68u;
label_128e68:
    // 0x128e68: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128E68u;
    {
        const bool branch_taken_0x128e68 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E68u;
        // 0x128e6c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e68) {
            ctx->pc = 0x128E84u;
            goto label_128e84;
        }
    }
    ctx->pc = 0x128E70u;
    // 0x128e70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128E70u;
    {
        const bool branch_taken_0x128e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128e70) {
            ctx->pc = 0x128E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E70u;
            // 0x128e74: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128E94u;
            goto label_128e94;
        }
    }
    ctx->pc = 0x128E78u;
    // 0x128e78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128e7c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128E7Cu;
    {
        const bool branch_taken_0x128e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128e7c) {
            ctx->pc = 0x128E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E7Cu;
            // 0x128e80: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128EA0u;
            goto label_128ea0;
        }
    }
    ctx->pc = 0x128E84u;
label_128e84:
    // 0x128e84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128e88: 0x8c430760  lw          $v1, 0x760($v0)
    ctx->pc = 0x128e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1888)));
    // 0x128e8c: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x128E8Cu;
    {
        const bool branch_taken_0x128e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E8Cu;
        // 0x128e90: 0x8c440764  lw          $a0, 0x764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e8c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128E94u;
label_128e94:
    // 0x128e94: 0x8c430760  lw          $v1, 0x760($v0)
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1888)));
    // 0x128e98: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x128E98u;
    {
        const bool branch_taken_0x128e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E98u;
        // 0x128e9c: 0x8c440768  lw          $a0, 0x768($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e98) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128EA0u;
label_128ea0:
    // 0x128ea0: 0x8c430760  lw          $v1, 0x760($v0)
    ctx->pc = 0x128ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1888)));
    // 0x128ea4: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x128EA4u;
    {
        const bool branch_taken_0x128ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EA4u;
        // 0x128ea8: 0x8c44076c  lw          $a0, 0x76C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ea4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128EACu;
label_128eac:
    // 0x128eac: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eb8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128ebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ec0: 0xc042902  jal         func_10A408
    ctx->pc = 0x128EC0u;
    SET_GPR_U32(ctx, 31, 0x128EC8u);
    ctx->pc = 0x128EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EC0u;
    // 0x128ec4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128EC0u, 0x128EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EC8u;
label_128ec8:
    // 0x128ec8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ed4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128ed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128edc: 0xc042908  jal         func_10A420
    ctx->pc = 0x128EDCu;
    SET_GPR_U32(ctx, 31, 0x128EE4u);
    ctx->pc = 0x128EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EDCu;
    // 0x128ee0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128EDCu, 0x128EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EE4u;
label_128ee4:
    // 0x128ee4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128EE4u;
    {
        const bool branch_taken_0x128ee4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EE4u;
        // 0x128ee8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ee4) {
            ctx->pc = 0x128F00u;
            goto label_128f00;
        }
    }
    ctx->pc = 0x128EECu;
    // 0x128eec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128EECu;
    {
        const bool branch_taken_0x128eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128eec) {
            ctx->pc = 0x128EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EECu;
            // 0x128ef0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F10u;
            goto label_128f10;
        }
    }
    ctx->pc = 0x128EF4u;
    // 0x128ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ef8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128EF8u;
    {
        const bool branch_taken_0x128ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128ef8) {
            ctx->pc = 0x128EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EF8u;
            // 0x128efc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F1Cu;
            goto label_128f1c;
        }
    }
    ctx->pc = 0x128F00u;
label_128f00:
    // 0x128f00: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128f04: 0x8c4307a0  lw          $v1, 0x7A0($v0)
    ctx->pc = 0x128f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    // 0x128f08: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x128F08u;
    {
        const bool branch_taken_0x128f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F08u;
        // 0x128f0c: 0x8c4407a4  lw          $a0, 0x7A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f08) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128F10u;
label_128f10:
    // 0x128f10: 0x8c4307a0  lw          $v1, 0x7A0($v0)
    ctx->pc = 0x128f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    // 0x128f14: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x128F14u;
    {
        const bool branch_taken_0x128f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F14u;
        // 0x128f18: 0x8c4407a8  lw          $a0, 0x7A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f14) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128F1Cu;
label_128f1c:
    // 0x128f1c: 0x8c4307a0  lw          $v1, 0x7A0($v0)
    ctx->pc = 0x128f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    // 0x128f20: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x128F20u;
    {
        const bool branch_taken_0x128f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F20u;
        // 0x128f24: 0x8c4407ac  lw          $a0, 0x7AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f20) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128F28u;
label_128f28:
    // 0x128f28: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f30: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x128f34: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x128f38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f3c: 0xc042902  jal         func_10A408
    ctx->pc = 0x128F3Cu;
    SET_GPR_U32(ctx, 31, 0x128F44u);
    ctx->pc = 0x128F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F3Cu;
    // 0x128f40: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128F3Cu, 0x128F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F44u;
label_128f44:
    // 0x128f44: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f4c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x128f50: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x128f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f58: 0xc042908  jal         func_10A420
    ctx->pc = 0x128F58u;
    SET_GPR_U32(ctx, 31, 0x128F60u);
    ctx->pc = 0x128F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F58u;
    // 0x128f5c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128F58u, 0x128F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F60u;
label_128f60:
    // 0x128f60: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128F60u;
    {
        const bool branch_taken_0x128f60 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F60u;
        // 0x128f64: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f60) {
            ctx->pc = 0x128F7Cu;
            goto label_128f7c;
        }
    }
    ctx->pc = 0x128F68u;
    // 0x128f68: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128F68u;
    {
        const bool branch_taken_0x128f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f68) {
            ctx->pc = 0x128F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F68u;
            // 0x128f6c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F8Cu;
            goto label_128f8c;
        }
    }
    ctx->pc = 0x128F70u;
    // 0x128f70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128f74: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128F74u;
    {
        const bool branch_taken_0x128f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128f74) {
            ctx->pc = 0x128F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F74u;
            // 0x128f78: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F98u;
            goto label_128f98;
        }
    }
    ctx->pc = 0x128F7Cu;
label_128f7c:
    // 0x128f7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128f80: 0x8c4307b0  lw          $v1, 0x7B0($v0)
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
    // 0x128f84: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x128F84u;
    {
        const bool branch_taken_0x128f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F84u;
        // 0x128f88: 0x8c4407b4  lw          $a0, 0x7B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f84) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128F8Cu;
label_128f8c:
    // 0x128f8c: 0x8c4307b0  lw          $v1, 0x7B0($v0)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
    // 0x128f90: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x128F90u;
    {
        const bool branch_taken_0x128f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F90u;
        // 0x128f94: 0x8c4407b8  lw          $a0, 0x7B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f90) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128F98u;
label_128f98:
    // 0x128f98: 0x8c4307b0  lw          $v1, 0x7B0($v0)
    ctx->pc = 0x128f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
    // 0x128f9c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x128F9Cu;
    {
        const bool branch_taken_0x128f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F9Cu;
        // 0x128fa0: 0x8c4407bc  lw          $a0, 0x7BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f9c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x128FA4u;
label_128fa4:
    // 0x128fa4: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x128fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x128fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fb0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128fb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fb8: 0xc042902  jal         func_10A408
    ctx->pc = 0x128FB8u;
    SET_GPR_U32(ctx, 31, 0x128FC0u);
    ctx->pc = 0x128FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FB8u;
    // 0x128fbc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x128FB8u, 0x128FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FC0u;
label_128fc0:
    // 0x128fc0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x128fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fcc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x128fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fd4: 0xc042908  jal         func_10A420
    ctx->pc = 0x128FD4u;
    SET_GPR_U32(ctx, 31, 0x128FDCu);
    ctx->pc = 0x128FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FD4u;
    // 0x128fd8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x128FD4u, 0x128FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FDCu;
label_128fdc:
    // 0x128fdc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128FDCu;
    {
        const bool branch_taken_0x128fdc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x128FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FDCu;
        // 0x128fe0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fdc) {
            ctx->pc = 0x128FF8u;
            goto label_128ff8;
        }
    }
    ctx->pc = 0x128FE4u;
    // 0x128fe4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128FE4u;
    {
        const bool branch_taken_0x128fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128fe4) {
            ctx->pc = 0x128FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FE4u;
            // 0x128fe8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129008u;
            goto label_129008;
        }
    }
    ctx->pc = 0x128FECu;
    // 0x128fec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ff0: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128FF0u;
    {
        const bool branch_taken_0x128ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128ff0) {
            ctx->pc = 0x128FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FF0u;
            // 0x128ff4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129014u;
            goto label_129014;
        }
    }
    ctx->pc = 0x128FF8u;
label_128ff8:
    // 0x128ff8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x128ffc: 0x8c4307c0  lw          $v1, 0x7C0($v0)
    ctx->pc = 0x128ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
    // 0x129000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x129000u;
    {
        const bool branch_taken_0x129000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129000u;
        // 0x129004: 0x8c4407c4  lw          $a0, 0x7C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129000) {
            ctx->pc = 0x12901Cu;
            goto label_12901c;
        }
    }
    ctx->pc = 0x129008u;
label_129008:
    // 0x129008: 0x8c4307c0  lw          $v1, 0x7C0($v0)
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
    // 0x12900c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12900Cu;
        // 0x129010: 0x8c4407c8  lw          $a0, 0x7C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12900c) {
            ctx->pc = 0x12901Cu;
            goto label_12901c;
        }
    }
    ctx->pc = 0x129014u;
label_129014:
    // 0x129014: 0x8c4307c0  lw          $v1, 0x7C0($v0)
    ctx->pc = 0x129014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
    // 0x129018: 0x8c4407cc  lw          $a0, 0x7CC($v0)
    ctx->pc = 0x129018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1996)));
label_12901c:
    // 0x12901c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x12901cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129020: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x129020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x129024: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x129024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x129028: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x129028u;
    {
        const bool branch_taken_0x129028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129028u;
        // 0x12902c: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129028) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x129030u;
label_129030:
    // 0x129030: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x129034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12903c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x12903cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x129040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129044: 0xc042902  jal         func_10A408
    ctx->pc = 0x129044u;
    SET_GPR_U32(ctx, 31, 0x12904Cu);
    ctx->pc = 0x129048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129044u;
    // 0x129048: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x129044u, 0x12904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12904Cu;
label_12904c:
    // 0x12904c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12904cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x129050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129058: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x129058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12905c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12905cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129060: 0xc042908  jal         func_10A420
    ctx->pc = 0x129060u;
    SET_GPR_U32(ctx, 31, 0x129068u);
    ctx->pc = 0x129064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129060u;
    // 0x129064: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x129060u, 0x129068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129068u;
label_129068:
    // 0x129068: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129068u;
    {
        const bool branch_taken_0x129068 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129068u;
        // 0x12906c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129068) {
            ctx->pc = 0x129084u;
            goto label_129084;
        }
    }
    ctx->pc = 0x129070u;
    // 0x129070: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129070u;
    {
        const bool branch_taken_0x129070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129070) {
            ctx->pc = 0x129074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129070u;
            // 0x129074: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129094u;
            goto label_129094;
        }
    }
    ctx->pc = 0x129078u;
    // 0x129078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12907c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12907Cu;
    {
        const bool branch_taken_0x12907c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12907c) {
            ctx->pc = 0x129080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12907Cu;
            // 0x129080: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1290A0u;
            goto label_1290a0;
        }
    }
    ctx->pc = 0x129084u;
label_129084:
    // 0x129084: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x129088: 0x8c4307d0  lw          $v1, 0x7D0($v0)
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x12908c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12908Cu;
    {
        const bool branch_taken_0x12908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12908Cu;
        // 0x129090: 0x8c4407d4  lw          $a0, 0x7D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12908c) {
            ctx->pc = 0x1290A8u;
            goto label_1290a8;
        }
    }
    ctx->pc = 0x129094u;
label_129094:
    // 0x129094: 0x8c4307d0  lw          $v1, 0x7D0($v0)
    ctx->pc = 0x129094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x129098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129098u;
    {
        const bool branch_taken_0x129098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129098u;
        // 0x12909c: 0x8c4407d8  lw          $a0, 0x7D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129098) {
            ctx->pc = 0x1290A8u;
            goto label_1290a8;
        }
    }
    ctx->pc = 0x1290A0u;
label_1290a0:
    // 0x1290a0: 0x8c4307d0  lw          $v1, 0x7D0($v0)
    ctx->pc = 0x1290a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x1290a4: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x1290a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
label_1290a8:
    // 0x1290a8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1290a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1290ac: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1290b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1290b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1290b4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1290B4u;
    {
        const bool branch_taken_0x1290b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290B4u;
        // 0x1290b8: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290b4) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x1290BCu;
label_1290bc:
    // 0x1290bc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1290bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1290c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1290c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1290c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1290c8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1290cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290d0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1290D0u;
    SET_GPR_U32(ctx, 31, 0x1290D8u);
    ctx->pc = 0x1290D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290D0u;
    // 0x1290d4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1290D0u, 0x1290D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290D8u;
label_1290d8:
    // 0x1290d8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1290dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1290dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1290e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1290e4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1290e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1290e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1290e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290ec: 0xc042908  jal         func_10A420
    ctx->pc = 0x1290ECu;
    SET_GPR_U32(ctx, 31, 0x1290F4u);
    ctx->pc = 0x1290F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290ECu;
    // 0x1290f0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1290ECu, 0x1290F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290F4u;
label_1290f4:
    // 0x1290f4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1290F4u;
    {
        const bool branch_taken_0x1290f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1290F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290F4u;
        // 0x1290f8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290f4) {
            ctx->pc = 0x129110u;
            goto label_129110;
        }
    }
    ctx->pc = 0x1290FCu;
    // 0x1290fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1290FCu;
    {
        const bool branch_taken_0x1290fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290fc) {
            ctx->pc = 0x129100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290FCu;
            // 0x129100: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129120u;
            goto label_129120;
        }
    }
    ctx->pc = 0x129104u;
    // 0x129104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129108: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x129108) {
            ctx->pc = 0x12910Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129108u;
            // 0x12910c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12912Cu;
            goto label_12912c;
        }
    }
    ctx->pc = 0x129110u;
label_129110:
    // 0x129110: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x129110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x129114: 0x8c4307e0  lw          $v1, 0x7E0($v0)
    ctx->pc = 0x129114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x129118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x129118u;
    {
        const bool branch_taken_0x129118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129118u;
        // 0x12911c: 0x8c4407e4  lw          $a0, 0x7E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129118) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x129120u;
label_129120:
    // 0x129120: 0x8c4307e0  lw          $v1, 0x7E0($v0)
    ctx->pc = 0x129120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x129124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129124u;
    {
        const bool branch_taken_0x129124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129124u;
        // 0x129128: 0x8c4407e8  lw          $a0, 0x7E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129124) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x12912Cu;
label_12912c:
    // 0x12912c: 0x8c4307e0  lw          $v1, 0x7E0($v0)
    ctx->pc = 0x12912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x129130: 0x8c4407ec  lw          $a0, 0x7EC($v0)
    ctx->pc = 0x129130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2028)));
label_129134:
    // 0x129134: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129138: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x129138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12913c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x12913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x129140: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x129140u;
    {
        const bool branch_taken_0x129140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129140u;
        // 0x129144: 0xa6421618  sh          $v0, 0x1618($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129140) {
            ctx->pc = 0x1293C8u;
            goto label_1293c8;
        }
    }
    ctx->pc = 0x129148u;
label_129148:
    // 0x129148: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12914c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129154: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x129154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12915c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12915Cu;
    SET_GPR_U32(ctx, 31, 0x129164u);
    ctx->pc = 0x129160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12915Cu;
    // 0x129160: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12915Cu, 0x129164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129164u;
label_129164:
    // 0x129164: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x129164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x129168: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12916c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x129170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129178: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x129178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12917c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12917cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129180: 0xc042908  jal         func_10A420
    ctx->pc = 0x129180u;
    SET_GPR_U32(ctx, 31, 0x129188u);
    ctx->pc = 0x129184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129180u;
    // 0x129184: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x129180u, 0x129188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129188u;
label_129188:
    // 0x129188: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129188u;
    {
        const bool branch_taken_0x129188 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129188u;
        // 0x12918c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129188) {
            ctx->pc = 0x1291A4u;
            goto label_1291a4;
        }
    }
    ctx->pc = 0x129190u;
    // 0x129190: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129190u;
    {
        const bool branch_taken_0x129190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129190) {
            ctx->pc = 0x129194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129190u;
            // 0x129194: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1291B4u;
            goto label_1291b4;
        }
    }
    ctx->pc = 0x129198u;
    // 0x129198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12919c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12919Cu;
    {
        const bool branch_taken_0x12919c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12919c) {
            ctx->pc = 0x1291A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12919Cu;
            // 0x1291a0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1291C0u;
            goto label_1291c0;
        }
    }
    ctx->pc = 0x1291A4u;
label_1291a4:
    // 0x1291a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1291a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1291a8: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x1291ac: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1291ACu;
    {
        const bool branch_taken_0x1291ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291ACu;
        // 0x1291b0: 0x8c440940  lw          $a0, 0x940($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291ac) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1291B4u;
label_1291b4:
    // 0x1291b4: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x1291b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x1291b8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1291B8u;
    {
        const bool branch_taken_0x1291b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291B8u;
        // 0x1291bc: 0x8c440944  lw          $a0, 0x944($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291b8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1291C0u;
label_1291c0:
    // 0x1291c0: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x1291c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x1291c4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1291C4u;
    {
        const bool branch_taken_0x1291c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291C4u;
        // 0x1291c8: 0x8c440948  lw          $a0, 0x948($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291c4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1291CCu;
label_1291cc:
    // 0x1291cc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1291ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1291d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1291d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1291d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291d8: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1291d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1291dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291e0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1291E0u;
    SET_GPR_U32(ctx, 31, 0x1291E8u);
    ctx->pc = 0x1291E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291E0u;
    // 0x1291e4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1291E0u, 0x1291E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291E8u;
label_1291e8:
    // 0x1291e8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1291e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1291ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1291ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1291f0: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1291f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1291f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1291f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291fc: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1291fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129204: 0xc042908  jal         func_10A420
    ctx->pc = 0x129204u;
    SET_GPR_U32(ctx, 31, 0x12920Cu);
    ctx->pc = 0x129208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129204u;
    // 0x129208: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x129204u, 0x12920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12920Cu;
label_12920c:
    // 0x12920c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12920Cu;
    {
        const bool branch_taken_0x12920c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x129210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12920Cu;
        // 0x129210: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12920c) {
            ctx->pc = 0x129228u;
            goto label_129228;
        }
    }
    ctx->pc = 0x129214u;
    // 0x129214: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129214u;
    {
        const bool branch_taken_0x129214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129214) {
            ctx->pc = 0x129218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129214u;
            // 0x129218: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129238u;
            goto label_129238;
        }
    }
    ctx->pc = 0x12921Cu;
    // 0x12921c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129220: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129220u;
    {
        const bool branch_taken_0x129220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x129220) {
            ctx->pc = 0x129224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129220u;
            // 0x129224: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129244u;
            goto label_129244;
        }
    }
    ctx->pc = 0x129228u;
label_129228:
    // 0x129228: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x12922c: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x129230: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x129230u;
    {
        const bool branch_taken_0x129230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129230u;
        // 0x129234: 0x8c44097c  lw          $a0, 0x97C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129230) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x129238u;
label_129238:
    // 0x129238: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x129238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x12923c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x12923Cu;
    {
        const bool branch_taken_0x12923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12923Cu;
        // 0x129240: 0x8c44097c  lw          $a0, 0x97C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12923c) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x129244u;
label_129244:
    // 0x129244: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x129244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x129248: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x129248u;
    {
        const bool branch_taken_0x129248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129248u;
        // 0x12924c: 0x8c440980  lw          $a0, 0x980($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129248) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x129250u;
label_129250:
    // 0x129250: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x129250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x129254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129258: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x129258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12925c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x12925cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x129260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129264: 0xc042902  jal         func_10A408
    ctx->pc = 0x129264u;
    SET_GPR_U32(ctx, 31, 0x12926Cu);
    ctx->pc = 0x129268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129264u;
    // 0x129268: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x129264u, 0x12926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12926Cu;
label_12926c:
    // 0x12926c: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x129270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129274: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129278: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x129278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12927c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12927cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129280: 0xc042908  jal         func_10A420
    ctx->pc = 0x129280u;
    SET_GPR_U32(ctx, 31, 0x129288u);
    ctx->pc = 0x129284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129280u;
    // 0x129284: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x129280u, 0x129288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129288u;
label_129288:
    // 0x129288: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129288u;
    {
        const bool branch_taken_0x129288 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x12928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129288u;
        // 0x12928c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129288) {
            ctx->pc = 0x1292A4u;
            goto label_1292a4;
        }
    }
    ctx->pc = 0x129290u;
    // 0x129290: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129290u;
    {
        const bool branch_taken_0x129290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129290) {
            ctx->pc = 0x129294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129290u;
            // 0x129294: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292B4u;
            goto label_1292b4;
        }
    }
    ctx->pc = 0x129298u;
    // 0x129298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12929c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12929Cu;
    {
        const bool branch_taken_0x12929c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12929c) {
            ctx->pc = 0x1292A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12929Cu;
            // 0x1292a0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292C0u;
            goto label_1292c0;
        }
    }
    ctx->pc = 0x1292A4u;
label_1292a4:
    // 0x1292a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1292a8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1292a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1292ac: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1292ACu;
    {
        const bool branch_taken_0x1292ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292ACu;
        // 0x1292b0: 0x8c4400b8  lw          $a0, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292ac) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1292B4u;
label_1292b4:
    // 0x1292b4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1292b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1292b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1292B8u;
    {
        const bool branch_taken_0x1292b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B8u;
        // 0x1292bc: 0x8c4400bc  lw          $a0, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b8) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1292C0u;
label_1292c0:
    // 0x1292c0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1292c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1292c4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1292C4u;
    {
        const bool branch_taken_0x1292c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292C4u;
        // 0x1292c8: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292c4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1292CCu;
label_1292cc:
    // 0x1292cc: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x1292ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x1292d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1292d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1292d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1292dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1292dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292e0: 0xc042902  jal         func_10A408
    ctx->pc = 0x1292E0u;
    SET_GPR_U32(ctx, 31, 0x1292E8u);
    ctx->pc = 0x1292E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292E0u;
    // 0x1292e4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1292E0u, 0x1292E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292E8u;
label_1292e8:
    // 0x1292e8: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x1292e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x1292ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1292ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1292f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1292f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1292f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1292f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292fc: 0xc042908  jal         func_10A420
    ctx->pc = 0x1292FCu;
    SET_GPR_U32(ctx, 31, 0x129304u);
    ctx->pc = 0x129300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292FCu;
    // 0x129300: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1292FCu, 0x129304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129304u;
label_129304:
    // 0x129304: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129304u;
    {
        const bool branch_taken_0x129304 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x129308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129304u;
        // 0x129308: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129304) {
            ctx->pc = 0x129320u;
            goto label_129320;
        }
    }
    ctx->pc = 0x12930Cu;
    // 0x12930c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12930Cu;
    {
        const bool branch_taken_0x12930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12930c) {
            ctx->pc = 0x129310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12930Cu;
            // 0x129310: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129330u;
            goto label_129330;
        }
    }
    ctx->pc = 0x129314u;
    // 0x129314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129318: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129318u;
    {
        const bool branch_taken_0x129318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x129318) {
            ctx->pc = 0x12931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129318u;
            // 0x12931c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12933Cu;
            goto label_12933c;
        }
    }
    ctx->pc = 0x129320u;
label_129320:
    // 0x129320: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x129320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x129324: 0x8c430880  lw          $v1, 0x880($v0)
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x129328: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x129328u;
    {
        const bool branch_taken_0x129328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129328u;
        // 0x12932c: 0x8c440884  lw          $a0, 0x884($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129328) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x129330u;
label_129330:
    // 0x129330: 0x8c430880  lw          $v1, 0x880($v0)
    ctx->pc = 0x129330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x129334: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x129334u;
    {
        const bool branch_taken_0x129334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129334u;
        // 0x129338: 0x8c440888  lw          $a0, 0x888($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129334) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12933Cu;
label_12933c:
    // 0x12933c: 0x8c430880  lw          $v1, 0x880($v0)
    ctx->pc = 0x12933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x129340: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129340u;
        // 0x129344: 0x8c44088c  lw          $a0, 0x88C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129340) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x8e451668  lw          $a1, 0x1668($s2)
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5736)));
    // 0x12934c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129354: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x129354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12935c: 0xc042902  jal         func_10A408
    ctx->pc = 0x12935Cu;
    SET_GPR_U32(ctx, 31, 0x129364u);
    ctx->pc = 0x129360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12935Cu;
    // 0x129360: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x12935Cu, 0x129364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129364u;
label_129364:
    // 0x129364: 0x8e45166c  lw          $a1, 0x166C($s2)
    ctx->pc = 0x129364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5740)));
    // 0x129368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12936c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12936cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129370: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129378: 0xc042908  jal         func_10A420
    ctx->pc = 0x129378u;
    SET_GPR_U32(ctx, 31, 0x129380u);
    ctx->pc = 0x12937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129378u;
    // 0x12937c: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x129378u, 0x129380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129380u;
label_129380:
    // 0x129380: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129380u;
    {
        const bool branch_taken_0x129380 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x129384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129380u;
        // 0x129384: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129380) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x129388u;
    // 0x129388: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129388u;
    {
        const bool branch_taken_0x129388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129388) {
            ctx->pc = 0x12938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129388u;
            // 0x12938c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293ACu;
            goto label_1293ac;
        }
    }
    ctx->pc = 0x129390u;
    // 0x129390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129394: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129394u;
    {
        const bool branch_taken_0x129394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x129394) {
            ctx->pc = 0x129398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129394u;
            // 0x129398: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293B8u;
            goto label_1293b8;
        }
    }
    ctx->pc = 0x12939Cu;
label_12939c:
    // 0x12939c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x12939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1293a0: 0x8c430890  lw          $v1, 0x890($v0)
    ctx->pc = 0x1293a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
    // 0x1293a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1293A4u;
    {
        const bool branch_taken_0x1293a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293A4u;
        // 0x1293a8: 0x8c440894  lw          $a0, 0x894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293a4) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1293ACu;
label_1293ac:
    // 0x1293ac: 0x8c430890  lw          $v1, 0x890($v0)
    ctx->pc = 0x1293acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
    // 0x1293b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1293B0u;
    {
        const bool branch_taken_0x1293b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293B0u;
        // 0x1293b4: 0x8c440898  lw          $a0, 0x898($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293b0) {
            ctx->pc = 0x1293C0u;
            goto label_1293c0;
        }
    }
    ctx->pc = 0x1293B8u;
label_1293b8:
    // 0x1293b8: 0x8c430890  lw          $v1, 0x890($v0)
    ctx->pc = 0x1293b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
    // 0x1293bc: 0x8c44089c  lw          $a0, 0x89C($v0)
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2204)));
label_1293c0:
    // 0x1293c0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1293c4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1293c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1293c8:
    // 0x1293c8: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x1293CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1293C8u;
            // 0x1293cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129410u;
            goto label_129410;
        }
    }
    ctx->pc = 0x1293D0u;
    // 0x1293d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1293D0u;
    {
        const bool branch_taken_0x1293d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293d0) {
            ctx->pc = 0x1293D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1293D0u;
            // 0x1293d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129410u;
            goto label_129410;
        }
    }
    ctx->pc = 0x1293D8u;
    // 0x1293d8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1293D8u;
    {
        const bool branch_taken_0x1293d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293d8) {
            ctx->pc = 0x1293E4u;
            goto label_1293e4;
        }
    }
    ctx->pc = 0x1293E0u;
    // 0x1293e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1293e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1293e4:
    // 0x1293e4: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x1293E4u;
    SET_GPR_U32(ctx, 31, 0x1293ECu);
    ctx->pc = 0x1293E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293E4u;
    // 0x1293e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x1293E4u, 0x1293ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293ECu;
label_1293ec:
    // 0x1293ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1293ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1293f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1293f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1293f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1293fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x129400: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x129400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x129404: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x129404u;
    SET_GPR_U32(ctx, 31, 0x12940Cu);
    ctx->pc = 0x129408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129404u;
    // 0x129408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x129404u, 0x12940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12940Cu;
label_12940c:
    // 0x12940c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_129410:
    // 0x129410: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x129410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129418: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x129418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12941c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129420: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x129420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129424: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x129424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129428: 0x3e00008  jr          $ra
    ctx->pc = 0x129428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129428u;
        // 0x12942c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129430u;
}
