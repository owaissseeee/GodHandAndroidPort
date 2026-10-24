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

// Function: func_00173EC0
// Address: 0x173ec0 - 0x1741e8
void func_00173EC0_0x173ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173EC0_0x173ec0");
#endif

    switch (ctx->pc) {
        case 0x173ec0u: goto label_173ec0;
        case 0x173ec4u: goto label_173ec4;
        case 0x173ec8u: goto label_173ec8;
        case 0x173eccu: goto label_173ecc;
        case 0x173ed0u: goto label_173ed0;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ed8u: goto label_173ed8;
        case 0x173edcu: goto label_173edc;
        case 0x173ee0u: goto label_173ee0;
        case 0x173ee4u: goto label_173ee4;
        case 0x173ee8u: goto label_173ee8;
        case 0x173eecu: goto label_173eec;
        case 0x173ef0u: goto label_173ef0;
        case 0x173ef4u: goto label_173ef4;
        case 0x173ef8u: goto label_173ef8;
        case 0x173efcu: goto label_173efc;
        case 0x173f00u: goto label_173f00;
        case 0x173f04u: goto label_173f04;
        case 0x173f08u: goto label_173f08;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f10u: goto label_173f10;
        case 0x173f14u: goto label_173f14;
        case 0x173f18u: goto label_173f18;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f20u: goto label_173f20;
        case 0x173f24u: goto label_173f24;
        case 0x173f28u: goto label_173f28;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f30u: goto label_173f30;
        case 0x173f34u: goto label_173f34;
        case 0x173f38u: goto label_173f38;
        case 0x173f3cu: goto label_173f3c;
        case 0x173f40u: goto label_173f40;
        case 0x173f44u: goto label_173f44;
        case 0x173f48u: goto label_173f48;
        case 0x173f4cu: goto label_173f4c;
        case 0x173f50u: goto label_173f50;
        case 0x173f54u: goto label_173f54;
        case 0x173f58u: goto label_173f58;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f60u: goto label_173f60;
        case 0x173f64u: goto label_173f64;
        case 0x173f68u: goto label_173f68;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f70u: goto label_173f70;
        case 0x173f74u: goto label_173f74;
        case 0x173f78u: goto label_173f78;
        case 0x173f7cu: goto label_173f7c;
        case 0x173f80u: goto label_173f80;
        case 0x173f84u: goto label_173f84;
        case 0x173f88u: goto label_173f88;
        case 0x173f8cu: goto label_173f8c;
        case 0x173f90u: goto label_173f90;
        case 0x173f94u: goto label_173f94;
        case 0x173f98u: goto label_173f98;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fa8u: goto label_173fa8;
        case 0x173facu: goto label_173fac;
        case 0x173fb0u: goto label_173fb0;
        case 0x173fb4u: goto label_173fb4;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fbcu: goto label_173fbc;
        case 0x173fc0u: goto label_173fc0;
        case 0x173fc4u: goto label_173fc4;
        case 0x173fc8u: goto label_173fc8;
        case 0x173fccu: goto label_173fcc;
        case 0x173fd0u: goto label_173fd0;
        case 0x173fd4u: goto label_173fd4;
        case 0x173fd8u: goto label_173fd8;
        case 0x173fdcu: goto label_173fdc;
        case 0x173fe0u: goto label_173fe0;
        case 0x173fe4u: goto label_173fe4;
        case 0x173fe8u: goto label_173fe8;
        case 0x173fecu: goto label_173fec;
        case 0x173ff0u: goto label_173ff0;
        case 0x173ff4u: goto label_173ff4;
        case 0x173ff8u: goto label_173ff8;
        case 0x173ffcu: goto label_173ffc;
        case 0x174000u: goto label_174000;
        case 0x174004u: goto label_174004;
        case 0x174008u: goto label_174008;
        case 0x17400cu: goto label_17400c;
        case 0x174010u: goto label_174010;
        case 0x174014u: goto label_174014;
        case 0x174018u: goto label_174018;
        case 0x17401cu: goto label_17401c;
        case 0x174020u: goto label_174020;
        case 0x174024u: goto label_174024;
        case 0x174028u: goto label_174028;
        case 0x17402cu: goto label_17402c;
        case 0x174030u: goto label_174030;
        case 0x174034u: goto label_174034;
        case 0x174038u: goto label_174038;
        case 0x17403cu: goto label_17403c;
        case 0x174040u: goto label_174040;
        case 0x174044u: goto label_174044;
        case 0x174048u: goto label_174048;
        case 0x17404cu: goto label_17404c;
        case 0x174050u: goto label_174050;
        case 0x174054u: goto label_174054;
        case 0x174058u: goto label_174058;
        case 0x17405cu: goto label_17405c;
        case 0x174060u: goto label_174060;
        case 0x174064u: goto label_174064;
        case 0x174068u: goto label_174068;
        case 0x17406cu: goto label_17406c;
        case 0x174070u: goto label_174070;
        case 0x174074u: goto label_174074;
        case 0x174078u: goto label_174078;
        case 0x17407cu: goto label_17407c;
        case 0x174080u: goto label_174080;
        case 0x174084u: goto label_174084;
        case 0x174088u: goto label_174088;
        case 0x17408cu: goto label_17408c;
        case 0x174090u: goto label_174090;
        case 0x174094u: goto label_174094;
        case 0x174098u: goto label_174098;
        case 0x17409cu: goto label_17409c;
        case 0x1740a0u: goto label_1740a0;
        case 0x1740a4u: goto label_1740a4;
        case 0x1740a8u: goto label_1740a8;
        case 0x1740acu: goto label_1740ac;
        case 0x1740b0u: goto label_1740b0;
        case 0x1740b4u: goto label_1740b4;
        case 0x1740b8u: goto label_1740b8;
        case 0x1740bcu: goto label_1740bc;
        case 0x1740c0u: goto label_1740c0;
        case 0x1740c4u: goto label_1740c4;
        case 0x1740c8u: goto label_1740c8;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740d0u: goto label_1740d0;
        case 0x1740d4u: goto label_1740d4;
        case 0x1740d8u: goto label_1740d8;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e0u: goto label_1740e0;
        case 0x1740e4u: goto label_1740e4;
        case 0x1740e8u: goto label_1740e8;
        case 0x1740ecu: goto label_1740ec;
        case 0x1740f0u: goto label_1740f0;
        case 0x1740f4u: goto label_1740f4;
        case 0x1740f8u: goto label_1740f8;
        case 0x1740fcu: goto label_1740fc;
        case 0x174100u: goto label_174100;
        case 0x174104u: goto label_174104;
        case 0x174108u: goto label_174108;
        case 0x17410cu: goto label_17410c;
        case 0x174110u: goto label_174110;
        case 0x174114u: goto label_174114;
        case 0x174118u: goto label_174118;
        case 0x17411cu: goto label_17411c;
        case 0x174120u: goto label_174120;
        case 0x174124u: goto label_174124;
        case 0x174128u: goto label_174128;
        case 0x17412cu: goto label_17412c;
        case 0x174130u: goto label_174130;
        case 0x174134u: goto label_174134;
        case 0x174138u: goto label_174138;
        case 0x17413cu: goto label_17413c;
        case 0x174140u: goto label_174140;
        case 0x174144u: goto label_174144;
        case 0x174148u: goto label_174148;
        case 0x17414cu: goto label_17414c;
        case 0x174150u: goto label_174150;
        case 0x174154u: goto label_174154;
        case 0x174158u: goto label_174158;
        case 0x17415cu: goto label_17415c;
        case 0x174160u: goto label_174160;
        case 0x174164u: goto label_174164;
        case 0x174168u: goto label_174168;
        case 0x17416cu: goto label_17416c;
        case 0x174170u: goto label_174170;
        case 0x174174u: goto label_174174;
        case 0x174178u: goto label_174178;
        case 0x17417cu: goto label_17417c;
        case 0x174180u: goto label_174180;
        case 0x174184u: goto label_174184;
        case 0x174188u: goto label_174188;
        case 0x17418cu: goto label_17418c;
        case 0x174190u: goto label_174190;
        case 0x174194u: goto label_174194;
        case 0x174198u: goto label_174198;
        case 0x17419cu: goto label_17419c;
        case 0x1741a0u: goto label_1741a0;
        case 0x1741a4u: goto label_1741a4;
        case 0x1741a8u: goto label_1741a8;
        case 0x1741acu: goto label_1741ac;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b4u: goto label_1741b4;
        case 0x1741b8u: goto label_1741b8;
        case 0x1741bcu: goto label_1741bc;
        case 0x1741c0u: goto label_1741c0;
        case 0x1741c4u: goto label_1741c4;
        case 0x1741c8u: goto label_1741c8;
        case 0x1741ccu: goto label_1741cc;
        case 0x1741d0u: goto label_1741d0;
        case 0x1741d4u: goto label_1741d4;
        case 0x1741d8u: goto label_1741d8;
        case 0x1741dcu: goto label_1741dc;
        case 0x1741e0u: goto label_1741e0;
        case 0x1741e4u: goto label_1741e4;
        default: break;
    }

    ctx->pc = 0x173ec0u;

