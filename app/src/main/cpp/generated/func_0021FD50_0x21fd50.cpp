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

// Function: func_0021FD50
// Address: 0x21fd50 - 0x223470
void func_0021FD50_0x21fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0021FD50_0x21fd50");
#endif

    switch (ctx->pc) {
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe4cu: goto label_21fe4c;
        case 0x21fed0u: goto label_21fed0;
        case 0x21ff10u: goto label_21ff10;
        case 0x21ff60u: goto label_21ff60;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffe8u: goto label_21ffe8;
        case 0x22001cu: goto label_22001c;
        case 0x220070u: goto label_220070;
        case 0x2200acu: goto label_2200ac;
        case 0x2200e0u: goto label_2200e0;
        case 0x22011cu: goto label_22011c;
        case 0x220150u: goto label_220150;
        case 0x22018cu: goto label_22018c;
        case 0x2201a8u: goto label_2201a8;
        case 0x2201f0u: goto label_2201f0;
        case 0x22022cu: goto label_22022c;
        case 0x22025cu: goto label_22025c;
        case 0x220298u: goto label_220298;
        case 0x2202ccu: goto label_2202cc;
        case 0x220308u: goto label_220308;
        case 0x220338u: goto label_220338;
        case 0x220374u: goto label_220374;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203e4u: goto label_2203e4;
        case 0x220400u: goto label_220400;
        case 0x220428u: goto label_220428;
        case 0x220464u: goto label_220464;
        case 0x220498u: goto label_220498;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204f0u: goto label_2204f0;
        case 0x220518u: goto label_220518;
        case 0x220554u: goto label_220554;
        case 0x220584u: goto label_220584;
        case 0x2205c0u: goto label_2205c0;
        case 0x2205f4u: goto label_2205f4;
        case 0x220630u: goto label_220630;
        case 0x220664u: goto label_220664;
        case 0x220688u: goto label_220688;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206c4u: goto label_2206c4;
        case 0x220718u: goto label_220718;
        case 0x22072cu: goto label_22072c;
        case 0x220740u: goto label_220740;
        case 0x220750u: goto label_220750;
        case 0x22076cu: goto label_22076c;
        case 0x2207a8u: goto label_2207a8;
        case 0x2207c4u: goto label_2207c4;
        case 0x220814u: goto label_220814;
        case 0x220850u: goto label_220850;
        case 0x22088cu: goto label_22088c;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208f4u: goto label_2208f4;
        case 0x220930u: goto label_220930;
        case 0x220960u: goto label_220960;
        case 0x22099cu: goto label_22099c;
        case 0x2209ccu: goto label_2209cc;
        case 0x220a08u: goto label_220a08;
        case 0x220a38u: goto label_220a38;
        case 0x220a74u: goto label_220a74;
        case 0x220aa4u: goto label_220aa4;
        case 0x220ae0u: goto label_220ae0;
        case 0x220afcu: goto label_220afc;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b68u: goto label_220b68;
        case 0x220b94u: goto label_220b94;
        case 0x220bd0u: goto label_220bd0;
        case 0x220becu: goto label_220bec;
        case 0x220c34u: goto label_220c34;
        case 0x220c70u: goto label_220c70;
        case 0x220ca0u: goto label_220ca0;
        case 0x220cdcu: goto label_220cdc;
        case 0x220d10u: goto label_220d10;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d7cu: goto label_220d7c;
        case 0x220db8u: goto label_220db8;
        case 0x220e04u: goto label_220e04;
        case 0x220e2cu: goto label_220e2c;
        case 0x220e40u: goto label_220e40;
        case 0x220e7cu: goto label_220e7c;
        case 0x220ea8u: goto label_220ea8;
        case 0x220ebcu: goto label_220ebc;
        case 0x220ef8u: goto label_220ef8;
        case 0x220f14u: goto label_220f14;
        case 0x220f3cu: goto label_220f3c;
        case 0x220f78u: goto label_220f78;
        case 0x220facu: goto label_220fac;
        case 0x220fe8u: goto label_220fe8;
        case 0x221004u: goto label_221004;
        case 0x22102cu: goto label_22102c;
        case 0x221068u: goto label_221068;
        case 0x221090u: goto label_221090;
        case 0x2210b8u: goto label_2210b8;
        case 0x2210f4u: goto label_2210f4;
        case 0x221120u: goto label_221120;
        case 0x221160u: goto label_221160;
        case 0x221184u: goto label_221184;
        case 0x2211acu: goto label_2211ac;
        case 0x2211e8u: goto label_2211e8;
        case 0x221214u: goto label_221214;
        case 0x221254u: goto label_221254;
        case 0x221270u: goto label_221270;
        case 0x2212a4u: goto label_2212a4;
        case 0x2212d4u: goto label_2212d4;
        case 0x2212f8u: goto label_2212f8;
        case 0x221358u: goto label_221358;
        case 0x22137cu: goto label_22137c;
        case 0x2213a4u: goto label_2213a4;
        case 0x2213ccu: goto label_2213cc;
        case 0x221454u: goto label_221454;
        case 0x221470u: goto label_221470;
        case 0x221488u: goto label_221488;
        case 0x2214ccu: goto label_2214cc;
        case 0x2214ecu: goto label_2214ec;
        case 0x221528u: goto label_221528;
        case 0x221548u: goto label_221548;
        case 0x221584u: goto label_221584;
        case 0x2215a4u: goto label_2215a4;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215fcu: goto label_2215fc;
        case 0x221640u: goto label_221640;
        case 0x22167cu: goto label_22167c;
        case 0x2216a4u: goto label_2216a4;
        case 0x2216e0u: goto label_2216e0;
        case 0x2216fcu: goto label_2216fc;
        case 0x221720u: goto label_221720;
        case 0x221744u: goto label_221744;
        case 0x2217b0u: goto label_2217b0;
        case 0x2217e0u: goto label_2217e0;
        case 0x221804u: goto label_221804;
        case 0x22181cu: goto label_22181c;
        case 0x221834u: goto label_221834;
        case 0x221840u: goto label_221840;
        case 0x221868u: goto label_221868;
        case 0x2218b8u: goto label_2218b8;
        case 0x221900u: goto label_221900;
        case 0x221948u: goto label_221948;
        case 0x221990u: goto label_221990;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219dcu: goto label_2219dc;
        case 0x221a04u: goto label_221a04;
        case 0x221a3cu: goto label_221a3c;
        case 0x221a74u: goto label_221a74;
        case 0x221aa4u: goto label_221aa4;
        case 0x221ad4u: goto label_221ad4;
        case 0x221b04u: goto label_221b04;
        case 0x221b20u: goto label_221b20;
        case 0x221b50u: goto label_221b50;
        case 0x221b80u: goto label_221b80;
        case 0x221bb0u: goto label_221bb0;
        case 0x221be0u: goto label_221be0;
        case 0x221bfcu: goto label_221bfc;
        case 0x221c24u: goto label_221c24;
        case 0x221c58u: goto label_221c58;
        case 0x221c74u: goto label_221c74;
        case 0x221c9cu: goto label_221c9c;
        case 0x221cccu: goto label_221ccc;
        case 0x221cf4u: goto label_221cf4;
        case 0x221d24u: goto label_221d24;
        case 0x221d4cu: goto label_221d4c;
        case 0x221decu: goto label_221dec;
        case 0x221e08u: goto label_221e08;
        case 0x221e28u: goto label_221e28;
        case 0x221e44u: goto label_221e44;
        case 0x221e68u: goto label_221e68;
        case 0x221e84u: goto label_221e84;
        case 0x221ea8u: goto label_221ea8;
        case 0x221ec4u: goto label_221ec4;
        case 0x221ee4u: goto label_221ee4;
        case 0x221f00u: goto label_221f00;
        case 0x221f24u: goto label_221f24;
        case 0x221f40u: goto label_221f40;
        case 0x221f64u: goto label_221f64;
        case 0x221f7cu: goto label_221f7c;
        case 0x221f94u: goto label_221f94;
        case 0x221fd4u: goto label_221fd4;
        case 0x221fe8u: goto label_221fe8;
        case 0x221ff8u: goto label_221ff8;
        case 0x222024u: goto label_222024;
        case 0x222030u: goto label_222030;
        case 0x222040u: goto label_222040;
        case 0x222068u: goto label_222068;
        case 0x222098u: goto label_222098;
        case 0x2220d0u: goto label_2220d0;
        case 0x2220ecu: goto label_2220ec;
        case 0x222144u: goto label_222144;
        case 0x222180u: goto label_222180;
        case 0x2221bcu: goto label_2221bc;
        case 0x2221f8u: goto label_2221f8;
        case 0x222234u: goto label_222234;
        case 0x222270u: goto label_222270;
        case 0x2222acu: goto label_2222ac;
        case 0x2222fcu: goto label_2222fc;
        case 0x222338u: goto label_222338;
        case 0x222374u: goto label_222374;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223ecu: goto label_2223ec;
        case 0x222424u: goto label_222424;
        case 0x222448u: goto label_222448;
        case 0x222458u: goto label_222458;
        case 0x22246cu: goto label_22246c;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224d0u: goto label_2224d0;
        case 0x222508u: goto label_222508;
        case 0x22251cu: goto label_22251c;
        case 0x222538u: goto label_222538;
        case 0x222588u: goto label_222588;
        case 0x2225acu: goto label_2225ac;
        case 0x2225c4u: goto label_2225c4;
        case 0x2225dcu: goto label_2225dc;
        case 0x2225e8u: goto label_2225e8;
        case 0x22266cu: goto label_22266c;
        case 0x22267cu: goto label_22267c;
        case 0x2226a8u: goto label_2226a8;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226dcu: goto label_2226dc;
        case 0x222704u: goto label_222704;
        case 0x222714u: goto label_222714;
        case 0x222724u: goto label_222724;
        case 0x222740u: goto label_222740;
        case 0x222798u: goto label_222798;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227fcu: goto label_2227fc;
        case 0x22282cu: goto label_22282c;
        case 0x222864u: goto label_222864;
        case 0x222880u: goto label_222880;
        case 0x2228d4u: goto label_2228d4;
        case 0x22290cu: goto label_22290c;
        case 0x222944u: goto label_222944;
        case 0x22297cu: goto label_22297c;
        case 0x2229b4u: goto label_2229b4;
        case 0x222a04u: goto label_222a04;
        case 0x222a50u: goto label_222a50;
        case 0x222a88u: goto label_222a88;
        case 0x222ac0u: goto label_222ac0;
        case 0x222af8u: goto label_222af8;
        case 0x222b30u: goto label_222b30;
        case 0x222b68u: goto label_222b68;
        case 0x222b8cu: goto label_222b8c;
        case 0x222bbcu: goto label_222bbc;
        case 0x222be0u: goto label_222be0;
        case 0x222bf8u: goto label_222bf8;
        case 0x222c10u: goto label_222c10;
        case 0x222c1cu: goto label_222c1c;
        case 0x222c74u: goto label_222c74;
        case 0x222c80u: goto label_222c80;
        case 0x222ca8u: goto label_222ca8;
        case 0x222d28u: goto label_222d28;
        case 0x222d80u: goto label_222d80;
        case 0x222dd4u: goto label_222dd4;
        case 0x222df4u: goto label_222df4;
        case 0x222e14u: goto label_222e14;
        case 0x222e34u: goto label_222e34;
        case 0x222e3cu: goto label_222e3c;
        case 0x222e58u: goto label_222e58;
        case 0x222e64u: goto label_222e64;
        case 0x222eb8u: goto label_222eb8;
        case 0x222eccu: goto label_222ecc;
        case 0x222ee8u: goto label_222ee8;
        case 0x222f2cu: goto label_222f2c;
        case 0x222f34u: goto label_222f34;
        case 0x222f58u: goto label_222f58;
        case 0x222f74u: goto label_222f74;
        case 0x222fb8u: goto label_222fb8;
        case 0x222fdcu: goto label_222fdc;
        case 0x223020u: goto label_223020;
        case 0x223074u: goto label_223074;
        case 0x223094u: goto label_223094;
        case 0x2230b4u: goto label_2230b4;
        case 0x2230bcu: goto label_2230bc;
        case 0x2230d8u: goto label_2230d8;
        case 0x2230e4u: goto label_2230e4;
        case 0x223138u: goto label_223138;
        case 0x22314cu: goto label_22314c;
        case 0x2231a0u: goto label_2231a0;
        case 0x2231a8u: goto label_2231a8;
        case 0x2231ccu: goto label_2231cc;
        case 0x223210u: goto label_223210;
        case 0x223264u: goto label_223264;
        case 0x223284u: goto label_223284;
        case 0x2232a4u: goto label_2232a4;
        case 0x2232acu: goto label_2232ac;
        case 0x2232c8u: goto label_2232c8;
        case 0x2232d4u: goto label_2232d4;
        case 0x2232dcu: goto label_2232dc;
        case 0x2232f4u: goto label_2232f4;
        case 0x223300u: goto label_223300;
        case 0x22334cu: goto label_22334c;
        case 0x223374u: goto label_223374;
        case 0x2233a4u: goto label_2233a4;
        case 0x2233b8u: goto label_2233b8;
        case 0x2233c4u: goto label_2233c4;
        case 0x2233d8u: goto label_2233d8;
        case 0x223400u: goto label_223400;
        default: break;
    }

    ctx->pc = 0x21fd50u;

    // 0x21fd50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21fd54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fd58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x21fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x21fd5c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x21fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x21fd60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21fd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd64: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x21fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x21fd68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fd6c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x21fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x21fd70: 0x241704e2  addiu       $s7, $zero, 0x4E2
    ctx->pc = 0x21fd70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x21fd74: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x21fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x21fd78: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fd7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x21fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x21fd80: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x21fd80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd84: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x21fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x21fd88: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x21fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x21fd8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21fd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21fd90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21fd94: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x21fd94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21fd98: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x21fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x21fd9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x21fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x21fda0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x21fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x21fda4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x21fda8: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x21fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x21fdac: 0xa224186a  sb          $a0, 0x186A($s1)
    ctx->pc = 0x21fdacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 4));
    // 0x21fdb0: 0x2463fdfc  addiu       $v1, $v1, -0x204
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966780));
    // 0x21fdb4: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x21fdb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
    // 0x21fdb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21FDB8u;
    {
        const bool branch_taken_0x21fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB8u;
        // 0x21fdbc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdb8) {
            ctx->pc = 0x21FE5Cu;
            goto label_21fe5c;
        }
    }
    ctx->pc = 0x21FDC0u;
    // 0x21fdc0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x21fdc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fdc8: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x21fdcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fdd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fdd4: 0x800008  jr          $a0
    ctx->pc = 0x21FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FDDCu: goto label_21fddc;
            case 0x21FDF0u: goto label_21fdf0;
            case 0x21FE18u: goto label_21fe18;
            case 0x21FE38u: goto label_21fe38;
            case 0x21FE5Cu: goto label_21fe5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FDD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21FDDCu;
label_21fddc:
    // 0x21fddc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21fddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fde0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x21FDE0u;
    {
        const bool branch_taken_0x21fde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fde0) {
            ctx->pc = 0x21FDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FDE0u;
            // 0x21fde4: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FDE8u;
    // 0x21fde8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21FDE8u;
    {
        const bool branch_taken_0x21fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE8u;
        // 0x21fdec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde8) {
            ctx->pc = 0x21FE58u;
            goto label_21fe58;
        }
    }
    ctx->pc = 0x21FDF0u;
label_21fdf0:
    // 0x21fdf0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21fdf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fdf4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x21FDF4u;
    {
        const bool branch_taken_0x21fdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fdf4) {
            ctx->pc = 0x21FDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FDF4u;
            // 0x21fdf8: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FDFCu;
    // 0x21fdfc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x21FDFCu;
    SET_GPR_U32(ctx, 31, 0x21FE04u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x21FDFCu, 0x21FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE04u;
label_21fe04:
    // 0x21fe04: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x21fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x21fe08: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21FE08u;
    {
        const bool branch_taken_0x21fe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE08u;
        // 0x21fe0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe08) {
            ctx->pc = 0x21FE5Cu;
            goto label_21fe5c;
        }
    }
    ctx->pc = 0x21FE10u;
    // 0x21fe10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21FE10u;
    {
        const bool branch_taken_0x21fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE10u;
        // 0x21fe14: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe10) {
            ctx->pc = 0x21FE5Cu;
            goto label_21fe5c;
        }
    }
    ctx->pc = 0x21FE18u;
label_21fe18:
    // 0x21fe18: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21fe18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fe1c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x21FE1Cu;
    {
        const bool branch_taken_0x21fe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe1c) {
            ctx->pc = 0x21FE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE1Cu;
            // 0x21fe20: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FE24u;
    // 0x21fe24: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x21fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x21fe28: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21FE28u;
    {
        const bool branch_taken_0x21fe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe28) {
            ctx->pc = 0x21FE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE28u;
            // 0x21fe2c: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FE30u;
    // 0x21fe30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21FE30u;
    {
        const bool branch_taken_0x21fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE30u;
        // 0x21fe34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe30) {
            ctx->pc = 0x21FE58u;
            goto label_21fe58;
        }
    }
    ctx->pc = 0x21FE38u;
label_21fe38:
    // 0x21fe38: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21fe38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fe3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FE3Cu;
    {
        const bool branch_taken_0x21fe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe3c) {
            ctx->pc = 0x21FE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE3Cu;
            // 0x21fe40: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FE44u;
    // 0x21fe44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x21FE44u;
    SET_GPR_U32(ctx, 31, 0x21FE4Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x21FE44u, 0x21FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE4Cu;
label_21fe4c:
    // 0x21fe4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21fe50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21FE50u;
    {
        const bool branch_taken_0x21fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE50u;
        // 0x21fe54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe50) {
            ctx->pc = 0x21FE5Cu;
            goto label_21fe5c;
        }
    }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21fe58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_21fe5c:
    // 0x21fe5c: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x21fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_21fe60:
    // 0x21fe60: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE60u;
    {
        const bool branch_taken_0x21fe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe60) {
            ctx->pc = 0x21FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE60u;
            // 0x21fe64: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE80u;
            goto label_21fe80;
        }
    }
    ctx->pc = 0x21FE68u;
    // 0x21fe68: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21fe68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fe6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x21FE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE6Cu;
            // 0x21fe70: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE80u;
            goto label_21fe80;
        }
    }
    ctx->pc = 0x21FE74u;
    // 0x21fe74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fe78: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x21fe7c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x21fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_21fe80:
    // 0x21fe80: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x21fe80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x21fe84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FE84u;
    {
        const bool branch_taken_0x21fe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE84u;
        // 0x21fe88: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe84) {
            ctx->pc = 0x21FEA8u;
            goto label_21fea8;
        }
    }
    ctx->pc = 0x21FE8Cu;
    // 0x21fe8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE8Cu;
    {
        const bool branch_taken_0x21fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe8c) {
            ctx->pc = 0x21FE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE8Cu;
            // 0x21fe90: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FEACu;
            goto label_21feac;
        }
    }
    ctx->pc = 0x21FE94u;
    // 0x21fe94: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x21fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x21fe98: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x21fe9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fea0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fea4: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x21fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
label_21fea8:
    // 0x21fea8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_21feac:
    // 0x21feac: 0x2402023b  addiu       $v0, $zero, 0x23B
    ctx->pc = 0x21feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    // 0x21feb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FEB0u;
    {
        const bool branch_taken_0x21feb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21feb0) {
            ctx->pc = 0x21FEC8u;
            goto label_21fec8;
        }
    }
    ctx->pc = 0x21FEB8u;
    // 0x21feb8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x21febc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21febcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fec0: 0x0  nop
    ctx->pc = 0x21fec0u;
    // NOP
    // 0x21fec4: 0xe62016e4  swc1        $f0, 0x16E4($s1)
    ctx->pc = 0x21fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5860), bits); }
label_21fec8:
    // 0x21fec8: 0xc098a84  jal         func_262A10
    ctx->pc = 0x21FEC8u;
    SET_GPR_U32(ctx, 31, 0x21FED0u);
    ctx->pc = 0x21FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEC8u;
    // 0x21fecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x21FEC8u, 0x21FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED0u;
label_21fed0:
    // 0x21fed0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x21fed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21fed4: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x21fed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x21fed8: 0x10400d09  beqz        $v0, . + 4 + (0xD09 << 2)
    ctx->pc = 0x21FED8u;
    {
        const bool branch_taken_0x21fed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED8u;
        // 0x21fedc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fed8) {
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x21FEE0u;
    // 0x21fee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fee4: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x21fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
    // 0x21fee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21feec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21feecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fef0: 0x800008  jr          $a0
    ctx->pc = 0x21FEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FEF8u: goto label_21fef8;
            case 0x221758u: goto label_221758;
            case 0x221850u: goto label_221850;
            case 0x221F38u: goto label_221f38;
            case 0x222038u: goto label_222038;
            case 0x222580u: goto label_222580;
            case 0x222738u: goto label_222738;
            case 0x222BA4u: goto label_222ba4;
            case 0x222C94u: goto label_222c94;
            case 0x222E00u: goto label_222e00;
            case 0x222F18u: goto label_222f18;
            case 0x223080u: goto label_223080;
            case 0x22318Cu: goto label_22318c;
            case 0x223270u: goto label_223270;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FEF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21FEF8u;
label_21fef8:
    // 0x21fef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fefc: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x21fefcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ff00: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x21ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x21ff04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff08: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21FF08u;
    SET_GPR_U32(ctx, 31, 0x21FF10u);
    ctx->pc = 0x21FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF08u;
    // 0x21ff0c: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21FF08u, 0x21FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF10u;
label_21ff10:
    // 0x21ff10: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x21ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x21ff14: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x21ff14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21ff18: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x21ff1c: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x21ff1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x21ff20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FF20u;
    {
        const bool branch_taken_0x21ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF20u;
        // 0x21ff24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff20) {
            ctx->pc = 0x21FF40u;
            goto label_21ff40;
        }
    }
    ctx->pc = 0x21FF28u;
    // 0x21ff28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ff2c: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x21ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
    // 0x21ff30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ff34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ff38: 0x800008  jr          $a0
    ctx->pc = 0x21FF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FF40u: goto label_21ff40;
            case 0x21FFB0u: goto label_21ffb0;
            case 0x21FFFCu: goto label_21fffc;
            case 0x220050u: goto label_220050;
            case 0x2200C0u: goto label_2200c0;
            case 0x220130u: goto label_220130;
            case 0x2201A0u: goto label_2201a0;
            case 0x220388u: goto label_220388;
            case 0x220408u: goto label_220408;
            case 0x220478u: goto label_220478;
            case 0x2204E8u: goto label_2204e8;
            case 0x2205D4u: goto label_2205d4;
            case 0x220644u: goto label_220644;
            case 0x2206D8u: goto label_2206d8;
            case 0x220BE4u: goto label_220be4;
            case 0x220DCCu: goto label_220dcc;
            case 0x220E0Cu: goto label_220e0c;
            case 0x220E88u: goto label_220e88;
            case 0x220F1Cu: goto label_220f1c;
            case 0x220F8Cu: goto label_220f8c;
            case 0x22100Cu: goto label_22100c;
            case 0x221078u: goto label_221078;
            case 0x22116Cu: goto label_22116c;
            case 0x221278u: goto label_221278;
            case 0x221330u: goto label_221330;
            case 0x2213B4u: goto label_2213b4;
            case 0x221480u: goto label_221480;
            case 0x221620u: goto label_221620;
            case 0x221684u: goto label_221684;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21FF40u;
label_21ff40:
    // 0x21ff40: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21ff44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x21ff48: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x21ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x21ff4c: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x21ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x21ff50: 0x8c45013c  lw          $a1, 0x13C($v0)
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x21ff54: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x21ff54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ff58: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x21FF58u;
    SET_GPR_U32(ctx, 31, 0x21FF60u);
    ctx->pc = 0x21FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF58u;
    // 0x21ff5c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x21FF58u, 0x21FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF60u;
label_21ff60:
    // 0x21ff60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ff64: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF64u;
    {
        const bool branch_taken_0x21ff64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF64u;
        // 0x21ff68: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff64) {
            ctx->pc = 0x21FF7Cu;
            goto label_21ff7c;
        }
    }
    ctx->pc = 0x21FF6Cu;
    // 0x21ff6c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x21ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21ff70: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x21ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x21ff74: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x21ff74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ff78: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x21ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_21ff7c:
    // 0x21ff7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ff84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff88: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x21ff8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21ff8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ff90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ff90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff94: 0xc098278  jal         func_2609E0
    ctx->pc = 0x21FF94u;
    SET_GPR_U32(ctx, 31, 0x21FF9Cu);
    ctx->pc = 0x21FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF94u;
    // 0x21ff98: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x21FF94u, 0x21FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF9Cu;
label_21ff9c:
    // 0x21ff9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffa0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ffa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ffa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffa8: 0x10000413  b           . + 4 + (0x413 << 2)
    ctx->pc = 0x21FFA8u;
    {
        const bool branch_taken_0x21ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa8) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x21FFB0u;
label_21ffb0:
    // 0x21ffb0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21ffb4: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x21ffb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21ffb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ffc0: 0x8c48013c  lw          $t0, 0x13C($v0)
    ctx->pc = 0x21ffc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x21ffc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ffc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffc8: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x21ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x21ffcc: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x21ffccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x21ffd0: 0xae2905f0  sw          $t1, 0x5F0($s1)
    ctx->pc = 0x21ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 9));
    // 0x21ffd4: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x21ffd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21ffd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ffdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ffdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffe0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x21FFE0u;
    SET_GPR_U32(ctx, 31, 0x21FFE8u);
    ctx->pc = 0x21FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFE0u;
    // 0x21ffe4: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x21FFE0u, 0x21FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE8u;
label_21ffe8:
    // 0x21ffe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fff4: 0x10000400  b           . + 4 + (0x400 << 2)
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFF4u;
        // 0x21fff8: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x21FFFCu;
label_21fffc:
    // 0x21fffc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220000: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220004: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220008: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x220008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x22000c: 0x8c450178  lw          $a1, 0x178($v0)
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x220010: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220014: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220014u;
    SET_GPR_U32(ctx, 31, 0x22001Cu);
    ctx->pc = 0x220018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220014u;
    // 0x220018: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220014u, 0x22001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22001Cu;
label_22001c:
    // 0x22001c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220020: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220020u;
    {
        const bool branch_taken_0x220020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220020u;
        // 0x220024: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220020) {
            ctx->pc = 0x220038u;
            goto label_220038;
        }
    }
    ctx->pc = 0x220028u;
    // 0x220028: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22002c: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x220030: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220034: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x220034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_220038:
    // 0x220038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22003c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x22003cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x220040: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220048: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x220048u;
    {
        const bool branch_taken_0x220048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220048u;
        // 0x22004c: 0x2407003d  addiu       $a3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220048) {
            ctx->pc = 0x221670u;
            goto label_221670;
        }
    }
    ctx->pc = 0x220050u;
label_220050:
    // 0x220050: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220054: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220058: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22005c: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x22005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x220060: 0x8c450178  lw          $a1, 0x178($v0)
    ctx->pc = 0x220060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x220064: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220068: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220068u;
    SET_GPR_U32(ctx, 31, 0x220070u);
    ctx->pc = 0x22006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220068u;
    // 0x22006c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220068u, 0x220070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220070u;
label_220070:
    // 0x220070: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220074: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220074u;
    {
        const bool branch_taken_0x220074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220074u;
        // 0x220078: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220074) {
            ctx->pc = 0x22008Cu;
            goto label_22008c;
        }
    }
    ctx->pc = 0x22007Cu;
    // 0x22007c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220080: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x220084: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220088: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x220088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_22008c:
    // 0x22008c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220090: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220098: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x22009c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2200a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2200a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200a4: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A4u;
    // 0x2200a8: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2200A4u, 0x2200ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2200acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2200b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2200b8: 0x100003cf  b           . + 4 + (0x3CF << 2)
    ctx->pc = 0x2200B8u;
    {
        const bool branch_taken_0x2200b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200B8u;
        // 0x2200bc: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200b8) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2200C0u;
label_2200c0:
    // 0x2200c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2200c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2200c8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2200c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2200cc: 0x8c430168  lw          $v1, 0x168($v0)
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x2200d0: 0x8c45016c  lw          $a1, 0x16C($v0)
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x2200d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2200d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2200d8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2200D8u;
    SET_GPR_U32(ctx, 31, 0x2200E0u);
    ctx->pc = 0x2200DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200D8u;
    // 0x2200dc: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2200D8u, 0x2200E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200E0u;
label_2200e0:
    // 0x2200e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2200e4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2200E4u;
    {
        const bool branch_taken_0x2200e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2200E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200E4u;
        // 0x2200e8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200e4) {
            ctx->pc = 0x2200FCu;
            goto label_2200fc;
        }
    }
    ctx->pc = 0x2200ECu;
    // 0x2200ec: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2200f0: 0x8c620170  lw          $v0, 0x170($v1)
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x2200f4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2200f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2200f8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2200fc:
    // 0x2200fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2200fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220100: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220108: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x22010c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220114: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220114u;
    SET_GPR_U32(ctx, 31, 0x22011Cu);
    ctx->pc = 0x220118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220114u;
    // 0x220118: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220114u, 0x22011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22011Cu;
label_22011c:
    // 0x22011c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220120: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220124: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220128: 0x100003b3  b           . + 4 + (0x3B3 << 2)
    ctx->pc = 0x220128u;
    {
        const bool branch_taken_0x220128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220128u;
        // 0x22012c: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220128) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220134: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220138: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22013c: 0x8c4301ec  lw          $v1, 0x1EC($v0)
    ctx->pc = 0x22013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x220140: 0x8c4501f4  lw          $a1, 0x1F4($v0)
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x220144: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220148: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220148u;
    SET_GPR_U32(ctx, 31, 0x220150u);
    ctx->pc = 0x22014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220148u;
    // 0x22014c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220148u, 0x220150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220150u;
label_220150:
    // 0x220150: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220154: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220154u;
    {
        const bool branch_taken_0x220154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220154u;
        // 0x220158: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220154) {
            ctx->pc = 0x22016Cu;
            goto label_22016c;
        }
    }
    ctx->pc = 0x22015Cu;
    // 0x22015c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220160: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x220160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x220164: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220168: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_22016c:
    // 0x22016c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220170: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220174: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220178: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22017c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220184: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220184u;
    SET_GPR_U32(ctx, 31, 0x22018Cu);
    ctx->pc = 0x220188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220184u;
    // 0x220188: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220184u, 0x22018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22018Cu;
