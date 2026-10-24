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

// Function: func_00337DE0
// Address: 0x337de0 - 0x3381b0
void func_00337DE0_0x337de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337DE0_0x337de0");
#endif

    switch (ctx->pc) {
        case 0x337de0u: goto label_337de0;
        case 0x337de4u: goto label_337de4;
        case 0x337de8u: goto label_337de8;
        case 0x337decu: goto label_337dec;
        case 0x337df0u: goto label_337df0;
        case 0x337df4u: goto label_337df4;
        case 0x337df8u: goto label_337df8;
        case 0x337dfcu: goto label_337dfc;
        case 0x337e00u: goto label_337e00;
        case 0x337e04u: goto label_337e04;
        case 0x337e08u: goto label_337e08;
        case 0x337e0cu: goto label_337e0c;
        case 0x337e10u: goto label_337e10;
        case 0x337e14u: goto label_337e14;
        case 0x337e18u: goto label_337e18;
        case 0x337e1cu: goto label_337e1c;
        case 0x337e20u: goto label_337e20;
        case 0x337e24u: goto label_337e24;
        case 0x337e28u: goto label_337e28;
        case 0x337e2cu: goto label_337e2c;
        case 0x337e30u: goto label_337e30;
        case 0x337e34u: goto label_337e34;
        case 0x337e38u: goto label_337e38;
        case 0x337e3cu: goto label_337e3c;
        case 0x337e40u: goto label_337e40;
        case 0x337e44u: goto label_337e44;
        case 0x337e48u: goto label_337e48;
        case 0x337e4cu: goto label_337e4c;
        case 0x337e50u: goto label_337e50;
        case 0x337e54u: goto label_337e54;
        case 0x337e58u: goto label_337e58;
        case 0x337e5cu: goto label_337e5c;
        case 0x337e60u: goto label_337e60;
        case 0x337e64u: goto label_337e64;
        case 0x337e68u: goto label_337e68;
        case 0x337e6cu: goto label_337e6c;
        case 0x337e70u: goto label_337e70;
        case 0x337e74u: goto label_337e74;
        case 0x337e78u: goto label_337e78;
        case 0x337e7cu: goto label_337e7c;
        case 0x337e80u: goto label_337e80;
        case 0x337e84u: goto label_337e84;
        case 0x337e88u: goto label_337e88;
        case 0x337e8cu: goto label_337e8c;
        case 0x337e90u: goto label_337e90;
        case 0x337e94u: goto label_337e94;
        case 0x337e98u: goto label_337e98;
        case 0x337e9cu: goto label_337e9c;
        case 0x337ea0u: goto label_337ea0;
        case 0x337ea4u: goto label_337ea4;
        case 0x337ea8u: goto label_337ea8;
        case 0x337eacu: goto label_337eac;
        case 0x337eb0u: goto label_337eb0;
        case 0x337eb4u: goto label_337eb4;
        case 0x337eb8u: goto label_337eb8;
        case 0x337ebcu: goto label_337ebc;
        case 0x337ec0u: goto label_337ec0;
        case 0x337ec4u: goto label_337ec4;
        case 0x337ec8u: goto label_337ec8;
        case 0x337eccu: goto label_337ecc;
        case 0x337ed0u: goto label_337ed0;
        case 0x337ed4u: goto label_337ed4;
        case 0x337ed8u: goto label_337ed8;
        case 0x337edcu: goto label_337edc;
        case 0x337ee0u: goto label_337ee0;
        case 0x337ee4u: goto label_337ee4;
        case 0x337ee8u: goto label_337ee8;
        case 0x337eecu: goto label_337eec;
        case 0x337ef0u: goto label_337ef0;
        case 0x337ef4u: goto label_337ef4;
        case 0x337ef8u: goto label_337ef8;
        case 0x337efcu: goto label_337efc;
        case 0x337f00u: goto label_337f00;
        case 0x337f04u: goto label_337f04;
        case 0x337f08u: goto label_337f08;
        case 0x337f0cu: goto label_337f0c;
        case 0x337f10u: goto label_337f10;
        case 0x337f14u: goto label_337f14;
        case 0x337f18u: goto label_337f18;
        case 0x337f1cu: goto label_337f1c;
        case 0x337f20u: goto label_337f20;
        case 0x337f24u: goto label_337f24;
        case 0x337f28u: goto label_337f28;
        case 0x337f2cu: goto label_337f2c;
        case 0x337f30u: goto label_337f30;
        case 0x337f34u: goto label_337f34;
        case 0x337f38u: goto label_337f38;
        case 0x337f3cu: goto label_337f3c;
        case 0x337f40u: goto label_337f40;
        case 0x337f44u: goto label_337f44;
        case 0x337f48u: goto label_337f48;
        case 0x337f4cu: goto label_337f4c;
        case 0x337f50u: goto label_337f50;
        case 0x337f54u: goto label_337f54;
        case 0x337f58u: goto label_337f58;
        case 0x337f5cu: goto label_337f5c;
        case 0x337f60u: goto label_337f60;
        case 0x337f64u: goto label_337f64;
        case 0x337f68u: goto label_337f68;
        case 0x337f6cu: goto label_337f6c;
        case 0x337f70u: goto label_337f70;
        case 0x337f74u: goto label_337f74;
        case 0x337f78u: goto label_337f78;
        case 0x337f7cu: goto label_337f7c;
        case 0x337f80u: goto label_337f80;
        case 0x337f84u: goto label_337f84;
        case 0x337f88u: goto label_337f88;
        case 0x337f8cu: goto label_337f8c;
        case 0x337f90u: goto label_337f90;
        case 0x337f94u: goto label_337f94;
        case 0x337f98u: goto label_337f98;
        case 0x337f9cu: goto label_337f9c;
        case 0x337fa0u: goto label_337fa0;
        case 0x337fa4u: goto label_337fa4;
        case 0x337fa8u: goto label_337fa8;
        case 0x337facu: goto label_337fac;
        case 0x337fb0u: goto label_337fb0;
        case 0x337fb4u: goto label_337fb4;
        case 0x337fb8u: goto label_337fb8;
        case 0x337fbcu: goto label_337fbc;
        case 0x337fc0u: goto label_337fc0;
        case 0x337fc4u: goto label_337fc4;
        case 0x337fc8u: goto label_337fc8;
        case 0x337fccu: goto label_337fcc;
        case 0x337fd0u: goto label_337fd0;
        case 0x337fd4u: goto label_337fd4;
        case 0x337fd8u: goto label_337fd8;
        case 0x337fdcu: goto label_337fdc;
        case 0x337fe0u: goto label_337fe0;
        case 0x337fe4u: goto label_337fe4;
        case 0x337fe8u: goto label_337fe8;
        case 0x337fecu: goto label_337fec;
        case 0x337ff0u: goto label_337ff0;
        case 0x337ff4u: goto label_337ff4;
        case 0x337ff8u: goto label_337ff8;
        case 0x337ffcu: goto label_337ffc;
        case 0x338000u: goto label_338000;
        case 0x338004u: goto label_338004;
        case 0x338008u: goto label_338008;
        case 0x33800cu: goto label_33800c;
        case 0x338010u: goto label_338010;
        case 0x338014u: goto label_338014;
        case 0x338018u: goto label_338018;
        case 0x33801cu: goto label_33801c;
        case 0x338020u: goto label_338020;
        case 0x338024u: goto label_338024;
        case 0x338028u: goto label_338028;
        case 0x33802cu: goto label_33802c;
        case 0x338030u: goto label_338030;
        case 0x338034u: goto label_338034;
        case 0x338038u: goto label_338038;
        case 0x33803cu: goto label_33803c;
        case 0x338040u: goto label_338040;
        case 0x338044u: goto label_338044;
        case 0x338048u: goto label_338048;
        case 0x33804cu: goto label_33804c;
        case 0x338050u: goto label_338050;
        case 0x338054u: goto label_338054;
        case 0x338058u: goto label_338058;
        case 0x33805cu: goto label_33805c;
        case 0x338060u: goto label_338060;
        case 0x338064u: goto label_338064;
        case 0x338068u: goto label_338068;
        case 0x33806cu: goto label_33806c;
        case 0x338070u: goto label_338070;
        case 0x338074u: goto label_338074;
        case 0x338078u: goto label_338078;
        case 0x33807cu: goto label_33807c;
        case 0x338080u: goto label_338080;
        case 0x338084u: goto label_338084;
        case 0x338088u: goto label_338088;
        case 0x33808cu: goto label_33808c;
        case 0x338090u: goto label_338090;
        case 0x338094u: goto label_338094;
        case 0x338098u: goto label_338098;
        case 0x33809cu: goto label_33809c;
        case 0x3380a0u: goto label_3380a0;
        case 0x3380a4u: goto label_3380a4;
        case 0x3380a8u: goto label_3380a8;
        case 0x3380acu: goto label_3380ac;
        case 0x3380b0u: goto label_3380b0;
        case 0x3380b4u: goto label_3380b4;
        case 0x3380b8u: goto label_3380b8;
        case 0x3380bcu: goto label_3380bc;
        case 0x3380c0u: goto label_3380c0;
        case 0x3380c4u: goto label_3380c4;
        case 0x3380c8u: goto label_3380c8;
        case 0x3380ccu: goto label_3380cc;
        case 0x3380d0u: goto label_3380d0;
        case 0x3380d4u: goto label_3380d4;
        case 0x3380d8u: goto label_3380d8;
        case 0x3380dcu: goto label_3380dc;
        case 0x3380e0u: goto label_3380e0;
        case 0x3380e4u: goto label_3380e4;
        case 0x3380e8u: goto label_3380e8;
        case 0x3380ecu: goto label_3380ec;
        case 0x3380f0u: goto label_3380f0;
        case 0x3380f4u: goto label_3380f4;
        case 0x3380f8u: goto label_3380f8;
        case 0x3380fcu: goto label_3380fc;
        case 0x338100u: goto label_338100;
        case 0x338104u: goto label_338104;
        case 0x338108u: goto label_338108;
        case 0x33810cu: goto label_33810c;
        case 0x338110u: goto label_338110;
        case 0x338114u: goto label_338114;
        case 0x338118u: goto label_338118;
        case 0x33811cu: goto label_33811c;
        case 0x338120u: goto label_338120;
        case 0x338124u: goto label_338124;
        case 0x338128u: goto label_338128;
        case 0x33812cu: goto label_33812c;
        case 0x338130u: goto label_338130;
        case 0x338134u: goto label_338134;
        case 0x338138u: goto label_338138;
        case 0x33813cu: goto label_33813c;
        case 0x338140u: goto label_338140;
        case 0x338144u: goto label_338144;
        case 0x338148u: goto label_338148;
        case 0x33814cu: goto label_33814c;
        case 0x338150u: goto label_338150;
        case 0x338154u: goto label_338154;
        case 0x338158u: goto label_338158;
        case 0x33815cu: goto label_33815c;
        case 0x338160u: goto label_338160;
        case 0x338164u: goto label_338164;
        case 0x338168u: goto label_338168;
        case 0x33816cu: goto label_33816c;
        case 0x338170u: goto label_338170;
        case 0x338174u: goto label_338174;
        case 0x338178u: goto label_338178;
        case 0x33817cu: goto label_33817c;
        case 0x338180u: goto label_338180;
        case 0x338184u: goto label_338184;
        case 0x338188u: goto label_338188;
        case 0x33818cu: goto label_33818c;
        case 0x338190u: goto label_338190;
        case 0x338194u: goto label_338194;
        case 0x338198u: goto label_338198;
        case 0x33819cu: goto label_33819c;
        case 0x3381a0u: goto label_3381a0;
        case 0x3381a4u: goto label_3381a4;
        case 0x3381a8u: goto label_3381a8;
        case 0x3381acu: goto label_3381ac;
        default: break;
    }

    ctx->pc = 0x337de0u;