label_173ec0:
    // 0x173ec0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x173ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_173ec4:
    // 0x173ec4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x173ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_173ec8:
    // 0x173ec8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x173ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_173ecc:
    // 0x173ecc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x173eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173ed0:
    // 0x173ed0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x173ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_173ed4:
    // 0x173ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173ed8:
    // 0x173ed8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x173ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_173edc:
    // 0x173edc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x173edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_173ee0:
    // 0x173ee0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x173ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_173ee4:
    // 0x173ee4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x173ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_173ee8:
    // 0x173ee8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x173ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_173eec:
    // 0x173eec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x173eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_173ef0:
    // 0x173ef0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x173ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_173ef4:
    // 0x173ef4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x173ef4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_173ef8:
    // 0x173ef8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x173ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_173efc:
    // 0x173efc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x173efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_173f00:
    // 0x173f00: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_173f04:
    if (ctx->pc == 0x173F04u) {
        ctx->pc = 0x173F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F00u;
        // 0x173f04: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F08u;
        goto label_173f08;
    }
    ctx->pc = 0x173F00u;
    {
        const bool branch_taken_0x173f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x173F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F00u;
        // 0x173f04: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f00) {
            ctx->pc = 0x173FDCu;
            goto label_173fdc;
        }
    }
    ctx->pc = 0x173F08u;
