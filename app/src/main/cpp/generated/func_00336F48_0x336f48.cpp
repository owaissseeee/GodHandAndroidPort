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

// Function: func_00336F48
// Address: 0x336f48 - 0x337240
void func_00336F48_0x336f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336F48_0x336f48");
#endif

    switch (ctx->pc) {
        case 0x336f48u: goto label_336f48;
        case 0x336f4cu: goto label_336f4c;
        case 0x336f50u: goto label_336f50;
        case 0x336f54u: goto label_336f54;
        case 0x336f58u: goto label_336f58;
        case 0x336f5cu: goto label_336f5c;
        case 0x336f60u: goto label_336f60;
        case 0x336f64u: goto label_336f64;
        case 0x336f68u: goto label_336f68;
        case 0x336f6cu: goto label_336f6c;
        case 0x336f70u: goto label_336f70;
        case 0x336f74u: goto label_336f74;
        case 0x336f78u: goto label_336f78;
        case 0x336f7cu: goto label_336f7c;
        case 0x336f80u: goto label_336f80;
        case 0x336f84u: goto label_336f84;
        case 0x336f88u: goto label_336f88;
        case 0x336f8cu: goto label_336f8c;
        case 0x336f90u: goto label_336f90;
        case 0x336f94u: goto label_336f94;
        case 0x336f98u: goto label_336f98;
        case 0x336f9cu: goto label_336f9c;
        case 0x336fa0u: goto label_336fa0;
        case 0x336fa4u: goto label_336fa4;
        case 0x336fa8u: goto label_336fa8;
        case 0x336facu: goto label_336fac;
        case 0x336fb0u: goto label_336fb0;
        case 0x336fb4u: goto label_336fb4;
        case 0x336fb8u: goto label_336fb8;
        case 0x336fbcu: goto label_336fbc;
        case 0x336fc0u: goto label_336fc0;
        case 0x336fc4u: goto label_336fc4;
        case 0x336fc8u: goto label_336fc8;
        case 0x336fccu: goto label_336fcc;
        case 0x336fd0u: goto label_336fd0;
        case 0x336fd4u: goto label_336fd4;
        case 0x336fd8u: goto label_336fd8;
        case 0x336fdcu: goto label_336fdc;
        case 0x336fe0u: goto label_336fe0;
        case 0x336fe4u: goto label_336fe4;
        case 0x336fe8u: goto label_336fe8;
        case 0x336fecu: goto label_336fec;
        case 0x336ff0u: goto label_336ff0;
        case 0x336ff4u: goto label_336ff4;
        case 0x336ff8u: goto label_336ff8;
        case 0x336ffcu: goto label_336ffc;
        case 0x337000u: goto label_337000;
        case 0x337004u: goto label_337004;
        case 0x337008u: goto label_337008;
        case 0x33700cu: goto label_33700c;
        case 0x337010u: goto label_337010;
        case 0x337014u: goto label_337014;
        case 0x337018u: goto label_337018;
        case 0x33701cu: goto label_33701c;
        case 0x337020u: goto label_337020;
        case 0x337024u: goto label_337024;
        case 0x337028u: goto label_337028;
        case 0x33702cu: goto label_33702c;
        case 0x337030u: goto label_337030;
        case 0x337034u: goto label_337034;
        case 0x337038u: goto label_337038;
        case 0x33703cu: goto label_33703c;
        case 0x337040u: goto label_337040;
        case 0x337044u: goto label_337044;
        case 0x337048u: goto label_337048;
        case 0x33704cu: goto label_33704c;
        case 0x337050u: goto label_337050;
        case 0x337054u: goto label_337054;
        case 0x337058u: goto label_337058;
        case 0x33705cu: goto label_33705c;
        case 0x337060u: goto label_337060;
        case 0x337064u: goto label_337064;
        case 0x337068u: goto label_337068;
        case 0x33706cu: goto label_33706c;
        case 0x337070u: goto label_337070;
        case 0x337074u: goto label_337074;
        case 0x337078u: goto label_337078;
        case 0x33707cu: goto label_33707c;
        case 0x337080u: goto label_337080;
        case 0x337084u: goto label_337084;
        case 0x337088u: goto label_337088;
        case 0x33708cu: goto label_33708c;
        case 0x337090u: goto label_337090;
        case 0x337094u: goto label_337094;
        case 0x337098u: goto label_337098;
        case 0x33709cu: goto label_33709c;
        case 0x3370a0u: goto label_3370a0;
        case 0x3370a4u: goto label_3370a4;
        case 0x3370a8u: goto label_3370a8;
        case 0x3370acu: goto label_3370ac;
        case 0x3370b0u: goto label_3370b0;
        case 0x3370b4u: goto label_3370b4;
        case 0x3370b8u: goto label_3370b8;
        case 0x3370bcu: goto label_3370bc;
        case 0x3370c0u: goto label_3370c0;
        case 0x3370c4u: goto label_3370c4;
        case 0x3370c8u: goto label_3370c8;
        case 0x3370ccu: goto label_3370cc;
        case 0x3370d0u: goto label_3370d0;
        case 0x3370d4u: goto label_3370d4;
        case 0x3370d8u: goto label_3370d8;
        case 0x3370dcu: goto label_3370dc;
        case 0x3370e0u: goto label_3370e0;
        case 0x3370e4u: goto label_3370e4;
        case 0x3370e8u: goto label_3370e8;
        case 0x3370ecu: goto label_3370ec;
        case 0x3370f0u: goto label_3370f0;
        case 0x3370f4u: goto label_3370f4;
        case 0x3370f8u: goto label_3370f8;
        case 0x3370fcu: goto label_3370fc;
        case 0x337100u: goto label_337100;
        case 0x337104u: goto label_337104;
        case 0x337108u: goto label_337108;
        case 0x33710cu: goto label_33710c;
        case 0x337110u: goto label_337110;
        case 0x337114u: goto label_337114;
        case 0x337118u: goto label_337118;
        case 0x33711cu: goto label_33711c;
        case 0x337120u: goto label_337120;
        case 0x337124u: goto label_337124;
        case 0x337128u: goto label_337128;
        case 0x33712cu: goto label_33712c;
        case 0x337130u: goto label_337130;
        case 0x337134u: goto label_337134;
        case 0x337138u: goto label_337138;
        case 0x33713cu: goto label_33713c;
        case 0x337140u: goto label_337140;
        case 0x337144u: goto label_337144;
        case 0x337148u: goto label_337148;
        case 0x33714cu: goto label_33714c;
        case 0x337150u: goto label_337150;
        case 0x337154u: goto label_337154;
        case 0x337158u: goto label_337158;
        case 0x33715cu: goto label_33715c;
        case 0x337160u: goto label_337160;
        case 0x337164u: goto label_337164;
        case 0x337168u: goto label_337168;
        case 0x33716cu: goto label_33716c;
        case 0x337170u: goto label_337170;
        case 0x337174u: goto label_337174;
        case 0x337178u: goto label_337178;
        case 0x33717cu: goto label_33717c;
        case 0x337180u: goto label_337180;
        case 0x337184u: goto label_337184;
        case 0x337188u: goto label_337188;
        case 0x33718cu: goto label_33718c;
        case 0x337190u: goto label_337190;
        case 0x337194u: goto label_337194;
        case 0x337198u: goto label_337198;
        case 0x33719cu: goto label_33719c;
        case 0x3371a0u: goto label_3371a0;
        case 0x3371a4u: goto label_3371a4;
        case 0x3371a8u: goto label_3371a8;
        case 0x3371acu: goto label_3371ac;
        case 0x3371b0u: goto label_3371b0;
        case 0x3371b4u: goto label_3371b4;
        case 0x3371b8u: goto label_3371b8;
        case 0x3371bcu: goto label_3371bc;
        case 0x3371c0u: goto label_3371c0;
        case 0x3371c4u: goto label_3371c4;
        case 0x3371c8u: goto label_3371c8;
        case 0x3371ccu: goto label_3371cc;
        case 0x3371d0u: goto label_3371d0;
        case 0x3371d4u: goto label_3371d4;
        case 0x3371d8u: goto label_3371d8;
        case 0x3371dcu: goto label_3371dc;
        case 0x3371e0u: goto label_3371e0;
        case 0x3371e4u: goto label_3371e4;
        case 0x3371e8u: goto label_3371e8;
        case 0x3371ecu: goto label_3371ec;
        case 0x3371f0u: goto label_3371f0;
        case 0x3371f4u: goto label_3371f4;
        case 0x3371f8u: goto label_3371f8;
        case 0x3371fcu: goto label_3371fc;
        case 0x337200u: goto label_337200;
        case 0x337204u: goto label_337204;
        case 0x337208u: goto label_337208;
        case 0x33720cu: goto label_33720c;
        case 0x337210u: goto label_337210;
        case 0x337214u: goto label_337214;
        case 0x337218u: goto label_337218;
        case 0x33721cu: goto label_33721c;
        case 0x337220u: goto label_337220;
        case 0x337224u: goto label_337224;
        case 0x337228u: goto label_337228;
        case 0x33722cu: goto label_33722c;
        case 0x337230u: goto label_337230;
        case 0x337234u: goto label_337234;
        case 0x337238u: goto label_337238;
        case 0x33723cu: goto label_33723c;
        default: break;
    }

    ctx->pc = 0x336f48u;