label_337de0:
    // 0x337de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_337de4:
    // 0x337de4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_337de8:
    // 0x337de8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x337de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_337dec:
    // 0x337dec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x337decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337df0:
    // 0x337df0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x337df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_337df4:
    // 0x337df4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x337df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_337df8:
    // 0x337df8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x337df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_337dfc:
    // 0x337dfc: 0x24532b68  addiu       $s3, $v0, 0x2B68
    ctx->pc = 0x337dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11112));
label_337e00:
    // 0x337e00: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x337e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_337e04:
    // 0x337e04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x337e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_337e08:
    // 0x337e08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x337e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_337e0c:
    // 0x337e0c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x337e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_337e10:
    // 0x337e10: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x337e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_337e14:
    // 0x337e14: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x337e14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_337e18:
    // 0x337e18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_337e1c:
    if (ctx->pc == 0x337E1Cu) {
        ctx->pc = 0x337E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E18u;
        // 0x337e1c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E20u;
        goto label_337e20;
    }
    ctx->pc = 0x337E18u;
    {
        const bool branch_taken_0x337e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E18u;
        // 0x337e1c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e18) {
            ctx->pc = 0x337E4Cu;
            goto label_337e4c;
        }
    }
    ctx->pc = 0x337E20u;
label_337e20:
    // 0x337e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x337e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_337e24:
    // 0x337e24: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x337e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_337e28:
    // 0x337e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x337e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_337e2c:
    // 0x337e2c: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x337e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_337e30:
    // 0x337e30: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x337e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_337e34:
    // 0x337e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_337e38:
    if (ctx->pc == 0x337E38u) {
        ctx->pc = 0x337E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E34u;
        // 0x337e38: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E3Cu;
        goto label_337e3c;
    }
    ctx->pc = 0x337E34u;
    {
        const bool branch_taken_0x337e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E34u;
        // 0x337e38: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e34) {
            ctx->pc = 0x337E4Cu;
            goto label_337e4c;
        }
    }
    ctx->pc = 0x337E3Cu;