label_173f08:
    // 0x173f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_173f0c:
    if (ctx->pc == 0x173F0Cu) {
        ctx->pc = 0x173F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F08u;
        // 0x173f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F10u;
        goto label_173f10;
    }
    ctx->pc = 0x173F08u;
    {
        const bool branch_taken_0x173f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F08u;
        // 0x173f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f08) {
            ctx->pc = 0x173F20u;
            goto label_173f20;
        }
    }
    ctx->pc = 0x173F10u;
label_173f10:
    // 0x173f10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_173f14:
    if (ctx->pc == 0x173F14u) {
        ctx->pc = 0x173F18u;
        goto label_173f18;
    }
    ctx->pc = 0x173F10u;
    {
        const bool branch_taken_0x173f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f10) {
            ctx->pc = 0x173F38u;
            goto label_173f38;
        }
    }
    ctx->pc = 0x173F18u;
label_173f18:
    // 0x173f18: 0x1000004f  b           . + 4 + (0x4F << 2)
label_173f1c:
    if (ctx->pc == 0x173F1Cu) {
        ctx->pc = 0x173F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F18u;
        // 0x173f1c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F20u;
        goto label_173f20;
    }
    ctx->pc = 0x173F18u;
    {
        const bool branch_taken_0x173f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F18u;
        // 0x173f1c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f18) {
            ctx->pc = 0x174058u;
            goto label_174058;
        }
    }
    ctx->pc = 0x173F20u;
label_173f20:
    // 0x173f20: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_173f24:
    if (ctx->pc == 0x173F24u) {
        ctx->pc = 0x173F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F20u;
        // 0x173f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F28u;
        goto label_173f28;
    }
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F20u;
        // 0x173f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f20) {
            ctx->pc = 0x174004u;
            goto label_174004;
        }
    }
    ctx->pc = 0x173F28u;
label_173f28:
    // 0x173f28: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_173f2c:
    if (ctx->pc == 0x173F2Cu) {
        ctx->pc = 0x173F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F28u;
        // 0x173f2c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F30u;
        goto label_173f30;
    }
    ctx->pc = 0x173F28u;
    {
        const bool branch_taken_0x173f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173f28) {
            ctx->pc = 0x173F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F28u;
            // 0x173f2c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174048u;
            goto label_174048;
        }
    }
    ctx->pc = 0x173F30u;
label_173f30:
    // 0x173f30: 0x10000049  b           . + 4 + (0x49 << 2)