label_336f48:
    // 0x336f48: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x336f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_336f4c:
    // 0x336f4c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x336f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_336f50:
    // 0x336f50: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x336f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_336f54:
    // 0x336f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_336f58:
    // 0x336f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_336f5c:
    // 0x336f5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x336f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_336f60:
    // 0x336f60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_336f64:
    // 0x336f64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x336f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_336f68:
    // 0x336f68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x336f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_336f6c:
    // 0x336f6c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x336f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_336f70:
    // 0x336f70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x336f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_336f74:
    // 0x336f74: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x336f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_336f78:
    // 0x336f78: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_336f7c:
    if (ctx->pc == 0x336F7Cu) {
        ctx->pc = 0x336F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F78u;
        // 0x336f7c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336F80u;
        goto label_336f80;
    }
    ctx->pc = 0x336F78u;
    {
        const bool branch_taken_0x336f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x336F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F78u;
        // 0x336f7c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f78) {
            ctx->pc = 0x336FA0u;
            goto label_336fa0;
        }
    }
    ctx->pc = 0x336F80u;
label_336f80:
    // 0x336f80: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x336f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_336f84:
    // 0x336f84: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x336f84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
label_336f88:
    // 0x336f88: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x336f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_336f8c:
    // 0x336f8c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x336f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_336f90:
    // 0x336f90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x336f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_336f94:
    // 0x336f94: 0xaea30708  sw          $v1, 0x708($s5)
    ctx->pc = 0x336f94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1800), GPR_U32(ctx, 3));