label_22018c:
    // 0x22018c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220190: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220194: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220198: 0x10000397  b           . + 4 + (0x397 << 2)
    ctx->pc = 0x220198u;
    {
        const bool branch_taken_0x220198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220198u;
        // 0x22019c: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220198) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2201A0u;
label_2201a0:
    // 0x2201a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2201A0u;
    SET_GPR_U32(ctx, 31, 0x2201A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2201A0u, 0x2201A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201A8u;
label_2201a8:
    // 0x2201a8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2201a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2201ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2201acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2201b0: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2201B0u;
    {
        const bool branch_taken_0x2201b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2201b0) {
            ctx->pc = 0x2201B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2201B0u;
            // 0x2201b4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220240u;
            goto label_220240;
        }
    }
    ctx->pc = 0x2201B8u;
    // 0x2201b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2201B8u;
    {
        const bool branch_taken_0x2201b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B8u;
        // 0x2201bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201b8) {
            ctx->pc = 0x2201D0u;
            goto label_2201d0;
        }
    }
    ctx->pc = 0x2201C0u;
    // 0x2201c0: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2201C0u;
    {
        const bool branch_taken_0x2201c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2201C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C0u;
        // 0x2201c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201c0) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x2201C8u;
    // 0x2201c8: 0x50620054  beql        $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2201C8u;
    {
        const bool branch_taken_0x2201c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2201c8) {
            ctx->pc = 0x2201CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2201C8u;
            // 0x2201cc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22031Cu;
            goto label_22031c;
        }
    }
    ctx->pc = 0x2201D0u;
label_2201d0:
    // 0x2201d0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2201d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2201d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2201d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2201d8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2201dc: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x2201dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2201e0: 0x8c45013c  lw          $a1, 0x13C($v0)
    ctx->pc = 0x2201e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x2201e4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2201e8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2201E8u;
    SET_GPR_U32(ctx, 31, 0x2201F0u);
    ctx->pc = 0x2201ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201E8u;
    // 0x2201ec: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2201E8u, 0x2201F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201F0u;
label_2201f0:
    // 0x2201f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2201f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2201f4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2201F4u;
    {
        const bool branch_taken_0x2201f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F4u;
        // 0x2201f8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f4) {
            ctx->pc = 0x22020Cu;
            goto label_22020c;
        }
    }
    ctx->pc = 0x2201FCu;
    // 0x2201fc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2201fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220200: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x220200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x220204: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220208: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22020c:
    // 0x22020c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220210: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220218: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x22021c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22021cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220224: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220224u;
    SET_GPR_U32(ctx, 31, 0x22022Cu);
    ctx->pc = 0x220228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220224u;
    // 0x220228: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220224u, 0x22022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22022Cu;
label_22022c:
    // 0x22022c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220230: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220238: 0x1000036f  b           . + 4 + (0x36F << 2)
    ctx->pc = 0x220238u;
    {
        const bool branch_taken_0x220238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220238u;
        // 0x22023c: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220238) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220240u;
label_220240:
    // 0x220240: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220244: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220248: 0x8c4306c4  lw          $v1, 0x6C4($v0)
    ctx->pc = 0x220248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1732)));
    // 0x22024c: 0x8c4506c8  lw          $a1, 0x6C8($v0)
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x220250: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220254: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220254u;
    SET_GPR_U32(ctx, 31, 0x22025Cu);
    ctx->pc = 0x220258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220254u;
    // 0x220258: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220254u, 0x22025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22025Cu;
label_22025c:
    // 0x22025c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220260: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220260u;
    {
        const bool branch_taken_0x220260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220260u;
        // 0x220264: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220260) {
            ctx->pc = 0x220278u;
            goto label_220278;
        }
    }
    ctx->pc = 0x220268u;
    // 0x220268: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22026c: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x22026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x220270: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220274: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220278:
    // 0x220278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22027c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220284: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220288: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22028c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22028cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220290: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220290u;
    SET_GPR_U32(ctx, 31, 0x220298u);
    ctx->pc = 0x220294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220290u;
    // 0x220294: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220290u, 0x220298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220298u;
label_220298:
    // 0x220298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22029c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2202a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202a4: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x2202A4u;
    {
        const bool branch_taken_0x2202a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A4u;
        // 0x2202a8: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a4) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2202ACu;
label_2202ac:
    // 0x2202ac: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2202acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2202b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2202b4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2202b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2202b8: 0x8c430168  lw          $v1, 0x168($v0)
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x2202bc: 0x8c45016c  lw          $a1, 0x16C($v0)
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x2202c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2202c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2202c4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2202C4u;
    SET_GPR_U32(ctx, 31, 0x2202CCu);
    ctx->pc = 0x2202C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202C4u;
    // 0x2202c8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2202C4u, 0x2202CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202CCu;
label_2202cc:
    // 0x2202cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2202ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2202d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2202D0u;
    {
        const bool branch_taken_0x2202d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202d0) {
            ctx->pc = 0x2202E8u;
            goto label_2202e8;
        }
    }
    ctx->pc = 0x2202D8u;
    // 0x2202d8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2202d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2202dc: 0x8c620170  lw          $v0, 0x170($v1)
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x2202e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2202e4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2202e8:
    // 0x2202e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2202e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2202ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2202f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2202f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202f4: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2202f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2202f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2202fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2202fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220300: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220300u;
    SET_GPR_U32(ctx, 31, 0x220308u);
    ctx->pc = 0x220304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220300u;
    // 0x220304: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220300u, 0x220308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220308u;
label_220308:
    // 0x220308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22030c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220310: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220314: 0x10000338  b           . + 4 + (0x338 << 2)
    ctx->pc = 0x220314u;
    {
        const bool branch_taken_0x220314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220314u;
        // 0x220318: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220314) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x22031Cu;
label_22031c:
    // 0x22031c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220320: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220324: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x220324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x220328: 0x8c450704  lw          $a1, 0x704($v0)
    ctx->pc = 0x220328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1796)));
    // 0x22032c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22032cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220330: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220330u;
    SET_GPR_U32(ctx, 31, 0x220338u);
    ctx->pc = 0x220334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220330u;
    // 0x220334: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220330u, 0x220338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220338u;
label_220338:
    // 0x220338: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22033c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22033Cu;
    {
        const bool branch_taken_0x22033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22033c) {
            ctx->pc = 0x220354u;
            goto label_220354;
        }
    }
    ctx->pc = 0x220344u;
    // 0x220344: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220348: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x220348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x22034c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22034cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220350: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x220350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_220354:
    // 0x220354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220358: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22035c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22035cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220360: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220364: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220368: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22036c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22036Cu;
    SET_GPR_U32(ctx, 31, 0x220374u);
    ctx->pc = 0x220370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22036Cu;
    // 0x220370: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22036Cu, 0x220374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220374u;
label_220374:
    // 0x220374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220378: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22037c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220380: 0x1000031d  b           . + 4 + (0x31D << 2)
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220388u;
label_220388:
    // 0x220388: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22038c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22038cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220390: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220394: 0x8c431b24  lw          $v1, 0x1B24($v0)
    ctx->pc = 0x220394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x220398: 0x8c451b28  lw          $a1, 0x1B28($v0)
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x22039c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22039cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2203a0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2203A0u;
    SET_GPR_U32(ctx, 31, 0x2203A8u);
    ctx->pc = 0x2203A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A0u;
    // 0x2203a4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2203A0u, 0x2203A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203A8u;
label_2203a8:
    // 0x2203a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2203a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2203ac: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2203ACu;
    {
        const bool branch_taken_0x2203ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2203B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203ACu;
        // 0x2203b0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203ac) {
            ctx->pc = 0x2203C4u;
            goto label_2203c4;
        }
    }
    ctx->pc = 0x2203B4u;
    // 0x2203b4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2203b8: 0x8c621b2c  lw          $v0, 0x1B2C($v1)
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6956)));
    // 0x2203bc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2203bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2203c0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2203c4:
    // 0x2203c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2203c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2203cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2203ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d0: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2203d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2203d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2203d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2203d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203dc: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2203DCu;
    SET_GPR_U32(ctx, 31, 0x2203E4u);
    ctx->pc = 0x2203E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203DCu;
    // 0x2203e0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2203DCu, 0x2203E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203E4u;
label_2203e4:
    // 0x2203e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2203e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2203e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2203ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2203ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203f0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2203f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2203f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203f8: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x2203F8u;
    SET_GPR_U32(ctx, 31, 0x220400u);
    ctx->pc = 0x2203FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203F8u;
    // 0x2203fc: 0x240900f6  addiu       $t1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x2203F8u, 0x220400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220400u;
label_220400:
    // 0x220400: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x220400u;
    {
        const bool branch_taken_0x220400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220400u;
        // 0x220404: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220400) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x220408u;
label_220408:
    // 0x220408: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22040c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220410: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220414: 0x8c4306c4  lw          $v1, 0x6C4($v0)
    ctx->pc = 0x220414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1732)));
    // 0x220418: 0x8c4506c8  lw          $a1, 0x6C8($v0)
    ctx->pc = 0x220418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x22041c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22041cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220420: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220420u;
    SET_GPR_U32(ctx, 31, 0x220428u);
    ctx->pc = 0x220424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220420u;
    // 0x220424: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220420u, 0x220428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220428u;
label_220428:
    // 0x220428: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22042c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22042Cu;
    {
        const bool branch_taken_0x22042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22042Cu;
        // 0x220430: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22042c) {
            ctx->pc = 0x220444u;
            goto label_220444;
        }
    }
    ctx->pc = 0x220434u;
    // 0x220434: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220438: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x22043c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220440: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220444:
    // 0x220444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220448: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22044c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22044cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220450: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220454: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22045c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22045Cu;
    SET_GPR_U32(ctx, 31, 0x220464u);
    ctx->pc = 0x220460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22045Cu;
    // 0x220460: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22045Cu, 0x220464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220464u;
label_220464:
    // 0x220464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220468: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22046c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22046cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220470: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220478u;
label_220478:
    // 0x220478: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22047c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22047cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220480: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220484: 0x8c4306c4  lw          $v1, 0x6C4($v0)
    ctx->pc = 0x220484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1732)));
    // 0x220488: 0x8c4506c8  lw          $a1, 0x6C8($v0)
    ctx->pc = 0x220488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x22048c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22048cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220490: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220490u;
    SET_GPR_U32(ctx, 31, 0x220498u);
    ctx->pc = 0x220494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220490u;
    // 0x220494: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220490u, 0x220498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220498u;
label_220498:
    // 0x220498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22049c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22049Cu;
    {
        const bool branch_taken_0x22049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2204A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22049Cu;
        // 0x2204a0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22049c) {
            ctx->pc = 0x2204B4u;
            goto label_2204b4;
        }
    }
    ctx->pc = 0x2204A4u;
    // 0x2204a4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2204a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2204a8: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x2204a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x2204ac: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2204b0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2204b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2204b4:
    // 0x2204b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2204b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2204b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2204bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2204bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204c0: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2204c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2204c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2204c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2204c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204cc: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2204CCu;
    SET_GPR_U32(ctx, 31, 0x2204D4u);
    ctx->pc = 0x2204D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204CCu;
    // 0x2204d0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2204CCu, 0x2204D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204D4u;
label_2204d4:
    // 0x2204d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2204d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2204dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2204dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204e0: 0x100002c5  b           . + 4 + (0x2C5 << 2)
    ctx->pc = 0x2204E0u;
    {
        const bool branch_taken_0x2204e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204E0u;
        // 0x2204e4: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204e0) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2204E8u;
label_2204e8:
    // 0x2204e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2204E8u;
    SET_GPR_U32(ctx, 31, 0x2204F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2204E8u, 0x2204F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204F0u;
label_2204f0:
    // 0x2204f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2204f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2204f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2204F4u;
    {
        const bool branch_taken_0x2204f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204F4u;
        // 0x2204f8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204f4) {
            ctx->pc = 0x220568u;
            goto label_220568;
        }
    }
    ctx->pc = 0x2204FCu;
    // 0x2204fc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220500: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220504: 0x8c4306c4  lw          $v1, 0x6C4($v0)
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1732)));
    // 0x220508: 0x8c4506c8  lw          $a1, 0x6C8($v0)
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x22050c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220510: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220510u;
    SET_GPR_U32(ctx, 31, 0x220518u);
    ctx->pc = 0x220514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220510u;
    // 0x220514: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220510u, 0x220518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220518u;
label_220518:
    // 0x220518: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22051c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22051Cu;
    {
        const bool branch_taken_0x22051c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22051Cu;
        // 0x220520: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22051c) {
            ctx->pc = 0x220534u;
            goto label_220534;
        }
    }
    ctx->pc = 0x220524u;
    // 0x220524: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220528: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x220528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x22052c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22052cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220530: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220534:
    // 0x220534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220538: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22053c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22053cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220540: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220544: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220548: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22054c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22054Cu;
    SET_GPR_U32(ctx, 31, 0x220554u);
    ctx->pc = 0x220550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22054Cu;
    // 0x220550: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22054Cu, 0x220554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220554u;
label_220554:
    // 0x220554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220558: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22055c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220560: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x220560u;
    {
        const bool branch_taken_0x220560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220560u;
        // 0x220564: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220560) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220568u;
label_220568:
    // 0x220568: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22056c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220570: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x220570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x220574: 0x8c450704  lw          $a1, 0x704($v0)
    ctx->pc = 0x220574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1796)));
    // 0x220578: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22057c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22057Cu;
    SET_GPR_U32(ctx, 31, 0x220584u);
    ctx->pc = 0x220580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22057Cu;
    // 0x220580: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22057Cu, 0x220584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220584u;
label_220584:
    // 0x220584: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220588: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220588u;
    {
        const bool branch_taken_0x220588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220588u;
        // 0x22058c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220588) {
            ctx->pc = 0x2205A0u;
            goto label_2205a0;
        }
    }
    ctx->pc = 0x220590u;
    // 0x220590: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220594: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x220598: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22059c: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x22059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_2205a0:
    // 0x2205a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2205a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2205a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2205a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2205a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205ac: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2205acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2205b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2205b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2205b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2205b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205b8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2205B8u;
    SET_GPR_U32(ctx, 31, 0x2205C0u);
    ctx->pc = 0x2205BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205B8u;
    // 0x2205bc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2205B8u, 0x2205C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205C0u;
label_2205c0:
    // 0x2205c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2205c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2205c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205cc: 0x1000028a  b           . + 4 + (0x28A << 2)
    ctx->pc = 0x2205CCu;
    {
        const bool branch_taken_0x2205cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2205D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205CCu;
        // 0x2205d0: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205cc) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2205D4u;
label_2205d4:
    // 0x2205d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2205d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2205dc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2205dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2205e0: 0x8c430724  lw          $v1, 0x724($v0)
    ctx->pc = 0x2205e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1828)));
    // 0x2205e4: 0x8c450728  lw          $a1, 0x728($v0)
    ctx->pc = 0x2205e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1832)));
    // 0x2205e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2205e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2205ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2205ECu;
    SET_GPR_U32(ctx, 31, 0x2205F4u);
    ctx->pc = 0x2205F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205ECu;
    // 0x2205f0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2205ECu, 0x2205F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205F4u;
label_2205f4:
    // 0x2205f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2205f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2205f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2205F8u;
    {
        const bool branch_taken_0x2205f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2205FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205F8u;
        // 0x2205fc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205f8) {
            ctx->pc = 0x220610u;
            goto label_220610;
        }
    }
    ctx->pc = 0x220600u;
    // 0x220600: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220604: 0x8c62072c  lw          $v0, 0x72C($v1)
    ctx->pc = 0x220604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1836)));
    // 0x220608: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22060c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220610:
    // 0x220610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220614: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22061c: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220620: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220628: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220628u;
    SET_GPR_U32(ctx, 31, 0x220630u);
    ctx->pc = 0x22062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220628u;
    // 0x22062c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220628u, 0x220630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220630u;
label_220630:
    // 0x220630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220634: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22063c: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x22063Cu;
    {
        const bool branch_taken_0x22063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22063Cu;
        // 0x220640: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22063c) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220644u;
label_220644:
    // 0x220644: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220648: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22064c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220650: 0x8c432f34  lw          $v1, 0x2F34($v0)
    ctx->pc = 0x220650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12084)));
    // 0x220654: 0x8c452f38  lw          $a1, 0x2F38($v0)
    ctx->pc = 0x220654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12088)));
    // 0x220658: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22065c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22065Cu;
    SET_GPR_U32(ctx, 31, 0x220664u);
    ctx->pc = 0x220660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22065Cu;
    // 0x220660: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22065Cu, 0x220664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220664u;
label_220664:
    // 0x220664: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220668: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x220668u;
    {
        const bool branch_taken_0x220668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x8e240708  lw          $a0, 0x708($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220668) {
            ctx->pc = 0x220690u;
            goto label_220690;
        }
    }
    ctx->pc = 0x220670u;
    // 0x220670: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220674: 0x8c622f3c  lw          $v0, 0x2F3C($v1)
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12092)));
    // 0x220678: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220678u;
    {
        const bool branch_taken_0x220678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220678u;
        // 0x22067c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220678) {
            ctx->pc = 0x2206A0u;
            goto label_2206a0;
        }
    }
    ctx->pc = 0x220680u;
    // 0x220680: 0xc0741d6  jal         func_1D0758
    ctx->pc = 0x220680u;
    SET_GPR_U32(ctx, 31, 0x220688u);
    ctx->pc = 0x220684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220680u;
    // 0x220684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0758u, 0x220680u, 0x220688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220688u;
label_220688:
    // 0x220688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x220688u;
    {
        const bool branch_taken_0x220688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220688u;
        // 0x22068c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220688) {
            ctx->pc = 0x2206A4u;
            goto label_2206a4;
        }
    }
    ctx->pc = 0x220690u;
label_220690:
    // 0x220690: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220690u;
    {
        const bool branch_taken_0x220690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220690u;
        // 0x220694: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220690) {
            ctx->pc = 0x2206A4u;
            goto label_2206a4;
        }
    }
    ctx->pc = 0x220698u;
    // 0x220698: 0xc0741d6  jal         func_1D0758
    ctx->pc = 0x220698u;
    SET_GPR_U32(ctx, 31, 0x2206A0u);
    ctx->pc = 0x22069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220698u;
    // 0x22069c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0758u, 0x220698u, 0x2206A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206A0u;
label_2206a0:
    // 0x2206a0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2206a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2206a4:
    // 0x2206a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2206a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2206a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2206ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2206acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206b0: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2206b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2206b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2206b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2206b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2206b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206bc: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2206BCu;
    SET_GPR_U32(ctx, 31, 0x2206C4u);
    ctx->pc = 0x2206C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206BCu;
    // 0x2206c0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2206BCu, 0x2206C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206C4u;
label_2206c4:
    // 0x2206c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2206c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2206c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2206cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2206ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206d0: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x2206D0u;
    {
        const bool branch_taken_0x2206d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D0u;
        // 0x2206d4: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206d0) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2206D8u;
label_2206d8:
    // 0x2206d8: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x2206d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x2206dc: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2206DCu;
    {
        const bool branch_taken_0x2206dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206DCu;
        // 0x2206e0: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206dc) {
            ctx->pc = 0x2207CCu;
            goto label_2207cc;
        }
    }
    ctx->pc = 0x2206E4u;
    // 0x2206e4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2206e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2206e8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2206e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2206ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2206ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2206f0: 0x0  nop
    ctx->pc = 0x2206f0u;
    // NOP
    // 0x2206f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2206f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2206f8: 0x0  nop
    ctx->pc = 0x2206f8u;
    // NOP
    // 0x2206fc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2206FCu;
    {
        const bool branch_taken_0x2206fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x220700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206FCu;
        // 0x220700: 0x2402021c  addiu       $v0, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206fc) {
            ctx->pc = 0x220724u;
            goto label_220724;
        }
    }
    ctx->pc = 0x220704u;
    // 0x220704: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x220708: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x220708u;
    {
        const bool branch_taken_0x220708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220708) {
            ctx->pc = 0x22070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220708u;
            // 0x22070c: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2207D0u;
            goto label_2207d0;
        }
    }
    ctx->pc = 0x220710u;
    // 0x220710: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220710u;
    SET_GPR_U32(ctx, 31, 0x220718u);
    ctx->pc = 0x220714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220710u;
    // 0x220714: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220710u, 0x220718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220718u;
label_220718:
    // 0x220718: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x220718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22071c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x22071Cu;
    {
        const bool branch_taken_0x22071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22071c) {
            ctx->pc = 0x220720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22071Cu;
            // 0x220720: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2207D0u;
            goto label_2207d0;
        }
    }
    ctx->pc = 0x220724u;
label_220724:
    // 0x220724: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220724u;
    SET_GPR_U32(ctx, 31, 0x22072Cu);
    ctx->pc = 0x220728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220724u;
    // 0x220728: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220724u, 0x22072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22072Cu;
label_22072c:
    // 0x22072c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220730: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220730u;
    {
        const bool branch_taken_0x220730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220730u;
        // 0x220734: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220730) {
            ctx->pc = 0x220748u;
            goto label_220748;
        }
    }
    ctx->pc = 0x220738u;
    // 0x220738: 0xc074142  jal         func_1D0508
    ctx->pc = 0x220738u;
    SET_GPR_U32(ctx, 31, 0x220740u);
    ctx->pc = 0x22073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220738u;
    // 0x22073c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0508u, 0x220738u, 0x220740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220740u;
label_220740:
    // 0x220740: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x220740u;
    {
        const bool branch_taken_0x220740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220740u;
        // 0x220744: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220740) {
            ctx->pc = 0x220754u;
            goto label_220754;
        }
    }
    ctx->pc = 0x220748u;
label_220748:
    // 0x220748: 0xc074142  jal         func_1D0508
    ctx->pc = 0x220748u;
    SET_GPR_U32(ctx, 31, 0x220750u);
    ctx->pc = 0x22074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220748u;
    // 0x22074c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0508u, 0x220748u, 0x220750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220750u;
label_220750:
    // 0x220750: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_220754:
    // 0x220754: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220758: 0x8c43117c  lw          $v1, 0x117C($v0)
    ctx->pc = 0x220758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4476)));
    // 0x22075c: 0x8c451180  lw          $a1, 0x1180($v0)
    ctx->pc = 0x22075cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x220760: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220764: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220764u;
    SET_GPR_U32(ctx, 31, 0x22076Cu);
    ctx->pc = 0x220768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220764u;
    // 0x220768: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220764u, 0x22076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22076Cu;
label_22076c:
    // 0x22076c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220770: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220770u;
    {
        const bool branch_taken_0x220770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220770) {
            ctx->pc = 0x220788u;
            goto label_220788;
        }
    }
    ctx->pc = 0x220778u;
    // 0x220778: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22077c: 0x8c621184  lw          $v0, 0x1184($v1)
    ctx->pc = 0x22077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x220780: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220784: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220788:
    // 0x220788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22078c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220790: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x220790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x220794: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22079c: 0x240900f5  addiu       $t1, $zero, 0xF5
    ctx->pc = 0x22079cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x2207a0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2207A0u;
    SET_GPR_U32(ctx, 31, 0x2207A8u);
    ctx->pc = 0x2207A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207A0u;
    // 0x2207a4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2207A0u, 0x2207A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207A8u;
label_2207a8:
    // 0x2207a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2207a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2207acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2207b0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2207b4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2207b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2207b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2207b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207bc: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x2207BCu;
    SET_GPR_U32(ctx, 31, 0x2207C4u);
    ctx->pc = 0x2207C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207BCu;
    // 0x2207c0: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x2207BCu, 0x2207C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207C4u;
label_2207c4:
    // 0x2207c4: 0x100003ce  b           . + 4 + (0x3CE << 2)
    ctx->pc = 0x2207C4u;
    {
        const bool branch_taken_0x2207c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C4u;
        // 0x2207c8: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207c4) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x2207CCu;
label_2207cc:
    // 0x2207cc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2207ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2207d0:
    // 0x2207d0: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x2207d4: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x2207d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2207d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2207D8u;
    {
        const bool branch_taken_0x2207d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207D8u;
        // 0x2207dc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207d8) {
            ctx->pc = 0x2207F8u;
            goto label_2207f8;
        }
    }
    ctx->pc = 0x2207E0u;
    // 0x2207e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2207e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2207e4: 0x24427b80  addiu       $v0, $v0, 0x7B80
    ctx->pc = 0x2207e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31616));
    // 0x2207e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2207e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2207ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2207ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2207f0: 0x800008  jr          $a0
    ctx->pc = 0x2207F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2207F8u: goto label_2207f8;
            case 0x220864u: goto label_220864;
            case 0x220944u: goto label_220944;
            case 0x2209B0u: goto label_2209b0;
            case 0x220A1Cu: goto label_220a1c;
            case 0x220A88u: goto label_220a88;
            case 0x220AF4u: goto label_220af4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2207F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2207F8u;
label_2207f8:
    // 0x2207f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2207f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2207fc: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x2207fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220800: 0x8c431140  lw          $v1, 0x1140($v0)
    ctx->pc = 0x220800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4416)));
    // 0x220804: 0x8c451144  lw          $a1, 0x1144($v0)
    ctx->pc = 0x220804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4420)));
    // 0x220808: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22080c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22080Cu;
    SET_GPR_U32(ctx, 31, 0x220814u);
    ctx->pc = 0x220810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22080Cu;
    // 0x220810: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22080Cu, 0x220814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220814u;
label_220814:
    // 0x220814: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220818: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220818u;
    {
        const bool branch_taken_0x220818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220818) {
            ctx->pc = 0x220830u;
            goto label_220830;
        }
    }
    ctx->pc = 0x220820u;
    // 0x220820: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220824: 0x8c621148  lw          $v0, 0x1148($v1)
    ctx->pc = 0x220824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4424)));
    // 0x220828: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22082c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220830:
    // 0x220830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220834: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22083c: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22083cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220840: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220848: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220848u;
    SET_GPR_U32(ctx, 31, 0x220850u);
    ctx->pc = 0x22084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220848u;
    // 0x22084c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220848u, 0x220850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220850u;
label_220850:
    // 0x220850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220854: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22085c: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x22085Cu;
    {
        const bool branch_taken_0x22085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22085Cu;
        // 0x220860: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22085c) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220864u;
label_220864:
    // 0x220864: 0x9222186b  lbu         $v0, 0x186B($s1)
    ctx->pc = 0x220864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6251)));
    // 0x220868: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x220868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22086c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22086Cu;
    {
        const bool branch_taken_0x22086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22086Cu;
        // 0x220870: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22086c) {
            ctx->pc = 0x2208DCu;
            goto label_2208dc;
        }
    }
    ctx->pc = 0x220874u;
    // 0x220874: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220878: 0x8c4311b8  lw          $v1, 0x11B8($v0)
    ctx->pc = 0x220878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x22087c: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x22087cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4540)));
    // 0x220880: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220884: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220884u;
    SET_GPR_U32(ctx, 31, 0x22088Cu);
    ctx->pc = 0x220888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220884u;
    // 0x220888: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220884u, 0x22088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22088Cu;
label_22088c:
    // 0x22088c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220890: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220890u;
    {
        const bool branch_taken_0x220890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220890u;
        // 0x220894: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220890) {
            ctx->pc = 0x2208A8u;
            goto label_2208a8;
        }
    }
    ctx->pc = 0x220898u;
    // 0x220898: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22089c: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x22089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x2208a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2208a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2208a4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2208a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2208a8:
    // 0x2208a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2208a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2208acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2208b0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2208b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2208b4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2208b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2208b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2208bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2208bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2208C0u;
    SET_GPR_U32(ctx, 31, 0x2208C8u);
    ctx->pc = 0x2208C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208C0u;
    // 0x2208c4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2208C0u, 0x2208C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208C8u;
label_2208c8:
    // 0x2208c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2208c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2208ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2208d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2208d4: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2208D4u;
    {
        const bool branch_taken_0x2208d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D4u;
        // 0x2208d8: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208d4) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2208DCu;
label_2208dc:
    // 0x2208dc: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x2208dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x2208e0: 0x8c431140  lw          $v1, 0x1140($v0)
    ctx->pc = 0x2208e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4416)));
    // 0x2208e4: 0x8c451144  lw          $a1, 0x1144($v0)
    ctx->pc = 0x2208e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4420)));
    // 0x2208e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2208e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2208ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2208ECu;
    SET_GPR_U32(ctx, 31, 0x2208F4u);
    ctx->pc = 0x2208F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208ECu;
    // 0x2208f0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2208ECu, 0x2208F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208F4u;
label_2208f4:
    // 0x2208f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2208f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2208F8u;
    {
        const bool branch_taken_0x2208f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F8u;
        // 0x2208fc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208f8) {
            ctx->pc = 0x220910u;
            goto label_220910;
        }
    }
    ctx->pc = 0x220900u;
    // 0x220900: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220904: 0x8c621148  lw          $v0, 0x1148($v1)
    ctx->pc = 0x220904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4424)));
    // 0x220908: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22090c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220910:
    // 0x220910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220914: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22091c: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220920: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220928: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220928u;
    SET_GPR_U32(ctx, 31, 0x220930u);
    ctx->pc = 0x22092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220928u;
    // 0x22092c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220928u, 0x220930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220930u;
label_220930:
    // 0x220930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220934: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22093c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x22093Cu;
    {
        const bool branch_taken_0x22093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22093Cu;
        // 0x220940: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22093c) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220944u;
label_220944:
    // 0x220944: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220948: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x22094c: 0x8c4311c4  lw          $v1, 0x11C4($v0)
    ctx->pc = 0x22094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4548)));
    // 0x220950: 0x8c4511c8  lw          $a1, 0x11C8($v0)
    ctx->pc = 0x220950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4552)));
    // 0x220954: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220958: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220958u;
    SET_GPR_U32(ctx, 31, 0x220960u);
    ctx->pc = 0x22095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220958u;
    // 0x22095c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220958u, 0x220960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220960u;
label_220960:
    // 0x220960: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220964: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220964u;
    {
        const bool branch_taken_0x220964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220964u;
        // 0x220968: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220964) {
            ctx->pc = 0x22097Cu;
            goto label_22097c;
        }
    }
    ctx->pc = 0x22096Cu;
    // 0x22096c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220970: 0x8c6211cc  lw          $v0, 0x11CC($v1)
    ctx->pc = 0x220970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4556)));
    // 0x220974: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220978: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x220978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_22097c:
    // 0x22097c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220980: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220984: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220988: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22098c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22098cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220994: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220994u;
    SET_GPR_U32(ctx, 31, 0x22099Cu);
    ctx->pc = 0x220998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220994u;
    // 0x220998: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220994u, 0x22099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22099Cu;