label_173f34:
    if (ctx->pc == 0x173F34u) {
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F30u;
        // 0x173f34: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F38u;
        goto label_173f38;
    }
    ctx->pc = 0x173F30u;
    {
        const bool branch_taken_0x173f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F30u;
        // 0x173f34: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f30) {
            ctx->pc = 0x174058u;
            goto label_174058;
        }
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x173f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_173f3c:
    // 0x173f3c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_173f40:
    // 0x173f40: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x173f40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_173f44:
    // 0x173f44: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x173f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_173f48:
    // 0x173f48: 0x40f809  jalr        $v0
label_173f4c:
    if (ctx->pc == 0x173F4Cu) {
        ctx->pc = 0x173F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F48u;
        // 0x173f4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F50u;
        goto label_173f50;
    }
    ctx->pc = 0x173F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173F50u);
        ctx->pc = 0x173F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F48u;
        // 0x173f4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F48u, 0x173F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173F50u;
label_173f50:
    // 0x173f50: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_173f54:
    if (ctx->pc == 0x173F54u) {
        ctx->pc = 0x173F58u;
        goto label_173f58;
    }
    ctx->pc = 0x173F50u;
    {
        const bool branch_taken_0x173f50 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x173f50) {
            ctx->pc = 0x173F70u;
            goto label_173f70;
        }
    }
    ctx->pc = 0x173F58u;
label_173f58:
    // 0x173f58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x173f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173f5c:
    // 0x173f5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x173f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173f60:
    // 0x173f60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x173f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173f64:
    // 0x173f64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x173f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173f68:
    // 0x173f68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x173f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173f6c:
    // 0x173f6c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x173f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_173f70:
    // 0x173f70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_173f74:
    // 0x173f74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x173f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_173f78:
    // 0x173f78: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x173f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173f7c:
    // 0x173f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f80:
    // 0x173f80: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_173f84:
    // 0x173f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f88:
    // 0x173f88: 0xc0c1a0e  jal         func_306838
label_173f8c:
    if (ctx->pc == 0x173F8Cu) {
        ctx->pc = 0x173F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F88u;
        // 0x173f8c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F90u;
        goto label_173f90;
    }
    ctx->pc = 0x173F88u;
    SET_GPR_U32(ctx, 31, 0x173F90u);
    ctx->pc = 0x173F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F88u;
    // 0x173f8c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x173F88u, 0x173F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F90u;
label_173f90:
    // 0x173f90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_173f94:
    // 0x173f94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f98:
    // 0x173f98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x173f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f9c:
    // 0x173f9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x173f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173fa0:
    // 0x173fa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173fa4:
    // 0x173fa4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_173fa8:
    // 0x173fa8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x173fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173fac:
    // 0x173fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173fb0:
    // 0x173fb0: 0xc0b2e92  jal         func_2CBA48
label_173fb4:
    if (ctx->pc == 0x173FB4u) {
        ctx->pc = 0x173FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FB0u;
        // 0x173fb4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FB8u;
        goto label_173fb8;
    }
    ctx->pc = 0x173FB0u;
    SET_GPR_U32(ctx, 31, 0x173FB8u);
    ctx->pc = 0x173FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FB0u;
    // 0x173fb4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x173FB0u, 0x173FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FB8u;
label_173fb8:
    // 0x173fb8: 0xc05d112  jal         func_174448
label_173fbc:
    if (ctx->pc == 0x173FBCu) {
        ctx->pc = 0x173FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FB8u;
        // 0x173fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FC0u;
        goto label_173fc0;
    }
    ctx->pc = 0x173FB8u;
    SET_GPR_U32(ctx, 31, 0x173FC0u);
    ctx->pc = 0x173FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FB8u;
    // 0x173fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174448u, 0x173FB8u, 0x173FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FC0u;
label_173fc0:
    // 0x173fc0: 0xc06de42  jal         func_1B7908
label_173fc4:
    if (ctx->pc == 0x173FC4u) {
        ctx->pc = 0x173FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FC0u;
        // 0x173fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FC8u;
        goto label_173fc8;
    }
    ctx->pc = 0x173FC0u;
    SET_GPR_U32(ctx, 31, 0x173FC8u);
    ctx->pc = 0x173FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FC0u;
    // 0x173fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x173FC0u, 0x173FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FC8u;