label_336f98:
    // 0x336f98: 0x10000002  b           . + 4 + (0x2 << 2)
label_336f9c:
    if (ctx->pc == 0x336F9Cu) {
        ctx->pc = 0x336F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F98u;
        // 0x336f9c: 0xac82070c  sw          $v0, 0x70C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336FA0u;
        goto label_336fa0;
    }
    ctx->pc = 0x336F98u;
    {
        const bool branch_taken_0x336f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F98u;
        // 0x336f9c: 0xac82070c  sw          $v0, 0x70C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f98) {
            ctx->pc = 0x336FA4u;
            goto label_336fa4;
        }
    }
    ctx->pc = 0x336FA0u;
label_336fa0:
    // 0x336fa0: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x336fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
label_336fa4:
    // 0x336fa4: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x336fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
label_336fa8:
    // 0x336fa8: 0x26700714  addiu       $s0, $s3, 0x714
    ctx->pc = 0x336fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1812));
label_336fac:
    // 0x336fac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x336facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_336fb0:
    // 0x336fb0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_336fb4:
    if (ctx->pc == 0x336FB4u) {
        ctx->pc = 0x336FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FB0u;
        // 0x336fb4: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336FB8u;
        goto label_336fb8;
    }
    ctx->pc = 0x336FB0u;
    {
        const bool branch_taken_0x336fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336fb0) {
            ctx->pc = 0x336FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336FB0u;
            // 0x336fb4: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337048u;
            goto label_337048;
        }
    }
    ctx->pc = 0x336FB8u;
label_336fb8:
    // 0x336fb8: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x336fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
label_336fbc:
    // 0x336fbc: 0x2651070c  addiu       $s1, $s2, 0x70C
    ctx->pc = 0x336fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1804));
label_336fc0:
    // 0x336fc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x336fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_336fc4:
    // 0x336fc4: 0xc0ed65a  jal         func_3B5968
label_336fc8:
    if (ctx->pc == 0x336FC8u) {
        ctx->pc = 0x336FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FC4u;
        // 0x336fc8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336FCCu;
        goto label_336fcc;
    }
    ctx->pc = 0x336FC4u;
    SET_GPR_U32(ctx, 31, 0x336FCCu);
    ctx->pc = 0x336FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336FC4u;
    // 0x336fc8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x336FC4u, 0x336FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336FCCu;