label_22099c:
    // 0x22099c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2209a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2209a4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2209a8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2209A8u;
    {
        const bool branch_taken_0x2209a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209A8u;
        // 0x2209ac: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209a8) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x2209B0u;
label_2209b0:
    // 0x2209b0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2209b4: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x2209b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x2209b8: 0x8c4311b8  lw          $v1, 0x11B8($v0)
    ctx->pc = 0x2209b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x2209bc: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4540)));
    // 0x2209c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2209c4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2209C4u;
    SET_GPR_U32(ctx, 31, 0x2209CCu);
    ctx->pc = 0x2209C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209C4u;
    // 0x2209c8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2209C4u, 0x2209CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209CCu;
label_2209cc:
    // 0x2209cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2209ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2209d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2209D0u;
    {
        const bool branch_taken_0x2209d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D0u;
        // 0x2209d4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209d0) {
            ctx->pc = 0x2209E8u;
            goto label_2209e8;
        }
    }
    ctx->pc = 0x2209D8u;
    // 0x2209d8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2209dc: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x2209e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2209e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2209e4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2209e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2209e8:
    // 0x2209e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2209e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2209ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2209f0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2209f4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2209f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2209f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2209fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2209fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a00: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220A00u;
    SET_GPR_U32(ctx, 31, 0x220A08u);
    ctx->pc = 0x220A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A00u;
    // 0x220a04: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220A00u, 0x220A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A08u;
label_220a08:
    // 0x220a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220a10: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220a14: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x220A14u;
    {
        const bool branch_taken_0x220a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A14u;
        // 0x220a18: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a14) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220A1Cu;
label_220a1c:
    // 0x220a1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220a20: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220a24: 0x8c4311c4  lw          $v1, 0x11C4($v0)
    ctx->pc = 0x220a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4548)));
    // 0x220a28: 0x8c4511c8  lw          $a1, 0x11C8($v0)
    ctx->pc = 0x220a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4552)));
    // 0x220a2c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220a30: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220A30u;
    SET_GPR_U32(ctx, 31, 0x220A38u);
    ctx->pc = 0x220A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A30u;
    // 0x220a34: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220A30u, 0x220A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A38u;
label_220a38:
    // 0x220a38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220a3c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A3Cu;
    {
        const bool branch_taken_0x220a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A3Cu;
        // 0x220a40: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a3c) {
            ctx->pc = 0x220A54u;
            goto label_220a54;
        }
    }
    ctx->pc = 0x220A44u;
    // 0x220a44: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220a48: 0x8c6211cc  lw          $v0, 0x11CC($v1)
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4556)));
    // 0x220a4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220a50: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x220a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_220a54:
    // 0x220a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a58: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220a5c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220a60: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220a64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220a68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a6c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220A6Cu;
    SET_GPR_U32(ctx, 31, 0x220A74u);
    ctx->pc = 0x220A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A6Cu;
    // 0x220a70: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220A6Cu, 0x220A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A74u;
label_220a74:
    // 0x220a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220a7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220a80: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A80u;
        // 0x220a84: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220A88u;
label_220a88:
    // 0x220a88: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220a8c: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220a90: 0x8c4311d0  lw          $v1, 0x11D0($v0)
    ctx->pc = 0x220a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x220a94: 0x8c4511d4  lw          $a1, 0x11D4($v0)
    ctx->pc = 0x220a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x220a98: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220a9c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220A9Cu;
    SET_GPR_U32(ctx, 31, 0x220AA4u);
    ctx->pc = 0x220AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A9Cu;
    // 0x220aa0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220A9Cu, 0x220AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AA4u;
label_220aa4:
    // 0x220aa4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220aa8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220AA8u;
    {
        const bool branch_taken_0x220aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AA8u;
        // 0x220aac: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220aa8) {
            ctx->pc = 0x220AC0u;
            goto label_220ac0;
        }
    }
    ctx->pc = 0x220AB0u;
    // 0x220ab0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220ab4: 0x8c6211d8  lw          $v0, 0x11D8($v1)
    ctx->pc = 0x220ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4568)));
    // 0x220ab8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220abc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_220ac0:
    // 0x220ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ac4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220ac8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220acc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220ad0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220ad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ad8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220AD8u;
    SET_GPR_U32(ctx, 31, 0x220AE0u);
    ctx->pc = 0x220ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220AD8u;
    // 0x220adc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220AD8u, 0x220AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AE0u;
label_220ae0:
    // 0x220ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ae4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220ae8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220aec: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x220AECu;
    {
        const bool branch_taken_0x220aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AECu;
        // 0x220af0: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220aec) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220AF4u;
label_220af4:
    // 0x220af4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x220AF4u;
    SET_GPR_U32(ctx, 31, 0x220AFCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x220AF4u, 0x220AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AFCu;
label_220afc:
    // 0x220afc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220b00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220B00u;
    {
        const bool branch_taken_0x220b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B00u;
        // 0x220b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b00) {
            ctx->pc = 0x220B10u;
            goto label_220b10;
        }
    }
    ctx->pc = 0x220B08u;
    // 0x220b08: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x220B08u;
    {
        const bool branch_taken_0x220b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220b08) {
            ctx->pc = 0x220B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B08u;
            // 0x220b0c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220B7Cu;
            goto label_220b7c;
        }
    }
    ctx->pc = 0x220B10u;
label_220b10:
    // 0x220b10: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220b14: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220b18: 0x8c4311b8  lw          $v1, 0x11B8($v0)
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x220b1c: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4540)));
    // 0x220b20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220b24: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220B24u;
    SET_GPR_U32(ctx, 31, 0x220B2Cu);
    ctx->pc = 0x220B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B24u;
    // 0x220b28: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220B24u, 0x220B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B2Cu;
label_220b2c:
    // 0x220b2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220b30: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220B30u;
    {
        const bool branch_taken_0x220b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B30u;
        // 0x220b34: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b30) {
            ctx->pc = 0x220B48u;
            goto label_220b48;
        }
    }
    ctx->pc = 0x220B38u;
    // 0x220b38: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220b3c: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x220b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x220b40: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220b44: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_220b48:
    // 0x220b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220b50: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220b54: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220b58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220b5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220b5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b60: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220B60u;
    SET_GPR_U32(ctx, 31, 0x220B68u);
    ctx->pc = 0x220B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B60u;
    // 0x220b64: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220B60u, 0x220B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B68u;
label_220b68:
    // 0x220b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b6c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220b70: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220b74: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x220B74u;
    {
        const bool branch_taken_0x220b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B74u;
        // 0x220b78: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b74) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220B7Cu;
label_220b7c:
    // 0x220b7c: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x220b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x220b80: 0x8c4311d0  lw          $v1, 0x11D0($v0)
    ctx->pc = 0x220b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x220b84: 0x8c4511d4  lw          $a1, 0x11D4($v0)
    ctx->pc = 0x220b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x220b88: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220b8c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220B8Cu;
    SET_GPR_U32(ctx, 31, 0x220B94u);
    ctx->pc = 0x220B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B8Cu;
    // 0x220b90: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220B8Cu, 0x220B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B94u;
label_220b94:
    // 0x220b94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220b98: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220B98u;
    {
        const bool branch_taken_0x220b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B98u;
        // 0x220b9c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b98) {
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220BA0u;
    // 0x220ba0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220ba4: 0x8c6211d8  lw          $v0, 0x11D8($v1)
    ctx->pc = 0x220ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4568)));
    // 0x220ba8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220bac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_220bb0:
    // 0x220bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220bb8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220bbc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220bc0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220bc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bc8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220BC8u;
    SET_GPR_U32(ctx, 31, 0x220BD0u);
    ctx->pc = 0x220BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BC8u;
    // 0x220bcc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220BC8u, 0x220BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BD0u;
label_220bd0:
    // 0x220bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220bd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220bdc: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x220BDCu;
    {
        const bool branch_taken_0x220bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BDCu;
        // 0x220be0: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bdc) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220BE4u;
label_220be4:
    // 0x220be4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x220BE4u;
    SET_GPR_U32(ctx, 31, 0x220BECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x220BE4u, 0x220BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BECu;
label_220bec:
    // 0x220bec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x220becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x220bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220bf4: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x220BF4u;
    {
        const bool branch_taken_0x220bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bf4) {
            ctx->pc = 0x220BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220BF4u;
            // 0x220bf8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220C84u;
            goto label_220c84;
        }
    }
    ctx->pc = 0x220BFCu;
    // 0x220bfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220BFCu;
    {
        const bool branch_taken_0x220bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BFCu;
        // 0x220c00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bfc) {
            ctx->pc = 0x220C14u;
            goto label_220c14;
        }
    }
    ctx->pc = 0x220C04u;
    // 0x220c04: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x220C04u;
    {
        const bool branch_taken_0x220c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c04) {
            ctx->pc = 0x220CF0u;
            goto label_220cf0;
        }
    }
    ctx->pc = 0x220C0Cu;
    // 0x220c0c: 0x50620054  beql        $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x220C0Cu;
    {
        const bool branch_taken_0x220c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220c0c) {
            ctx->pc = 0x220C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220C0Cu;
            // 0x220c10: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220D60u;
            goto label_220d60;
        }
    }
    ctx->pc = 0x220C14u;
label_220c14:
    // 0x220c14: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220c18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220c1c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220c20: 0x8c432540  lw          $v1, 0x2540($v0)
    ctx->pc = 0x220c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9536)));
    // 0x220c24: 0x8c452544  lw          $a1, 0x2544($v0)
    ctx->pc = 0x220c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9540)));
    // 0x220c28: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220c2c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220C2Cu;
    SET_GPR_U32(ctx, 31, 0x220C34u);
    ctx->pc = 0x220C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C2Cu;
    // 0x220c30: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220C2Cu, 0x220C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C34u;
label_220c34:
    // 0x220c34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220c38: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220C38u;
    {
        const bool branch_taken_0x220c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C38u;
        // 0x220c3c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c38) {
            ctx->pc = 0x220C50u;
            goto label_220c50;
        }
    }
    ctx->pc = 0x220C40u;
    // 0x220c40: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220c44: 0x8c622548  lw          $v0, 0x2548($v1)
    ctx->pc = 0x220c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9544)));
    // 0x220c48: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220c4c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220c50:
    // 0x220c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c5c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220c60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220c64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c68: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220C68u;
    SET_GPR_U32(ctx, 31, 0x220C70u);
    ctx->pc = 0x220C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C68u;
    // 0x220c6c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220C68u, 0x220C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C70u;
label_220c70:
    // 0x220c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c7c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x220C7Cu;
    {
        const bool branch_taken_0x220c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C7Cu;
        // 0x220c80: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c7c) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220C84u;
label_220c84:
    // 0x220c84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220c88: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220c8c: 0x8c4311c4  lw          $v1, 0x11C4($v0)
    ctx->pc = 0x220c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4548)));
    // 0x220c90: 0x8c4511c8  lw          $a1, 0x11C8($v0)
    ctx->pc = 0x220c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4552)));
    // 0x220c94: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220c98: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220C98u;
    SET_GPR_U32(ctx, 31, 0x220CA0u);
    ctx->pc = 0x220C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C98u;
    // 0x220c9c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220C98u, 0x220CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CA0u;
label_220ca0:
    // 0x220ca0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220ca4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220CA4u;
    {
        const bool branch_taken_0x220ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CA4u;
        // 0x220ca8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ca4) {
            ctx->pc = 0x220CBCu;
            goto label_220cbc;
        }
    }
    ctx->pc = 0x220CACu;
    // 0x220cac: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220cb0: 0x8c6211cc  lw          $v0, 0x11CC($v1)
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4556)));
    // 0x220cb4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220cb8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x220cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_220cbc:
    // 0x220cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cc0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220cc4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220cc8: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220ccc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220cd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cd4: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220CD4u;
    SET_GPR_U32(ctx, 31, 0x220CDCu);
    ctx->pc = 0x220CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CD4u;
    // 0x220cd8: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220CD4u, 0x220CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CDCu;
label_220cdc:
    // 0x220cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ce0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220ce4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220ce8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x220CE8u;
    {
        const bool branch_taken_0x220ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CE8u;
        // 0x220cec: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ce8) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220CF0u;
label_220cf0:
    // 0x220cf0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220cf4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220cf8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220cfc: 0x8c4311b8  lw          $v1, 0x11B8($v0)
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x220d00: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x220d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4540)));
    // 0x220d04: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220d08: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220D08u;
    SET_GPR_U32(ctx, 31, 0x220D10u);
    ctx->pc = 0x220D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D08u;
    // 0x220d0c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220D08u, 0x220D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D10u;
label_220d10:
    // 0x220d10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220d14: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220D14u;
    {
        const bool branch_taken_0x220d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D14u;
        // 0x220d18: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d14) {
            ctx->pc = 0x220D2Cu;
            goto label_220d2c;
        }
    }
    ctx->pc = 0x220D1Cu;
    // 0x220d1c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220d20: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x220d24: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d28: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_220d2c:
    // 0x220d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d30: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220d34: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220d38: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220d3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220d40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d44: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220D44u;
    SET_GPR_U32(ctx, 31, 0x220D4Cu);
    ctx->pc = 0x220D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D44u;
    // 0x220d48: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220D44u, 0x220D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D4Cu;
label_220d4c:
    // 0x220d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220d54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220d58: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x220D58u;
    {
        const bool branch_taken_0x220d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D58u;
        // 0x220d5c: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d58) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220D60u;
label_220d60:
    // 0x220d60: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220d64: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220d68: 0x8c4311d0  lw          $v1, 0x11D0($v0)
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x220d6c: 0x8c4511d4  lw          $a1, 0x11D4($v0)
    ctx->pc = 0x220d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x220d70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220d74: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220D74u;
    SET_GPR_U32(ctx, 31, 0x220D7Cu);
    ctx->pc = 0x220D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D74u;
    // 0x220d78: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220D74u, 0x220D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D7Cu;
label_220d7c:
    // 0x220d7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220d80: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220D80u;
    {
        const bool branch_taken_0x220d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D80u;
        // 0x220d84: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d80) {
            ctx->pc = 0x220D98u;
            goto label_220d98;
        }
    }
    ctx->pc = 0x220D88u;
    // 0x220d88: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220d8c: 0x8c6211d8  lw          $v0, 0x11D8($v1)
    ctx->pc = 0x220d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4568)));
    // 0x220d90: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d94: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_220d98:
    // 0x220d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220da0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220da4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220da8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220dac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220DB0u;
    SET_GPR_U32(ctx, 31, 0x220DB8u);
    ctx->pc = 0x220DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DB0u;
    // 0x220db4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220DB0u, 0x220DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DB8u;
label_220db8:
    // 0x220db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dbc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220dc0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220dc4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x220DC4u;
    {
        const bool branch_taken_0x220dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DC4u;
        // 0x220dc8: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dc4) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220dd0: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x220dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220ddc: 0x8c481f04  lw          $t0, 0x1F04($v0)
    ctx->pc = 0x220ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7940)));
    // 0x220de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220de4: 0x8c431f00  lw          $v1, 0x1F00($v0)
    ctx->pc = 0x220de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7936)));
    // 0x220de8: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220dec: 0xae2905f0  sw          $t1, 0x5F0($s1)
    ctx->pc = 0x220decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 9));
    // 0x220df0: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x220df4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220df8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dfc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x220DFCu;
    SET_GPR_U32(ctx, 31, 0x220E04u);
    ctx->pc = 0x220E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DFCu;
    // 0x220e00: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x220DFCu, 0x220E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E04u;
label_220e04:
    // 0x220e04: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x220E04u;
    {
        const bool branch_taken_0x220e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E04u;
        // 0x220e08: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e04) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x220E0Cu;
label_220e0c:
    // 0x220e0c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220e10: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220e14: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220e18: 0x8c4319bc  lw          $v1, 0x19BC($v0)
    ctx->pc = 0x220e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6588)));
    // 0x220e1c: 0x8c4519c4  lw          $a1, 0x19C4($v0)
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6596)));
    // 0x220e20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220e24: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220E24u;
    SET_GPR_U32(ctx, 31, 0x220E2Cu);
    ctx->pc = 0x220E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E24u;
    // 0x220e28: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220E24u, 0x220E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E2Cu;
label_220e2c:
    // 0x220e2c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x220e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x220e30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220E30u;
    {
        const bool branch_taken_0x220e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E30u;
        // 0x220e34: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e30) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E38u;
    // 0x220e38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x220E38u;
    SET_GPR_U32(ctx, 31, 0x220E40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x220E38u, 0x220E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E40u;
label_220e40:
    // 0x220e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x220e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220E44u;
    {
        const bool branch_taken_0x220e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E44u;
        // 0x220e48: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e44) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E4Cu;
    // 0x220e4c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220e50: 0x8c6219c0  lw          $v0, 0x19C0($v1)
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6592)));
    // 0x220e54: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220e58: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x220e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_220e5c:
    // 0x220e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e60: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x220e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x220e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e68: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220e6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220e70: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x220e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x220e74: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220E74u;
    SET_GPR_U32(ctx, 31, 0x220E7Cu);
    ctx->pc = 0x220E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E74u;
    // 0x220e78: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220E74u, 0x220E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E7Cu;
label_220e7c:
    // 0x220e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x220E80u;
    {
        const bool branch_taken_0x220e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E80u;
        // 0x220e84: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e80) {
            ctx->pc = 0x220F00u;
            goto label_220f00;
        }
    }
    ctx->pc = 0x220E88u;
label_220e88:
    // 0x220e88: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220e8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220e90: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220e94: 0x8c4319bc  lw          $v1, 0x19BC($v0)
    ctx->pc = 0x220e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6588)));
    // 0x220e98: 0x8c4519c0  lw          $a1, 0x19C0($v0)
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6592)));
    // 0x220e9c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220ea0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220EA0u;
    SET_GPR_U32(ctx, 31, 0x220EA8u);
    ctx->pc = 0x220EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EA0u;
    // 0x220ea4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220EA0u, 0x220EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EA8u;
label_220ea8:
    // 0x220ea8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x220ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x220eac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220EACu;
    {
        const bool branch_taken_0x220eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EACu;
        // 0x220eb0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220eac) {
            ctx->pc = 0x220ED8u;
            goto label_220ed8;
        }
    }
    ctx->pc = 0x220EB4u;
    // 0x220eb4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x220EB4u;
    SET_GPR_U32(ctx, 31, 0x220EBCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x220EB4u, 0x220EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EBCu;
label_220ebc:
    // 0x220ebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x220ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220EC0u;
    {
        const bool branch_taken_0x220ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EC0u;
        // 0x220ec4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ec0) {
            ctx->pc = 0x220ED8u;
            goto label_220ed8;
        }
    }
    ctx->pc = 0x220EC8u;
    // 0x220ec8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220ecc: 0x8c6219c4  lw          $v0, 0x19C4($v1)
    ctx->pc = 0x220eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6596)));
    // 0x220ed0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220ed4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_220ed8:
    // 0x220ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220edc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x220edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x220ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ee4: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220ee8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220eec: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x220eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x220ef0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220EF0u;
    SET_GPR_U32(ctx, 31, 0x220EF8u);
    ctx->pc = 0x220EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EF0u;
    // 0x220ef4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220EF0u, 0x220EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EF8u;
label_220ef8:
    // 0x220ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220efc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x220efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_220f00:
    // 0x220f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f04: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x220f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x220f08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220f0c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x220F0Cu;
    SET_GPR_U32(ctx, 31, 0x220F14u);
    ctx->pc = 0x220F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F0Cu;
    // 0x220f10: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x220F0Cu, 0x220F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F14u;
label_220f14:
    // 0x220f14: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x220F14u;
    {
        const bool branch_taken_0x220f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F14u;
        // 0x220f18: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f14) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x220F1Cu;
label_220f1c:
    // 0x220f1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220f20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220f24: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220f28: 0x8c4315e4  lw          $v1, 0x15E4($v0)
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5604)));
    // 0x220f2c: 0x8c4515e8  lw          $a1, 0x15E8($v0)
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x220f30: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220f34: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220F34u;
    SET_GPR_U32(ctx, 31, 0x220F3Cu);
    ctx->pc = 0x220F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F34u;
    // 0x220f38: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220F34u, 0x220F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F3Cu;
label_220f3c:
    // 0x220f3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220f40: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F40u;
    {
        const bool branch_taken_0x220f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F40u;
        // 0x220f44: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f40) {
            ctx->pc = 0x220F58u;
            goto label_220f58;
        }
    }
    ctx->pc = 0x220F48u;
    // 0x220f48: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220f4c: 0x8c6215ec  lw          $v0, 0x15EC($v1)
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x220f50: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220f54: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220f58:
    // 0x220f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220f60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f64: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x220f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x220f68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220f6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220f6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f70: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220F70u;
    SET_GPR_U32(ctx, 31, 0x220F78u);
    ctx->pc = 0x220F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F70u;
    // 0x220f74: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220F70u, 0x220F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F78u;
label_220f78:
    // 0x220f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f7c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x220F84u;
    {
        const bool branch_taken_0x220f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F84u;
        // 0x220f88: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f84) {
            ctx->pc = 0x220FF8u;
            goto label_220ff8;
        }
    }
    ctx->pc = 0x220F8Cu;
label_220f8c:
    // 0x220f8c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x220f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220f90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x220f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x220f94: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x220f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x220f98: 0x8c433a64  lw          $v1, 0x3A64($v0)
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14948)));
    // 0x220f9c: 0x8c453a68  lw          $a1, 0x3A68($v0)
    ctx->pc = 0x220f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14952)));
    // 0x220fa0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220fa4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x220FA4u;
    SET_GPR_U32(ctx, 31, 0x220FACu);
    ctx->pc = 0x220FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FA4u;
    // 0x220fa8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x220FA4u, 0x220FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FACu;
label_220fac:
    // 0x220fac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220fb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220FB0u;
    {
        const bool branch_taken_0x220fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB0u;
        // 0x220fb4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fb0) {
            ctx->pc = 0x220FC8u;
            goto label_220fc8;
        }
    }
    ctx->pc = 0x220FB8u;
    // 0x220fb8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x220fbc: 0x8c623a6c  lw          $v0, 0x3A6C($v1)
    ctx->pc = 0x220fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14956)));
    // 0x220fc0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220fc4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x220fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_220fc8:
    // 0x220fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x220fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220fd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fd4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x220fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x220fd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220fdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fe0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x220FE0u;
    SET_GPR_U32(ctx, 31, 0x220FE8u);
    ctx->pc = 0x220FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FE0u;
    // 0x220fe4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x220FE0u, 0x220FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FE8u;
label_220fe8:
    // 0x220fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220ff0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x220ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x220ff4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_220ff8:
    // 0x220ff8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220ffc: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x220FFCu;
    SET_GPR_U32(ctx, 31, 0x221004u);
    ctx->pc = 0x221000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FFCu;
    // 0x221000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x220FFCu, 0x221004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221004u;
label_221004:
    // 0x221004: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x221004u;
    {
        const bool branch_taken_0x221004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221004u;
        // 0x221008: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221004) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x22100Cu;
label_22100c:
    // 0x22100c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221010: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221014: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221018: 0x8c4315e4  lw          $v1, 0x15E4($v0)
    ctx->pc = 0x221018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5604)));
    // 0x22101c: 0x8c4515e8  lw          $a1, 0x15E8($v0)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x221020: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221024: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221024u;
    SET_GPR_U32(ctx, 31, 0x22102Cu);
    ctx->pc = 0x221028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221024u;
    // 0x221028: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221024u, 0x22102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22102Cu;
label_22102c:
    // 0x22102c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221030: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221030u;
    {
        const bool branch_taken_0x221030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221030u;
        // 0x221034: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221030) {
            ctx->pc = 0x221048u;
            goto label_221048;
        }
    }
    ctx->pc = 0x221038u;
    // 0x221038: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22103c: 0x8c6215ec  lw          $v0, 0x15EC($v1)
    ctx->pc = 0x22103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x221040: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221044: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x221044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_221048:
    // 0x221048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22104c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221054: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x221058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22105c: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x221060: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221060u;
    SET_GPR_U32(ctx, 31, 0x221068u);
    ctx->pc = 0x221064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221060u;
    // 0x221064: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221060u, 0x221068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221068u;
label_221068:
    // 0x221068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22106c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221070: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x221070u;
    {
        const bool branch_taken_0x221070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221070u;
        // 0x221074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221070) {
            ctx->pc = 0x221260u;
            goto label_221260;
        }
    }
    ctx->pc = 0x221078u;
label_221078:
    // 0x221078: 0x8e240704  lw          $a0, 0x704($s1)
    ctx->pc = 0x221078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x22107c: 0x24170061  addiu       $s7, $zero, 0x61
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x221080: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x221080u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221084: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x221084u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221088: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x221088u;
    SET_GPR_U32(ctx, 31, 0x221090u);
    ctx->pc = 0x22108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221088u;
    // 0x22108c: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x221088u, 0x221090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221090u;
label_221090:
    // 0x221090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x221090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x221094: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x221094u;
    {
        const bool branch_taken_0x221094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221094u;
        // 0x221098: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221094) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x22109Cu;
    // 0x22109c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2210a0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2210a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2210a4: 0x8c4334d0  lw          $v1, 0x34D0($v0)
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13520)));
    // 0x2210a8: 0x8c4534d4  lw          $a1, 0x34D4($v0)
    ctx->pc = 0x2210a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13524)));
    // 0x2210ac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2210b0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2210B0u;
    SET_GPR_U32(ctx, 31, 0x2210B8u);
    ctx->pc = 0x2210B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210B0u;
    // 0x2210b4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2210B0u, 0x2210B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210B8u;
label_2210b8:
    // 0x2210b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2210b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2210bc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2210BCu;
    {
        const bool branch_taken_0x2210bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2210bc) {
            ctx->pc = 0x2210C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2210BCu;
            // 0x2210c0: 0x2416000f  addiu       $s6, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2210D0u;
            goto label_2210d0;
        }
    }
    ctx->pc = 0x2210C4u;
    // 0x2210c4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2210c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2210c8: 0x8c6234d8  lw          $v0, 0x34D8($v1)
    ctx->pc = 0x2210c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13528)));
    // 0x2210cc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2210ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2210d0:
    // 0x2210d0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2210d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2210d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2210d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210d8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2210d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2210dc: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2210dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2210e0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2210e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2210e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2210e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e8: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2210ec: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2210ECu;
    SET_GPR_U32(ctx, 31, 0x2210F4u);
    ctx->pc = 0x2210F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210ECu;
    // 0x2210f0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2210ECu, 0x2210F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210F4u;
label_2210f4:
    // 0x2210f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2210f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210f8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2210fc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2210FCu;
    {
        const bool branch_taken_0x2210fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210FCu;
        // 0x221100: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210fc) {
            ctx->pc = 0x221260u;
            goto label_221260;
        }
    }
    ctx->pc = 0x221104u;
label_221104:
    // 0x221104: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221108: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22110c: 0x8c4334c4  lw          $v1, 0x34C4($v0)
    ctx->pc = 0x22110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13508)));
    // 0x221110: 0x8c4534c8  lw          $a1, 0x34C8($v0)
    ctx->pc = 0x221110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13512)));
    // 0x221114: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221118: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221118u;
    SET_GPR_U32(ctx, 31, 0x221120u);
    ctx->pc = 0x22111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221118u;
    // 0x22111c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221118u, 0x221120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221120u;
label_221120:
    // 0x221120: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221124: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221124u;
    {
        const bool branch_taken_0x221124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221124u;
        // 0x221128: 0x2416000d  addiu       $s6, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221124) {
            ctx->pc = 0x22113Cu;
            goto label_22113c;
        }
    }
    ctx->pc = 0x22112Cu;
    // 0x22112c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221130: 0x2416000e  addiu       $s6, $zero, 0xE
    ctx->pc = 0x221130u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x221134: 0x8c6234cc  lw          $v0, 0x34CC($v1)
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13516)));
    // 0x221138: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22113c:
    // 0x22113c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x221140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221144: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221148: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22114c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x22114cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221154: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x221154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x221158: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221158u;
    SET_GPR_U32(ctx, 31, 0x221160u);
    ctx->pc = 0x22115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221158u;
    // 0x22115c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221158u, 0x221160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221160u;
label_221160:
    // 0x221160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221164: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x221164u;
    {
        const bool branch_taken_0x221164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221164u;
        // 0x221168: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221164) {
            ctx->pc = 0x22125Cu;
            goto label_22125c;
        }
    }
    ctx->pc = 0x22116Cu;
label_22116c:
    // 0x22116c: 0x8e220704  lw          $v0, 0x704($s1)
    ctx->pc = 0x22116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x221170: 0x24170077  addiu       $s7, $zero, 0x77
    ctx->pc = 0x221170u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x221174: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x221178: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x221178u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22117c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22117Cu;
    SET_GPR_U32(ctx, 31, 0x221184u);
    ctx->pc = 0x221180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22117Cu;
    // 0x221180: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22117Cu, 0x221184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221184u;
label_221184:
    // 0x221184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x221184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x221188: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x221188u;
    {
        const bool branch_taken_0x221188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221188u;
        // 0x22118c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221188) {
            ctx->pc = 0x2211F8u;
            goto label_2211f8;
        }
    }
    ctx->pc = 0x221190u;
    // 0x221190: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221194: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221198: 0x8c433550  lw          $v1, 0x3550($v0)
    ctx->pc = 0x221198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x22119c: 0x8c453554  lw          $a1, 0x3554($v0)
    ctx->pc = 0x22119cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13652)));
    // 0x2211a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2211a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2211A4u;
    SET_GPR_U32(ctx, 31, 0x2211ACu);
    ctx->pc = 0x2211A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211A4u;
    // 0x2211a8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2211A4u, 0x2211ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211ACu;
label_2211ac:
    // 0x2211ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2211acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2211b0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2211B0u;
    {
        const bool branch_taken_0x2211b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2211b0) {
            ctx->pc = 0x2211B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2211B0u;
            // 0x2211b4: 0x2416000c  addiu       $s6, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2211C4u;
            goto label_2211c4;
        }
    }
    ctx->pc = 0x2211B8u;
    // 0x2211b8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2211b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2211bc: 0x8c623558  lw          $v0, 0x3558($v1)
    ctx->pc = 0x2211bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13656)));
    // 0x2211c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2211c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2211c4:
    // 0x2211c4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2211c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2211c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2211c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2211d0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2211d4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2211d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2211d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211dc: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2211e0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2211E0u;
    SET_GPR_U32(ctx, 31, 0x2211E8u);
    ctx->pc = 0x2211E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211E0u;
    // 0x2211e4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2211E0u, 0x2211E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211E8u;