label_173fc8:
    // 0x173fc8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_173fcc:
    // 0x173fcc: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x173fccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_173fd0:
    // 0x173fd0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x173fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_173fd4:
    // 0x173fd4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x173fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_173fd8:
    // 0x173fd8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x173fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_173fdc:
    // 0x173fdc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x173fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_173fe0:
    // 0x173fe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_173fe4:
    // 0x173fe4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x173fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_173fe8:
    // 0x173fe8: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_173fec:
    if (ctx->pc == 0x173FECu) {
        ctx->pc = 0x173FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FE8u;
        // 0x173fec: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FF0u;
        goto label_173ff0;
    }
    ctx->pc = 0x173FE8u;
    {
        const bool branch_taken_0x173fe8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x173FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FE8u;
        // 0x173fec: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fe8) {
            ctx->pc = 0x174054u;
            goto label_174054;
        }
    }
    ctx->pc = 0x173FF0u;
label_173ff0:
    // 0x173ff0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x173ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_173ff4:
    // 0x173ff4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173ff8:
    // 0x173ff8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x173ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_173ffc:
    // 0x173ffc: 0x10000013  b           . + 4 + (0x13 << 2)
label_174000:
    if (ctx->pc == 0x174000u) {
        ctx->pc = 0x174000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FFCu;
        // 0x174000: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174004u;
        goto label_174004;
    }
    ctx->pc = 0x173FFCu;
    {
        const bool branch_taken_0x173ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FFCu;
        // 0x174000: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ffc) {
            ctx->pc = 0x17404Cu;
            goto label_17404c;
        }
    }
    ctx->pc = 0x174004u;
label_174004:
    // 0x174004: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x174004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_174008:
    // 0x174008: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_17400c:
    // 0x17400c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_174010:
    // 0x174010: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_174014:
    // 0x174014: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x174014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174018:
    // 0x174018: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x174018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17401c:
    // 0x17401c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x17401cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_174020:
    // 0x174020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174024:
    // 0x174024: 0x0  nop
    ctx->pc = 0x174024u;
    // NOP
label_174028:
    // 0x174028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17402c:
    // 0x17402c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17402cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_174030:
    // 0x174030: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_174034:
    if (ctx->pc == 0x174034u) {
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174030u;
        // 0x174034: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174038u;
        goto label_174038;
    }
    ctx->pc = 0x174030u;
    {
        const bool branch_taken_0x174030 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174030u;
        // 0x174034: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174030) {
            ctx->pc = 0x174054u;
            goto label_174054;
        }
    }
    ctx->pc = 0x174038u;
label_174038:
    // 0x174038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17403c:
    // 0x17403c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17403cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_174040:
    // 0x174040: 0x10000003  b           . + 4 + (0x3 << 2)
label_174044:
    if (ctx->pc == 0x174044u) {
        ctx->pc = 0x174044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174040u;
        // 0x174044: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174048u;
        goto label_174048;
    }
    ctx->pc = 0x174040u;
    {
        const bool branch_taken_0x174040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174040u;
        // 0x174044: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174040) {
            ctx->pc = 0x174050u;
            goto label_174050;
        }
    }
    ctx->pc = 0x174048u;
label_174048:
    // 0x174048: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x174048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_17404c:
    // 0x17404c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17404cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_174050:
    // 0x174050: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x174050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_174054:
    // 0x174054: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x174054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_174058:
    // 0x174058: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17405c:
    // 0x17405c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_174060:
    if (ctx->pc == 0x174060u) {
        ctx->pc = 0x174060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17405Cu;
        // 0x174060: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174064u;
        goto label_174064;
    }
    ctx->pc = 0x17405Cu;
    {
        const bool branch_taken_0x17405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x174060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17405Cu;
        // 0x174060: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17405c) {
            ctx->pc = 0x1741ACu;
            goto label_1741ac;
        }
    }
    ctx->pc = 0x174064u;
label_174064:
    // 0x174064: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_174068:
    // 0x174068: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x174068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17406c:
    // 0x17406c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_174070:
    // 0x174070: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_174074:
    // 0x174074: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x174074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_174078:
    // 0x174078: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_17407c:
    // 0x17407c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_174080:
    // 0x174080: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_174084:
    // 0x174084: 0x0  nop
    ctx->pc = 0x174084u;
    // NOP
label_174088:
    // 0x174088: 0xc05ce40  jal         func_173900
label_17408c:
    if (ctx->pc == 0x17408Cu) {
        ctx->pc = 0x17408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174088u;
        // 0x17408c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174090u;
        goto label_174090;
    }
    ctx->pc = 0x174088u;
    SET_GPR_U32(ctx, 31, 0x174090u);
    ctx->pc = 0x17408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174088u;
    // 0x17408c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x174088u, 0x174090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174090u;