label_336fcc:
    // 0x336fcc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_336fd0:
    if (ctx->pc == 0x336FD0u) {
        ctx->pc = 0x336FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FCCu;
        // 0x336fd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336FD4u;
        goto label_336fd4;
    }
    ctx->pc = 0x336FCCu;
    {
        const bool branch_taken_0x336fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FCCu;
        // 0x336fd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fcc) {
            ctx->pc = 0x337008u;
            goto label_337008;
        }
    }
    ctx->pc = 0x336FD4u;
label_336fd4:
    // 0x336fd4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x336fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_336fd8:
    // 0x336fd8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_336fdc:
    // 0x336fdc: 0x24845438  addiu       $a0, $a0, 0x5438
    ctx->pc = 0x336fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21560));
label_336fe0:
    // 0x336fe0: 0xc0c9832  jal         func_3260C8
label_336fe4:
    if (ctx->pc == 0x336FE4u) {
        ctx->pc = 0x336FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FE0u;
        // 0x336fe4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336FE8u;
        goto label_336fe8;
    }
    ctx->pc = 0x336FE0u;
    SET_GPR_U32(ctx, 31, 0x336FE8u);
    ctx->pc = 0x336FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336FE0u;
    // 0x336fe4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x336FE0u, 0x336FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336FE8u;
label_336fe8:
    // 0x336fe8: 0x0  nop
    ctx->pc = 0x336fe8u;
    // NOP
label_336fec:
    // 0x336fec: 0x0  nop
    ctx->pc = 0x336fecu;
    // NOP
label_336ff0:
    // 0x336ff0: 0x0  nop
    ctx->pc = 0x336ff0u;
    // NOP
label_336ff4:
    // 0x336ff4: 0x0  nop
    ctx->pc = 0x336ff4u;
    // NOP
label_336ff8:
    // 0x336ff8: 0x0  nop
    ctx->pc = 0x336ff8u;
    // NOP
label_336ffc:
    // 0x336ffc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_337000:
    if (ctx->pc == 0x337000u) {
        ctx->pc = 0x337004u;
        goto label_337004;
    }
    ctx->pc = 0x336FFCu;
    {
        const bool branch_taken_0x336ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ffc) {
            ctx->pc = 0x336FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336fe8;
        }
    }
    ctx->pc = 0x337004u;
label_337004:
    // 0x337004: 0x0  nop
    ctx->pc = 0x337004u;
    // NOP
label_337008:
    // 0x337008: 0x26700714  addiu       $s0, $s3, 0x714
    ctx->pc = 0x337008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1812));
label_33700c:
    // 0x33700c: 0x8e45070c  lw          $a1, 0x70C($s2)
    ctx->pc = 0x33700cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1804)));
label_337010:
    // 0x337010: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x337010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_337014:
    // 0x337014: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_337018:
    // 0x337018: 0x24845480  addiu       $a0, $a0, 0x5480
    ctx->pc = 0x337018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21632));
label_33701c:
    // 0x33701c: 0xc0c9832  jal         func_3260C8
label_337020:
    if (ctx->pc == 0x337020u) {
        ctx->pc = 0x337020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33701Cu;
        // 0x337020: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337024u;
        goto label_337024;
    }
    ctx->pc = 0x33701Cu;
    SET_GPR_U32(ctx, 31, 0x337024u);
    ctx->pc = 0x337020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33701Cu;
    // 0x337020: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33701Cu, 0x337024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337024u;
label_337024:
    // 0x337024: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x337024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_337028:
    // 0x337028: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x337028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_33702c:
    // 0x33702c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x33702cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_337030:
    // 0x337030: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x337030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_337034:
    // 0x337034: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x337034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
label_337038:
    // 0x337038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x337038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_33703c:
    // 0x33703c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337040:
    // 0x337040: 0xa082071c  sb          $v0, 0x71C($a0)
    ctx->pc = 0x337040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1820), (uint8_t)GPR_U32(ctx, 2));
label_337044:
    // 0x337044: 0xae030718  sw          $v1, 0x718($s0)
    ctx->pc = 0x337044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 3));
label_337048:
    // 0x337048: 0x3c14003e  lui         $s4, 0x3E
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
label_33704c:
    // 0x33704c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337050:
    // 0x337050: 0x26840768  addiu       $a0, $s4, 0x768
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1896));
label_337054:
    // 0x337054: 0xc0e94bc  jal         func_3A52F0