label_337e3c:
    // 0x337e3c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x337e3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_337e40:
    // 0x337e40: 0x0  nop
    ctx->pc = 0x337e40u;
    // NOP
label_337e44:
    // 0x337e44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_337e48:
    if (ctx->pc == 0x337E48u) {
        ctx->pc = 0x337E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E44u;
        // 0x337e48: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E4Cu;
        goto label_337e4c;
    }
    ctx->pc = 0x337E44u;
    {
        const bool branch_taken_0x337e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E44u;
        // 0x337e48: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e44) {
            ctx->pc = 0x337E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337e28;
        }
    }
    ctx->pc = 0x337E4Cu;
label_337e4c:
    // 0x337e4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x337e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_337e50:
    // 0x337e50: 0x122300cd  beq         $s1, $v1, . + 4 + (0xCD << 2)
label_337e54:
    if (ctx->pc == 0x337E54u) {
        ctx->pc = 0x337E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E50u;
        // 0x337e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E58u;
        goto label_337e58;
    }
    ctx->pc = 0x337E50u;
    {
        const bool branch_taken_0x337e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x337E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E50u;
        // 0x337e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e50) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x337E58u;
label_337e58:
    // 0x337e58: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_337e5c:
    // 0x337e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x337e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337e60:
    // 0x337e60: 0x8c440710  lw          $a0, 0x710($v0)
    ctx->pc = 0x337e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_337e64:
    // 0x337e64: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_337e68:
    if (ctx->pc == 0x337E68u) {
        ctx->pc = 0x337E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E64u;
        // 0x337e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E6Cu;
        goto label_337e6c;
    }
    ctx->pc = 0x337E64u;
    {
        const bool branch_taken_0x337e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x337e64) {
            ctx->pc = 0x337E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E64u;
            // 0x337e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E88u;
            goto label_337e88;
        }
    }
    ctx->pc = 0x337E6Cu;
label_337e6c:
    // 0x337e6c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_337e70:
    // 0x337e70: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
label_337e74:
    // 0x337e74: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_337e78:
    if (ctx->pc == 0x337E78u) {
        ctx->pc = 0x337E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E74u;
        // 0x337e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E7Cu;
        goto label_337e7c;
    }
    ctx->pc = 0x337E74u;
    {
        const bool branch_taken_0x337e74 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x337e74) {
            ctx->pc = 0x337E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E74u;
            // 0x337e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E88u;
            goto label_337e88;
        }
    }
    ctx->pc = 0x337E7Cu;