label_2211e8:
    // 0x2211e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2211e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211ec: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2211ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2211f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2211F0u;
    {
        const bool branch_taken_0x2211f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211F0u;
        // 0x2211f4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211f0) {
            ctx->pc = 0x221260u;
            goto label_221260;
        }
    }
    ctx->pc = 0x2211F8u;
label_2211f8:
    // 0x2211f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2211f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2211fc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2211fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221200: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x221200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x221204: 0x8c453574  lw          $a1, 0x3574($v0)
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13684)));
    // 0x221208: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22120c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22120Cu;
    SET_GPR_U32(ctx, 31, 0x221214u);
    ctx->pc = 0x221210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22120Cu;
    // 0x221210: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22120Cu, 0x221214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221214u;
label_221214:
    // 0x221214: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221218: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221218u;
    {
        const bool branch_taken_0x221218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221218u;
        // 0x22121c: 0x24160011  addiu       $s6, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221218) {
            ctx->pc = 0x221230u;
            goto label_221230;
        }
    }
    ctx->pc = 0x221220u;
    // 0x221220: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221224: 0x24160012  addiu       $s6, $zero, 0x12
    ctx->pc = 0x221224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221228: 0x8c623578  lw          $v0, 0x3578($v1)
    ctx->pc = 0x221228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13688)));
    // 0x22122c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221230:
    // 0x221230: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x221234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221238: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x221238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22123c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x221240: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221248: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x221248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x22124c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22124Cu;
    SET_GPR_U32(ctx, 31, 0x221254u);
    ctx->pc = 0x221250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22124Cu;
    // 0x221250: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22124Cu, 0x221254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221254u;
label_221254:
    // 0x221254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221258: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22125c:
    // 0x22125c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_221260:
    // 0x221260: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221268: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221268u;
    SET_GPR_U32(ctx, 31, 0x221270u);
    ctx->pc = 0x22126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221268u;
    // 0x22126c: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221268u, 0x221270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221270u;
label_221270:
    // 0x221270: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x221270u;
    {
        const bool branch_taken_0x221270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221270u;
        // 0x221274: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221270) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x221278u;
label_221278:
    // 0x221278: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x221278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22127c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x221280: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x221280u;
    {
        const bool branch_taken_0x221280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221280u;
        // 0x221284: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221280) {
            ctx->pc = 0x2212DCu;
            goto label_2212dc;
        }
    }
    ctx->pc = 0x221288u;
    // 0x221288: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22128c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221290: 0x8c4322ec  lw          $v1, 0x22EC($v0)
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8940)));
    // 0x221294: 0x8c4522f0  lw          $a1, 0x22F0($v0)
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8944)));
    // 0x221298: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22129c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22129Cu;
    SET_GPR_U32(ctx, 31, 0x2212A4u);
    ctx->pc = 0x2212A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22129Cu;
    // 0x2212a0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22129Cu, 0x2212A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212A4u;
label_2212a4:
    // 0x2212a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2212a8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2212A8u;
    {
        const bool branch_taken_0x2212a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2212ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212A8u;
        // 0x2212ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212a8) {
            ctx->pc = 0x2212BCu;
            goto label_2212bc;
        }
    }
    ctx->pc = 0x2212B0u;
    // 0x2212b0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2212b4: 0x8c6222f4  lw          $v0, 0x22F4($v1)
    ctx->pc = 0x2212b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8948)));
    // 0x2212b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2212b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2212bc:
    // 0x2212bc: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2212bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2212c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2212c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2212c4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2212c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2212c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2212cc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2212CCu;
    SET_GPR_U32(ctx, 31, 0x2212D4u);
    ctx->pc = 0x2212D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212CCu;
    // 0x2212d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2212CCu, 0x2212D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212D4u;
label_2212d4:
    // 0x2212d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2212D4u;
    {
        const bool branch_taken_0x2212d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2212D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212D4u;
        // 0x2212d8: 0xae2005f8  sw          $zero, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212d4) {
            ctx->pc = 0x221320u;
            goto label_221320;
        }
    }
    ctx->pc = 0x2212DCu;
label_2212dc:
    // 0x2212dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2212e0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2212e4: 0x8c432304  lw          $v1, 0x2304($v0)
    ctx->pc = 0x2212e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8964)));
    // 0x2212e8: 0x8c452308  lw          $a1, 0x2308($v0)
    ctx->pc = 0x2212e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8968)));
    // 0x2212ec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2212ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2212f0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2212F0u;
    SET_GPR_U32(ctx, 31, 0x2212F8u);
    ctx->pc = 0x2212F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212F0u;
    // 0x2212f4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2212F0u, 0x2212F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212F8u;
label_2212f8:
    // 0x2212f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2212f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2212fc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2212FCu;
    {
        const bool branch_taken_0x2212fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212FCu;
        // 0x221300: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212fc) {
            ctx->pc = 0x221314u;
            goto label_221314;
        }
    }
    ctx->pc = 0x221304u;
    // 0x221304: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221308: 0x8c622308  lw          $v0, 0x2308($v1)
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8968)));
    // 0x22130c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221310: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x221310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_221314:
    // 0x221314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221318: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x221318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x22131c: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x22131cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
label_221320:
    // 0x221320: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x221320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x221324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221328: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x221328u;
    {
        const bool branch_taken_0x221328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221328u;
        // 0x22132c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221328) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x221330u;
label_221330:
    // 0x221330: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221334: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x221338: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22133c: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221340: 0x8c652dd0  lw          $a1, 0x2DD0($v1)
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11728)));
    // 0x221344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x221344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221348: 0x8c622dd4  lw          $v0, 0x2DD4($v1)
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11732)));
    // 0x22134c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x22134cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x221350: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221350u;
    SET_GPR_U32(ctx, 31, 0x221358u);
    ctx->pc = 0x221354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221350u;
    // 0x221354: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221350u, 0x221358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221358u;
label_221358:
    // 0x221358: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x221358u;
    {
        const bool branch_taken_0x221358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x22135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221358u;
        // 0x22135c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221358) {
            ctx->pc = 0x221370u;
            goto label_221370;
        }
    }
    ctx->pc = 0x221360u;
    // 0x221360: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221364: 0x8c622dd8  lw          $v0, 0x2DD8($v1)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11736)));
    // 0x221368: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22136c: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x22136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_221370:
    // 0x221370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x221370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221374: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221374u;
    SET_GPR_U32(ctx, 31, 0x22137Cu);
    ctx->pc = 0x221378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221374u;
    // 0x221378: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221374u, 0x22137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22137Cu;
label_22137c:
    // 0x22137c: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x22137Cu;
    {
        const bool branch_taken_0x22137c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x221380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22137Cu;
        // 0x221380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22137c) {
            ctx->pc = 0x22138Cu;
            goto label_22138c;
        }
    }
    ctx->pc = 0x221384u;
    // 0x221384: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221388: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x221388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
label_22138c:
    // 0x22138c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221390: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x221394: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221398: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22139c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22139Cu;
    SET_GPR_U32(ctx, 31, 0x2213A4u);
    ctx->pc = 0x2213A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22139Cu;
    // 0x2213a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22139Cu, 0x2213A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213A4u;
label_2213a4:
    // 0x2213a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213a8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2213ac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2213ACu;
    {
        const bool branch_taken_0x2213ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213ACu;
        // 0x2213b0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213ac) {
            ctx->pc = 0x221460u;
            goto label_221460;
        }
    }
    ctx->pc = 0x2213B4u;
label_2213b4:
    // 0x2213b4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2213b8: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x2213b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2213bc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2213BCu;
    {
        const bool branch_taken_0x2213bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2213bc) {
            ctx->pc = 0x2213C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2213BCu;
            // 0x2213c0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2213D8u;
            goto label_2213d8;
        }
    }
    ctx->pc = 0x2213C4u;
    // 0x2213c4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2213C4u;
    SET_GPR_U32(ctx, 31, 0x2213CCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2213C4u, 0x2213CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213CCu;
label_2213cc:
    // 0x2213cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2213ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2213d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2213D0u;
    {
        const bool branch_taken_0x2213d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213D0u;
        // 0x2213d4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213d0) {
            ctx->pc = 0x221414u;
            goto label_221414;
        }
    }
    ctx->pc = 0x2213D8u;
label_2213d8:
    // 0x2213d8: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2213dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2213dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213e0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2213e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2213e4: 0x8c432c60  lw          $v1, 0x2C60($v0)
    ctx->pc = 0x2213e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11360)));
    // 0x2213e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2213e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213ec: 0x8c482c68  lw          $t0, 0x2C68($v0)
    ctx->pc = 0x2213ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11368)));
    // 0x2213f0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2213f4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2213f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2213f8: 0xae2905f0  sw          $t1, 0x5F0($s1)
    ctx->pc = 0x2213f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 9));
    // 0x2213fc: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x2213fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x221400: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221404: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x221408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22140c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22140Cu;
    {
        const bool branch_taken_0x22140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22140Cu;
        // 0x221410: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22140c) {
            ctx->pc = 0x22144Cu;
            goto label_22144c;
        }
    }
    ctx->pc = 0x221414u;
label_221414:
    // 0x221414: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x221414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x221418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22141c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x22141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221420: 0x8c4329d8  lw          $v1, 0x29D8($v0)
    ctx->pc = 0x221420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10712)));
    // 0x221424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221428: 0x8c4829dc  lw          $t0, 0x29DC($v0)
    ctx->pc = 0x221428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10716)));
    // 0x22142c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x22142cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221430: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221434: 0xae2905f0  sw          $t1, 0x5F0($s1)
    ctx->pc = 0x221434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 9));
    // 0x221438: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x221438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22143c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22143cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221440: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x221440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221444: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221448: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x221448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22144c:
    // 0x22144c: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22144Cu;
    SET_GPR_U32(ctx, 31, 0x221454u);
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22144Cu, 0x221454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221454u;
label_221454:
    // 0x221454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221458: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x22145c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221460:
    // 0x221460: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221464: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221468: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221468u;
    SET_GPR_U32(ctx, 31, 0x221470u);
    ctx->pc = 0x22146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221468u;
    // 0x22146c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221468u, 0x221470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221470u;
label_221470:
    // 0x221470: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x221470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x221474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221478: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x221478u;
    {
        const bool branch_taken_0x221478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221478u;
        // 0x22147c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221478) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x221480u;
label_221480:
    // 0x221480: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x221480u;
    SET_GPR_U32(ctx, 31, 0x221488u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x221480u, 0x221488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221488u;
label_221488:
    // 0x221488: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x221488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22148c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221490: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x221490u;
    {
        const bool branch_taken_0x221490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x221494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221490u;
        // 0x221494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221490) {
            ctx->pc = 0x221510u;
            goto label_221510;
        }
    }
    ctx->pc = 0x221498u;
    // 0x221498: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x221498u;
    {
        const bool branch_taken_0x221498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221498u;
        // 0x22149c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221498) {
            ctx->pc = 0x2214B4u;
            goto label_2214b4;
        }
    }
    ctx->pc = 0x2214A0u;
    // 0x2214a0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2214A0u;
    {
        const bool branch_taken_0x2214a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2214A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214A0u;
        // 0x2214a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214a0) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x2214A8u;
    // 0x2214a8: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2214A8u;
    {
        const bool branch_taken_0x2214a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214A8u;
        // 0x2214ac: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214a8) {
            ctx->pc = 0x2215C8u;
            goto label_2215c8;
        }
    }
    ctx->pc = 0x2214B0u;
    // 0x2214b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2214b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2214b4:
    // 0x2214b4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2214b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2214b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2214b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214bc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2214c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2214c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2214c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2214C4u;
    SET_GPR_U32(ctx, 31, 0x2214CCu);
    ctx->pc = 0x2214C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214C4u;
    // 0x2214c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2214C4u, 0x2214CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214CCu;
label_2214cc:
    // 0x2214cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2214ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2214d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2214d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2214d4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2214d8: 0x8c433b60  lw          $v1, 0x3B60($v0)
    ctx->pc = 0x2214d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x2214dc: 0x8c453b64  lw          $a1, 0x3B64($v0)
    ctx->pc = 0x2214dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15204)));
    // 0x2214e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2214e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2214e4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2214E4u;
    SET_GPR_U32(ctx, 31, 0x2214ECu);
    ctx->pc = 0x2214E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214E4u;
    // 0x2214e8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2214E4u, 0x2214ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214ECu;
label_2214ec:
    // 0x2214ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2214ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2214f0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2214F0u;
    {
        const bool branch_taken_0x2214f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214F0u;
        // 0x2214f4: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214f0) {
            ctx->pc = 0x221508u;
            goto label_221508;
        }
    }
    ctx->pc = 0x2214F8u;
    // 0x2214f8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2214fc: 0x8c623b68  lw          $v0, 0x3B68($v1)
    ctx->pc = 0x2214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15208)));
    // 0x221500: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221504: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x221504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_221508:
    // 0x221508: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x221508u;
    {
        const bool branch_taken_0x221508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221508u;
        // 0x22150c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221508) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x221510u;
label_221510:
    // 0x221510: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221518: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22151c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22151cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221520: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x221520u;
    SET_GPR_U32(ctx, 31, 0x221528u);
    ctx->pc = 0x221524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221520u;
    // 0x221524: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x221520u, 0x221528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221528u;
label_221528:
    // 0x221528: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22152c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22152cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221530: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221534: 0x8c433b6c  lw          $v1, 0x3B6C($v0)
    ctx->pc = 0x221534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15212)));
    // 0x221538: 0x8c453b70  lw          $a1, 0x3B70($v0)
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15216)));
    // 0x22153c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22153cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221540: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221540u;
    SET_GPR_U32(ctx, 31, 0x221548u);
    ctx->pc = 0x221544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221540u;
    // 0x221544: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221540u, 0x221548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221548u;
label_221548:
    // 0x221548: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22154c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22154Cu;
    {
        const bool branch_taken_0x22154c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22154Cu;
        // 0x221550: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22154c) {
            ctx->pc = 0x221564u;
            goto label_221564;
        }
    }
    ctx->pc = 0x221554u;
    // 0x221554: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221558: 0x8c623b74  lw          $v0, 0x3B74($v1)
    ctx->pc = 0x221558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15220)));
    // 0x22155c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22155cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221560: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x221560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_221564:
    // 0x221564: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x221564u;
    {
        const bool branch_taken_0x221564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221564u;
        // 0x221568: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221564) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x22156Cu;
label_22156c:
    // 0x22156c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x22156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221574: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221578: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22157c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22157Cu;
    SET_GPR_U32(ctx, 31, 0x221584u);
    ctx->pc = 0x221580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22157Cu;
    // 0x221580: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22157Cu, 0x221584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221584u;
label_221584:
    // 0x221584: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221588: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22158c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221590: 0x8c433b78  lw          $v1, 0x3B78($v0)
    ctx->pc = 0x221590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15224)));
    // 0x221594: 0x8c453b7c  lw          $a1, 0x3B7C($v0)
    ctx->pc = 0x221594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15228)));
    // 0x221598: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22159c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22159Cu;
    SET_GPR_U32(ctx, 31, 0x2215A4u);
    ctx->pc = 0x2215A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22159Cu;
    // 0x2215a0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22159Cu, 0x2215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215A4u;
label_2215a4:
    // 0x2215a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2215a8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2215A8u;
    {
        const bool branch_taken_0x2215a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215A8u;
        // 0x2215ac: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215a8) {
            ctx->pc = 0x2215C0u;
            goto label_2215c0;
        }
    }
    ctx->pc = 0x2215B0u;
    // 0x2215b0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2215b4: 0x8c623b80  lw          $v0, 0x3B80($v1)
    ctx->pc = 0x2215b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15232)));
    // 0x2215b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2215b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2215bc: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2215bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2215c0:
    // 0x2215c0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2215C0u;
    {
        const bool branch_taken_0x2215c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215C0u;
        // 0x2215c4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215c0) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x2215C8u;
label_2215c8:
    // 0x2215c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2215c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215cc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2215d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2215d4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2215D4u;
    SET_GPR_U32(ctx, 31, 0x2215DCu);
    ctx->pc = 0x2215D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215D4u;
    // 0x2215d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2215D4u, 0x2215DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215DCu;
label_2215dc:
    // 0x2215dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2215dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2215e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2215e4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2215e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2215e8: 0x8c433b84  lw          $v1, 0x3B84($v0)
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
    // 0x2215ec: 0x8c453b88  lw          $a1, 0x3B88($v0)
    ctx->pc = 0x2215ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15240)));
    // 0x2215f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2215f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2215f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2215F4u;
    SET_GPR_U32(ctx, 31, 0x2215FCu);
    ctx->pc = 0x2215F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215F4u;
    // 0x2215f8: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2215F4u, 0x2215FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215FCu;
label_2215fc:
    // 0x2215fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2215fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221600: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221600u;
    {
        const bool branch_taken_0x221600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221600u;
        // 0x221604: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221600) {
            ctx->pc = 0x221618u;
            goto label_221618;
        }
    }
    ctx->pc = 0x221608u;
    // 0x221608: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22160c: 0x8c623b8c  lw          $v0, 0x3B8C($v1)
    ctx->pc = 0x22160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15244)));
    // 0x221610: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221614: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_221618:
    // 0x221618: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x221618u;
    {
        const bool branch_taken_0x221618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221618u;
        // 0x22161c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221618) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x221620u;
label_221620:
    // 0x221620: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221624: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221628: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22162c: 0x8c433c38  lw          $v1, 0x3C38($v0)
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15416)));
    // 0x221630: 0x8c453c3c  lw          $a1, 0x3C3C($v0)
    ctx->pc = 0x221630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15420)));
    // 0x221634: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221638: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221638u;
    SET_GPR_U32(ctx, 31, 0x221640u);
    ctx->pc = 0x22163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221638u;
    // 0x22163c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221638u, 0x221640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221640u;
label_221640:
    // 0x221640: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221644: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221644u;
    {
        const bool branch_taken_0x221644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221644u;
        // 0x221648: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221644) {
            ctx->pc = 0x22165Cu;
            goto label_22165c;
        }
    }
    ctx->pc = 0x22164Cu;
    // 0x22164c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221650: 0x8c623c40  lw          $v0, 0x3C40($v1)
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15424)));
    // 0x221654: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221658: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x221658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22165c:
    // 0x22165c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221660: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x221660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x221664: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22166c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_221670:
    // 0x221670: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221674: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x221674u;
    SET_GPR_U32(ctx, 31, 0x22167Cu);
    ctx->pc = 0x221678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221674u;
    // 0x221678: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x221674u, 0x22167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22167Cu;
label_22167c:
    // 0x22167c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x22167Cu;
    {
        const bool branch_taken_0x22167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22167Cu;
        // 0x221680: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22167c) {
            ctx->pc = 0x221700u;
            goto label_221700;
        }
    }
    ctx->pc = 0x221684u;
label_221684:
    // 0x221684: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221688: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22168c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221690: 0x8c432024  lw          $v1, 0x2024($v0)
    ctx->pc = 0x221690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8228)));
    // 0x221694: 0x8c452028  lw          $a1, 0x2028($v0)
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8232)));
    // 0x221698: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22169c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22169Cu;
    SET_GPR_U32(ctx, 31, 0x2216A4u);
    ctx->pc = 0x2216A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22169Cu;
    // 0x2216a0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22169Cu, 0x2216A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216A4u;
label_2216a4:
    // 0x2216a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2216a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2216a8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2216A8u;
    {
        const bool branch_taken_0x2216a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2216ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216A8u;
        // 0x2216ac: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216a8) {
            ctx->pc = 0x2216C0u;
            goto label_2216c0;
        }
    }
    ctx->pc = 0x2216B0u;
    // 0x2216b0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2216b4: 0x8c62202c  lw          $v0, 0x202C($v1)
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8236)));
    // 0x2216b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2216b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2216bc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2216c0:
    // 0x2216c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2216c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2216c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2216c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2216c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216cc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2216ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2216d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2216d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2216d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216d8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2216D8u;
    SET_GPR_U32(ctx, 31, 0x2216E0u);
    ctx->pc = 0x2216DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216D8u;
    // 0x2216dc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2216D8u, 0x2216E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E0u;
label_2216e0:
    // 0x2216e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2216e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2216e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2216e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2216e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216ec: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2216f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2216f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2216f4: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x2216F4u;
    SET_GPR_U32(ctx, 31, 0x2216FCu);
    ctx->pc = 0x2216F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216F4u;
    // 0x2216f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x2216F4u, 0x2216FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216FCu;
label_2216fc:
    // 0x2216fc: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
label_221700:
    // 0x221700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221704: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22170c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x22170cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221710: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x221710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221718: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x221718u;
    SET_GPR_U32(ctx, 31, 0x221720u);
    ctx->pc = 0x22171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221718u;
    // 0x22171c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x221718u, 0x221720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221720u;
label_221720:
    // 0x221720: 0x3ae204e2  xori        $v0, $s7, 0x4E2
    ctx->pc = 0x221720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1250);
    // 0x221724: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221724u;
    {
        const bool branch_taken_0x221724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221724u;
        // 0x221728: 0x8fa90004  lw          $t1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221724) {
            ctx->pc = 0x221744u;
            goto label_221744;
        }
    }
    ctx->pc = 0x22172Cu;
    // 0x22172c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22172cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221730: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221734: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x221734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22173c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x22173Cu;
    SET_GPR_U32(ctx, 31, 0x221744u);
    ctx->pc = 0x221740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22173Cu;
    // 0x221740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x22173Cu, 0x221744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221744u;
label_221744:
    // 0x221744: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x221744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x221748: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x221748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22174c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221750: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x221750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x221754: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x221754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_221758:
    // 0x221758: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x221758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22175c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22175cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221760: 0x0  nop
    ctx->pc = 0x221760u;
    // NOP
    // 0x221764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x221764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221768: 0x0  nop
    ctx->pc = 0x221768u;
    // NOP
    // 0x22176c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22176Cu;
    {
        const bool branch_taken_0x22176c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22176Cu;
        // 0x221770: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22176c) {
            ctx->pc = 0x22178Cu;
            goto label_22178c;
        }
    }
    ctx->pc = 0x221774u;
    // 0x221774: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x221774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221778: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x221778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x22177c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22177cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x221784: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x221784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x221788: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x221788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_22178c:
    // 0x22178c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x221790: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x221794: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x221794u;
    {
        const bool branch_taken_0x221794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x221794) {
            ctx->pc = 0x221798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221794u;
            // 0x221798: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2217CCu;
            goto label_2217cc;
        }
    }
    ctx->pc = 0x22179Cu;
    // 0x22179c: 0x8e240700  lw          $a0, 0x700($s1)
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x2217a0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2217A0u;
    {
        const bool branch_taken_0x2217a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2217a0) {
            ctx->pc = 0x2217A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2217A0u;
            // 0x2217a4: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2217CCu;
            goto label_2217cc;
        }
    }
    ctx->pc = 0x2217A8u;
    // 0x2217a8: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x2217A8u;
    SET_GPR_U32(ctx, 31, 0x2217B0u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x2217A8u, 0x2217B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217B0u;
label_2217b0:
    // 0x2217b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2217B0u;
    {
        const bool branch_taken_0x2217b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2217b0) {
            ctx->pc = 0x2217B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2217B0u;
            // 0x2217b4: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2217CCu;
            goto label_2217cc;
        }
    }
    ctx->pc = 0x2217B8u;
    // 0x2217b8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2217bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2217c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2217c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2217c4: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2217c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x2217c8: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2217c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_2217cc:
    // 0x2217cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2217CCu;
    {
        const bool branch_taken_0x2217cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217CCu;
        // 0x2217d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217cc) {
            ctx->pc = 0x221838u;
            goto label_221838;
        }
    }
    ctx->pc = 0x2217D4u;
    // 0x2217d4: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x2217d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2217d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2217D8u;
    SET_GPR_U32(ctx, 31, 0x2217E0u);
    ctx->pc = 0x2217DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217D8u;
    // 0x2217dc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2217D8u, 0x2217E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217E0u;
label_2217e0:
    // 0x2217e0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2217e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2217e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217e8: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2217e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2217ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2217ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2217f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2217f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2217f4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2217f8: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2217f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2217fc: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2217FCu;
    SET_GPR_U32(ctx, 31, 0x221804u);
    ctx->pc = 0x221800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217FCu;
    // 0x221800: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2217FCu, 0x221804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221804u;
label_221804:
    // 0x221804: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x221804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221808: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221808u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22180c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22180cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x221810: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x221810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x221814: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x221814u;
    SET_GPR_U32(ctx, 31, 0x22181Cu);
    ctx->pc = 0x221818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221814u;
    // 0x221818: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x221814u, 0x22181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22181Cu;
label_22181c:
    // 0x22181c: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221820: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x221820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x221824: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x221824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x221828: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x221828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22182c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22182Cu;
    SET_GPR_U32(ctx, 31, 0x221834u);
    ctx->pc = 0x221830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22182Cu;
    // 0x221830: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22182Cu, 0x221834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221834u;
label_221834:
    // 0x221834: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x221834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_221838:
    // 0x221838: 0xc055f06  jal         func_157C18
    ctx->pc = 0x221838u;
    SET_GPR_U32(ctx, 31, 0x221840u);
    ctx->pc = 0x22183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221838u;
    // 0x22183c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x221838u, 0x221840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221840u;
label_221840:
    // 0x221840: 0x1440069c  bnez        $v0, . + 4 + (0x69C << 2)
    ctx->pc = 0x221840u;
    {
        const bool branch_taken_0x221840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221840) {
            ctx->pc = 0x2232B4u;
            goto label_2232b4;
        }
    }
    ctx->pc = 0x221848u;
    // 0x221848: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x221848u;
    {
        const bool branch_taken_0x221848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221848) {
            ctx->pc = 0x222010u;
            goto label_222010;
        }
    }
    ctx->pc = 0x221850u;
label_221850:
    // 0x221850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221854: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x221854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x221858: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x221858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x22185c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221860: 0xc09d91a  jal         func_276468
    ctx->pc = 0x221860u;
    SET_GPR_U32(ctx, 31, 0x221868u);
    ctx->pc = 0x221864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221860u;
    // 0x221864: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x221860u, 0x221868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221868u;
label_221868:
    // 0x221868: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x221868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22186c: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x22186cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x221870: 0x2463fdfc  addiu       $v1, $v1, -0x204
    ctx->pc = 0x221870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966780));
    // 0x221874: 0x2c62005d  sltiu       $v0, $v1, 0x5D
    ctx->pc = 0x221874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)93) ? 1 : 0);
    // 0x221878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221878u;
    {
        const bool branch_taken_0x221878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221878u;
        // 0x22187c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221878) {
            ctx->pc = 0x221898u;
            goto label_221898;
        }
    }
    ctx->pc = 0x221880u;
    // 0x221880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221884: 0x24427c90  addiu       $v0, $v0, 0x7C90
    ctx->pc = 0x221884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31888));
    // 0x221888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22188c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221890: 0x800008  jr          $a0
    ctx->pc = 0x221890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221898u: goto label_221898;
            case 0x2218E0u: goto label_2218e0;
            case 0x221928u: goto label_221928;
            case 0x221970u: goto label_221970;
            case 0x2219E4u: goto label_2219e4;
            case 0x221A1Cu: goto label_221a1c;
            case 0x221A54u: goto label_221a54;
            case 0x221AB4u: goto label_221ab4;
            case 0x221B30u: goto label_221b30;
            case 0x221B90u: goto label_221b90;
            case 0x221C04u: goto label_221c04;
            case 0x221C7Cu: goto label_221c7c;
            case 0x221CD4u: goto label_221cd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x221898u;
label_221898:
    // 0x221898: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22189c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22189cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2218a0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2218a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2218a4: 0x8c431c7c  lw          $v1, 0x1C7C($v0)
    ctx->pc = 0x2218a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7292)));
    // 0x2218a8: 0x8c451c80  lw          $a1, 0x1C80($v0)
    ctx->pc = 0x2218a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7296)));
    // 0x2218ac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2218acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2218b0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2218B0u;
    SET_GPR_U32(ctx, 31, 0x2218B8u);
    ctx->pc = 0x2218B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218B0u;
    // 0x2218b4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2218B0u, 0x2218B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218B8u;
label_2218b8:
    // 0x2218b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2218b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2218bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2218BCu;
    {
        const bool branch_taken_0x2218bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2218C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218BCu;
        // 0x2218c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218bc) {
            ctx->pc = 0x2218D0u;
            goto label_2218d0;
        }
    }
    ctx->pc = 0x2218C4u;
    // 0x2218c4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2218c8: 0x8c621c84  lw          $v0, 0x1C84($v1)
    ctx->pc = 0x2218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7300)));
    // 0x2218cc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2218d0:
    // 0x2218d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2218d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2218d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2218d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218d8: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2218D8u;
    {
        const bool branch_taken_0x2218d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218D8u;
        // 0x2218dc: 0x2407003d  addiu       $a3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218d8) {
            ctx->pc = 0x221C4Cu;
            goto label_221c4c;
        }
    }
    ctx->pc = 0x2218E0u;
label_2218e0:
    // 0x2218e0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2218e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2218e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2218e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2218e8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2218e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2218ec: 0x8c431c7c  lw          $v1, 0x1C7C($v0)
    ctx->pc = 0x2218ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7292)));
    // 0x2218f0: 0x8c451c88  lw          $a1, 0x1C88($v0)
    ctx->pc = 0x2218f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7304)));
    // 0x2218f4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2218f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2218f8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2218F8u;
    SET_GPR_U32(ctx, 31, 0x221900u);
    ctx->pc = 0x2218FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218F8u;
    // 0x2218fc: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2218F8u, 0x221900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221900u;
label_221900:
    // 0x221900: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221904: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221904u;
    {
        const bool branch_taken_0x221904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221904u;
        // 0x221908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221904) {
            ctx->pc = 0x221918u;
            goto label_221918;
        }
    }
    ctx->pc = 0x22190Cu;
    // 0x22190c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221910: 0x8c621c8c  lw          $v0, 0x1C8C($v1)
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7308)));
    // 0x221914: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221918:
    // 0x221918: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22191c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22191cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221920: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x221920u;
    {
        const bool branch_taken_0x221920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221920u;
        // 0x221924: 0x2407003d  addiu       $a3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221920) {
            ctx->pc = 0x221C4Cu;
            goto label_221c4c;
        }
    }
    ctx->pc = 0x221928u;