label_174090:
    // 0x174090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174094:
    // 0x174094: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_174098:
    if (ctx->pc == 0x174098u) {
        ctx->pc = 0x174098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174094u;
        // 0x174098: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17409Cu;
        goto label_17409c;
    }
    ctx->pc = 0x174094u;
    {
        const bool branch_taken_0x174094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x174094) {
            ctx->pc = 0x174098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174094u;
            // 0x174098: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174184u;
            goto label_174184;
        }
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x17409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1740a0:
    // 0x1740a0: 0xc0a4bd4  jal         func_292F50
label_1740a4:
    if (ctx->pc == 0x1740A4u) {
        ctx->pc = 0x1740A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740A0u;
        // 0x1740a4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740A8u;
        goto label_1740a8;
    }
    ctx->pc = 0x1740A0u;
    SET_GPR_U32(ctx, 31, 0x1740A8u);
    ctx->pc = 0x1740A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740A0u;
    // 0x1740a4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1740A0u, 0x1740A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740A8u;
label_1740a8:
    // 0x1740a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1740a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1740ac:
    // 0x1740ac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1740acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1740b0:
    // 0x1740b0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740b4:
    // 0x1740b4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1740b8:
    // 0x1740b8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1740b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1740bc:
    // 0x1740bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1740bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1740c0:
    // 0x1740c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1740c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1740c4:
    // 0x1740c4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740c8:
    // 0x1740c8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1740c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1740cc:
    // 0x1740cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1740ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740d0:
    // 0x1740d0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1740d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1740d4:
    // 0x1740d4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1740d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1740d8:
    // 0x1740d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1740d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1740dc:
    // 0x1740dc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1740dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740e0:
    // 0x1740e0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1740e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1740e4:
    // 0x1740e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740e8:
    // 0x1740e8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1740ec:
    // 0x1740ec: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1740ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1740f0:
    // 0x1740f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1740f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1740f4:
    // 0x1740f4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1740f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1740f8:
    // 0x1740f8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1740f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1740fc:
    // 0x1740fc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1740fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_174100:
    // 0x174100: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x174100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_174104:
    // 0x174104: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x174104u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_174108:
    // 0x174108: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x174108u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_17410c:
    // 0x17410c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17410cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_174110:
    // 0x174110: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x174110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_174114:
    // 0x174114: 0xc07df68  jal         func_1F7DA0
label_174118:
    if (ctx->pc == 0x174118u) {
        ctx->pc = 0x174118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174114u;
        // 0x174118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17411Cu;
        goto label_17411c;
    }
    ctx->pc = 0x174114u;
    SET_GPR_U32(ctx, 31, 0x17411Cu);
    ctx->pc = 0x174118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174114u;
    // 0x174118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x174114u, 0x17411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17411Cu;
label_17411c:
    // 0x17411c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174120:
    // 0x174120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174124:
    // 0x174124: 0xc051dca  jal         func_147728
label_174128:
    if (ctx->pc == 0x174128u) {
        ctx->pc = 0x174128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174124u;
        // 0x174128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17412Cu;
        goto label_17412c;
    }
    ctx->pc = 0x174124u;
    SET_GPR_U32(ctx, 31, 0x17412Cu);
    ctx->pc = 0x174128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174124u;
    // 0x174128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x174124u, 0x17412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17412Cu;
label_17412c:
    // 0x17412c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174130:
    // 0x174130: 0xc051f10  jal         func_147C40
label_174134:
    if (ctx->pc == 0x174134u) {
        ctx->pc = 0x174134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174130u;
        // 0x174134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174138u;
        goto label_174138;
    }
    ctx->pc = 0x174130u;
    SET_GPR_U32(ctx, 31, 0x174138u);
    ctx->pc = 0x174134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174130u;
    // 0x174134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x174130u, 0x174138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174138u;
label_174138:
    // 0x174138: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17413c:
    // 0x17413c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17413cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_174140:
    // 0x174140: 0xc051efe  jal         func_147BF8
label_174144:
    if (ctx->pc == 0x174144u) {
        ctx->pc = 0x174144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174140u;
        // 0x174144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174148u;
        goto label_174148;
    }
    ctx->pc = 0x174140u;
    SET_GPR_U32(ctx, 31, 0x174148u);
    ctx->pc = 0x174144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174140u;
    // 0x174144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x174140u, 0x174148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174148u;