label_337e7c:
    // 0x337e7c: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x337e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_337e80:
    // 0x337e80: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_337e84:
    if (ctx->pc == 0x337E84u) {
        ctx->pc = 0x337E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E80u;
        // 0x337e84: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E88u;
        goto label_337e88;
    }
    ctx->pc = 0x337E80u;
    {
        const bool branch_taken_0x337e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E80u;
        // 0x337e84: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e80) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x337E88u;
label_337e88:
    // 0x337e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337e8c:
    // 0x337e8c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x337e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_337e90:
    // 0x337e90: 0xc0e94bc  jal         func_3A52F0
label_337e94:
    if (ctx->pc == 0x337E94u) {
        ctx->pc = 0x337E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E90u;
        // 0x337e94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E98u;
        goto label_337e98;
    }
    ctx->pc = 0x337E90u;
    SET_GPR_U32(ctx, 31, 0x337E98u);
    ctx->pc = 0x337E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E90u;
    // 0x337e94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x337E90u, 0x337E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E98u;
label_337e98:
    // 0x337e98: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_337e9c:
    if (ctx->pc == 0x337E9Cu) {
        ctx->pc = 0x337E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E98u;
        // 0x337e9c: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EA0u;
        goto label_337ea0;
    }
    ctx->pc = 0x337E98u;
    {
        const bool branch_taken_0x337e98 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x337E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E98u;
        // 0x337e9c: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e98) {
            ctx->pc = 0x337F18u;
            goto label_337f18;
        }
    }
    ctx->pc = 0x337EA0u;
label_337ea0:
    // 0x337ea0: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x337ea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_337ea4:
    // 0x337ea4: 0x3c150045  lui         $s5, 0x45
    ctx->pc = 0x337ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)69 << 16));
label_337ea8:
    // 0x337ea8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x337ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_337eac:
    // 0x337eac: 0x0  nop
    ctx->pc = 0x337eacu;
    // NOP
label_337eb0:
    // 0x337eb0: 0xc0cdcc8  jal         func_337320
label_337eb4:
    if (ctx->pc == 0x337EB4u) {
        ctx->pc = 0x337EB8u;
        goto label_337eb8;
    }
    ctx->pc = 0x337EB0u;
    SET_GPR_U32(ctx, 31, 0x337EB8u);
    ctx->pc = 0x337320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337320u, 0x337EB0u, 0x337EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EB8u;
label_337eb8:
    // 0x337eb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_337ebc:
    // 0x337ebc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_337ec0:
    if (ctx->pc == 0x337EC0u) {
        ctx->pc = 0x337EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EBCu;
        // 0x337ec0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EC4u;
        goto label_337ec4;
    }
    ctx->pc = 0x337EBCu;
    {
        const bool branch_taken_0x337ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EBCu;
        // 0x337ec0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ebc) {
            ctx->pc = 0x337F08u;
            goto label_337f08;
        }
    }
    ctx->pc = 0x337EC4u;
label_337ec4:
    // 0x337ec4: 0xc0c9832  jal         func_3260C8
label_337ec8:
    if (ctx->pc == 0x337EC8u) {
        ctx->pc = 0x337EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EC4u;
        // 0x337ec8: 0x26a45678  addiu       $a0, $s5, 0x5678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337ECCu;
        goto label_337ecc;
    }
    ctx->pc = 0x337EC4u;
    SET_GPR_U32(ctx, 31, 0x337ECCu);
    ctx->pc = 0x337EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EC4u;
    // 0x337ec8: 0x26a45678  addiu       $a0, $s5, 0x5678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337EC4u, 0x337ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337ECCu;
label_337ecc:
    // 0x337ecc: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
label_337ed0:
    if (ctx->pc == 0x337ED0u) {
        ctx->pc = 0x337ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ECCu;
        // 0x337ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337ED4u;
        goto label_337ed4;
    }
    ctx->pc = 0x337ECCu;
    {
        const bool branch_taken_0x337ecc = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x337ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ECCu;
        // 0x337ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ecc) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x337ED4u;
label_337ed4:
    // 0x337ed4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x337ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_337ed8:
    // 0x337ed8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x337ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_337edc:
    // 0x337edc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x337edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_337ee0:
    // 0x337ee0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x337ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_337ee4:
    // 0x337ee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_337ee8:
    if (ctx->pc == 0x337EE8u) {
        ctx->pc = 0x337EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EE4u;
        // 0x337ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EECu;
        goto label_337eec;
    }
    ctx->pc = 0x337EE4u;
    {
        const bool branch_taken_0x337ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EE4u;
        // 0x337ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ee4) {
            ctx->pc = 0x337EF4u;
            goto label_337ef4;
        }
    }
    ctx->pc = 0x337EECu;
label_337eec:
    // 0x337eec: 0xc0cdce6  jal         func_337398
label_337ef0:
    if (ctx->pc == 0x337EF0u) {
        ctx->pc = 0x337EF4u;
        goto label_337ef4;
    }
    ctx->pc = 0x337EECu;
    SET_GPR_U32(ctx, 31, 0x337EF4u);
    ctx->pc = 0x337398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337398u, 0x337EECu, 0x337EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EF4u;