label_221928:
    // 0x221928: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22192c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22192cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221930: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221934: 0x8c431c7c  lw          $v1, 0x1C7C($v0)
    ctx->pc = 0x221934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7292)));
    // 0x221938: 0x8c451c80  lw          $a1, 0x1C80($v0)
    ctx->pc = 0x221938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7296)));
    // 0x22193c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22193cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221940: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221940u;
    SET_GPR_U32(ctx, 31, 0x221948u);
    ctx->pc = 0x221944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221940u;
    // 0x221944: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221940u, 0x221948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221948u;
label_221948:
    // 0x221948: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22194c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22194Cu;
    {
        const bool branch_taken_0x22194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22194Cu;
        // 0x221950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22194c) {
            ctx->pc = 0x221960u;
            goto label_221960;
        }
    }
    ctx->pc = 0x221954u;
    // 0x221954: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221958: 0x8c621c84  lw          $v0, 0x1C84($v1)
    ctx->pc = 0x221958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7300)));
    // 0x22195c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22195cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221960:
    // 0x221960: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221968: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221968u;
        // 0x22196c: 0x2407003d  addiu       $a3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221968) {
            ctx->pc = 0x221BD4u;
            goto label_221bd4;
        }
    }
    ctx->pc = 0x221970u;
label_221970:
    // 0x221970: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221974: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221978: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22197c: 0x8c431dc0  lw          $v1, 0x1DC0($v0)
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7616)));
    // 0x221980: 0x8c451dc4  lw          $a1, 0x1DC4($v0)
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7620)));
    // 0x221984: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221988: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221988u;
    SET_GPR_U32(ctx, 31, 0x221990u);
    ctx->pc = 0x22198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221988u;
    // 0x22198c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221988u, 0x221990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221990u;
label_221990:
    // 0x221990: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221994: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221994u;
    {
        const bool branch_taken_0x221994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221994u;
        // 0x221998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221994) {
            ctx->pc = 0x2219A8u;
            goto label_2219a8;
        }
    }
    ctx->pc = 0x22199Cu;
    // 0x22199c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2219a0: 0x8c621dc8  lw          $v0, 0x1DC8($v1)
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7624)));
    // 0x2219a4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2219a8:
    // 0x2219a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2219ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2219acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219b0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2219b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2219b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2219b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219b8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2219B8u;
    SET_GPR_U32(ctx, 31, 0x2219C0u);
    ctx->pc = 0x2219BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219B8u;
    // 0x2219bc: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2219B8u, 0x2219C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219C0u;
label_2219c0:
    // 0x2219c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2219c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2219c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2219c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2219c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219cc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2219ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2219d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2219d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219d4: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x2219D4u;
    SET_GPR_U32(ctx, 31, 0x2219DCu);
    ctx->pc = 0x2219D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219D4u;
    // 0x2219d8: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x2219D4u, 0x2219DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219DCu;
label_2219dc:
    // 0x2219dc: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2219DCu;
    {
        const bool branch_taken_0x2219dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219dc) {
            ctx->pc = 0x221D28u;
            goto label_221d28;
        }
    }
    ctx->pc = 0x2219E4u;
label_2219e4:
    // 0x2219e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2219e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2219e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2219e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2219ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2219ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2219f0: 0x8c433614  lw          $v1, 0x3614($v0)
    ctx->pc = 0x2219f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13844)));
    // 0x2219f4: 0x8c453618  lw          $a1, 0x3618($v0)
    ctx->pc = 0x2219f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13848)));
    // 0x2219f8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2219f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2219fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2219FCu;
    SET_GPR_U32(ctx, 31, 0x221A04u);
    ctx->pc = 0x221A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219FCu;
    // 0x221a00: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2219FCu, 0x221A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A04u;
label_221a04:
    // 0x221a04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221a08: 0x1443008d  bne         $v0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x221A08u;
    {
        const bool branch_taken_0x221a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A08u;
        // 0x221a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a08) {
            ctx->pc = 0x221C40u;
            goto label_221c40;
        }
    }
    ctx->pc = 0x221A10u;
    // 0x221a10: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221a14: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x221A14u;
    {
        const bool branch_taken_0x221a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A14u;
        // 0x221a18: 0x8c62361c  lw          $v0, 0x361C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a14) {
            ctx->pc = 0x221C38u;
            goto label_221c38;
        }
    }
    ctx->pc = 0x221A1Cu;
label_221a1c:
    // 0x221a1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221a20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221a24: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221a28: 0x8c433638  lw          $v1, 0x3638($v0)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13880)));
    // 0x221a2c: 0x8c45363c  lw          $a1, 0x363C($v0)
    ctx->pc = 0x221a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13884)));
    // 0x221a30: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221a34: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221A34u;
    SET_GPR_U32(ctx, 31, 0x221A3Cu);
    ctx->pc = 0x221A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A34u;
    // 0x221a38: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221A34u, 0x221A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A3Cu;
label_221a3c:
    // 0x221a3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221a40: 0x1443007f  bne         $v0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x221A40u;
    {
        const bool branch_taken_0x221a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A40u;
        // 0x221a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a40) {
            ctx->pc = 0x221C40u;
            goto label_221c40;
        }
    }
    ctx->pc = 0x221A48u;
    // 0x221a48: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221a4c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A4Cu;
        // 0x221a50: 0x8c623640  lw          $v0, 0x3640($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x221C38u;
            goto label_221c38;
        }
    }
    ctx->pc = 0x221A54u;
label_221a54:
    // 0x221a54: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221a58: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221a5c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221a60: 0x8c4330e4  lw          $v1, 0x30E4($v0)
    ctx->pc = 0x221a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12516)));
    // 0x221a64: 0x8c4530e8  lw          $a1, 0x30E8($v0)
    ctx->pc = 0x221a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12520)));
    // 0x221a68: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221a6c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221A6Cu;
    SET_GPR_U32(ctx, 31, 0x221A74u);
    ctx->pc = 0x221A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A6Cu;
    // 0x221a70: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221A6Cu, 0x221A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A74u;
label_221a74:
    // 0x221a74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221a78: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221A78u;
    {
        const bool branch_taken_0x221a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A78u;
        // 0x221a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a78) {
            ctx->pc = 0x221A8Cu;
            goto label_221a8c;
        }
    }
    ctx->pc = 0x221A80u;
    // 0x221a80: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221a84: 0x8c6230ec  lw          $v0, 0x30EC($v1)
    ctx->pc = 0x221a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12524)));
    // 0x221a88: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221a8c:
    // 0x221a8c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221a90: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x221a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x221a94: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221a98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221a9c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x221A9Cu;
    SET_GPR_U32(ctx, 31, 0x221AA4u);
    ctx->pc = 0x221AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A9Cu;
    // 0x221aa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x221A9Cu, 0x221AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AA4u;
label_221aa4:
    // 0x221aa4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x221aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x221aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221aac: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x221AACu;
    {
        const bool branch_taken_0x221aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AACu;
        // 0x221ab0: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221aac) {
            ctx->pc = 0x221D24u;
            goto label_221d24;
        }
    }
    ctx->pc = 0x221AB4u;
label_221ab4:
    // 0x221ab4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221ab8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221abc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221ac0: 0x8c432ddc  lw          $v1, 0x2DDC($v0)
    ctx->pc = 0x221ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11740)));
    // 0x221ac4: 0x8c452de0  lw          $a1, 0x2DE0($v0)
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11744)));
    // 0x221ac8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221acc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221ACCu;
    SET_GPR_U32(ctx, 31, 0x221AD4u);
    ctx->pc = 0x221AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221ACCu;
    // 0x221ad0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221ACCu, 0x221AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AD4u;
label_221ad4:
    // 0x221ad4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221ad8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221AD8u;
    {
        const bool branch_taken_0x221ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AD8u;
        // 0x221adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ad8) {
            ctx->pc = 0x221AECu;
            goto label_221aec;
        }
    }
    ctx->pc = 0x221AE0u;
    // 0x221ae0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221ae4: 0x8c622de4  lw          $v0, 0x2DE4($v1)
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11748)));
    // 0x221ae8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221aec:
    // 0x221aec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221af4: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221af8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221afc: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221AFCu;
    SET_GPR_U32(ctx, 31, 0x221B04u);
    ctx->pc = 0x221B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AFCu;
    // 0x221b00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221AFCu, 0x221B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B04u;
label_221b04:
    // 0x221b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221b0c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x221b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221b10: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221b14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221b18: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221B18u;
    SET_GPR_U32(ctx, 31, 0x221B20u);
    ctx->pc = 0x221B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B18u;
    // 0x221b1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221B18u, 0x221B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B20u;
label_221b20:
    // 0x221b20: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x221b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x221b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b28: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x221B28u;
    {
        const bool branch_taken_0x221b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B28u;
        // 0x221b2c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b28) {
            ctx->pc = 0x221D24u;
            goto label_221d24;
        }
    }
    ctx->pc = 0x221B30u;
label_221b30:
    // 0x221b30: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221b34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221b38: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221b3c: 0x8c43357c  lw          $v1, 0x357C($v0)
    ctx->pc = 0x221b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13692)));
    // 0x221b40: 0x8c453580  lw          $a1, 0x3580($v0)
    ctx->pc = 0x221b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13696)));
    // 0x221b44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221b48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221B48u;
    SET_GPR_U32(ctx, 31, 0x221B50u);
    ctx->pc = 0x221B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B48u;
    // 0x221b4c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221B48u, 0x221B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B50u;
label_221b50:
    // 0x221b50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221b54: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221B54u;
    {
        const bool branch_taken_0x221b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B54u;
        // 0x221b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b54) {
            ctx->pc = 0x221B68u;
            goto label_221b68;
        }
    }
    ctx->pc = 0x221B5Cu;
    // 0x221b5c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221b60: 0x8c623584  lw          $v0, 0x3584($v1)
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13700)));
    // 0x221b64: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221b68:
    // 0x221b68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x221b6c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x221b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x221b70: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221b74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221b78: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221B78u;
    SET_GPR_U32(ctx, 31, 0x221B80u);
    ctx->pc = 0x221B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B78u;
    // 0x221b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221B78u, 0x221B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B80u;
label_221b80:
    // 0x221b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x221b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x221b88: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x221B88u;
    {
        const bool branch_taken_0x221b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B88u;
        // 0x221b8c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b88) {
            ctx->pc = 0x221C64u;
            goto label_221c64;
        }
    }
    ctx->pc = 0x221B90u;
label_221b90:
    // 0x221b90: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221b94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221b98: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221b9c: 0x8c433ce0  lw          $v1, 0x3CE0($v0)
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15584)));
    // 0x221ba0: 0x8c453ce4  lw          $a1, 0x3CE4($v0)
    ctx->pc = 0x221ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15588)));
    // 0x221ba4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221ba8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221BA8u;
    SET_GPR_U32(ctx, 31, 0x221BB0u);
    ctx->pc = 0x221BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BA8u;
    // 0x221bac: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221BA8u, 0x221BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BB0u;
label_221bb0:
    // 0x221bb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221bb4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221BB4u;
    {
        const bool branch_taken_0x221bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BB4u;
        // 0x221bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bb4) {
            ctx->pc = 0x221BC8u;
            goto label_221bc8;
        }
    }
    ctx->pc = 0x221BBCu;
    // 0x221bbc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221bc0: 0x8c623ce8  lw          $v0, 0x3CE8($v1)
    ctx->pc = 0x221bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15592)));
    // 0x221bc4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221bc8:
    // 0x221bc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bd0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_221bd4:
    // 0x221bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bd8: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221BD8u;
    SET_GPR_U32(ctx, 31, 0x221BE0u);
    ctx->pc = 0x221BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BD8u;
    // 0x221bdc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221BD8u, 0x221BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BE0u;
label_221be0:
    // 0x221be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221be4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bec: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bf4: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221BF4u;
    SET_GPR_U32(ctx, 31, 0x221BFCu);
    ctx->pc = 0x221BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BF4u;
    // 0x221bf8: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221BF4u, 0x221BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BFCu;
label_221bfc:
    // 0x221bfc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x221BFCu;
    {
        const bool branch_taken_0x221bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BFCu;
        // 0x221c00: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bfc) {
            ctx->pc = 0x221D28u;
            goto label_221d28;
        }
    }
    ctx->pc = 0x221C04u;
label_221c04:
    // 0x221c04: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221c08: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221c0c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221c10: 0x8c43023c  lw          $v1, 0x23C($v0)
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x221c14: 0x8c450240  lw          $a1, 0x240($v0)
    ctx->pc = 0x221c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x221c18: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221c1c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221C1Cu;
    SET_GPR_U32(ctx, 31, 0x221C24u);
    ctx->pc = 0x221C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C1Cu;
    // 0x221c20: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221C1Cu, 0x221C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C24u;
label_221c24:
    // 0x221c24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221c28: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221C28u;
    {
        const bool branch_taken_0x221c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C28u;
        // 0x221c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c28) {
            ctx->pc = 0x221C40u;
            goto label_221c40;
        }
    }
    ctx->pc = 0x221C30u;
    // 0x221c30: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221c34: 0x8c620244  lw          $v0, 0x244($v1)
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_221c38:
    // 0x221c38: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221c40:
    // 0x221c40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c48: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_221c4c:
    // 0x221c4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221c50: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221C50u;
    SET_GPR_U32(ctx, 31, 0x221C58u);
    ctx->pc = 0x221C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C50u;
    // 0x221c54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221C50u, 0x221C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C58u;
label_221c58:
    // 0x221c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221c64:
    // 0x221c64: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x221c68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221c6c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221C6Cu;
    SET_GPR_U32(ctx, 31, 0x221C74u);
    ctx->pc = 0x221C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C6Cu;
    // 0x221c70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221C6Cu, 0x221C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C74u;
label_221c74:
    // 0x221c74: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x221C74u;
    {
        const bool branch_taken_0x221c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C74u;
        // 0x221c78: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c74) {
            ctx->pc = 0x221D28u;
            goto label_221d28;
        }
    }
    ctx->pc = 0x221C7Cu;
label_221c7c:
    // 0x221c7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221c80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221c84: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221c88: 0x8c433b90  lw          $v1, 0x3B90($v0)
    ctx->pc = 0x221c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15248)));
    // 0x221c8c: 0x8c453b94  lw          $a1, 0x3B94($v0)
    ctx->pc = 0x221c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15252)));
    // 0x221c90: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221c94: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221C94u;
    SET_GPR_U32(ctx, 31, 0x221C9Cu);
    ctx->pc = 0x221C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C94u;
    // 0x221c98: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221C94u, 0x221C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C9Cu;
label_221c9c:
    // 0x221c9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221ca0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221CA0u;
    {
        const bool branch_taken_0x221ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CA0u;
        // 0x221ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ca0) {
            ctx->pc = 0x221CB4u;
            goto label_221cb4;
        }
    }
    ctx->pc = 0x221CA8u;
    // 0x221ca8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221cac: 0x8c623b98  lw          $v0, 0x3B98($v1)
    ctx->pc = 0x221cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15256)));
    // 0x221cb0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221cb4:
    // 0x221cb4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cbc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221cc0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221cc4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x221CC4u;
    SET_GPR_U32(ctx, 31, 0x221CCCu);
    ctx->pc = 0x221CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CC4u;
    // 0x221cc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x221CC4u, 0x221CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CCCu;
label_221ccc:
    // 0x221ccc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x221CCCu;
    {
        const bool branch_taken_0x221ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CCCu;
        // 0x221cd0: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ccc) {
            ctx->pc = 0x221D28u;
            goto label_221d28;
        }
    }
    ctx->pc = 0x221CD4u;
label_221cd4:
    // 0x221cd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221cd8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x221cdc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221ce0: 0x8c4311dc  lw          $v1, 0x11DC($v0)
    ctx->pc = 0x221ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4572)));
    // 0x221ce4: 0x8c4511e0  lw          $a1, 0x11E0($v0)
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4576)));
    // 0x221ce8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221cec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221CECu;
    SET_GPR_U32(ctx, 31, 0x221CF4u);
    ctx->pc = 0x221CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CECu;
    // 0x221cf0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221CECu, 0x221CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CF4u;
label_221cf4:
    // 0x221cf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221cf8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221CF8u;
    {
        const bool branch_taken_0x221cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x221CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CF8u;
        // 0x221cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cf8) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221D00u;
    // 0x221d00: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221d04: 0x8c6211e4  lw          $v0, 0x11E4($v1)
    ctx->pc = 0x221d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4580)));
    // 0x221d08: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221d0c:
    // 0x221d0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221d10: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x221d14: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x221d18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221d1c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x221D1Cu;
    SET_GPR_U32(ctx, 31, 0x221D24u);
    ctx->pc = 0x221D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D1Cu;
    // 0x221d20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x221D1Cu, 0x221D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D24u;
label_221d24:
    // 0x221d24: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_221d28:
    // 0x221d28: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x221D28u;
    {
        const bool branch_taken_0x221d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D28u;
        // 0x221d2c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d28) {
            ctx->pc = 0x221F00u;
            goto label_221f00;
        }
    }
    ctx->pc = 0x221D30u;
    // 0x221d30: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221d34: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x221d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x221d38: 0x8c4304c0  lw          $v1, 0x4C0($v0)
    ctx->pc = 0x221d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1216)));
    // 0x221d3c: 0x8c4504c4  lw          $a1, 0x4C4($v0)
    ctx->pc = 0x221d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1220)));
    // 0x221d40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221d44: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x221D44u;
    SET_GPR_U32(ctx, 31, 0x221D4Cu);
    ctx->pc = 0x221D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D44u;
    // 0x221d48: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x221D44u, 0x221D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D4Cu;
label_221d4c:
    // 0x221d4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221d50: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x221d50) {
            ctx->pc = 0x221D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221D50u;
            // 0x221d54: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221D68u;
            goto label_221d68;
        }
    }
    ctx->pc = 0x221D58u;
    // 0x221d58: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x221d5c: 0x8c6204c8  lw          $v0, 0x4C8($v1)
    ctx->pc = 0x221d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1224)));
    // 0x221d60: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x221d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221d64: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x221d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_221d68:
    // 0x221d68: 0x24030368  addiu       $v1, $zero, 0x368
    ctx->pc = 0x221d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x221d6c: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x221d6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x221d70: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x221D70u;
    {
        const bool branch_taken_0x221d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x221D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D70u;
        // 0x221d74: 0x28820369  slti        $v0, $a0, 0x369 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)873) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d70) {
            ctx->pc = 0x221E8Cu;
            goto label_221e8c;
        }
    }
    ctx->pc = 0x221D78u;
    // 0x221d78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221D78u;
    {
        const bool branch_taken_0x221d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D78u;
        // 0x221d7c: 0x24020362  addiu       $v0, $zero, 0x362 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d78) {
            ctx->pc = 0x221D98u;
            goto label_221d98;
        }
    }
    ctx->pc = 0x221D80u;
    // 0x221d80: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x221D80u;
    {
        const bool branch_taken_0x221d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x221D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D80u;
        // 0x221d84: 0x28820363  slti        $v0, $a0, 0x363 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)867) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d80) {
            ctx->pc = 0x221DD0u;
            goto label_221dd0;
        }
    }
    ctx->pc = 0x221D88u;
    // 0x221d88: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x221D88u;
    {
        const bool branch_taken_0x221d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221d88) {
            ctx->pc = 0x221D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221D88u;
            // 0x221d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221E90u;
            goto label_221e90;
        }
    }
    ctx->pc = 0x221D90u;
    // 0x221d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x221D90u;
    {
        const bool branch_taken_0x221d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D90u;
        // 0x221d94: 0x24020363  addiu       $v0, $zero, 0x363 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d90) {
            ctx->pc = 0x221DC0u;
            goto label_221dc0;
        }
    }
    ctx->pc = 0x221D98u;
label_221d98:
    // 0x221d98: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x221d9c: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x221D9Cu;
    {
        const bool branch_taken_0x221d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x221DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D9Cu;
        // 0x221da0: 0x28820381  slti        $v0, $a0, 0x381 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)897) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d9c) {
            ctx->pc = 0x221E4Cu;
            goto label_221e4c;
        }
    }
    ctx->pc = 0x221DA4u;
    // 0x221da4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221DA4u;
    {
        const bool branch_taken_0x221da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DA4u;
        // 0x221da8: 0x24020379  addiu       $v0, $zero, 0x379 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221da4) {
            ctx->pc = 0x221DBCu;
            goto label_221dbc;
        }
    }
    ctx->pc = 0x221DACu;
    // 0x221dac: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x221DACu;
    {
        const bool branch_taken_0x221dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x221DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DACu;
        // 0x221db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dac) {
            ctx->pc = 0x221ECCu;
            goto label_221ecc;
        }
    }
    ctx->pc = 0x221DB4u;
    // 0x221db4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x221DB4u;
    {
        const bool branch_taken_0x221db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB4u;
        // 0x221db8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221db4) {
            ctx->pc = 0x221E94u;
            goto label_221e94;
        }
    }
    ctx->pc = 0x221DBCu;
label_221dbc:
    // 0x221dbc: 0x240203b7  addiu       $v0, $zero, 0x3B7
    ctx->pc = 0x221dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
label_221dc0:
    // 0x221dc0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x221DC0u;
    {
        const bool branch_taken_0x221dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x221DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC0u;
        // 0x221dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc0) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221DC8u;
    // 0x221dc8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x221DC8u;
    {
        const bool branch_taken_0x221dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC8u;
        // 0x221dcc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc8) {
            ctx->pc = 0x221E94u;
            goto label_221e94;
        }
    }
    ctx->pc = 0x221DD0u;
label_221dd0:
    // 0x221dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x221dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221dd8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x221dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x221ddc: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x221ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221de0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221de4: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221DE4u;
    SET_GPR_U32(ctx, 31, 0x221DECu);
    ctx->pc = 0x221DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DE4u;
    // 0x221de8: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221DE4u, 0x221DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DECu;
label_221dec:
    // 0x221dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221df0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x221df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x221df4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x221df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221df8: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x221df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x221dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e00: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221E00u;
    SET_GPR_U32(ctx, 31, 0x221E08u);
    ctx->pc = 0x221E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E00u;
    // 0x221e04: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221E00u, 0x221E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E08u;
label_221e08:
    // 0x221e08: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x221E08u;
    {
        const bool branch_taken_0x221e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E08u;
        // 0x221e0c: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e08) {
            ctx->pc = 0x221F04u;
            goto label_221f04;
        }
    }
    ctx->pc = 0x221E10u;
label_221e10:
    // 0x221e10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221e14: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x221e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x221e18: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221e1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e20: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221E20u;
    SET_GPR_U32(ctx, 31, 0x221E28u);
    ctx->pc = 0x221E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E20u;
    // 0x221e24: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221E20u, 0x221E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E28u;
label_221e28:
    // 0x221e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e2c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x221e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x221e30: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221e34: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x221e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x221e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e3c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221E3Cu;
    SET_GPR_U32(ctx, 31, 0x221E44u);
    ctx->pc = 0x221E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E3Cu;
    // 0x221e40: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221E3Cu, 0x221E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E44u;
label_221e44:
    // 0x221e44: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x221E44u;
    {
        const bool branch_taken_0x221e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E44u;
        // 0x221e48: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e44) {
            ctx->pc = 0x221F04u;
            goto label_221f04;
        }
    }
    ctx->pc = 0x221E4Cu;
label_221e4c:
    // 0x221e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221e54: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x221e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x221e58: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x221e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e60: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221E60u;
    SET_GPR_U32(ctx, 31, 0x221E68u);
    ctx->pc = 0x221E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E60u;
    // 0x221e64: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221E60u, 0x221E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E68u;
label_221e68:
    // 0x221e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e6c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221e70: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221e74: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x221e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x221e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e7c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221E7Cu;
    SET_GPR_U32(ctx, 31, 0x221E84u);
    ctx->pc = 0x221E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E7Cu;
    // 0x221e80: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221E7Cu, 0x221E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E84u;
label_221e84:
    // 0x221e84: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x221E84u;
    {
        const bool branch_taken_0x221e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E84u;
        // 0x221e88: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e84) {
            ctx->pc = 0x221F04u;
            goto label_221f04;
        }
    }
    ctx->pc = 0x221E8Cu;
label_221e8c:
    // 0x221e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221e90:
    // 0x221e90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x221e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_221e94:
    // 0x221e94: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x221e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x221e98: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221e9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ea0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221EA0u;
    SET_GPR_U32(ctx, 31, 0x221EA8u);
    ctx->pc = 0x221EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EA0u;
    // 0x221ea4: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221EA0u, 0x221EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EA8u;
label_221ea8:
    // 0x221ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x221eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x221eb0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x221eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221eb4: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x221eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x221eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ebc: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221EBCu;
    SET_GPR_U32(ctx, 31, 0x221EC4u);
    ctx->pc = 0x221EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EBCu;
    // 0x221ec0: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221EBCu, 0x221EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EC4u;
label_221ec4:
    // 0x221ec4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x221EC4u;
    {
        const bool branch_taken_0x221ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC4u;
        // 0x221ec8: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ec4) {
            ctx->pc = 0x221F04u;
            goto label_221f04;
        }
    }
    ctx->pc = 0x221ECCu;
label_221ecc:
    // 0x221ecc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x221eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221ed0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x221ed4: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x221ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x221ed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221edc: 0xc098278  jal         func_2609E0
    ctx->pc = 0x221EDCu;
    SET_GPR_U32(ctx, 31, 0x221EE4u);
    ctx->pc = 0x221EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EDCu;
    // 0x221ee0: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x221EDCu, 0x221EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EE4u;
label_221ee4:
    // 0x221ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x221ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x221eec: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x221eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221ef0: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x221ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x221ef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ef8: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x221EF8u;
    SET_GPR_U32(ctx, 31, 0x221F00u);
    ctx->pc = 0x221EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EF8u;
    // 0x221efc: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x221EF8u, 0x221F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F00u;
label_221f00:
    // 0x221f00: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x221f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
label_221f04:
    // 0x221f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f10: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x221f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221f1c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x221F1Cu;
    SET_GPR_U32(ctx, 31, 0x221F24u);
    ctx->pc = 0x221F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F1Cu;
    // 0x221f20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x221F1Cu, 0x221F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F24u;
label_221f24:
    // 0x221f24: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x221f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x221f28: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x221f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x221f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221f30: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x221f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x221f34: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x221f34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_221f38:
    // 0x221f38: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x221F38u;
    SET_GPR_U32(ctx, 31, 0x221F40u);
    ctx->pc = 0x221F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F38u;
    // 0x221f3c: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x221F38u, 0x221F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F40u;
label_221f40:
    // 0x221f40: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x221f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f48: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x221f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x221f4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x221f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x221f50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x221f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x221f54: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x221f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x221f58: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x221f58u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x221f5c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x221F5Cu;
    SET_GPR_U32(ctx, 31, 0x221F64u);
    ctx->pc = 0x221F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F5Cu;
    // 0x221f60: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x221F5Cu, 0x221F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F64u;
label_221f64:
    // 0x221f64: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x221f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221f68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221f6c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x221f6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x221f70: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x221f70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x221f74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x221F74u;
    SET_GPR_U32(ctx, 31, 0x221F7Cu);
    ctx->pc = 0x221F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F74u;
    // 0x221f78: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x221F74u, 0x221F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F7Cu;
label_221f7c:
    // 0x221f7c: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x221f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f80: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x221f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x221f84: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x221f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x221f88: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x221f88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x221f8c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x221F8Cu;
    SET_GPR_U32(ctx, 31, 0x221F94u);
    ctx->pc = 0x221F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F8Cu;
    // 0x221f90: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x221F8Cu, 0x221F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F94u;
label_221f94:
    // 0x221f94: 0xc6220604  lwc1        $f2, 0x604($s1)
    ctx->pc = 0x221f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x221f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221f9c: 0x0  nop
    ctx->pc = 0x221f9cu;
    // NOP
    // 0x221fa0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x221fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221fa4: 0x0  nop
    ctx->pc = 0x221fa4u;
    // NOP
    // 0x221fa8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x221FA8u;
    {
        const bool branch_taken_0x221fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FA8u;
        // 0x221fac: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fa8) {
            ctx->pc = 0x221FCCu;
            goto label_221fcc;
        }
    }
    ctx->pc = 0x221FB0u;
    // 0x221fb0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x221fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221fb4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x221fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x221fb8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x221fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x221fbc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x221fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x221fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x221fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x221fc4: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x221fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x221fc8: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x221fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_221fcc:
    // 0x221fcc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x221FCCu;
    SET_GPR_U32(ctx, 31, 0x221FD4u);
    ctx->pc = 0x221FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FCCu;
    // 0x221fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x221FCCu, 0x221FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FD4u;
label_221fd4:
    // 0x221fd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x221FD4u;
    {
        const bool branch_taken_0x221fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FD4u;
        // 0x221fd8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd4) {
            ctx->pc = 0x222010u;
            goto label_222010;
        }
    }
    ctx->pc = 0x221FDCu;
    // 0x221fdc: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x221fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x221fe0: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x221FE0u;
    SET_GPR_U32(ctx, 31, 0x221FE8u);
    ctx->pc = 0x221FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FE0u;
    // 0x221fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x221FE0u, 0x221FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE8u;
label_221fe8:
    // 0x221fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221FE8u;
    {
        const bool branch_taken_0x221fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FE8u;
        // 0x221fec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fe8) {
            ctx->pc = 0x222000u;
            goto label_222000;
        }
    }
    ctx->pc = 0x221FF0u;
    // 0x221ff0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x221FF0u;
    SET_GPR_U32(ctx, 31, 0x221FF8u);
    ctx->pc = 0x221FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FF0u;
    // 0x221ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x221FF0u, 0x221FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FF8u;
label_221ff8:
    // 0x221ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221FF8u;
    {
        const bool branch_taken_0x221ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FF8u;
        // 0x221ffc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ff8) {
            ctx->pc = 0x222008u;
            goto label_222008;
        }
    }
    ctx->pc = 0x222000u;