label_337058:
    if (ctx->pc == 0x337058u) {
        ctx->pc = 0x337058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337054u;
        // 0x337058: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33705Cu;
        goto label_33705c;
    }
    ctx->pc = 0x337054u;
    SET_GPR_U32(ctx, 31, 0x33705Cu);
    ctx->pc = 0x337058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337054u;
    // 0x337058: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x337054u, 0x33705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33705Cu;
label_33705c:
    // 0x33705c: 0x8e110718  lw          $s1, 0x718($s0)
    ctx->pc = 0x33705cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_337060:
    // 0x337060: 0x8ea20708  lw          $v0, 0x708($s5)
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_337064:
    // 0x337064: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
label_337068:
    if (ctx->pc == 0x337068u) {
        ctx->pc = 0x337068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337064u;
        // 0x337068: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33706Cu;
        goto label_33706c;
    }
    ctx->pc = 0x337064u;
    {
        const bool branch_taken_0x337064 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x337068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337064u;
        // 0x337068: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337064) {
            ctx->pc = 0x337210u;
            goto label_337210;
        }
    }
    ctx->pc = 0x33706Cu;
label_33706c:
    // 0x33706c: 0x3c16003e  lui         $s6, 0x3E
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)62 << 16));
label_337070:
    // 0x337070: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x337070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337074:
    // 0x337074: 0x3c1e0045  lui         $fp, 0x45
    ctx->pc = 0x337074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)69 << 16));
label_337078:
    // 0x337078: 0x3c170045  lui         $s7, 0x45
    ctx->pc = 0x337078u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)69 << 16));
label_33707c:
    // 0x33707c: 0x26820768  addiu       $v0, $s4, 0x768
    ctx->pc = 0x33707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1896));
label_337080:
    // 0x337080: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x337080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_337084:
    // 0x337084: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x337084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_337088:
    // 0x337088: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_33708c:
    // 0x33708c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_337090:
    if (ctx->pc == 0x337090u) {
        ctx->pc = 0x337090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33708Cu;
        // 0x337090: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337094u;
        goto label_337094;
    }
    ctx->pc = 0x33708Cu;
    {
        const bool branch_taken_0x33708c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33708Cu;
        // 0x337090: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33708c) {
            ctx->pc = 0x3370C0u;
            goto label_3370c0;
        }
    }
    ctx->pc = 0x337094u;
label_337094:
    // 0x337094: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x337094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_337098:
    // 0x337098: 0xc0c9832  jal         func_3260C8
label_33709c:
    if (ctx->pc == 0x33709Cu) {
        ctx->pc = 0x33709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337098u;
        // 0x33709c: 0x244454b0  addiu       $a0, $v0, 0x54B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3370A0u;
        goto label_3370a0;
    }
    ctx->pc = 0x337098u;
    SET_GPR_U32(ctx, 31, 0x3370A0u);
    ctx->pc = 0x33709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337098u;
    // 0x33709c: 0x244454b0  addiu       $a0, $v0, 0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337098u, 0x3370A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370A0u;
label_3370a0:
    // 0x3370a0: 0x0  nop
    ctx->pc = 0x3370a0u;
    // NOP
label_3370a4:
    // 0x3370a4: 0x0  nop
    ctx->pc = 0x3370a4u;
    // NOP
label_3370a8:
    // 0x3370a8: 0x0  nop
    ctx->pc = 0x3370a8u;
    // NOP
label_3370ac:
    // 0x3370ac: 0x0  nop
    ctx->pc = 0x3370acu;
    // NOP
label_3370b0:
    // 0x3370b0: 0x0  nop
    ctx->pc = 0x3370b0u;
    // NOP
label_3370b4:
    // 0x3370b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3370b8:
    if (ctx->pc == 0x3370B8u) {
        ctx->pc = 0x3370BCu;
        goto label_3370bc;
    }
    ctx->pc = 0x3370B4u;
    {
        const bool branch_taken_0x3370b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370b4) {
            ctx->pc = 0x3370A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3370a0;
        }
    }
    ctx->pc = 0x3370BCu;
label_3370bc:
    // 0x3370bc: 0x0  nop
    ctx->pc = 0x3370bcu;
    // NOP
label_3370c0:
    // 0x3370c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3370c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3370c4:
    // 0x3370c4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x3370c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_3370c8:
    // 0x3370c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3370c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3370cc:
    // 0x3370cc: 0xc0cebb4  jal         func_33AED0