label_174148:
    // 0x174148: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17414c:
    // 0x17414c: 0xc051d4a  jal         func_147528
label_174150:
    if (ctx->pc == 0x174150u) {
        ctx->pc = 0x174150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17414Cu;
        // 0x174150: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174154u;
        goto label_174154;
    }
    ctx->pc = 0x17414Cu;
    SET_GPR_U32(ctx, 31, 0x174154u);
    ctx->pc = 0x174150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17414Cu;
    // 0x174150: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x17414Cu, 0x174154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174154u;
label_174154:
    // 0x174154: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x174154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174158:
    // 0x174158: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x174158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17415c:
    // 0x17415c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17415cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_174160:
    // 0x174160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_174164:
    // 0x174164: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x174164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_174168:
    // 0x174168: 0x0  nop
    ctx->pc = 0x174168u;
    // NOP
label_17416c:
    // 0x17416c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_174170:
    if (ctx->pc == 0x174170u) {
        ctx->pc = 0x174170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17416Cu;
        // 0x174170: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174174u;
        goto label_174174;
    }
    ctx->pc = 0x17416Cu;
    {
        const bool branch_taken_0x17416c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17416Cu;
        // 0x174170: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17416c) {
            ctx->pc = 0x174180u;
            goto label_174180;
        }
    }
    ctx->pc = 0x174174u;
label_174174:
    // 0x174174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174178:
    // 0x174178: 0xc05bd90  jal         func_16F640
label_17417c:
    if (ctx->pc == 0x17417Cu) {
        ctx->pc = 0x17417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174178u;
        // 0x17417c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174180u;
        goto label_174180;
    }
    ctx->pc = 0x174178u;
    SET_GPR_U32(ctx, 31, 0x174180u);
    ctx->pc = 0x17417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174178u;
    // 0x17417c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x174178u, 0x174180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174180u;
label_174180:
    // 0x174180: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_174184:
    // 0x174184: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x174184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_174188:
    // 0x174188: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x174188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_17418c:
    // 0x17418c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_174190:
    // 0x174190: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x174190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_174194:
    // 0x174194: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x174194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_174198:
    // 0x174198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17419c:
    if (ctx->pc == 0x17419Cu) {
        ctx->pc = 0x17419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174198u;
        // 0x17419c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741A0u;
        goto label_1741a0;
    }
    ctx->pc = 0x174198u;
    {
        const bool branch_taken_0x174198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174198u;
        // 0x17419c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174198) {
            ctx->pc = 0x1741ACu;
            goto label_1741ac;
        }
    }
    ctx->pc = 0x1741A0u;
label_1741a0:
    // 0x1741a0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1741a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1741a4:
    // 0x1741a4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1741a8:
    if (ctx->pc == 0x1741A8u) {
        ctx->pc = 0x1741ACu;
        goto label_1741ac;
    }
    ctx->pc = 0x1741A4u;
    {
        const bool branch_taken_0x1741a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1741a4) {
            ctx->pc = 0x174088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174088;
        }
    }
    ctx->pc = 0x1741ACu;
label_1741ac:
    // 0x1741ac: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1741acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1741b0:
    // 0x1741b0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1741b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1741b4:
    // 0x1741b4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1741b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1741b8:
    // 0x1741b8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1741b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1741bc:
    // 0x1741bc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1741bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1741c0:
    // 0x1741c0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1741c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1741c4:
    // 0x1741c4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1741c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1741c8:
    // 0x1741c8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1741c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1741cc:
    // 0x1741cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1741ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1741d0:
    // 0x1741d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1741d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1741d4:
    // 0x1741d4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1741d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1741d8:
    // 0x1741d8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1741d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1741dc:
    // 0x1741dc: 0x3e00008  jr          $ra
label_1741e0:
    if (ctx->pc == 0x1741E0u) {
        ctx->pc = 0x1741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741DCu;
        // 0x1741e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741E4u;
        goto label_1741e4;
    }
    ctx->pc = 0x1741DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741DCu;
        // 0x1741e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1741DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1741E4u;
label_1741e4:
    // 0x1741e4: 0x0  nop
    ctx->pc = 0x1741e4u;
    // NOP
    ctx->pc = 0x1741e8u;
}