label_222000:
    // 0x222000: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x222000u;
    {
        const bool branch_taken_0x222000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222000u;
        // 0x222004: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222000) {
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x222008u;
label_222008:
    // 0x222008: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22200c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22200cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_222010:
    // 0x222010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222014: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x222014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x222018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22201c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22201Cu;
    SET_GPR_U32(ctx, 31, 0x222024u);
    ctx->pc = 0x222020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22201Cu;
    // 0x222020: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22201Cu, 0x222024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222024u;
label_222024:
    // 0x222024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x222024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x222028: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x222028u;
    SET_GPR_U32(ctx, 31, 0x222030u);
    ctx->pc = 0x22202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222028u;
    // 0x22202c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x222028u, 0x222030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222030u;
label_222030:
    // 0x222030: 0x100004b4  b           . + 4 + (0x4B4 << 2)
    ctx->pc = 0x222030u;
    {
        const bool branch_taken_0x222030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222030u;
        // 0x222034: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222030) {
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x222038u;
label_222038:
    // 0x222038: 0xc09d91a  jal         func_276468
    ctx->pc = 0x222038u;
    SET_GPR_U32(ctx, 31, 0x222040u);
    ctx->pc = 0x22203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222038u;
    // 0x22203c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x222038u, 0x222040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222040u;
label_222040:
    // 0x222040: 0x8e2306ec  lw          $v1, 0x6EC($s1)
    ctx->pc = 0x222040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x222044: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x222044u;
    {
        const bool branch_taken_0x222044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222044u;
        // 0x222048: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222044) {
            ctx->pc = 0x2220F4u;
            goto label_2220f4;
        }
    }
    ctx->pc = 0x22204Cu;
    // 0x22204c: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x22204cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222050: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x222050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x222054: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x222054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x222058: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x222058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22205c: 0x8ca204cc  lw          $v0, 0x4CC($a1)
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1228)));
    // 0x222060: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222060u;
    SET_GPR_U32(ctx, 31, 0x222068u);
    ctx->pc = 0x222064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222060u;
    // 0x222064: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222060u, 0x222068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222068u;
label_222068:
    // 0x222068: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22206c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22206Cu;
    {
        const bool branch_taken_0x22206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22206Cu;
        // 0x222070: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22206c) {
            ctx->pc = 0x2220ACu;
            goto label_2220ac;
        }
    }
    ctx->pc = 0x222074u;
    // 0x222074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222078: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x222078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22207c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222080: 0x8c4604d0  lw          $a2, 0x4D0($v0)
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x222084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222088: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x222088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22208c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222090: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x222090u;
    SET_GPR_U32(ctx, 31, 0x222098u);
    ctx->pc = 0x222094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222090u;
    // 0x222094: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x222090u, 0x222098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222098u;
label_222098:
    // 0x222098: 0x8e2906ec  lw          $t1, 0x6EC($s1)
    ctx->pc = 0x222098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x22209c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220a0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2220a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2220A4u;
    {
        const bool branch_taken_0x2220a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220A4u;
        // 0x2220a8: 0x24060081  addiu       $a2, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220a4) {
            ctx->pc = 0x2220E0u;
            goto label_2220e0;
        }
    }
    ctx->pc = 0x2220ACu;
label_2220ac:
    // 0x2220ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2220acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2220b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2220b4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2220b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220b8: 0x8c4604d0  lw          $a2, 0x4D0($v0)
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x2220bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2220c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2220c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2220c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2220C8u;
    SET_GPR_U32(ctx, 31, 0x2220D0u);
    ctx->pc = 0x2220CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220C8u;
    // 0x2220cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2220C8u, 0x2220D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220D0u;
label_2220d0:
    // 0x2220d0: 0x8e2906ec  lw          $t1, 0x6EC($s1)
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x2220d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2220d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220d8: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2220dc: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2220dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_2220e0:
    // 0x2220e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2220e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220e4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x2220E4u;
    SET_GPR_U32(ctx, 31, 0x2220ECu);
    ctx->pc = 0x2220E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220E4u;
    // 0x2220e8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x2220E4u, 0x2220ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220ECu;
label_2220ec:
    // 0x2220ec: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2220ECu;
    {
        const bool branch_taken_0x2220ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220ECu;
        // 0x2220f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220ec) {
            ctx->pc = 0x22244Cu;
            goto label_22244c;
        }
    }
    ctx->pc = 0x2220F4u;
label_2220f4:
    // 0x2220f4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2220f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2220f8: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x2220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
    // 0x2220fc: 0x2c83005d  sltiu       $v1, $a0, 0x5D
    ctx->pc = 0x2220fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)93) ? 1 : 0);
    // 0x222100: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x222100u;
    {
        const bool branch_taken_0x222100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222100u;
        // 0x222104: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222100) {
            ctx->pc = 0x222120u;
            goto label_222120;
        }
    }
    ctx->pc = 0x222108u;
    // 0x222108: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22210c: 0x24427e10  addiu       $v0, $v0, 0x7E10
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
    // 0x222110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x222114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222118: 0x800008  jr          $a0
    ctx->pc = 0x222118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222120u: goto label_222120;
            case 0x22215Cu: goto label_22215c;
            case 0x222198u: goto label_222198;
            case 0x2221D4u: goto label_2221d4;
            case 0x222210u: goto label_222210;
            case 0x22224Cu: goto label_22224c;
            case 0x222288u: goto label_222288;
            case 0x2222C4u: goto label_2222c4;
            case 0x222314u: goto label_222314;
            case 0x222350u: goto label_222350;
            case 0x22238Cu: goto label_22238c;
            case 0x2223C8u: goto label_2223c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222118u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222124: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222128: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22212c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222130: 0x8c651c90  lw          $a1, 0x1C90($v1)
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7312)));
    // 0x222134: 0x8c621c94  lw          $v0, 0x1C94($v1)
    ctx->pc = 0x222134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7316)));
    // 0x222138: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x222138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22213c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22213Cu;
    SET_GPR_U32(ctx, 31, 0x222144u);
    ctx->pc = 0x222140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22213Cu;
    // 0x222140: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22213Cu, 0x222144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222144u;
label_222144:
    // 0x222144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222148: 0x144300ae  bne         $v0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x222148u;
    {
        const bool branch_taken_0x222148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222148) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222150u;
    // 0x222150: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222154: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x222154u;
    {
        const bool branch_taken_0x222154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222154u;
        // 0x222158: 0x8c621c98  lw          $v0, 0x1C98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222154) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x22215Cu;
label_22215c:
    // 0x22215c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222160: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222164: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x222168: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22216c: 0x8c651c90  lw          $a1, 0x1C90($v1)
    ctx->pc = 0x22216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7312)));
    // 0x222170: 0x8c621c9c  lw          $v0, 0x1C9C($v1)
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7324)));
    // 0x222174: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x222174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x222178: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222178u;
    SET_GPR_U32(ctx, 31, 0x222180u);
    ctx->pc = 0x22217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222178u;
    // 0x22217c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222178u, 0x222180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222184: 0x1443009f  bne         $v0, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x222184u;
    {
        const bool branch_taken_0x222184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222184) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x22218Cu;
    // 0x22218c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222190: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x222190u;
    {
        const bool branch_taken_0x222190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222190u;
        // 0x222194: 0x8c621ca0  lw          $v0, 0x1CA0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222190) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x222198u;
label_222198:
    // 0x222198: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22219c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2221a0: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x2221a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2221a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2221a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221a8: 0x8c651dcc  lw          $a1, 0x1DCC($v1)
    ctx->pc = 0x2221a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7628)));
    // 0x2221ac: 0x8c621dd0  lw          $v0, 0x1DD0($v1)
    ctx->pc = 0x2221acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7632)));
    // 0x2221b0: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2221b4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2221B4u;
    SET_GPR_U32(ctx, 31, 0x2221BCu);
    ctx->pc = 0x2221B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221B4u;
    // 0x2221b8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2221B4u, 0x2221BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221BCu;
label_2221bc:
    // 0x2221bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2221c0: 0x14430090  bne         $v0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2221C0u;
    {
        const bool branch_taken_0x2221c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2221c0) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x2221C8u;
    // 0x2221c8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2221cc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2221CCu;
    {
        const bool branch_taken_0x2221cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221CCu;
        // 0x2221d0: 0x8c621dd4  lw          $v0, 0x1DD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221cc) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x2221D4u;
label_2221d4:
    // 0x2221d4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2221d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2221d8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2221d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2221dc: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x2221dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2221e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2221e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221e4: 0x8c653620  lw          $a1, 0x3620($v1)
    ctx->pc = 0x2221e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13856)));
    // 0x2221e8: 0x8c623624  lw          $v0, 0x3624($v1)
    ctx->pc = 0x2221e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13860)));
    // 0x2221ec: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2221ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2221f0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2221F0u;
    SET_GPR_U32(ctx, 31, 0x2221F8u);
    ctx->pc = 0x2221F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221F0u;
    // 0x2221f4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2221F0u, 0x2221F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221F8u;
label_2221f8:
    // 0x2221f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2221f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2221fc: 0x14430081  bne         $v0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2221FCu;
    {
        const bool branch_taken_0x2221fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2221fc) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222204u;
    // 0x222204: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222208: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x222208u;
    {
        const bool branch_taken_0x222208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222208u;
        // 0x22220c: 0x8c623628  lw          $v0, 0x3628($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222208) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x222210u;
label_222210:
    // 0x222210: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222214: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222218: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22221c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22221cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222220: 0x8c653644  lw          $a1, 0x3644($v1)
    ctx->pc = 0x222220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13892)));
    // 0x222224: 0x8c623648  lw          $v0, 0x3648($v1)
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13896)));
    // 0x222228: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x222228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22222c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22222Cu;
    SET_GPR_U32(ctx, 31, 0x222234u);
    ctx->pc = 0x222230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22222Cu;
    // 0x222230: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22222Cu, 0x222234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222234u;
label_222234:
    // 0x222234: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222238: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x222238u;
    {
        const bool branch_taken_0x222238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222238) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222240u;
    // 0x222240: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222244: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x222244u;
    {
        const bool branch_taken_0x222244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222244u;
        // 0x222248: 0x8c62364c  lw          $v0, 0x364C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222244) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x22224Cu;
label_22224c:
    // 0x22224c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222250: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222254: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x222258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22225c: 0x8c6530f0  lw          $a1, 0x30F0($v1)
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12528)));
    // 0x222260: 0x8c6230f4  lw          $v0, 0x30F4($v1)
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12532)));
    // 0x222264: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x222264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x222268: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222268u;
    SET_GPR_U32(ctx, 31, 0x222270u);
    ctx->pc = 0x22226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222268u;
    // 0x22226c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222268u, 0x222270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222270u;
label_222270:
    // 0x222270: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222274: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x222274u;
    {
        const bool branch_taken_0x222274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222274) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x22227Cu;
    // 0x22227c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222280: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x222280u;
    {
        const bool branch_taken_0x222280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222280u;
        // 0x222284: 0x8c6230f8  lw          $v0, 0x30F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222280) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x222288u;
label_222288:
    // 0x222288: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22228c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222290: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x222294: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222298: 0x8c652de8  lw          $a1, 0x2DE8($v1)
    ctx->pc = 0x222298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11752)));
    // 0x22229c: 0x8c622dec  lw          $v0, 0x2DEC($v1)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11756)));
    // 0x2222a0: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2222a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2222A4u;
    SET_GPR_U32(ctx, 31, 0x2222ACu);
    ctx->pc = 0x2222A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222A4u;
    // 0x2222a8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2222A4u, 0x2222ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222ACu;
label_2222ac:
    // 0x2222ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2222acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2222b0: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2222B0u;
    {
        const bool branch_taken_0x2222b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2222b0) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x2222B8u;
    // 0x2222b8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2222b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2222bc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2222BCu;
    {
        const bool branch_taken_0x2222bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222BCu;
        // 0x2222c0: 0x8c622df0  lw          $v0, 0x2DF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222bc) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x2222C4u;
label_2222c4:
    // 0x2222c4: 0x8e240704  lw          $a0, 0x704($s1)
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x2222c8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2222cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2222ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2222d0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2222d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222d4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2222d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2222d8: 0x24170077  addiu       $s7, $zero, 0x77
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2222dc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2222dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2222e0: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2222e4: 0x8c453588  lw          $a1, 0x3588($v0)
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13704)));
    // 0x2222e8: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2222e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2222ec: 0x8c46358c  lw          $a2, 0x358C($v0)
    ctx->pc = 0x2222ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13708)));
    // 0x2222f0: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x2222f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2222f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2222F4u;
    SET_GPR_U32(ctx, 31, 0x2222FCu);
    ctx->pc = 0x2222F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222F4u;
    // 0x2222f8: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2222F4u, 0x2222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222FCu;
label_2222fc:
    // 0x2222fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2222fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222300: 0x54430040  bnel        $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x222300u;
    {
        const bool branch_taken_0x222300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222300) {
            ctx->pc = 0x222304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222300u;
            // 0x222304: 0x24160013  addiu       $s6, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222308u;
    // 0x222308: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22230c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22230Cu;
    {
        const bool branch_taken_0x22230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22230Cu;
        // 0x222310: 0x8c623590  lw          $v0, 0x3590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22230c) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x222314u;
label_222314:
    // 0x222314: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222318: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x22231c: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x22231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x222320: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222324: 0x8c653cec  lw          $a1, 0x3CEC($v1)
    ctx->pc = 0x222324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15596)));
    // 0x222328: 0x8c623cf0  lw          $v0, 0x3CF0($v1)
    ctx->pc = 0x222328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15600)));
    // 0x22232c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x22232cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x222330: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222330u;
    SET_GPR_U32(ctx, 31, 0x222338u);
    ctx->pc = 0x222334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222330u;
    // 0x222334: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222330u, 0x222338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22233c: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x22233Cu;
    {
        const bool branch_taken_0x22233c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22233c) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222344u;
    // 0x222344: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222348: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x222348u;
    {
        const bool branch_taken_0x222348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222348u;
        // 0x22234c: 0x8c623cf4  lw          $v0, 0x3CF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222348) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x222350u;
label_222350:
    // 0x222350: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222354: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222358: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22235c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22235cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222360: 0x8c650248  lw          $a1, 0x248($v1)
    ctx->pc = 0x222360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 584)));
    // 0x222364: 0x8c62024c  lw          $v0, 0x24C($v1)
    ctx->pc = 0x222364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x222368: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x222368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22236c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22236Cu;
    SET_GPR_U32(ctx, 31, 0x222374u);
    ctx->pc = 0x222370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22236Cu;
    // 0x222370: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22236Cu, 0x222374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222374u;
label_222374:
    // 0x222374: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222378: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x222378u;
    {
        const bool branch_taken_0x222378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222378) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x222380u;
    // 0x222380: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222384: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x222384u;
    {
        const bool branch_taken_0x222384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222384u;
        // 0x222388: 0x8c620250  lw          $v0, 0x250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222384) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x22238Cu;
label_22238c:
    // 0x22238c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222390: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x222394: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x222398: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22239c: 0x8c653b9c  lw          $a1, 0x3B9C($v1)
    ctx->pc = 0x22239cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15260)));
    // 0x2223a0: 0x8c623ba0  lw          $v0, 0x3BA0($v1)
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15264)));
    // 0x2223a4: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2223a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2223a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2223A8u;
    SET_GPR_U32(ctx, 31, 0x2223B0u);
    ctx->pc = 0x2223ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A8u;
    // 0x2223ac: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2223A8u, 0x2223B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223B0u;
label_2223b0:
    // 0x2223b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2223b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2223b4: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2223B4u;
    {
        const bool branch_taken_0x2223b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2223b4) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x2223BCu;
    // 0x2223bc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2223bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2223c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2223C0u;
    {
        const bool branch_taken_0x2223c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223C0u;
        // 0x2223c4: 0x8c623ba4  lw          $v0, 0x3BA4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223c0) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x2223C8u;
label_2223c8:
    // 0x2223c8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2223cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2223d0: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x2223d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2223d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2223d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223d8: 0x8c6511e8  lw          $a1, 0x11E8($v1)
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4584)));
    // 0x2223dc: 0x8c6211ec  lw          $v0, 0x11EC($v1)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x2223e0: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2223e4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2223E4u;
    SET_GPR_U32(ctx, 31, 0x2223ECu);
    ctx->pc = 0x2223E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223E4u;
    // 0x2223e8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2223E4u, 0x2223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ECu;
label_2223ec:
    // 0x2223ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2223f0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2223F0u;
    {
        const bool branch_taken_0x2223f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2223f0) {
            ctx->pc = 0x222404u;
            goto label_222404;
        }
    }
    ctx->pc = 0x2223F8u;
    // 0x2223f8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2223fc: 0x8c6211f0  lw          $v0, 0x11F0($v1)
    ctx->pc = 0x2223fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4592)));
label_222400:
    // 0x222400: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222404:
    // 0x222404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x222404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22240c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22240cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222410: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x222410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222418: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22241c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22241Cu;
    SET_GPR_U32(ctx, 31, 0x222424u);
    ctx->pc = 0x222420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22241Cu;
    // 0x222420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22241Cu, 0x222424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222424u;
label_222424:
    // 0x222424: 0x3ae204e2  xori        $v0, $s7, 0x4E2
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1250);
    // 0x222428: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222428u;
    {
        const bool branch_taken_0x222428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222428u;
        // 0x22242c: 0x8fa90004  lw          $t1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222428) {
            ctx->pc = 0x222448u;
            goto label_222448;
        }
    }
    ctx->pc = 0x222430u;
    // 0x222430: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x222430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222434: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x222434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222438: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x222438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22243c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222440: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x222440u;
    SET_GPR_U32(ctx, 31, 0x222448u);
    ctx->pc = 0x222444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222440u;
    // 0x222444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x222440u, 0x222448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222448u;
label_222448:
    // 0x222448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22244c:
    // 0x22244c: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x222450: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222450u;
    SET_GPR_U32(ctx, 31, 0x222458u);
    ctx->pc = 0x222454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222450u;
    // 0x222454: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222450u, 0x222458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222458u;
label_222458:
    // 0x222458: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x222458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22245c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22245Cu;
    {
        const bool branch_taken_0x22245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22245c) {
            ctx->pc = 0x222460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22245Cu;
            // 0x222460: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222480u;
            goto label_222480;
        }
    }
    ctx->pc = 0x222464u;
    // 0x222464: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222464u;
    SET_GPR_U32(ctx, 31, 0x22246Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222464u, 0x22246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22246Cu;
label_22246c:
    // 0x22246c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222470: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222470u;
        // 0x222474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222470) {
            ctx->pc = 0x22247Cu;
            goto label_22247c;
        }
    }
    ctx->pc = 0x222478u;
    // 0x222478: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x222478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_22247c:
    // 0x22247c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_222480:
    // 0x222480: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x222480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x222484: 0x2c830047  sltiu       $v1, $a0, 0x47
    ctx->pc = 0x222484u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)71) ? 1 : 0);
    // 0x222488: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x222488u;
    {
        const bool branch_taken_0x222488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222488u;
        // 0x22248c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222488) {
            ctx->pc = 0x222574u;
            goto label_222574;
        }
    }
    ctx->pc = 0x222490u;
    // 0x222490: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x222494: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x222494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x222498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22249c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2224a0: 0x800008  jr          $a0
    ctx->pc = 0x2224A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2224A8u: goto label_2224a8;
            case 0x2224C8u: goto label_2224c8;
            case 0x2224F8u: goto label_2224f8;
            case 0x222530u: goto label_222530;
            case 0x222574u: goto label_222574;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2224A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2224A8u;
label_2224a8:
    // 0x2224a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2224A8u;
    SET_GPR_U32(ctx, 31, 0x2224B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2224A8u, 0x2224B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224B0u;
label_2224b0:
    // 0x2224b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2224b4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2224B4u;
    {
        const bool branch_taken_0x2224b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2224b4) {
            ctx->pc = 0x2224B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2224B4u;
            // 0x2224b8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222578u;
            goto label_222578;
        }
    }
    ctx->pc = 0x2224BCu;
    // 0x2224bc: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x2224bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x2224c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2224C0u;
    {
        const bool branch_taken_0x2224c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C0u;
        // 0x2224c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c0) {
            ctx->pc = 0x222570u;
            goto label_222570;
        }
    }
    ctx->pc = 0x2224C8u;
label_2224c8:
    // 0x2224c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2224C8u;
    SET_GPR_U32(ctx, 31, 0x2224D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2224C8u, 0x2224D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224D0u;
label_2224d0:
    // 0x2224d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2224d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2224d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224d8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2224d8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2224dc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2224DCu;
    {
        const bool branch_taken_0x2224dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2224dc) {
            ctx->pc = 0x2224E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2224DCu;
            // 0x2224e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2224E4u;
            goto label_2224e4;
        }
    }
    ctx->pc = 0x2224E4u;
label_2224e4:
    // 0x2224e4: 0x2010  mfhi        $a0
    ctx->pc = 0x2224e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2224e8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2224E8u;
    {
        const bool branch_taken_0x2224e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2224ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E8u;
        // 0x2224ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e8) {
            ctx->pc = 0x222558u;
            goto label_222558;
        }
    }
    ctx->pc = 0x2224F0u;
    // 0x2224f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2224F0u;
    {
        const bool branch_taken_0x2224f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224F0u;
        // 0x2224f4: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224f0) {
            ctx->pc = 0x222574u;
            goto label_222574;
        }
    }
    ctx->pc = 0x2224F8u;
label_2224f8:
    // 0x2224f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2224f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2224fc: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x222500: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222500u;
    SET_GPR_U32(ctx, 31, 0x222508u);
    ctx->pc = 0x222504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222500u;
    // 0x222504: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222500u, 0x222508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222508u;
label_222508:
    // 0x222508: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x222508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22250c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22250Cu;
    {
        const bool branch_taken_0x22250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22250c) {
            ctx->pc = 0x222510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22250Cu;
            // 0x222510: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222578u;
            goto label_222578;
        }
    }
    ctx->pc = 0x222514u;
    // 0x222514: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222514u;
    SET_GPR_U32(ctx, 31, 0x22251Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222514u, 0x22251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22251Cu;
label_22251c:
    // 0x22251c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222520: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x222520u;
    {
        const bool branch_taken_0x222520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222520) {
            ctx->pc = 0x222574u;
            goto label_222574;
        }
    }
    ctx->pc = 0x222528u;
    // 0x222528: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x222528u;
    {
        const bool branch_taken_0x222528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222528u;
        // 0x22252c: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222528) {
            ctx->pc = 0x222574u;
            goto label_222574;
        }
    }
    ctx->pc = 0x222530u;
label_222530:
    // 0x222530: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222530u;
    SET_GPR_U32(ctx, 31, 0x222538u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222530u, 0x222538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222538u;
label_222538:
    // 0x222538: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22253c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222540: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x222540u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x222544: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x222544u;
    {
        const bool branch_taken_0x222544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x222544) {
            ctx->pc = 0x222548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222544u;
            // 0x222548: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22254Cu;
            goto label_22254c;
        }
    }
    ctx->pc = 0x22254Cu;
label_22254c:
    // 0x22254c: 0x2010  mfhi        $a0
    ctx->pc = 0x22254cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x222550: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x222550u;
    {
        const bool branch_taken_0x222550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x222554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222550u;
        // 0x222554: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222550) {
            ctx->pc = 0x222570u;
            goto label_222570;
        }
    }
    ctx->pc = 0x222558u;
label_222558:
    // 0x222558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222558u;
    {
        const bool branch_taken_0x222558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222558u;
        // 0x22255c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222558) {
            ctx->pc = 0x222568u;
            goto label_222568;
        }
    }
    ctx->pc = 0x222560u;
    // 0x222560: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222560u;
    {
        const bool branch_taken_0x222560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x222564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222560u;
        // 0x222564: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222560) {
            ctx->pc = 0x222570u;
            goto label_222570;
        }
    }
    ctx->pc = 0x222568u;
label_222568:
    // 0x222568: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222568u;
    {
        const bool branch_taken_0x222568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222568u;
        // 0x22256c: 0xa6250568  sh          $a1, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222568) {
            ctx->pc = 0x222574u;
            goto label_222574;
        }
    }
    ctx->pc = 0x222570u;
label_222570:
    // 0x222570: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x222570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_222574:
    // 0x222574: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x222574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_222578:
    // 0x222578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22257c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22257cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_222580:
    // 0x222580: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x222580u;
    SET_GPR_U32(ctx, 31, 0x222588u);
    ctx->pc = 0x222584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222580u;
    // 0x222584: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x222580u, 0x222588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222588u;
label_222588:
    // 0x222588: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x222588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22258c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222590: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x222590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x222594: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x222598: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x222598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22259c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2225a0: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2225a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2225a4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2225A4u;
    SET_GPR_U32(ctx, 31, 0x2225ACu);
    ctx->pc = 0x2225A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225A4u;
    // 0x2225a8: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2225A4u, 0x2225ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225ACu;
label_2225ac:
    // 0x2225ac: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x2225acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2225b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2225b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2225b4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2225b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2225b8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2225b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2225bc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2225BCu;
    SET_GPR_U32(ctx, 31, 0x2225C4u);
    ctx->pc = 0x2225C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225BCu;
    // 0x2225c0: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2225BCu, 0x2225C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225C4u;
label_2225c4:
    // 0x2225c4: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x2225c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2225c8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2225c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2225cc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2225ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2225d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2225d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2225d4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2225D4u;
    SET_GPR_U32(ctx, 31, 0x2225DCu);
    ctx->pc = 0x2225D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225D4u;
    // 0x2225d8: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2225D4u, 0x2225DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225DCu;
label_2225dc:
    // 0x2225dc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2225dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x2225e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2225E0u;
    SET_GPR_U32(ctx, 31, 0x2225E8u);
    ctx->pc = 0x2225E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225E0u;
    // 0x2225e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2225E0u, 0x2225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2225E8u;
    {
        const bool branch_taken_0x2225e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225E8u;
        // 0x2225ec: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225e8) {
            ctx->pc = 0x22268Cu;
            goto label_22268c;
        }
    }
    ctx->pc = 0x2225F0u;
    // 0x2225f0: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x2225f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x2225f4: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x2225f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x2225f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2225fc: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2225FCu;
    {
        const bool branch_taken_0x2225fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x222600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225FCu;
        // 0x222600: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225fc) {
            ctx->pc = 0x222638u;
            goto label_222638;
        }
    }
    ctx->pc = 0x222604u;
    // 0x222604: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x222608: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222608u;
    {
        const bool branch_taken_0x222608 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x22260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222608u;
        // 0x22260c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222608) {
            ctx->pc = 0x222648u;
            goto label_222648;
        }
    }
    ctx->pc = 0x222610u;
    // 0x222610: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x222610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222614: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x222618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22261c: 0x0  nop
    ctx->pc = 0x22261cu;
    // NOP
    // 0x222620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222624: 0x0  nop
    ctx->pc = 0x222624u;
    // NOP
    // 0x222628: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x222628u;
    {
        const bool branch_taken_0x222628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222628) {
            ctx->pc = 0x22262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222628u;
            // 0x22262c: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222650u;
            goto label_222650;
        }
    }
    ctx->pc = 0x222630u;
    // 0x222630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222630u;
    {
        const bool branch_taken_0x222630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222630u;
        // 0x222634: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222630) {
            ctx->pc = 0x22264Cu;
            goto label_22264c;
        }
    }
    ctx->pc = 0x222638u;
label_222638:
    // 0x222638: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x222638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22263c: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22263Cu;
    {
        const bool branch_taken_0x22263c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x22263c) {
            ctx->pc = 0x222640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22263Cu;
            // 0x222640: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222650u;
            goto label_222650;
        }
    }
    ctx->pc = 0x222644u;
    // 0x222644: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x222644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_222648:
    // 0x222648: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x222648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22264c:
    // 0x22264c: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x22264cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_222650:
    // 0x222650: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222650u;
    {
        const bool branch_taken_0x222650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222650u;
        // 0x222654: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222650) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222658u;
    // 0x222658: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x222658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22265c:
    // 0x22265c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x222660: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x222660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x222664: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x222664u;
    SET_GPR_U32(ctx, 31, 0x22266Cu);
    ctx->pc = 0x222668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222664u;
    // 0x222668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x222664u, 0x22266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22266Cu;
label_22266c:
    // 0x22266c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22266Cu;
    {
        const bool branch_taken_0x22266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22266Cu;
        // 0x222670: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22266c) {
            ctx->pc = 0x222684u;
            goto label_222684;
        }
    }
    ctx->pc = 0x222674u;
    // 0x222674: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x222674u;
    SET_GPR_U32(ctx, 31, 0x22267Cu);
    ctx->pc = 0x222678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222674u;
    // 0x222678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x222674u, 0x22267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22267Cu;
label_22267c:
    // 0x22267c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22267Cu;
    {
        const bool branch_taken_0x22267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22267Cu;
        // 0x222680: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22267c) {
            ctx->pc = 0x222688u;
            goto label_222688;
        }
    }
    ctx->pc = 0x222684u;
label_222684:
    // 0x222684: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x222684u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_222688:
    // 0x222688: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_22268c:
    // 0x22268c: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x222690: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222690u;
    {
        const bool branch_taken_0x222690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222690u;
        // 0x222694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222690) {
            ctx->pc = 0x2226C0u;
            goto label_2226c0;
        }
    }
    ctx->pc = 0x222698u;
    // 0x222698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22269c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22269cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2226a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2226A0u;
    SET_GPR_U32(ctx, 31, 0x2226A8u);
    ctx->pc = 0x2226A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226A0u;
    // 0x2226a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2226A0u, 0x2226A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226A8u;
label_2226a8:
    // 0x2226a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2226a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2226ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2226acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2226b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2226B0u;
    SET_GPR_U32(ctx, 31, 0x2226B8u);
    ctx->pc = 0x2226B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226B0u;
    // 0x2226b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2226B0u, 0x2226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226B8u;
label_2226b8:
    // 0x2226b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2226B8u;
    {
        const bool branch_taken_0x2226b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2226BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226B8u;
        // 0x2226bc: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226b8) {
            ctx->pc = 0x2226E0u;
            goto label_2226e0;
        }
    }
    ctx->pc = 0x2226C0u;
label_2226c0:
    // 0x2226c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2226c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2226c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2226c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2226c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2226C8u;
    SET_GPR_U32(ctx, 31, 0x2226D0u);
    ctx->pc = 0x2226CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226C8u;
    // 0x2226cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2226C8u, 0x2226D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226D0u;
label_2226d0:
    // 0x2226d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2226d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2226d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2226D4u;
    SET_GPR_U32(ctx, 31, 0x2226DCu);
    ctx->pc = 0x2226D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226D4u;
    // 0x2226d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2226D4u, 0x2226DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226DCu;