label_3370d0:
    if (ctx->pc == 0x3370D0u) {
        ctx->pc = 0x3370D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370CCu;
        // 0x3370d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3370D4u;
        goto label_3370d4;
    }
    ctx->pc = 0x3370CCu;
    SET_GPR_U32(ctx, 31, 0x3370D4u);
    ctx->pc = 0x3370D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3370CCu;
    // 0x3370d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x3370CCu, 0x3370D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370D4u;
label_3370d4:
    // 0x3370d4: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x3370d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_3370d8:
    // 0x3370d8: 0x26c50a68  addiu       $a1, $s6, 0xA68
    ctx->pc = 0x3370d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2664));
label_3370dc:
    // 0x3370dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3370dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3370e0:
    // 0x3370e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3370e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3370e4:
    // 0x3370e4: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x3370e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_3370e8:
    // 0x3370e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3370e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3370ec:
    // 0x3370ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3370ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3370f0:
    // 0x3370f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3370f4:
    if (ctx->pc == 0x3370F4u) {
        ctx->pc = 0x3370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370F0u;
        // 0x3370f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3370F8u;
        goto label_3370f8;
    }
    ctx->pc = 0x3370F0u;
    {
        const bool branch_taken_0x3370f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370F0u;
        // 0x3370f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370f0) {
            ctx->pc = 0x337128u;
            goto label_337128;
        }
    }
    ctx->pc = 0x3370F8u;
label_3370f8:
    // 0x3370f8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3370f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_3370fc:
    // 0x3370fc: 0xc0c9832  jal         func_3260C8
label_337100:
    if (ctx->pc == 0x337100u) {
        ctx->pc = 0x337100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370FCu;
        // 0x337100: 0x244454e0  addiu       $a0, $v0, 0x54E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337104u;
        goto label_337104;
    }
    ctx->pc = 0x3370FCu;
    SET_GPR_U32(ctx, 31, 0x337104u);
    ctx->pc = 0x337100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3370FCu;
    // 0x337100: 0x244454e0  addiu       $a0, $v0, 0x54E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3370FCu, 0x337104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337104u;
label_337104:
    // 0x337104: 0x0  nop
    ctx->pc = 0x337104u;
    // NOP
label_337108:
    // 0x337108: 0x0  nop
    ctx->pc = 0x337108u;
    // NOP
label_33710c:
    // 0x33710c: 0x0  nop
    ctx->pc = 0x33710cu;
    // NOP
label_337110:
    // 0x337110: 0x0  nop
    ctx->pc = 0x337110u;
    // NOP
label_337114:
    // 0x337114: 0x0  nop
    ctx->pc = 0x337114u;
    // NOP
label_337118:
    // 0x337118: 0x0  nop
    ctx->pc = 0x337118u;
    // NOP
label_33711c:
    // 0x33711c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_337120:
    if (ctx->pc == 0x337120u) {
        ctx->pc = 0x337124u;
        goto label_337124;
    }
    ctx->pc = 0x33711Cu;
    {
        const bool branch_taken_0x33711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33711c) {
            ctx->pc = 0x337108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337108;
        }
    }
    ctx->pc = 0x337124u;
label_337124:
    // 0x337124: 0x0  nop
    ctx->pc = 0x337124u;
    // NOP
label_337128:
    // 0x337128: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_33712c:
    if (ctx->pc == 0x33712Cu) {
        ctx->pc = 0x33712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337128u;
        // 0x33712c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337130u;
        goto label_337130;
    }
    ctx->pc = 0x337128u;
    {
        const bool branch_taken_0x337128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337128u;
        // 0x33712c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337128) {
            ctx->pc = 0x337158u;
            goto label_337158;
        }
    }
    ctx->pc = 0x337130u;
label_337130:
    // 0x337130: 0xc0c9832  jal         func_3260C8
label_337134:
    if (ctx->pc == 0x337134u) {
        ctx->pc = 0x337134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337130u;
        // 0x337134: 0x24445518  addiu       $a0, $v0, 0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337138u;
        goto label_337138;
    }
    ctx->pc = 0x337130u;
    SET_GPR_U32(ctx, 31, 0x337138u);
    ctx->pc = 0x337134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337130u;
    // 0x337134: 0x24445518  addiu       $a0, $v0, 0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337130u, 0x337138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337138u;
label_337138:
    // 0x337138: 0x0  nop
    ctx->pc = 0x337138u;
    // NOP
label_33713c:
    // 0x33713c: 0x0  nop
    ctx->pc = 0x33713cu;
    // NOP
label_337140:
    // 0x337140: 0x0  nop
    ctx->pc = 0x337140u;
    // NOP