label_337ef4:
    // 0x337ef4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x337ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_337ef8:
    // 0x337ef8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_337efc:
    if (ctx->pc == 0x337EFCu) {
        ctx->pc = 0x337EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EF8u;
        // 0x337efc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F00u;
        goto label_337f00;
    }
    ctx->pc = 0x337EF8u;
    {
        const bool branch_taken_0x337ef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x337ef8) {
            ctx->pc = 0x337EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337EF8u;
            // 0x337efc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337ee0;
        }
    }
    ctx->pc = 0x337F00u;
label_337f00:
    // 0x337f00: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_337f04:
    if (ctx->pc == 0x337F04u) {
        ctx->pc = 0x337F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F00u;
        // 0x337f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F08u;
        goto label_337f08;
    }
    ctx->pc = 0x337F00u;
    {
        const bool branch_taken_0x337f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F00u;
        // 0x337f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f00) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x337F08u;
label_337f08:
    // 0x337f08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x337f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_337f0c:
    // 0x337f0c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x337f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_337f10:
    // 0x337f10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_337f14:
    if (ctx->pc == 0x337F14u) {
        ctx->pc = 0x337F18u;
        goto label_337f18;
    }
    ctx->pc = 0x337F10u;
    {
        const bool branch_taken_0x337f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337f10) {
            ctx->pc = 0x337EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337eb0;
        }
    }
    ctx->pc = 0x337F18u;
label_337f18:
    // 0x337f18: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_337f1c:
    // 0x337f1c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x337f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_337f20:
    // 0x337f20: 0x24460750  addiu       $a2, $v0, 0x750
    ctx->pc = 0x337f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
label_337f24:
    // 0x337f24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x337f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337f28:
    // 0x337f28: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x337f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_337f2c:
    // 0x337f2c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_337f30:
    if (ctx->pc == 0x337F30u) {
        ctx->pc = 0x337F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F2Cu;
        // 0x337f30: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F34u;
        goto label_337f34;
    }
    ctx->pc = 0x337F2Cu;
    {
        const bool branch_taken_0x337f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x337F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F2Cu;
        // 0x337f30: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f2c) {
            ctx->pc = 0x337F44u;
            goto label_337f44;
        }
    }
    ctx->pc = 0x337F34u;
label_337f34:
    // 0x337f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337f38:
    // 0x337f38: 0x8c430738  lw          $v1, 0x738($v0)
    ctx->pc = 0x337f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1848)));
label_337f3c:
    // 0x337f3c: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_337f40:
    if (ctx->pc == 0x337F40u) {
        ctx->pc = 0x337F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F3Cu;
        // 0x337f40: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F44u;
        goto label_337f44;
    }
    ctx->pc = 0x337F3Cu;
    {
        const bool branch_taken_0x337f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x337f3c) {
            ctx->pc = 0x337F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337F3Cu;
            // 0x337f40: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337F58u;
            goto label_337f58;
        }
    }
    ctx->pc = 0x337F44u;
label_337f44:
    // 0x337f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337f48:
    // 0x337f48: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x337f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_337f4c:
    // 0x337f4c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x337f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_337f50:
    // 0x337f50: 0x10000005  b           . + 4 + (0x5 << 2)
label_337f54:
    if (ctx->pc == 0x337F54u) {
        ctx->pc = 0x337F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F50u;
        // 0x337f54: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F58u;
        goto label_337f58;
    }
    ctx->pc = 0x337F50u;
    {
        const bool branch_taken_0x337f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F50u;
        // 0x337f54: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f50) {
            ctx->pc = 0x337F68u;
            goto label_337f68;
        }
    }
    ctx->pc = 0x337F58u;
label_337f58:
    // 0x337f58: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x337f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_337f5c:
    // 0x337f5c: 0xa2630056  sb          $v1, 0x56($s3)
    ctx->pc = 0x337f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 3));
label_337f60:
    // 0x337f60: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x337f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_337f64:
    // 0x337f64: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x337f64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_337f68:
    // 0x337f68: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
label_337f6c:
    if (ctx->pc == 0x337F6Cu) {
        ctx->pc = 0x337F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F68u;
        // 0x337f6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F70u;
        goto label_337f70;
    }
    ctx->pc = 0x337F68u;
    {
        const bool branch_taken_0x337f68 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x337F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F68u;
        // 0x337f6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f68) {
            ctx->pc = 0x337F98u;
            goto label_337f98;
        }
    }
    ctx->pc = 0x337F70u;
label_337f70:
    // 0x337f70: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x337f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_337f74:
    // 0x337f74: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x337f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_337f78:
    // 0x337f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x337f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_337f7c:
    // 0x337f7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x337f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_337f80:
    // 0x337f80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x337f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_337f84:
    // 0x337f84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x337f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_337f88:
    // 0x337f88: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x337f88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_337f8c:
    // 0x337f8c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x337f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_337f90:
    // 0x337f90: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_337f94:
    if (ctx->pc == 0x337F94u) {
        ctx->pc = 0x337F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F90u;
        // 0x337f94: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F98u;
        goto label_337f98;
    }
    ctx->pc = 0x337F90u;
    {
        const bool branch_taken_0x337f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x337F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F90u;
        // 0x337f94: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f90) {
            ctx->pc = 0x337F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337f78;
        }
    }
    ctx->pc = 0x337F98u;
label_337f98:
    // 0x337f98: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x337f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_337f9c:
    // 0x337f9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x337f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_337fa0:
    // 0x337fa0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_337fa4:
    // 0x337fa4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x337fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_337fa8:
    // 0x337fa8: 0xc0cc99c  jal         func_332670