label_2226dc:
    // 0x2226dc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2226dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2226e0:
    // 0x2226e0: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x2226e4: 0x54620307  bnel        $v1, $v0, . + 4 + (0x307 << 2)
    ctx->pc = 0x2226E4u;
    {
        const bool branch_taken_0x2226e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2226e4) {
            ctx->pc = 0x2226E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2226E4u;
            // 0x2226e8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x2226ECu;
    // 0x2226ec: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2226ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2226f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2226f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2226f4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2226F4u;
    {
        const bool branch_taken_0x2226f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2226f4) {
            ctx->pc = 0x2226F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2226F4u;
            // 0x2226f8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22272Cu;
            goto label_22272c;
        }
    }
    ctx->pc = 0x2226FCu;
    // 0x2226fc: 0xc09c36c  jal         func_270DB0
    ctx->pc = 0x2226FCu;
    SET_GPR_U32(ctx, 31, 0x222704u);
    ctx->pc = 0x222700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226FCu;
    // 0x222700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB0u, 0x2226FCu, 0x222704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222704u;
label_222704:
    // 0x222704: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x222704u;
    {
        const bool branch_taken_0x222704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222704) {
            ctx->pc = 0x222708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222704u;
            // 0x222708: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22272Cu;
            goto label_22272c;
        }
    }
    ctx->pc = 0x22270Cu;
    // 0x22270c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22270Cu;
    SET_GPR_U32(ctx, 31, 0x222714u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22270Cu, 0x222714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222714u;
label_222714:
    // 0x222714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x222714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22271c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x22271Cu;
    SET_GPR_U32(ctx, 31, 0x222724u);
    ctx->pc = 0x222720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22271Cu;
    // 0x222720: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x22271Cu, 0x222724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222724u;
label_222724:
    // 0x222724: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x222724u;
    {
        const bool branch_taken_0x222724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222724u;
        // 0x222728: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222724) {
            ctx->pc = 0x222EF4u;
            goto label_222ef4;
        }
    }
    ctx->pc = 0x22272Cu;
label_22272c:
    // 0x22272c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x22272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x222730: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x222730u;
    {
        const bool branch_taken_0x222730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222730u;
        // 0x222734: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222730) {
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x222738u;
label_222738:
    // 0x222738: 0xc09d91a  jal         func_276468
    ctx->pc = 0x222738u;
    SET_GPR_U32(ctx, 31, 0x222740u);
    ctx->pc = 0x22273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222738u;
    // 0x22273c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x222738u, 0x222740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222740u;
label_222740:
    // 0x222740: 0x8e2306ec  lw          $v1, 0x6EC($s1)
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x222744: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x222744u;
    {
        const bool branch_taken_0x222744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222744u;
        // 0x222748: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222744) {
            ctx->pc = 0x222888u;
            goto label_222888;
        }
    }
    ctx->pc = 0x22274Cu;
    // 0x22274c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222750: 0x24040368  addiu       $a0, $zero, 0x368
    ctx->pc = 0x222750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x222754: 0x946602fe  lhu         $a2, 0x2FE($v1)
    ctx->pc = 0x222754u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x222758: 0x8c4304e0  lw          $v1, 0x4E0($v0)
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
    // 0x22275c: 0x10c40024  beq         $a2, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22275Cu;
    {
        const bool branch_taken_0x22275c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x222760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22275Cu;
        // 0x222760: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22275c) {
            ctx->pc = 0x2227F0u;
            goto label_2227f0;
        }
    }
    ctx->pc = 0x222764u;
    // 0x222764: 0x28c20369  slti        $v0, $a2, 0x369
    ctx->pc = 0x222764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)873) ? 1 : 0);
    // 0x222768: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222768u;
    {
        const bool branch_taken_0x222768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222768u;
        // 0x22276c: 0x24020362  addiu       $v0, $zero, 0x362 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222768) {
            ctx->pc = 0x222784u;
            goto label_222784;
        }
    }
    ctx->pc = 0x222770u;
    // 0x222770: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x222770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x222774: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222774u;
    {
        const bool branch_taken_0x222774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x222778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222774u;
        // 0x222778: 0x28c20381  slti        $v0, $a2, 0x381 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)897) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222774) {
            ctx->pc = 0x22278Cu;
            goto label_22278c;
        }
    }
    ctx->pc = 0x22277Cu;
    // 0x22277c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22277Cu;
    {
        const bool branch_taken_0x22277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22277Cu;
        // 0x222780: 0x24020379  addiu       $v0, $zero, 0x379 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22277c) {
            ctx->pc = 0x22278Cu;
            goto label_22278c;
        }
    }
    ctx->pc = 0x222784u;
label_222784:
    // 0x222784: 0x50c2001b  beql        $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x222784u;
    {
        const bool branch_taken_0x222784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x222784) {
            ctx->pc = 0x222788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222784u;
            // 0x222788: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2227F4u;
            goto label_2227f4;
        }
    }
    ctx->pc = 0x22278Cu;
label_22278c:
    // 0x22278c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222790: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222790u;
    SET_GPR_U32(ctx, 31, 0x222798u);
    ctx->pc = 0x222794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222790u;
    // 0x222794: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222790u, 0x222798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222798u;
label_222798:
    // 0x222798: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22279c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22279Cu;
    {
        const bool branch_taken_0x22279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22279Cu;
        // 0x2227a0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22279c) {
            ctx->pc = 0x2227DCu;
            goto label_2227dc;
        }
    }
    ctx->pc = 0x2227A4u;
    // 0x2227a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2227a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2227a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2227ac: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2227acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227b0: 0x8c4604e4  lw          $a2, 0x4E4($v0)
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x2227b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2227b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2227bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2227bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2227C0u;
    SET_GPR_U32(ctx, 31, 0x2227C8u);
    ctx->pc = 0x2227C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227C0u;
    // 0x2227c4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2227C0u, 0x2227C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227C8u;
label_2227c8:
    // 0x2227c8: 0x8e2906ec  lw          $t1, 0x6EC($s1)
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x2227cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2227ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227d0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2227d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2227D4u;
    {
        const bool branch_taken_0x2227d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227D4u;
        // 0x2227d8: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227d4) {
            ctx->pc = 0x222874u;
            goto label_222874;
        }
    }
    ctx->pc = 0x2227DCu;
label_2227dc:
    // 0x2227dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2227dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2227e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2227e4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2227e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2227E8u;
    {
        const bool branch_taken_0x2227e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227E8u;
        // 0x2227ec: 0x8c4604e4  lw          $a2, 0x4E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227e8) {
            ctx->pc = 0x222850u;
            goto label_222850;
        }
    }
    ctx->pc = 0x2227F0u;
label_2227f0:
    // 0x2227f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2227f4:
    // 0x2227f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2227F4u;
    SET_GPR_U32(ctx, 31, 0x2227FCu);
    ctx->pc = 0x2227F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227F4u;
    // 0x2227f8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2227F4u, 0x2227FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227FCu;
label_2227fc:
    // 0x2227fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222800: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x222800u;
    {
        const bool branch_taken_0x222800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222800u;
        // 0x222804: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222800) {
            ctx->pc = 0x222840u;
            goto label_222840;
        }
    }
    ctx->pc = 0x222808u;
    // 0x222808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22280c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22280cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222810: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x222810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222814: 0x8c4604e8  lw          $a2, 0x4E8($v0)
    ctx->pc = 0x222814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
    // 0x222818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22281c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x22281cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222820: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x222820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222824: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x222824u;
    SET_GPR_U32(ctx, 31, 0x22282Cu);
    ctx->pc = 0x222828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222824u;
    // 0x222828: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x222824u, 0x22282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22282Cu;
label_22282c:
    // 0x22282c: 0x8e2906ec  lw          $t1, 0x6EC($s1)
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x222830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222834: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x222838: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x222838u;
    {
        const bool branch_taken_0x222838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222838u;
        // 0x22283c: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222838) {
            ctx->pc = 0x222874u;
            goto label_222874;
        }
    }
    ctx->pc = 0x222840u;
label_222840:
    // 0x222840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222844: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x222844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222848: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x222848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22284c: 0x8c4604e8  lw          $a2, 0x4E8($v0)
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_222850:
    // 0x222850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222854: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x222854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222858: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x222858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22285c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22285Cu;
    SET_GPR_U32(ctx, 31, 0x222864u);
    ctx->pc = 0x222860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22285Cu;
    // 0x222860: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22285Cu, 0x222864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222864u;
label_222864:
    // 0x222864: 0x8e2906ec  lw          $t1, 0x6EC($s1)
    ctx->pc = 0x222864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x222868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22286c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x222870: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_222874:
    // 0x222874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222878: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x222878u;
    SET_GPR_U32(ctx, 31, 0x222880u);
    ctx->pc = 0x22287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222878u;
    // 0x22287c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x222878u, 0x222880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222880u;
label_222880:
    // 0x222880: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x222880u;
    {
        const bool branch_taken_0x222880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222880u;
        // 0x222884: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222880) {
            ctx->pc = 0x222B90u;
            goto label_222b90;
        }
    }
    ctx->pc = 0x222888u;
label_222888:
    // 0x222888: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22288c: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
    // 0x222890: 0x2c83005d  sltiu       $v1, $a0, 0x5D
    ctx->pc = 0x222890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)93) ? 1 : 0);
    // 0x222894: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x222894u;
    {
        const bool branch_taken_0x222894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222894u;
        // 0x222898: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222894) {
            ctx->pc = 0x2228B4u;
            goto label_2228b4;
        }
    }
    ctx->pc = 0x22289Cu;
    // 0x22289c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2228a0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x2228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x2228a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2228a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2228a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2228a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2228ac: 0x800008  jr          $a0
    ctx->pc = 0x2228ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2228B4u: goto label_2228b4;
            case 0x2228ECu: goto label_2228ec;
            case 0x222924u: goto label_222924;
            case 0x22295Cu: goto label_22295c;
            case 0x222994u: goto label_222994;
            case 0x2229CCu: goto label_2229cc;
            case 0x2229E4u: goto label_2229e4;
            case 0x222A1Cu: goto label_222a1c;
            case 0x222A68u: goto label_222a68;
            case 0x222AA0u: goto label_222aa0;
            case 0x222AD8u: goto label_222ad8;
            case 0x222B10u: goto label_222b10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2228ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2228B4u;
label_2228b4:
    // 0x2228b4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2228b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2228b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2228b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2228bc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2228c0: 0x8c431ca4  lw          $v1, 0x1CA4($v0)
    ctx->pc = 0x2228c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7332)));
    // 0x2228c4: 0x8c451ca8  lw          $a1, 0x1CA8($v0)
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7336)));
    // 0x2228c8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2228c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2228cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2228CCu;
    SET_GPR_U32(ctx, 31, 0x2228D4u);
    ctx->pc = 0x2228D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228CCu;
    // 0x2228d0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2228CCu, 0x2228D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228D4u;
label_2228d4:
    // 0x2228d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2228d8: 0x1443009b  bne         $v0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x2228D8u;
    {
        const bool branch_taken_0x2228d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2228d8) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x2228E0u;
    // 0x2228e0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2228e4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2228E4u;
    {
        const bool branch_taken_0x2228e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E4u;
        // 0x2228e8: 0x8c621cac  lw          $v0, 0x1CAC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e4) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x2228ECu;
label_2228ec:
    // 0x2228ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2228f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2228f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2228f8: 0x8c431ca4  lw          $v1, 0x1CA4($v0)
    ctx->pc = 0x2228f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7332)));
    // 0x2228fc: 0x8c451cb0  lw          $a1, 0x1CB0($v0)
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7344)));
    // 0x222900: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222904: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222904u;
    SET_GPR_U32(ctx, 31, 0x22290Cu);
    ctx->pc = 0x222908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222904u;
    // 0x222908: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222904u, 0x22290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22290Cu;
label_22290c:
    // 0x22290c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222910: 0x1443008d  bne         $v0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x222910u;
    {
        const bool branch_taken_0x222910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222910) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222918u;
    // 0x222918: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22291c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x22291Cu;
    {
        const bool branch_taken_0x22291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22291Cu;
        // 0x222920: 0x8c621cb4  lw          $v0, 0x1CB4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22291c) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222924u;
label_222924:
    // 0x222924: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222928: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22292c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222930: 0x8c431dd8  lw          $v1, 0x1DD8($v0)
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7640)));
    // 0x222934: 0x8c451ddc  lw          $a1, 0x1DDC($v0)
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7644)));
    // 0x222938: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22293c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22293Cu;
    SET_GPR_U32(ctx, 31, 0x222944u);
    ctx->pc = 0x222940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22293Cu;
    // 0x222940: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22293Cu, 0x222944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222944u;
label_222944:
    // 0x222944: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222948: 0x1443007f  bne         $v0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x222948u;
    {
        const bool branch_taken_0x222948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222948) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222950u;
    // 0x222950: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222954: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x222954u;
    {
        const bool branch_taken_0x222954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222954u;
        // 0x222958: 0x8c621de0  lw          $v0, 0x1DE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222954) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x22295Cu;
label_22295c:
    // 0x22295c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222960: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222964: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222968: 0x8c43362c  lw          $v1, 0x362C($v0)
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13868)));
    // 0x22296c: 0x8c453630  lw          $a1, 0x3630($v0)
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x222970: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222974: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222974u;
    SET_GPR_U32(ctx, 31, 0x22297Cu);
    ctx->pc = 0x222978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222974u;
    // 0x222978: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222974u, 0x22297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22297Cu;
label_22297c:
    // 0x22297c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222980: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x222980u;
    {
        const bool branch_taken_0x222980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222980) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222988u;
    // 0x222988: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22298c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22298Cu;
    {
        const bool branch_taken_0x22298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22298Cu;
        // 0x222990: 0x8c623634  lw          $v0, 0x3634($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22298c) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222994u;
label_222994:
    // 0x222994: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222998: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22299c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2229a0: 0x8c433650  lw          $v1, 0x3650($v0)
    ctx->pc = 0x2229a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13904)));
    // 0x2229a4: 0x8c453654  lw          $a1, 0x3654($v0)
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13908)));
    // 0x2229a8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2229ac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2229ACu;
    SET_GPR_U32(ctx, 31, 0x2229B4u);
    ctx->pc = 0x2229B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229ACu;
    // 0x2229b0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2229ACu, 0x2229B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229B4u;
label_2229b4:
    // 0x2229b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2229b8: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2229B8u;
    {
        const bool branch_taken_0x2229b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2229b8) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x2229C0u;
    // 0x2229c0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2229c4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2229C4u;
    {
        const bool branch_taken_0x2229c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229C4u;
        // 0x2229c8: 0x8c623658  lw          $v0, 0x3658($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229c4) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x2229CCu;
label_2229cc:
    // 0x2229cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2229d0: 0x8c4330fc  lw          $v1, 0x30FC($v0)
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12540)));
    // 0x2229d4: 0x8c443100  lw          $a0, 0x3100($v0)
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12544)));
    // 0x2229d8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2229dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2229DCu;
    {
        const bool branch_taken_0x2229dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229DCu;
        // 0x2229e0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229dc) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x2229E4u;
label_2229e4:
    // 0x2229e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2229e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2229ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2229ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2229f0: 0x8c432df4  lw          $v1, 0x2DF4($v0)
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11764)));
    // 0x2229f4: 0x8c452df8  lw          $a1, 0x2DF8($v0)
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11768)));
    // 0x2229f8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2229fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2229FCu;
    SET_GPR_U32(ctx, 31, 0x222A04u);
    ctx->pc = 0x222A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229FCu;
    // 0x222a00: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2229FCu, 0x222A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A04u;
label_222a04:
    // 0x222a04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222a08: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x222A08u;
    {
        const bool branch_taken_0x222a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222a08) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222A10u;
    // 0x222a10: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222a14: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x222A14u;
    {
        const bool branch_taken_0x222a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A14u;
        // 0x222a18: 0x8c622dfc  lw          $v0, 0x2DFC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a14) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222A1Cu;
label_222a1c:
    // 0x222a1c: 0x8e230704  lw          $v1, 0x704($s1)
    ctx->pc = 0x222a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x222a20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222a24: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222a28: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222a2c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x222a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x222a30: 0x24170077  addiu       $s7, $zero, 0x77
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x222a34: 0x8c433594  lw          $v1, 0x3594($v0)
    ctx->pc = 0x222a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13716)));
    // 0x222a38: 0x24160016  addiu       $s6, $zero, 0x16
    ctx->pc = 0x222a38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x222a3c: 0x8c453598  lw          $a1, 0x3598($v0)
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13720)));
    // 0x222a40: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222a44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222a48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222A48u;
    SET_GPR_U32(ctx, 31, 0x222A50u);
    ctx->pc = 0x222A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A48u;
    // 0x222a4c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222A48u, 0x222A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A50u;
label_222a50:
    // 0x222a50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222a54: 0x5443003c  bnel        $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x222A54u;
    {
        const bool branch_taken_0x222a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222a54) {
            ctx->pc = 0x222A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222A54u;
            // 0x222a58: 0x24160015  addiu       $s6, $zero, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222A5Cu;
    // 0x222a5c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222a60: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x222A60u;
    {
        const bool branch_taken_0x222a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A60u;
        // 0x222a64: 0x8c62359c  lw          $v0, 0x359C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a60) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222A68u;
label_222a68:
    // 0x222a68: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222a6c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222a70: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222a74: 0x8c433cf8  lw          $v1, 0x3CF8($v0)
    ctx->pc = 0x222a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15608)));
    // 0x222a78: 0x8c453cfc  lw          $a1, 0x3CFC($v0)
    ctx->pc = 0x222a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15612)));
    // 0x222a7c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222a80: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222A80u;
    SET_GPR_U32(ctx, 31, 0x222A88u);
    ctx->pc = 0x222A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A80u;
    // 0x222a84: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222A80u, 0x222A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A88u;
label_222a88:
    // 0x222a88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222a8c: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x222A8Cu;
    {
        const bool branch_taken_0x222a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222a8c) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222A94u;
    // 0x222a94: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222a98: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x222A98u;
    {
        const bool branch_taken_0x222a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A98u;
        // 0x222a9c: 0x8c623d00  lw          $v0, 0x3D00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a98) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222AA0u;
label_222aa0:
    // 0x222aa0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222aa4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222aa8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222aac: 0x8c430254  lw          $v1, 0x254($v0)
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x222ab0: 0x8c450258  lw          $a1, 0x258($v0)
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x222ab4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222ab8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222AB8u;
    SET_GPR_U32(ctx, 31, 0x222AC0u);
    ctx->pc = 0x222ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AB8u;
    // 0x222abc: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222AB8u, 0x222AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AC0u;
label_222ac0:
    // 0x222ac0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222ac4: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x222AC4u;
    {
        const bool branch_taken_0x222ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222ac4) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222ACCu;
    // 0x222acc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222ad0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x222AD0u;
    {
        const bool branch_taken_0x222ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AD0u;
        // 0x222ad4: 0x8c62025c  lw          $v0, 0x25C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ad0) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222AD8u;
label_222ad8:
    // 0x222ad8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222adc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222ae0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222ae4: 0x8c433ba8  lw          $v1, 0x3BA8($v0)
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15272)));
    // 0x222ae8: 0x8c453bac  lw          $a1, 0x3BAC($v0)
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15276)));
    // 0x222aec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222af0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222AF0u;
    SET_GPR_U32(ctx, 31, 0x222AF8u);
    ctx->pc = 0x222AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AF0u;
    // 0x222af4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222AF0u, 0x222AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AF8u;
label_222af8:
    // 0x222af8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222afc: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x222AFCu;
    {
        const bool branch_taken_0x222afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222afc) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222B04u;
    // 0x222b04: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222b08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x222B08u;
    {
        const bool branch_taken_0x222b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B08u;
        // 0x222b0c: 0x8c623bb0  lw          $v0, 0x3BB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b08) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222B10u;
label_222b10:
    // 0x222b10: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222b14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x222b18: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x222b1c: 0x8c4311f4  lw          $v1, 0x11F4($v0)
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x222b20: 0x8c4511f8  lw          $a1, 0x11F8($v0)
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4600)));
    // 0x222b24: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x222b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222b28: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x222B28u;
    SET_GPR_U32(ctx, 31, 0x222B30u);
    ctx->pc = 0x222B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B28u;
    // 0x222b2c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x222B28u, 0x222B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B30u;
label_222b30:
    // 0x222b30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222b34: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x222B34u;
    {
        const bool branch_taken_0x222b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222b34) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222B3Cu;
    // 0x222b3c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222b40: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x222b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
label_222b44:
    // 0x222b44: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222b48:
    // 0x222b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x222b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222b4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x222b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b54: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x222b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222b60: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x222B60u;
    SET_GPR_U32(ctx, 31, 0x222B68u);
    ctx->pc = 0x222B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B60u;
    // 0x222b64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x222B60u, 0x222B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B68u;
label_222b68:
    // 0x222b68: 0x3ae204e2  xori        $v0, $s7, 0x4E2
    ctx->pc = 0x222b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1250);
    // 0x222b6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222B6Cu;
    {
        const bool branch_taken_0x222b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B6Cu;
        // 0x222b70: 0x8fa90004  lw          $t1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b6c) {
            ctx->pc = 0x222B8Cu;
            goto label_222b8c;
        }
    }
    ctx->pc = 0x222B74u;
    // 0x222b74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x222b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b78: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x222b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b7c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x222b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b84: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x222B84u;
    SET_GPR_U32(ctx, 31, 0x222B8Cu);
    ctx->pc = 0x222B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B84u;
    // 0x222b88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x222B84u, 0x222B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B8Cu;
label_222b8c:
    // 0x222b8c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x222b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_222b90:
    // 0x222b90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x222b94: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x222b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x222b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x222b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x222b9c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x222b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x222ba0: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x222ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_222ba4:
    // 0x222ba4: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x222ba8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x222BA8u;
    {
        const bool branch_taken_0x222ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BA8u;
        // 0x222bac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ba8) {
            ctx->pc = 0x222C14u;
            goto label_222c14;
        }
    }
    ctx->pc = 0x222BB0u;
    // 0x222bb0: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x222bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x222bb4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x222BB4u;
    SET_GPR_U32(ctx, 31, 0x222BBCu);
    ctx->pc = 0x222BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BB4u;
    // 0x222bb8: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x222BB4u, 0x222BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BBCu;
label_222bbc:
    // 0x222bbc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x222bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bc4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x222bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x222bc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x222bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x222bcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x222bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x222bd0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x222bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x222bd4: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x222bd4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x222bd8: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x222BD8u;
    SET_GPR_U32(ctx, 31, 0x222BE0u);
    ctx->pc = 0x222BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BD8u;
    // 0x222bdc: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x222BD8u, 0x222BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BE0u;
label_222be0:
    // 0x222be0: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x222be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222be4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x222be4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x222be8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x222be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x222bec: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x222becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x222bf0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x222BF0u;
    SET_GPR_U32(ctx, 31, 0x222BF8u);
    ctx->pc = 0x222BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BF0u;
    // 0x222bf4: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x222BF0u, 0x222BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BF8u;
label_222bf8:
    // 0x222bf8: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x222bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222bfc: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x222bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x222c00: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x222c00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x222c04: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x222c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x222c08: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x222C08u;
    SET_GPR_U32(ctx, 31, 0x222C10u);
    ctx->pc = 0x222C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C08u;
    // 0x222c0c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x222C08u, 0x222C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C10u;
label_222c10:
    // 0x222c10: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x222c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_222c14:
    // 0x222c14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x222C14u;
    SET_GPR_U32(ctx, 31, 0x222C1Cu);
    ctx->pc = 0x222C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C14u;
    // 0x222c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x222C14u, 0x222C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C1Cu;
label_222c1c:
    // 0x222c1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x222C1Cu;
    {
        const bool branch_taken_0x222c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C1Cu;
        // 0x222c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c1c) {
            ctx->pc = 0x222C64u;
            goto label_222c64;
        }
    }
    ctx->pc = 0x222C24u;
    // 0x222c24: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x222c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x222c28: 0x2444fdf5  addiu       $a0, $v0, -0x20B
    ctx->pc = 0x222c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966773));
    // 0x222c2c: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x222c2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x222c30: 0x106001a0  beqz        $v1, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x222C30u;
    {
        const bool branch_taken_0x222c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C30u;
        // 0x222c34: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c30) {
            ctx->pc = 0x2232B4u;
            goto label_2232b4;
        }
    }
    ctx->pc = 0x222C38u;
    // 0x222c38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x222c3c: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
    // 0x222c40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222c44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222c48: 0x800008  jr          $a0
    ctx->pc = 0x222C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222C50u: goto label_222c50;
            case 0x2232B4u: goto label_2232b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222C48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222C50u;
label_222c50:
    // 0x222c50: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x222c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x222c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c58: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x222c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x222c5c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x222C5Cu;
    {
        const bool branch_taken_0x222c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C5Cu;
        // 0x222c60: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c5c) {
            ctx->pc = 0x222EFCu;
            goto label_222efc;
        }
    }
    ctx->pc = 0x222C64u;
label_222c64:
    // 0x222c64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222c68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x222c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x222c6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x222C6Cu;
    SET_GPR_U32(ctx, 31, 0x222C74u);
    ctx->pc = 0x222C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C6Cu;
    // 0x222c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x222C6Cu, 0x222C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C74u;
label_222c74:
    // 0x222c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x222c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x222c78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x222C78u;
    SET_GPR_U32(ctx, 31, 0x222C80u);
    ctx->pc = 0x222C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C78u;
    // 0x222c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x222C78u, 0x222C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C80u;
label_222c80:
    // 0x222c80: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x222c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x222c84: 0x5440019e  bnel        $v0, $zero, . + 4 + (0x19E << 2)
    ctx->pc = 0x222C84u;
    {
        const bool branch_taken_0x222c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222c84) {
            ctx->pc = 0x222C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222C84u;
            // 0x222c88: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x222C8Cu;
    // 0x222c8c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x222C8Cu;
    {
        const bool branch_taken_0x222c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C8Cu;
        // 0x222c90: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c8c) {
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x222C94u;
label_222c94:
    // 0x222c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c98: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x222c98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x222c9c: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x222c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x222ca0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x222CA0u;
    SET_GPR_U32(ctx, 31, 0x222CA8u);
    ctx->pc = 0x222CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CA0u;
    // 0x222ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x222CA0u, 0x222CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CA8u;
label_222ca8:
    // 0x222ca8: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x222ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222cac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x222cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x222cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222cb4: 0x0  nop
    ctx->pc = 0x222cb4u;
    // NOP
    // 0x222cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222cbc: 0x0  nop
    ctx->pc = 0x222cbcu;
    // NOP
    // 0x222cc0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x222CC0u;
    {
        const bool branch_taken_0x222cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CC0u;
        // 0x222cc4: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cc0) {
            ctx->pc = 0x222D10u;
            goto label_222d10;
        }
    }
    ctx->pc = 0x222CC8u;
    // 0x222cc8: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222ccc: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x222cd0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x222cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x222cd4: 0x8ce32b0c  lw          $v1, 0x2B0C($a3)
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11020)));
    // 0x222cd8: 0x8ce42b10  lw          $a0, 0x2B10($a3)
    ctx->pc = 0x222cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11024)));
    // 0x222cdc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x222cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x222ce0: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x222ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222ce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222CE4u;
    {
        const bool branch_taken_0x222ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CE4u;
        // 0x222ce8: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ce4) {
            ctx->pc = 0x222CF4u;
            goto label_222cf4;
        }
    }
    ctx->pc = 0x222CECu;
    // 0x222cec: 0x8ce22b14  lw          $v0, 0x2B14($a3)
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11028)));
    // 0x222cf0: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_222cf4:
    // 0x222cf4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x222cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cfc: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x222cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x222d00: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x222d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x222d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d08: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x222D08u;
    {
        const bool branch_taken_0x222d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D08u;
        // 0x222d0c: 0x24070037  addiu       $a3, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d08) {
            ctx->pc = 0x222D74u;
            goto label_222d74;
        }
    }
    ctx->pc = 0x222D10u;
label_222d10:
    // 0x222d10: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x222d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x222d14: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x222d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x222d18: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222D18u;
    {
        const bool branch_taken_0x222d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222d18) {
            ctx->pc = 0x222D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222D18u;
            // 0x222d1c: 0x8e270304  lw          $a3, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222D34u;
            goto label_222d34;
        }
    }
    ctx->pc = 0x222D20u;
    // 0x222d20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222D20u;
    SET_GPR_U32(ctx, 31, 0x222D28u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222D20u, 0x222D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D28u;
label_222d28:
    // 0x222d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222d2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x222D2Cu;
    {
        const bool branch_taken_0x222d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D2Cu;
        // 0x222d30: 0x8e270304  lw          $a3, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d2c) {
            ctx->pc = 0x222D88u;
            goto label_222d88;
        }
    }
    ctx->pc = 0x222D34u;
label_222d34:
    // 0x222d34: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x222d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x222d38: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x222d3c: 0x8ce32a50  lw          $v1, 0x2A50($a3)
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10832)));
    // 0x222d40: 0x8ce42a54  lw          $a0, 0x2A54($a3)
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10836)));
    // 0x222d44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x222d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x222d48: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x222d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D4Cu;
    {
        const bool branch_taken_0x222d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D4Cu;
        // 0x222d50: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d4c) {
            ctx->pc = 0x222D5Cu;
            goto label_222d5c;
        }
    }
    ctx->pc = 0x222D54u;
    // 0x222d54: 0x8ce22a58  lw          $v0, 0x2A58($a3)
    ctx->pc = 0x222d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10840)));
    // 0x222d58: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x222d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_222d5c:
    // 0x222d5c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x222d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x222d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d64: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x222d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x222d68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x222d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x222d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d70: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x222d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_222d74:
    // 0x222d74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x222d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222d78: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x222D78u;
    SET_GPR_U32(ctx, 31, 0x222D80u);
    ctx->pc = 0x222D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D78u;
    // 0x222d7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x222D78u, 0x222D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D80u;
label_222d80:
    // 0x222d80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x222D80u;
    {
        const bool branch_taken_0x222d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d80) {
            ctx->pc = 0x222DD4u;
            goto label_222dd4;
        }
    }
    ctx->pc = 0x222D88u;