label_337144:
    // 0x337144: 0x0  nop
    ctx->pc = 0x337144u;
    // NOP
label_337148:
    // 0x337148: 0x0  nop
    ctx->pc = 0x337148u;
    // NOP
label_33714c:
    // 0x33714c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_337150:
    if (ctx->pc == 0x337150u) {
        ctx->pc = 0x337154u;
        goto label_337154;
    }
    ctx->pc = 0x33714Cu;
    {
        const bool branch_taken_0x33714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33714c) {
            ctx->pc = 0x337138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337138;
        }
    }
    ctx->pc = 0x337154u;
label_337154:
    // 0x337154: 0x0  nop
    ctx->pc = 0x337154u;
    // NOP
label_337158:
    // 0x337158: 0xc0ce864  jal         func_33A190
label_33715c:
    if (ctx->pc == 0x33715Cu) {
        ctx->pc = 0x337160u;
        goto label_337160;
    }
    ctx->pc = 0x337158u;
    SET_GPR_U32(ctx, 31, 0x337160u);
    ctx->pc = 0x33A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A190u, 0x337158u, 0x337160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337160u;
label_337160:
    // 0x337160: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x337160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_337164:
    // 0x337164: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x337164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_337168:
    // 0x337168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33716c:
    // 0x33716c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_337170:
    if (ctx->pc == 0x337170u) {
        ctx->pc = 0x337170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33716Cu;
        // 0x337170: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337174u;
        goto label_337174;
    }
    ctx->pc = 0x33716Cu;
    {
        const bool branch_taken_0x33716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33716Cu;
        // 0x337170: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33716c) {
            ctx->pc = 0x3371A0u;
            goto label_3371a0;
        }
    }
    ctx->pc = 0x337174u;
label_337174:
    // 0x337174: 0xc0c9832  jal         func_3260C8
label_337178:
    if (ctx->pc == 0x337178u) {
        ctx->pc = 0x337178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337174u;
        // 0x337178: 0x27c45548  addiu       $a0, $fp, 0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 21832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33717Cu;
        goto label_33717c;
    }
    ctx->pc = 0x337174u;
    SET_GPR_U32(ctx, 31, 0x33717Cu);
    ctx->pc = 0x337178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337174u;
    // 0x337178: 0x27c45548  addiu       $a0, $fp, 0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 21832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337174u, 0x33717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33717Cu;
label_33717c:
    // 0x33717c: 0x0  nop
    ctx->pc = 0x33717cu;
    // NOP
label_337180:
    // 0x337180: 0x0  nop
    ctx->pc = 0x337180u;
    // NOP
label_337184:
    // 0x337184: 0x0  nop
    ctx->pc = 0x337184u;
    // NOP
label_337188:
    // 0x337188: 0x0  nop
    ctx->pc = 0x337188u;
    // NOP
label_33718c:
    // 0x33718c: 0x0  nop
    ctx->pc = 0x33718cu;
    // NOP
label_337190:
    // 0x337190: 0x0  nop
    ctx->pc = 0x337190u;
    // NOP
label_337194:
    // 0x337194: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_337198:
    if (ctx->pc == 0x337198u) {
        ctx->pc = 0x33719Cu;
        goto label_33719c;
    }
    ctx->pc = 0x337194u;
    {
        const bool branch_taken_0x337194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337194) {
            ctx->pc = 0x337180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337180;
        }
    }
    ctx->pc = 0x33719Cu;
label_33719c:
    // 0x33719c: 0x0  nop
    ctx->pc = 0x33719cu;
    // NOP
label_3371a0:
    // 0x3371a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3371a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3371a4:
    // 0x3371a4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3371a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3371a8:
    // 0x3371a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3371a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3371ac:
    // 0x3371ac: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3371acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_3371b0:
    // 0x3371b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3371b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3371b4:
    // 0x3371b4: 0x40f809  jalr        $v0
label_3371b8:
    if (ctx->pc == 0x3371B8u) {
        ctx->pc = 0x3371B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371B4u;
        // 0x3371b8: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3371BCu;
        goto label_3371bc;
    }
    ctx->pc = 0x3371B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3371BCu);
        ctx->pc = 0x3371B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371B4u;
        // 0x3371b8: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3371B4u, 0x3371BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3371BCu;
label_3371bc:
    // 0x3371bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3371bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3371c0:
    // 0x3371c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3371c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3371c4:
    // 0x3371c4: 0xc0ced0a  jal         func_33B428