label_337fac:
    if (ctx->pc == 0x337FACu) {
        ctx->pc = 0x337FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FA8u;
        // 0x337fac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337FB0u;
        goto label_337fb0;
    }
    ctx->pc = 0x337FA8u;
    SET_GPR_U32(ctx, 31, 0x337FB0u);
    ctx->pc = 0x337FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FA8u;
    // 0x337fac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x337FA8u, 0x337FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FB0u;
label_337fb0:
    // 0x337fb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_337fb4:
    if (ctx->pc == 0x337FB4u) {
        ctx->pc = 0x337FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FB0u;
        // 0x337fb4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337FB8u;
        goto label_337fb8;
    }
    ctx->pc = 0x337FB0u;
    {
        const bool branch_taken_0x337fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FB0u;
        // 0x337fb4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fb0) {
            ctx->pc = 0x337FD0u;
            goto label_337fd0;
        }
    }
    ctx->pc = 0x337FB8u;
label_337fb8:
    // 0x337fb8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_337fbc:
    // 0x337fbc: 0xc0c9832  jal         func_3260C8
label_337fc0:
    if (ctx->pc == 0x337FC0u) {
        ctx->pc = 0x337FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FBCu;
        // 0x337fc0: 0x248456a0  addiu       $a0, $a0, 0x56A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337FC4u;
        goto label_337fc4;
    }
    ctx->pc = 0x337FBCu;
    SET_GPR_U32(ctx, 31, 0x337FC4u);
    ctx->pc = 0x337FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FBCu;
    // 0x337fc0: 0x248456a0  addiu       $a0, $a0, 0x56A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337FBCu, 0x337FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FC4u;
label_337fc4:
    // 0x337fc4: 0x10000070  b           . + 4 + (0x70 << 2)
label_337fc8:
    if (ctx->pc == 0x337FC8u) {
        ctx->pc = 0x337FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FC4u;
        // 0x337fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337FCCu;
        goto label_337fcc;
    }
    ctx->pc = 0x337FC4u;
    {
        const bool branch_taken_0x337fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FC4u;
        // 0x337fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fc4) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x337FCCu;
label_337fcc:
    // 0x337fcc: 0x0  nop
    ctx->pc = 0x337fccu;
    // NOP
label_337fd0:
    // 0x337fd0: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_337fd4:
    if (ctx->pc == 0x337FD4u) {
        ctx->pc = 0x337FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FD0u;
        // 0x337fd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337FD8u;
        goto label_337fd8;
    }
    ctx->pc = 0x337FD0u;
    {
        const bool branch_taken_0x337fd0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x337FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FD0u;
        // 0x337fd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fd0) {
            ctx->pc = 0x3380A8u;
            goto label_3380a8;
        }
    }
    ctx->pc = 0x337FD8u;
label_337fd8:
    // 0x337fd8: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x337fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_337fdc:
    // 0x337fdc: 0x3c150045  lui         $s5, 0x45
    ctx->pc = 0x337fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)69 << 16));
label_337fe0:
    // 0x337fe0: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x337fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_337fe4:
    // 0x337fe4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x337fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_337fe8:
    // 0x337fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x337fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_337fec:
    // 0x337fec: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x337fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_337ff0:
    // 0x337ff0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x337ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_337ff4:
    // 0x337ff4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x337ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_337ff8:
    // 0x337ff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337ffc:
    // 0x337ffc: 0xc0d007c  jal         func_3401F0
label_338000:
    if (ctx->pc == 0x338000u) {
        ctx->pc = 0x338000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FFCu;
        // 0x338000: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338004u;
        goto label_338004;
    }
    ctx->pc = 0x337FFCu;
    SET_GPR_U32(ctx, 31, 0x338004u);
    ctx->pc = 0x338000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FFCu;
    // 0x338000: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3401F0u, 0x337FFCu, 0x338004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338004u;
label_338004:
    // 0x338004: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x338004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_338008:
    // 0x338008: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x338008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33800c:
    // 0x33800c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_338010:
    if (ctx->pc == 0x338010u) {
        ctx->pc = 0x338010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33800Cu;
        // 0x338010: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338014u;
        goto label_338014;
    }
    ctx->pc = 0x33800Cu;
    {
        const bool branch_taken_0x33800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33800Cu;
        // 0x338010: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33800c) {
            ctx->pc = 0x3380A0u;
            goto label_3380a0;
        }
    }
    ctx->pc = 0x338014u;
label_338014:
    // 0x338014: 0x26a456c8  addiu       $a0, $s5, 0x56C8
    ctx->pc = 0x338014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22216));
label_338018:
    // 0x338018: 0xc0c9832  jal         func_3260C8
label_33801c:
    if (ctx->pc == 0x33801Cu) {
        ctx->pc = 0x33801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338018u;
        // 0x33801c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338020u;
        goto label_338020;
    }
    ctx->pc = 0x338018u;
    SET_GPR_U32(ctx, 31, 0x338020u);
    ctx->pc = 0x33801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338018u;
    // 0x33801c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x338018u, 0x338020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338020u;
label_338020:
    // 0x338020: 0x1a400059  blez        $s2, . + 4 + (0x59 << 2)