label_222d88:
    // 0x222d88: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x222d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x222d8c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x222d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x222d90: 0x8ce32b58  lw          $v1, 0x2B58($a3)
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11096)));
    // 0x222d94: 0x8ce42b5c  lw          $a0, 0x2B5C($a3)
    ctx->pc = 0x222d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11100)));
    // 0x222d98: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x222d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x222d9c: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x222d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222DA0u;
    {
        const bool branch_taken_0x222da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA0u;
        // 0x222da4: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222da0) {
            ctx->pc = 0x222DB0u;
            goto label_222db0;
        }
    }
    ctx->pc = 0x222DA8u;
    // 0x222da8: 0x8ce22b60  lw          $v0, 0x2B60($a3)
    ctx->pc = 0x222da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11104)));
    // 0x222dac: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x222dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_222db0:
    // 0x222db0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x222db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x222db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222db8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x222db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x222dbc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x222dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x222dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222dc4: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x222dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x222dc8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x222dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222dcc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x222DCCu;
    SET_GPR_U32(ctx, 31, 0x222DD4u);
    ctx->pc = 0x222DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DCCu;
    // 0x222dd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x222DCCu, 0x222DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DD4u;
label_222dd4:
    // 0x222dd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x222dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222dd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ddc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x222ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222de0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x222de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222de8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222dec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x222DECu;
    SET_GPR_U32(ctx, 31, 0x222DF4u);
    ctx->pc = 0x222DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DECu;
    // 0x222df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x222DECu, 0x222DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DF4u;
label_222df4:
    // 0x222df4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x222df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x222df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222dfc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x222dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_222e00:
    // 0x222e00: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x222e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x222e04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222E04u;
    {
        const bool branch_taken_0x222e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E04u;
        // 0x222e08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e04) {
            ctx->pc = 0x222E34u;
            goto label_222e34;
        }
    }
    ctx->pc = 0x222E0Cu;
    // 0x222e0c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x222E0Cu;
    SET_GPR_U32(ctx, 31, 0x222E14u);
    ctx->pc = 0x222E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E0Cu;
    // 0x222e10: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x222E0Cu, 0x222E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E14u;
label_222e14:
    // 0x222e14: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x222e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e1c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x222e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x222e20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x222e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x222e24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x222e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222e28: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x222e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x222e2c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x222E2Cu;
    SET_GPR_U32(ctx, 31, 0x222E34u);
    ctx->pc = 0x222E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E2Cu;
    // 0x222e30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x222E2Cu, 0x222E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E34u;
label_222e34:
    // 0x222e34: 0xc055f06  jal         func_157C18
    ctx->pc = 0x222E34u;
    SET_GPR_U32(ctx, 31, 0x222E3Cu);
    ctx->pc = 0x222E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E34u;
    // 0x222e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x222E34u, 0x222E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E3Cu;
label_222e3c:
    // 0x222e3c: 0x1440011d  bnez        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x222E3Cu;
    {
        const bool branch_taken_0x222e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222e3c) {
            ctx->pc = 0x2232B4u;
            goto label_2232b4;
        }
    }
    ctx->pc = 0x222E44u;
    // 0x222e44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222e48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x222e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x222e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e50: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x222E50u;
    SET_GPR_U32(ctx, 31, 0x222E58u);
    ctx->pc = 0x222E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E50u;
    // 0x222e54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x222E50u, 0x222E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E58u;
label_222e58:
    // 0x222e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x222e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x222e5c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x222E5Cu;
    SET_GPR_U32(ctx, 31, 0x222E64u);
    ctx->pc = 0x222E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E5Cu;
    // 0x222e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x222E5Cu, 0x222E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E64u;
label_222e64:
    // 0x222e64: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x222e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x222e68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x222e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x222e6c: 0x50400125  beql        $v0, $zero, . + 4 + (0x125 << 2)
    ctx->pc = 0x222E6Cu;
    {
        const bool branch_taken_0x222e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e6c) {
            ctx->pc = 0x222E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222E6Cu;
            // 0x222e70: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x222E74u;
    // 0x222e74: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x222e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222e78: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x222e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222e80: 0x0  nop
    ctx->pc = 0x222e80u;
    // NOP
    // 0x222e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222e88: 0x0  nop
    ctx->pc = 0x222e88u;
    // NOP
    // 0x222e8c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x222E8Cu;
    {
        const bool branch_taken_0x222e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222e8c) {
            ctx->pc = 0x222EE0u;
            goto label_222ee0;
        }
    }
    ctx->pc = 0x222E94u;
    // 0x222e94: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x222e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x222e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222e9c: 0x0  nop
    ctx->pc = 0x222e9cu;
    // NOP
    // 0x222ea0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ea4: 0x0  nop
    ctx->pc = 0x222ea4u;
    // NOP
    // 0x222ea8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x222EA8u;
    {
        const bool branch_taken_0x222ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222ea8) {
            ctx->pc = 0x222EE0u;
            goto label_222ee0;
        }
    }
    ctx->pc = 0x222EB0u;
    // 0x222eb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222EB0u;
    SET_GPR_U32(ctx, 31, 0x222EB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222EB0u, 0x222EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EB8u;
label_222eb8:
    // 0x222eb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222ebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222EBCu;
    {
        const bool branch_taken_0x222ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222ebc) {
            ctx->pc = 0x222EE0u;
            goto label_222ee0;
        }
    }
    ctx->pc = 0x222EC4u;
    // 0x222ec4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222EC4u;
    SET_GPR_U32(ctx, 31, 0x222ECCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222EC4u, 0x222ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222ECCu;
label_222ecc:
    // 0x222ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222ed0: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x222ED0u;
    {
        const bool branch_taken_0x222ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED0u;
        // 0x222ed4: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed0) {
            ctx->pc = 0x223168u;
            goto label_223168;
        }
    }
    ctx->pc = 0x222ED8u;
    // 0x222ed8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x222ED8u;
    {
        const bool branch_taken_0x222ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED8u;
        // 0x222edc: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed8) {
            ctx->pc = 0x223170u;
            goto label_223170;
        }
    }
    ctx->pc = 0x222EE0u;
label_222ee0:
    // 0x222ee0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222EE0u;
    SET_GPR_U32(ctx, 31, 0x222EE8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222EE0u, 0x222EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EE8u;
label_222ee8:
    // 0x222ee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222EECu;
    {
        const bool branch_taken_0x222eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EECu;
        // 0x222ef0: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eec) {
            ctx->pc = 0x222F08u;
            goto label_222f08;
        }
    }
    ctx->pc = 0x222EF4u;
label_222ef4:
    // 0x222ef4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x222ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x222ef8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x222ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_222efc:
    // 0x222efc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x222efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x222f00: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x222F00u;
    {
        const bool branch_taken_0x222f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F00u;
        // 0x222f04: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f00) {
            ctx->pc = 0x22343Cu;
            goto label_22343c;
        }
    }
    ctx->pc = 0x222F08u;
label_222f08:
    // 0x222f08: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x222f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x222f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222f10: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x222F10u;
    {
        const bool branch_taken_0x222f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F10u;
        // 0x222f14: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f10) {
            ctx->pc = 0x22343Cu;
            goto label_22343c;
        }
    }
    ctx->pc = 0x222F18u;
label_222f18:
    // 0x222f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222f1c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x222f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x222f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f24: 0xc09d91a  jal         func_276468
    ctx->pc = 0x222F24u;
    SET_GPR_U32(ctx, 31, 0x222F2Cu);
    ctx->pc = 0x222F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F24u;
    // 0x222f28: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x222F24u, 0x222F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F2Cu;
label_222f2c:
    // 0x222f2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222F2Cu;
    SET_GPR_U32(ctx, 31, 0x222F34u);
    ctx->pc = 0x222F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F2Cu;
    // 0x222f30: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222F2Cu, 0x222F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F34u;
label_222f34:
    // 0x222f34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222f38: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x222F38u;
    {
        const bool branch_taken_0x222f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F38u;
        // 0x222f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f38) {
            ctx->pc = 0x222FA0u;
            goto label_222fa0;
        }
    }
    ctx->pc = 0x222F40u;
    // 0x222f40: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x222f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x222f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f48: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x222f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x222f4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x222f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222f50: 0xc098278  jal         func_2609E0
    ctx->pc = 0x222F50u;
    SET_GPR_U32(ctx, 31, 0x222F58u);
    ctx->pc = 0x222F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F50u;
    // 0x222f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x222F50u, 0x222F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F58u;
label_222f58:
    // 0x222f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f5c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x222f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x222f60: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x222f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x222f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x222f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222f6c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x222F6Cu;
    SET_GPR_U32(ctx, 31, 0x222F74u);
    ctx->pc = 0x222F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F6Cu;
    // 0x222f70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x222F6Cu, 0x222F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F74u;
label_222f74:
    // 0x222f74: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x222f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222f78: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x222f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x222f7c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x222f80: 0x8ce32b18  lw          $v1, 0x2B18($a3)
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11032)));
    // 0x222f84: 0x8ce42b1c  lw          $a0, 0x2B1C($a3)
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
    // 0x222f88: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x222f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x222f8c: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x222f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222f90: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x222F90u;
    {
        const bool branch_taken_0x222f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F90u;
        // 0x222f94: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f90) {
            ctx->pc = 0x22304Cu;
            goto label_22304c;
        }
    }
    ctx->pc = 0x222F98u;
    // 0x222f98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x222F98u;
    {
        const bool branch_taken_0x222f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F98u;
        // 0x222f9c: 0x8ce22b20  lw          $v0, 0x2B20($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f98) {
            ctx->pc = 0x223048u;
            goto label_223048;
        }
    }
    ctx->pc = 0x222FA0u;
label_222fa0:
    // 0x222fa0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x222fa4: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x222fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x222fa8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222FA8u;
    {
        const bool branch_taken_0x222fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FA8u;
        // 0x222fac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fa8) {
            ctx->pc = 0x222FC8u;
            goto label_222fc8;
        }
    }
    ctx->pc = 0x222FB0u;
    // 0x222fb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x222FB0u;
    SET_GPR_U32(ctx, 31, 0x222FB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x222FB0u, 0x222FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FB8u;
label_222fb8:
    // 0x222fb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222fbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x222FBCu;
    {
        const bool branch_taken_0x222fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FBCu;
        // 0x222fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fbc) {
            ctx->pc = 0x223008u;
            goto label_223008;
        }
    }
    ctx->pc = 0x222FC4u;
    // 0x222fc4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x222fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_222fc8:
    // 0x222fc8: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x222fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x222fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fd0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222fd4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x222FD4u;
    SET_GPR_U32(ctx, 31, 0x222FDCu);
    ctx->pc = 0x222FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FD4u;
    // 0x222fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x222FD4u, 0x222FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FDCu;
label_222fdc:
    // 0x222fdc: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x222fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x222fe0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x222fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x222fe4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x222fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x222fe8: 0x8ce32a5c  lw          $v1, 0x2A5C($a3)
    ctx->pc = 0x222fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10844)));
    // 0x222fec: 0x8ce42a60  lw          $a0, 0x2A60($a3)
    ctx->pc = 0x222fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10848)));
    // 0x222ff0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x222ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x222ff4: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222ff8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x222FF8u;
    {
        const bool branch_taken_0x222ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FF8u;
        // 0x222ffc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ff8) {
            ctx->pc = 0x22304Cu;
            goto label_22304c;
        }
    }
    ctx->pc = 0x223000u;
    // 0x223000: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x223000u;
    {
        const bool branch_taken_0x223000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223000u;
        // 0x223004: 0x8ce22a64  lw          $v0, 0x2A64($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223000) {
            ctx->pc = 0x223048u;
            goto label_223048;
        }
    }
    ctx->pc = 0x223008u;
label_223008:
    // 0x223008: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x223008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22300c: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x223010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223014: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x223014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223018: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x223018u;
    SET_GPR_U32(ctx, 31, 0x223020u);
    ctx->pc = 0x22301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223018u;
    // 0x22301c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x223018u, 0x223020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223020u;
label_223020:
    // 0x223020: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x223020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x223024: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x223028: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x223028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22302c: 0x8ce32b64  lw          $v1, 0x2B64($a3)
    ctx->pc = 0x22302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11108)));
    // 0x223030: 0x8ce42b68  lw          $a0, 0x2B68($a3)
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11112)));
    // 0x223034: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x223034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x223038: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x223038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22303c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22303Cu;
    {
        const bool branch_taken_0x22303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22303Cu;
        // 0x223040: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22303c) {
            ctx->pc = 0x22304Cu;
            goto label_22304c;
        }
    }
    ctx->pc = 0x223044u;
    // 0x223044: 0x8ce22b6c  lw          $v0, 0x2B6C($a3)
    ctx->pc = 0x223044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11116)));
label_223048:
    // 0x223048: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x223048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22304c:
    // 0x22304c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x223050: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x223050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x223054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22305c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22305cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223060: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x223060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223068: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x223068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22306c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22306Cu;
    SET_GPR_U32(ctx, 31, 0x223074u);
    ctx->pc = 0x223070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22306Cu;
    // 0x223070: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22306Cu, 0x223074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223074u;
label_223074:
    // 0x223074: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223078: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22307c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22307cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223080:
    // 0x223080: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x223080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x223084: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223084u;
    {
        const bool branch_taken_0x223084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223084u;
        // 0x223088: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223084) {
            ctx->pc = 0x2230B4u;
            goto label_2230b4;
        }
    }
    ctx->pc = 0x22308Cu;
    // 0x22308c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22308Cu;
    SET_GPR_U32(ctx, 31, 0x223094u);
    ctx->pc = 0x223090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22308Cu;
    // 0x223090: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22308Cu, 0x223094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223094u;
label_223094:
    // 0x223094: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x223094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22309c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2230a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2230a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2230a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2230a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2230a8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2230ac: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2230ACu;
    SET_GPR_U32(ctx, 31, 0x2230B4u);
    ctx->pc = 0x2230B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230ACu;
    // 0x2230b0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2230ACu, 0x2230B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230B4u;
label_2230b4:
    // 0x2230b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2230B4u;
    SET_GPR_U32(ctx, 31, 0x2230BCu);
    ctx->pc = 0x2230B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230B4u;
    // 0x2230b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2230B4u, 0x2230BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230BCu;
label_2230bc:
    // 0x2230bc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2230BCu;
    {
        const bool branch_taken_0x2230bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2230bc) {
            ctx->pc = 0x2232B4u;
            goto label_2232b4;
        }
    }
    ctx->pc = 0x2230C4u;
    // 0x2230c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2230c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2230c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2230c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2230cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2230ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230d0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2230D0u;
    SET_GPR_U32(ctx, 31, 0x2230D8u);
    ctx->pc = 0x2230D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230D0u;
    // 0x2230d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2230D0u, 0x2230D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230D8u;
label_2230d8:
    // 0x2230d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2230d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2230dc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2230DCu;
    SET_GPR_U32(ctx, 31, 0x2230E4u);
    ctx->pc = 0x2230E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230DCu;
    // 0x2230e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2230DCu, 0x2230E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230E4u;
label_2230e4:
    // 0x2230e4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2230e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2230e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2230e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2230ec: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x2230ECu;
    {
        const bool branch_taken_0x2230ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230ec) {
            ctx->pc = 0x2230F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2230ECu;
            // 0x2230f0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x2230F4u;
    // 0x2230f4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2230f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2230f8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2230f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2230fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2230fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223100: 0x0  nop
    ctx->pc = 0x223100u;
    // NOP
    // 0x223104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x223104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223108: 0x0  nop
    ctx->pc = 0x223108u;
    // NOP
    // 0x22310c: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
    ctx->pc = 0x22310Cu;
    {
        const bool branch_taken_0x22310c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22310c) {
            ctx->pc = 0x223110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22310Cu;
            // 0x223110: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223304u;
            goto label_223304;
        }
    }
    ctx->pc = 0x223114u;
    // 0x223114: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x223118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22311c: 0x0  nop
    ctx->pc = 0x22311cu;
    // NOP
    // 0x223120: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x223120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223124: 0x0  nop
    ctx->pc = 0x223124u;
    // NOP
    // 0x223128: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x223128u;
    {
        const bool branch_taken_0x223128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223128) {
            ctx->pc = 0x22312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223128u;
            // 0x22312c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223180u;
            goto label_223180;
        }
    }
    ctx->pc = 0x223130u;
    // 0x223130: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x223130u;
    SET_GPR_U32(ctx, 31, 0x223138u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x223130u, 0x223138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223138u;
label_223138:
    // 0x223138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x223138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22313c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22313Cu;
    {
        const bool branch_taken_0x22313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22313c) {
            ctx->pc = 0x223140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22313Cu;
            // 0x223140: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223180u;
            goto label_223180;
        }
    }
    ctx->pc = 0x223144u;
    // 0x223144: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x223144u;
    SET_GPR_U32(ctx, 31, 0x22314Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x223144u, 0x22314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22314Cu;
label_22314c:
    // 0x22314c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x223150: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x223150u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x223154: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223154u;
    {
        const bool branch_taken_0x223154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223154) {
            ctx->pc = 0x223158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223154u;
            // 0x223158: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22315Cu;
            goto label_22315c;
        }
    }
    ctx->pc = 0x22315Cu;
label_22315c:
    // 0x22315c: 0x2010  mfhi        $a0
    ctx->pc = 0x22315cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x223160: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223160u;
    {
        const bool branch_taken_0x223160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x223164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223160u;
        // 0x223164: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223160) {
            ctx->pc = 0x22316Cu;
            goto label_22316c;
        }
    }
    ctx->pc = 0x223168u;
label_223168:
    // 0x223168: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x223168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_22316c:
    // 0x22316c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x22316cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_223170:
    // 0x223170: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x223170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x223174: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x223174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x223178: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x223178u;
    {
        const bool branch_taken_0x223178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223178u;
        // 0x22317c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223178) {
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x223180u;
label_223180:
    // 0x223180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223184: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x223184u;
    {
        const bool branch_taken_0x223184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223184u;
        // 0x223188: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223184) {
            ctx->pc = 0x223300u;
            goto label_223300;
        }
    }
    ctx->pc = 0x22318Cu;
label_22318c:
    // 0x22318c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223190: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x223190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x223194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223198: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223198u;
    SET_GPR_U32(ctx, 31, 0x2231A0u);
    ctx->pc = 0x22319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223198u;
    // 0x22319c: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223198u, 0x2231A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231A0u;
label_2231a0:
    // 0x2231a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2231A0u;
    SET_GPR_U32(ctx, 31, 0x2231A8u);
    ctx->pc = 0x2231A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231A0u;
    // 0x2231a4: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2231A0u, 0x2231A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231A8u;
label_2231a8:
    // 0x2231a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2231a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2231ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2231ACu;
    {
        const bool branch_taken_0x2231ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231ACu;
        // 0x2231b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231ac) {
            ctx->pc = 0x2231F8u;
            goto label_2231f8;
        }
    }
    ctx->pc = 0x2231B4u;
    // 0x2231b4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2231b8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2231b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2231bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2231bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2231c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2231C4u;
    SET_GPR_U32(ctx, 31, 0x2231CCu);
    ctx->pc = 0x2231C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231C4u;
    // 0x2231c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2231C4u, 0x2231CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231CCu;
label_2231cc:
    // 0x2231cc: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x2231ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2231d0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2231d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2231d4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2231d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2231d8: 0x8ce32b34  lw          $v1, 0x2B34($a3)
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11060)));
    // 0x2231dc: 0x8ce42b38  lw          $a0, 0x2B38($a3)
    ctx->pc = 0x2231dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11064)));
    // 0x2231e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2231e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2231e4: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2231e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2231E8u;
    {
        const bool branch_taken_0x2231e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231E8u;
        // 0x2231ec: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231e8) {
            ctx->pc = 0x22323Cu;
            goto label_22323c;
        }
    }
    ctx->pc = 0x2231F0u;
    // 0x2231f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2231F0u;
    {
        const bool branch_taken_0x2231f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231F0u;
        // 0x2231f4: 0x8ce22b3c  lw          $v0, 0x2B3C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231f0) {
            ctx->pc = 0x223238u;
            goto label_223238;
        }
    }
    ctx->pc = 0x2231F8u;
label_2231f8:
    // 0x2231f8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2231fc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2231fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x223200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223204: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x223204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223208: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x223208u;
    SET_GPR_U32(ctx, 31, 0x223210u);
    ctx->pc = 0x22320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223208u;
    // 0x22320c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x223208u, 0x223210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223210u;
label_223210:
    // 0x223210: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x223210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x223214: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x223214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x223218: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22321c: 0x8ce32a8c  lw          $v1, 0x2A8C($a3)
    ctx->pc = 0x22321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10892)));
    // 0x223220: 0x8ce42a90  lw          $a0, 0x2A90($a3)
    ctx->pc = 0x223220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10896)));
    // 0x223224: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x223224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x223228: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x223228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22322c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22322Cu;
    {
        const bool branch_taken_0x22322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22322Cu;
        // 0x223230: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22322c) {
            ctx->pc = 0x22323Cu;
            goto label_22323c;
        }
    }
    ctx->pc = 0x223234u;
    // 0x223234: 0x8ce22a94  lw          $v0, 0x2A94($a3)
    ctx->pc = 0x223234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10900)));
label_223238:
    // 0x223238: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x223238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22323c:
    // 0x22323c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x223240: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x223240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x223244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223248: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22324c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22324cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223250: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x223250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223258: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22325c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22325Cu;
    SET_GPR_U32(ctx, 31, 0x223264u);
    ctx->pc = 0x223260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22325Cu;
    // 0x223260: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22325Cu, 0x223264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223264u;
label_223264:
    // 0x223264: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22326c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22326cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223270:
    // 0x223270: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x223274: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223274u;
    {
        const bool branch_taken_0x223274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223274u;
        // 0x223278: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223274) {
            ctx->pc = 0x2232A4u;
            goto label_2232a4;
        }
    }
    ctx->pc = 0x22327Cu;
    // 0x22327c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22327Cu;
    SET_GPR_U32(ctx, 31, 0x223284u);
    ctx->pc = 0x223280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22327Cu;
    // 0x223280: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22327Cu, 0x223284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223284u;
label_223284:
    // 0x223284: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x223284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22328c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x223290: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x223290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x223294: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223298: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x223298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22329c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22329Cu;
    SET_GPR_U32(ctx, 31, 0x2232A4u);
    ctx->pc = 0x2232A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22329Cu;
    // 0x2232a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22329Cu, 0x2232A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232A4u;
label_2232a4:
    // 0x2232a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2232A4u;
    SET_GPR_U32(ctx, 31, 0x2232ACu);
    ctx->pc = 0x2232A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232A4u;
    // 0x2232a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2232A4u, 0x2232ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232ACu;
label_2232ac:
    // 0x2232ac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2232ACu;
    {
        const bool branch_taken_0x2232ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2232ac) {
            ctx->pc = 0x2232B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2232ACu;
            // 0x2232b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2232E4u;
            goto label_2232e4;
        }
    }
    ctx->pc = 0x2232B4u;
label_2232b4:
    // 0x2232b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2232b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2232b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2232b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2232bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2232C0u;
    SET_GPR_U32(ctx, 31, 0x2232C8u);
    ctx->pc = 0x2232C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232C0u;
    // 0x2232c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2232C0u, 0x2232C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232C8u;
label_2232c8:
    // 0x2232c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2232CCu;
    SET_GPR_U32(ctx, 31, 0x2232D4u);
    ctx->pc = 0x2232D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232CCu;
    // 0x2232d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2232CCu, 0x2232D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232D4u;
label_2232d4:
    // 0x2232d4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2232D4u;
    SET_GPR_U32(ctx, 31, 0x2232DCu);
    ctx->pc = 0x2232D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232D4u;
    // 0x2232d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2232D4u, 0x2232DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232DCu;
label_2232dc:
    // 0x2232dc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2232DCu;
    {
        const bool branch_taken_0x2232dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232DCu;
        // 0x2232e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232dc) {
            ctx->pc = 0x223440u;
            goto label_223440;
        }
    }
    ctx->pc = 0x2232E4u;
label_2232e4:
    // 0x2232e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2232e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2232e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2232e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2232ec: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2232ECu;
    SET_GPR_U32(ctx, 31, 0x2232F4u);
    ctx->pc = 0x2232F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232ECu;
    // 0x2232f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2232ECu, 0x2232F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232F4u;
label_2232f4:
    // 0x2232f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2232f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2232f8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2232F8u;
    SET_GPR_U32(ctx, 31, 0x223300u);
    ctx->pc = 0x2232FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232F8u;
    // 0x2232fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2232F8u, 0x223300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223300u;
label_223300:
    // 0x223300: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_223304:
    // 0x223304: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x223304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x223308: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x223308u;
    {
        const bool branch_taken_0x223308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223308u;
        // 0x22330c: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223308) {
            ctx->pc = 0x2233A4u;
            goto label_2233a4;
        }
    }
    ctx->pc = 0x223310u;
    // 0x223310: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x223310u;
    {
        const bool branch_taken_0x223310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223310) {
            ctx->pc = 0x223314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223310u;
            // 0x223314: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233A8u;
            goto label_2233a8;
        }
    }
    ctx->pc = 0x223318u;
    // 0x223318: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x22331c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x22331Cu;
    {
        const bool branch_taken_0x22331c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22331c) {
            ctx->pc = 0x223320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22331Cu;
            // 0x223320: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233A8u;
            goto label_2233a8;
        }
    }
    ctx->pc = 0x223324u;
    // 0x223324: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x223324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x223328: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x223328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22332c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22332Cu;
    {
        const bool branch_taken_0x22332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22332Cu;
        // 0x223330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22332c) {
            ctx->pc = 0x22334Cu;
            goto label_22334c;
        }
    }
    ctx->pc = 0x223334u;
    // 0x223334: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x223334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x223338: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x223338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x22333c: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x22333cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x223340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223344: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x223344u;
    SET_GPR_U32(ctx, 31, 0x22334Cu);
    ctx->pc = 0x223348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223344u;
    // 0x223348: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x223344u, 0x22334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22334Cu;
label_22334c:
    // 0x22334c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22334cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x223350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x223350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x223354: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223354u;
    {
        const bool branch_taken_0x223354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223354u;
        // 0x223358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223354) {
            ctx->pc = 0x223374u;
            goto label_223374;
        }
    }
    ctx->pc = 0x22335Cu;
    // 0x22335c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x22335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x223360: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x223360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x223364: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x223368: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22336c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22336Cu;
    SET_GPR_U32(ctx, 31, 0x223374u);
    ctx->pc = 0x223370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22336Cu;
    // 0x223370: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22336Cu, 0x223374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223374u;
label_223374:
    // 0x223374: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x223374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x223378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x223378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22337c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x223380: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x223380u;
    {
        const bool branch_taken_0x223380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x223380) {
            ctx->pc = 0x223384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223380u;
            // 0x223384: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233A8u;
            goto label_2233a8;
        }
    }
    ctx->pc = 0x223388u;
    // 0x223388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22338c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x22338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x223390: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x223390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x223394: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x223394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x223398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22339c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22339Cu;
    SET_GPR_U32(ctx, 31, 0x2233A4u);
    ctx->pc = 0x2233A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22339Cu;
    // 0x2233a0: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22339Cu, 0x2233A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233A4u;
label_2233a4:
    // 0x2233a4: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x2233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_2233a8:
    // 0x2233a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2233A8u;
    {
        const bool branch_taken_0x2233a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2233a8) {
            ctx->pc = 0x2233ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233A8u;
            // 0x2233ac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233BCu;
            goto label_2233bc;
        }
    }
    ctx->pc = 0x2233B0u;
    // 0x2233b0: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x2233B0u;
    SET_GPR_U32(ctx, 31, 0x2233B8u);
    ctx->pc = 0x2233B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233B0u;
    // 0x2233b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x2233B0u, 0x2233B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233B8u;
label_2233b8:
    // 0x2233b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2233b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2233bc:
    // 0x2233bc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2233BCu;
    SET_GPR_U32(ctx, 31, 0x2233C4u);
    ctx->pc = 0x2233C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233BCu;
    // 0x2233c0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2233BCu, 0x2233C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233C4u;
label_2233c4:
    // 0x2233c4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2233c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2233c8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2233C8u;
    {
        const bool branch_taken_0x2233c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2233c8) {
            ctx->pc = 0x2233CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233C8u;
            // 0x2233cc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22340Cu;
            goto label_22340c;
        }
    }
    ctx->pc = 0x2233D0u;
    // 0x2233d0: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2233D0u;
    SET_GPR_U32(ctx, 31, 0x2233D8u);
    ctx->pc = 0x2233D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233D0u;
    // 0x2233d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2233D0u, 0x2233D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233D8u;
label_2233d8:
    // 0x2233d8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2233D8u;
    {
        const bool branch_taken_0x2233d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2233d8) {
            ctx->pc = 0x2233DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233D8u;
            // 0x2233dc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22340Cu;
            goto label_22340c;
        }
    }
    ctx->pc = 0x2233E0u;
    // 0x2233e0: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x2233e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x2233e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2233E4u;
    {
        const bool branch_taken_0x2233e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2233E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233E4u;
        // 0x2233e8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233e4) {
            ctx->pc = 0x22340Cu;
            goto label_22340c;
        }
    }
    ctx->pc = 0x2233ECu;
    // 0x2233ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2233ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2233f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2233F0u;
    {
        const bool branch_taken_0x2233f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2233f0) {
            ctx->pc = 0x2233F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233F0u;
            // 0x2233f4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22340Cu;
            goto label_22340c;
        }
    }
    ctx->pc = 0x2233F8u;
    // 0x2233f8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2233F8u;
    SET_GPR_U32(ctx, 31, 0x223400u);
    ctx->pc = 0x2233FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233F8u;
    // 0x2233fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2233F8u, 0x223400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223400u;
label_223400:
    // 0x223400: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x223400u;
    {
        const bool branch_taken_0x223400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223400u;
        // 0x223404: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223400) {
            ctx->pc = 0x223440u;
            goto label_223440;
        }
    }
    ctx->pc = 0x223408u;
    // 0x223408: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x223408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22340c:
    // 0x22340c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x223410: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223410u;
    {
        const bool branch_taken_0x223410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223410u;
        // 0x223414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223410) {
            ctx->pc = 0x22341Cu;
            goto label_22341c;
        }
    }
    ctx->pc = 0x223418u;
    // 0x223418: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x223418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_22341c:
    // 0x22341c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x223420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223420u;
    {
        const bool branch_taken_0x223420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223420u;
        // 0x223424: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223420) {
            ctx->pc = 0x223440u;
            goto label_223440;
        }
    }
    ctx->pc = 0x223428u;
    // 0x223428: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x223428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22342c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x223430: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x223434: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x223434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x223438: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x223438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_22343c:
    // 0x22343c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_223440:
    // 0x223440: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x223440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223444: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x223444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223448: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x223448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22344c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22344cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223450: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x223450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223454: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x223454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223458: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x223458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22345c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x22345cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223464: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x223464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223468: 0x3e00008  jr          $ra
    ctx->pc = 0x223468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223468u;
        // 0x22346c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223470u;
}