label_3371c8:
    if (ctx->pc == 0x3371C8u) {
        ctx->pc = 0x3371C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371C4u;
        // 0x3371c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3371CCu;
        goto label_3371cc;
    }
    ctx->pc = 0x3371C4u;
    SET_GPR_U32(ctx, 31, 0x3371CCu);
    ctx->pc = 0x3371C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371C4u;
    // 0x3371c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B428u, 0x3371C4u, 0x3371CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371CCu;
label_3371cc:
    // 0x3371cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3371d0:
    if (ctx->pc == 0x3371D0u) {
        ctx->pc = 0x3371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371CCu;
        // 0x3371d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3371D4u;
        goto label_3371d4;
    }
    ctx->pc = 0x3371CCu;
    {
        const bool branch_taken_0x3371cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371CCu;
        // 0x3371d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371cc) {
            ctx->pc = 0x337200u;
            goto label_337200;
        }
    }
    ctx->pc = 0x3371D4u;
label_3371d4:
    // 0x3371d4: 0xc0c9832  jal         func_3260C8
label_3371d8:
    if (ctx->pc == 0x3371D8u) {
        ctx->pc = 0x3371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371D4u;
        // 0x3371d8: 0x26e45580  addiu       $a0, $s7, 0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3371DCu;
        goto label_3371dc;
    }
    ctx->pc = 0x3371D4u;
    SET_GPR_U32(ctx, 31, 0x3371DCu);
    ctx->pc = 0x3371D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371D4u;
    // 0x3371d8: 0x26e45580  addiu       $a0, $s7, 0x5580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3371D4u, 0x3371DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371DCu;
label_3371dc:
    // 0x3371dc: 0x0  nop
    ctx->pc = 0x3371dcu;
    // NOP
label_3371e0:
    // 0x3371e0: 0x0  nop
    ctx->pc = 0x3371e0u;
    // NOP
label_3371e4:
    // 0x3371e4: 0x0  nop
    ctx->pc = 0x3371e4u;
    // NOP
label_3371e8:
    // 0x3371e8: 0x0  nop
    ctx->pc = 0x3371e8u;
    // NOP
label_3371ec:
    // 0x3371ec: 0x0  nop
    ctx->pc = 0x3371ecu;
    // NOP
label_3371f0:
    // 0x3371f0: 0x0  nop
    ctx->pc = 0x3371f0u;
    // NOP
label_3371f4:
    // 0x3371f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3371f8:
    if (ctx->pc == 0x3371F8u) {
        ctx->pc = 0x3371FCu;
        goto label_3371fc;
    }
    ctx->pc = 0x3371F4u;
    {
        const bool branch_taken_0x3371f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371f4) {
            ctx->pc = 0x3371E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3371e0;
        }
    }
    ctx->pc = 0x3371FCu;
label_3371fc:
    // 0x3371fc: 0x0  nop
    ctx->pc = 0x3371fcu;
    // NOP
label_337200:
    // 0x337200: 0x8ea20708  lw          $v0, 0x708($s5)
    ctx->pc = 0x337200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_337204:
    // 0x337204: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x337204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_337208:
    // 0x337208: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_33720c:
    if (ctx->pc == 0x33720Cu) {
        ctx->pc = 0x33720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337208u;
        // 0x33720c: 0x26820768  addiu       $v0, $s4, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337210u;
        goto label_337210;
    }
    ctx->pc = 0x337208u;
    {
        const bool branch_taken_0x337208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337208u;
        // 0x33720c: 0x26820768  addiu       $v0, $s4, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337208) {
            ctx->pc = 0x337080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337080;
        }
    }
    ctx->pc = 0x337210u;
label_337210:
    // 0x337210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337214:
    // 0x337214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_337218:
    // 0x337218: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33721c:
    // 0x33721c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33721cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_337220:
    // 0x337220: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x337220u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_337224:
    // 0x337224: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x337224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_337228:
    // 0x337228: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x337228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33722c:
    // 0x33722c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x33722cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_337230:
    // 0x337230: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x337230u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_337234:
    // 0x337234: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x337234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_337238:
    // 0x337238: 0x3e00008  jr          $ra
label_33723c:
    if (ctx->pc == 0x33723Cu) {
        ctx->pc = 0x33723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337238u;
        // 0x33723c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337240u;
        goto label_fallthrough_0x337238;
    }
    ctx->pc = 0x337238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337238u;
        // 0x33723c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x337238:
    ctx->pc = 0x337240u;
}