label_338024:
    if (ctx->pc == 0x338024u) {
        ctx->pc = 0x338024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338020u;
        // 0x338024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338028u;
        goto label_338028;
    }
    ctx->pc = 0x338020u;
    {
        const bool branch_taken_0x338020 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x338024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338020u;
        // 0x338024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338020) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x338028u;
label_338028:
    // 0x338028: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x338028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33802c:
    // 0x33802c: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_338030:
    // 0x338030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338034:
    // 0x338034: 0x0  nop
    ctx->pc = 0x338034u;
    // NOP
label_338038:
    // 0x338038: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x338038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_33803c:
    // 0x33803c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_338040:
    if (ctx->pc == 0x338040u) {
        ctx->pc = 0x338040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33803Cu;
        // 0x338040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338044u;
        goto label_338044;
    }
    ctx->pc = 0x33803Cu;
    {
        const bool branch_taken_0x33803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33803Cu;
        // 0x338040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33803c) {
            ctx->pc = 0x33804Cu;
            goto label_33804c;
        }
    }
    ctx->pc = 0x338044u;
label_338044:
    // 0x338044: 0xc0d00b8  jal         func_3402E0
label_338048:
    if (ctx->pc == 0x338048u) {
        ctx->pc = 0x33804Cu;
        goto label_33804c;
    }
    ctx->pc = 0x338044u;
    SET_GPR_U32(ctx, 31, 0x33804Cu);
    ctx->pc = 0x3402E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3402E0u, 0x338044u, 0x33804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33804Cu;
label_33804c:
    // 0x33804c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x33804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_338050:
    // 0x338050: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_338054:
    if (ctx->pc == 0x338054u) {
        ctx->pc = 0x338054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338050u;
        // 0x338054: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338058u;
        goto label_338058;
    }
    ctx->pc = 0x338050u;
    {
        const bool branch_taken_0x338050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338050u;
        // 0x338054: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338050) {
            ctx->pc = 0x338070u;
            goto label_338070;
        }
    }
    ctx->pc = 0x338058u;
label_338058:
    // 0x338058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x338058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33805c:
    // 0x33805c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33805cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338060:
    // 0x338060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338064:
    // 0x338064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x338064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338068:
    // 0x338068: 0xc0cc99c  jal         func_332670
label_33806c:
    if (ctx->pc == 0x33806Cu) {
        ctx->pc = 0x33806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338068u;
        // 0x33806c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338070u;
        goto label_338070;
    }
    ctx->pc = 0x338068u;
    SET_GPR_U32(ctx, 31, 0x338070u);
    ctx->pc = 0x33806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338068u;
    // 0x33806c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x338068u, 0x338070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338070u;
label_338070:
    // 0x338070: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_338074:
    // 0x338074: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_338078:
    if (ctx->pc == 0x338078u) {
        ctx->pc = 0x338078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338074u;
        // 0x338078: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33807Cu;
        goto label_33807c;
    }
    ctx->pc = 0x338074u;
    {
        const bool branch_taken_0x338074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338074u;
        // 0x338078: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338074) {
            ctx->pc = 0x338084u;
            goto label_338084;
        }
    }
    ctx->pc = 0x33807Cu;
label_33807c:
    // 0x33807c: 0xc0cdce6  jal         func_337398
label_338080:
    if (ctx->pc == 0x338080u) {
        ctx->pc = 0x338084u;
        goto label_338084;
    }
    ctx->pc = 0x33807Cu;
    SET_GPR_U32(ctx, 31, 0x338084u);
    ctx->pc = 0x337398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337398u, 0x33807Cu, 0x338084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338084u;
label_338084:
    // 0x338084: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x338084u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_338088:
    // 0x338088: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x338088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_33808c:
    // 0x33808c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_338090:
    if (ctx->pc == 0x338090u) {
        ctx->pc = 0x338090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33808Cu;
        // 0x338090: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338094u;
        goto label_338094;
    }
    ctx->pc = 0x33808Cu;
    {
        const bool branch_taken_0x33808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33808c) {
            ctx->pc = 0x338090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33808Cu;
            // 0x338090: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338038;
        }
    }
    ctx->pc = 0x338094u;
label_338094:
    // 0x338094: 0x1000003c  b           . + 4 + (0x3C << 2)
label_338098:
    if (ctx->pc == 0x338098u) {
        ctx->pc = 0x338098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338094u;
        // 0x338098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33809Cu;
        goto label_33809c;
    }
    ctx->pc = 0x338094u;
    {
        const bool branch_taken_0x338094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338094u;
        // 0x338098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338094) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x33809Cu;
label_33809c:
    // 0x33809c: 0x0  nop
    ctx->pc = 0x33809cu;
    // NOP
label_3380a0:
    // 0x3380a0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_3380a4:
    if (ctx->pc == 0x3380A4u) {
        ctx->pc = 0x3380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380A0u;
        // 0x3380a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3380A8u;
        goto label_3380a8;
    }
    ctx->pc = 0x3380A0u;
    {
        const bool branch_taken_0x3380a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380A0u;
        // 0x3380a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380a0) {
            ctx->pc = 0x337FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337fe8;
        }
    }
    ctx->pc = 0x3380A8u;
label_3380a8:
    // 0x3380a8: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3380ac:
    if (ctx->pc == 0x3380ACu) {
        ctx->pc = 0x3380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380A8u;
        // 0x3380ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3380B0u;
        goto label_3380b0;
    }
    ctx->pc = 0x3380A8u;
    {
        const bool branch_taken_0x3380a8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380A8u;
        // 0x3380ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380a8) {
            ctx->pc = 0x3380D4u;
            goto label_3380d4;
        }
    }
    ctx->pc = 0x3380B0u;
label_3380b0:
    // 0x3380b0: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x3380b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3380b4:
    // 0x3380b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3380b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3380b8:
    // 0x3380b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3380bc:
    // 0x3380bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3380bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3380c0:
    // 0x3380c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3380c4:
    // 0x3380c4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3380c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3380c8:
    // 0x3380c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3380c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3380cc:
    // 0x3380cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3380d0:
    if (ctx->pc == 0x3380D0u) {
        ctx->pc = 0x3380D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380CCu;
        // 0x3380d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3380D4u;
        goto label_3380d4;
    }
    ctx->pc = 0x3380CCu;
    {
        const bool branch_taken_0x3380cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3380D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380CCu;
        // 0x3380d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380cc) {
            ctx->pc = 0x3380B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3380b8;
        }
    }
    ctx->pc = 0x3380D4u;
label_3380d4:
    // 0x3380d4: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x3380d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_3380d8:
    // 0x3380d8: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x3380d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_3380dc:
    // 0x3380dc: 0xa2720052  sb          $s2, 0x52($s3)
    ctx->pc = 0x3380dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 18));
label_3380e0:
    // 0x3380e0: 0xa2720053  sb          $s2, 0x53($s3)
    ctx->pc = 0x3380e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 18));
label_3380e4:
    // 0x3380e4: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x3380e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_3380e8:
    // 0x3380e8: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x3380e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_3380ec:
    // 0x3380ec: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x3380ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
label_3380f0:
    // 0x3380f0: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x3380f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_3380f4:
    // 0x3380f4: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x3380f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
label_3380f8:
    // 0x3380f8: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_3380fc:
    if (ctx->pc == 0x3380FCu) {
        ctx->pc = 0x3380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380F8u;
        // 0x3380fc: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338100u;
        goto label_338100;
    }
    ctx->pc = 0x3380F8u;
    {
        const bool branch_taken_0x3380f8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380F8u;
        // 0x3380fc: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380f8) {
            ctx->pc = 0x33812Cu;
            goto label_33812c;
        }
    }
    ctx->pc = 0x338100u;
label_338100:
    // 0x338100: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x338100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338104:
    // 0x338104: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x338104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_338108:
    // 0x338108: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_33810c:
    // 0x33810c: 0x0  nop
    ctx->pc = 0x33810cu;
    // NOP
label_338110:
    // 0x338110: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x338110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_338114:
    // 0x338114: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_338118:
    // 0x338118: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x338118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_33811c:
    // 0x33811c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33811cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_338120:
    // 0x338120: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x338120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_338124:
    // 0x338124: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_338128:
    if (ctx->pc == 0x338128u) {
        ctx->pc = 0x338128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338124u;
        // 0x338128: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33812Cu;
        goto label_33812c;
    }
    ctx->pc = 0x338124u;
    {
        const bool branch_taken_0x338124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x338128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338124u;
        // 0x338128: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338124) {
            ctx->pc = 0x338110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338110;
        }
    }
    ctx->pc = 0x33812Cu;
label_33812c:
    // 0x33812c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33812cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338130:
    // 0x338130: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x338130u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_338134:
    // 0x338134: 0xa2710059  sb          $s1, 0x59($s3)
    ctx->pc = 0x338134u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 17));
label_338138:
    // 0x338138: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x338138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_33813c:
    // 0x33813c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x33813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_338140:
    // 0x338140: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x338140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_338144:
    // 0x338144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338148:
    // 0x338148: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x338148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_33814c:
    // 0x33814c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_338150:
    // 0x338150: 0x40f809  jalr        $v0
label_338154:
    if (ctx->pc == 0x338154u) {
        ctx->pc = 0x338154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338150u;
        // 0x338154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338158u;
        goto label_338158;
    }
    ctx->pc = 0x338150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338158u);
        ctx->pc = 0x338154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338150u;
        // 0x338154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338150u, 0x338158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338158u;
label_338158:
    // 0x338158: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_33815c:
    // 0x33815c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33815cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338160:
    // 0x338160: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338164:
    // 0x338164: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x338164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_338168:
    // 0x338168: 0x40f809  jalr        $v0
label_33816c:
    if (ctx->pc == 0x33816Cu) {
        ctx->pc = 0x33816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338168u;
        // 0x33816c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338170u;
        goto label_338170;
    }
    ctx->pc = 0x338168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338170u);
        ctx->pc = 0x33816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338168u;
        // 0x33816c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338168u, 0x338170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338170u;
label_338170:
    // 0x338170: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x338170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_338174:
    // 0x338174: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_338178:
    // 0x338178: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x338178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33817c:
    // 0x33817c: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x33817cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
label_338180:
    // 0x338180: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x338180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_338184:
    // 0x338184: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x338184u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_338188:
    // 0x338188: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x338188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33818c:
    // 0x33818c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_338190:
    // 0x338190: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x338190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_338194:
    // 0x338194: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x338194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_338198:
    // 0x338198: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x338198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33819c:
    // 0x33819c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x33819cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3381a0:
    // 0x3381a0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3381a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3381a4:
    // 0x3381a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3381a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3381a8:
    // 0x3381a8: 0x3e00008  jr          $ra
label_3381ac:
    if (ctx->pc == 0x3381ACu) {
        ctx->pc = 0x3381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381A8u;
        // 0x3381ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3381B0u;
        goto label_fallthrough_0x3381a8;
    }
    ctx->pc = 0x3381A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381A8u;
        // 0x3381ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3381A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3381a8:
    ctx->pc = 0x3381B0u;
}
