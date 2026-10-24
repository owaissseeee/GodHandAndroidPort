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

// Function: func_001B5EA0
// Address: 0x1b5ea0 - 0x1b6218
void func_001B5EA0_0x1b5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B5EA0_0x1b5ea0");
#endif

    switch (ctx->pc) {
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        case 0x1b5fb0u: goto label_1b5fb0;
        case 0x1b5fb4u: goto label_1b5fb4;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fbcu: goto label_1b5fbc;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fc4u: goto label_1b5fc4;
        case 0x1b5fc8u: goto label_1b5fc8;
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b5fd0u: goto label_1b5fd0;
        case 0x1b5fd4u: goto label_1b5fd4;
        case 0x1b5fd8u: goto label_1b5fd8;
        case 0x1b5fdcu: goto label_1b5fdc;
        case 0x1b5fe0u: goto label_1b5fe0;
        case 0x1b5fe4u: goto label_1b5fe4;
        case 0x1b5fe8u: goto label_1b5fe8;
        case 0x1b5fecu: goto label_1b5fec;
        case 0x1b5ff0u: goto label_1b5ff0;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b5ff8u: goto label_1b5ff8;
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b6000u: goto label_1b6000;
        case 0x1b6004u: goto label_1b6004;
        case 0x1b6008u: goto label_1b6008;
        case 0x1b600cu: goto label_1b600c;
        case 0x1b6010u: goto label_1b6010;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b601cu: goto label_1b601c;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6028u: goto label_1b6028;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6030u: goto label_1b6030;
        case 0x1b6034u: goto label_1b6034;
        case 0x1b6038u: goto label_1b6038;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6040u: goto label_1b6040;
        case 0x1b6044u: goto label_1b6044;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b604cu: goto label_1b604c;
        case 0x1b6050u: goto label_1b6050;
        case 0x1b6054u: goto label_1b6054;
        case 0x1b6058u: goto label_1b6058;
        case 0x1b605cu: goto label_1b605c;
        case 0x1b6060u: goto label_1b6060;
        case 0x1b6064u: goto label_1b6064;
        case 0x1b6068u: goto label_1b6068;
        case 0x1b606cu: goto label_1b606c;
        case 0x1b6070u: goto label_1b6070;
        case 0x1b6074u: goto label_1b6074;
        case 0x1b6078u: goto label_1b6078;
        case 0x1b607cu: goto label_1b607c;
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6084u: goto label_1b6084;
        case 0x1b6088u: goto label_1b6088;
        case 0x1b608cu: goto label_1b608c;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b6098u: goto label_1b6098;
        case 0x1b609cu: goto label_1b609c;
        case 0x1b60a0u: goto label_1b60a0;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60a8u: goto label_1b60a8;
        case 0x1b60acu: goto label_1b60ac;
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b610cu: goto label_1b610c;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6114u: goto label_1b6114;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b611cu: goto label_1b611c;
        case 0x1b6120u: goto label_1b6120;
        case 0x1b6124u: goto label_1b6124;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6130u: goto label_1b6130;
        case 0x1b6134u: goto label_1b6134;
        case 0x1b6138u: goto label_1b6138;
        case 0x1b613cu: goto label_1b613c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6148u: goto label_1b6148;
        case 0x1b614cu: goto label_1b614c;
        case 0x1b6150u: goto label_1b6150;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6158u: goto label_1b6158;
        case 0x1b615cu: goto label_1b615c;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b6164u: goto label_1b6164;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b616cu: goto label_1b616c;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6174u: goto label_1b6174;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b617cu: goto label_1b617c;
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6188u: goto label_1b6188;
        case 0x1b618cu: goto label_1b618c;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b6194u: goto label_1b6194;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61a4u: goto label_1b61a4;
        case 0x1b61a8u: goto label_1b61a8;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61b0u: goto label_1b61b0;
        case 0x1b61b4u: goto label_1b61b4;
        case 0x1b61b8u: goto label_1b61b8;
        case 0x1b61bcu: goto label_1b61bc;
        case 0x1b61c0u: goto label_1b61c0;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61c8u: goto label_1b61c8;
        case 0x1b61ccu: goto label_1b61cc;
        case 0x1b61d0u: goto label_1b61d0;
        case 0x1b61d4u: goto label_1b61d4;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61dcu: goto label_1b61dc;
        case 0x1b61e0u: goto label_1b61e0;
        case 0x1b61e4u: goto label_1b61e4;
        case 0x1b61e8u: goto label_1b61e8;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f0u: goto label_1b61f0;
        case 0x1b61f4u: goto label_1b61f4;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b61fcu: goto label_1b61fc;
        case 0x1b6200u: goto label_1b6200;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b6208u: goto label_1b6208;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6210u: goto label_1b6210;
        case 0x1b6214u: goto label_1b6214;
        default: break;
    }

    ctx->pc = 0x1b5ea0u;

label_1b5ea0:
    // 0x1b5ea0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1b5ea4:
    // 0x1b5ea4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1b5ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1b5ea8:
    // 0x1b5ea8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1b5ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1b5eac:
    // 0x1b5eac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5eb0:
    // 0x1b5eb0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1b5eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1b5eb4:
    // 0x1b5eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5eb8:
    // 0x1b5eb8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1b5eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1b5ebc:
    // 0x1b5ebc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1b5ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1b5ec0:
    // 0x1b5ec0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1b5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1b5ec4:
    // 0x1b5ec4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1b5ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1b5ec8:
    // 0x1b5ec8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1b5ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1b5ecc:
    // 0x1b5ecc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b5eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b5ed0:
    // 0x1b5ed0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b5ed4:
    // 0x1b5ed4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1b5ed4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1b5ed8:
    // 0x1b5ed8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1b5ed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1b5edc:
    // 0x1b5edc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1b5edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1b5ee0:
    // 0x1b5ee0: 0x1070004c  beq         $v1, $s0, . + 4 + (0x4C << 2)
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    {
        const bool branch_taken_0x1b5ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ee0) {
            ctx->pc = 0x1B6014u;
            goto label_1b6014;
        }
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b5eec:
    if (ctx->pc == 0x1B5EECu) {
        ctx->pc = 0x1B5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE8u;
        // 0x1b5eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EF0u;
        goto label_1b5ef0;
    }
    ctx->pc = 0x1B5EE8u;
    {
        const bool branch_taken_0x1b5ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ee8) {
            ctx->pc = 0x1B5EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EE8u;
            // 0x1b5eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F00u;
            goto label_1b5f00;
        }
    }
    ctx->pc = 0x1B5EF0u;
label_1b5ef0:
    // 0x1b5ef0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1b5ef4:
    if (ctx->pc == 0x1B5EF4u) {
        ctx->pc = 0x1B5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF0u;
        // 0x1b5ef4: 0x8e250604  lw          $a1, 0x604($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EF8u;
        goto label_1b5ef8;
    }
    ctx->pc = 0x1B5EF0u;
    {
        const bool branch_taken_0x1b5ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ef0) {
            ctx->pc = 0x1B5EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EF0u;
            // 0x1b5ef4: 0x8e250604  lw          $a1, 0x604($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F18u;
            goto label_1b5f18;
        }
    }
    ctx->pc = 0x1B5EF8u;
label_1b5ef8:
    // 0x1b5ef8: 0x10000064  b           . + 4 + (0x64 << 2)
label_1b5efc:
    if (ctx->pc == 0x1B5EFCu) {
        ctx->pc = 0x1B5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF8u;
        // 0x1b5efc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F00u;
        goto label_1b5f00;
    }
    ctx->pc = 0x1B5EF8u;
    {
        const bool branch_taken_0x1b5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF8u;
        // 0x1b5efc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ef8) {
            ctx->pc = 0x1B608Cu;
            goto label_1b608c;
        }
    }
    ctx->pc = 0x1B5F00u;
label_1b5f00:
    // 0x1b5f00: 0x1064004d  beq         $v1, $a0, . + 4 + (0x4D << 2)
label_1b5f04:
    if (ctx->pc == 0x1B5F04u) {
        ctx->pc = 0x1B5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F00u;
        // 0x1b5f04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F08u;
        goto label_1b5f08;
    }
    ctx->pc = 0x1B5F00u;
    {
        const bool branch_taken_0x1b5f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F00u;
        // 0x1b5f04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f00) {
            ctx->pc = 0x1B6038u;
            goto label_1b6038;
        }
    }
    ctx->pc = 0x1B5F08u;
label_1b5f08:
    // 0x1b5f08: 0x5062005c  beql        $v1, $v0, . + 4 + (0x5C << 2)
label_1b5f0c:
    if (ctx->pc == 0x1B5F0Cu) {
        ctx->pc = 0x1B5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F08u;
        // 0x1b5f0c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F10u;
        goto label_1b5f10;
    }
    ctx->pc = 0x1B5F08u;
    {
        const bool branch_taken_0x1b5f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5f08) {
            ctx->pc = 0x1B5F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5F08u;
            // 0x1b5f0c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B607Cu;
            goto label_1b607c;
        }
    }
    ctx->pc = 0x1B5F10u;
label_1b5f10:
    // 0x1b5f10: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1b5f14:
    if (ctx->pc == 0x1B5F14u) {
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F18u;
        goto label_1b5f18;
    }
    ctx->pc = 0x1B5F10u;
    {
        const bool branch_taken_0x1b5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f10) {
            ctx->pc = 0x1B608Cu;
            goto label_1b608c;
        }
    }
    ctx->pc = 0x1B5F18u;
label_1b5f18:
    // 0x1b5f18: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1b5f1c:
    if (ctx->pc == 0x1B5F1Cu) {
        ctx->pc = 0x1B5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F18u;
        // 0x1b5f1c: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F20u;
        goto label_1b5f20;
    }
    ctx->pc = 0x1B5F18u;
    {
        const bool branch_taken_0x1b5f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F18u;
        // 0x1b5f1c: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f18) {
            ctx->pc = 0x1B5F40u;
            goto label_1b5f40;
        }
    }
    ctx->pc = 0x1B5F20u;
label_1b5f20:
    // 0x1b5f20: 0x8ca2062c  lw          $v0, 0x62C($a1)
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1580)));
label_1b5f24:
    // 0x1b5f24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1b5f28:
    // 0x1b5f28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b5f2c:
    // 0x1b5f2c: 0xaca2062c  sw          $v0, 0x62C($a1)
    ctx->pc = 0x1b5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1580), GPR_U32(ctx, 2));
label_1b5f30:
    // 0x1b5f30: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x1b5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
label_1b5f34:
    // 0x1b5f34: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
label_1b5f38:
    // 0x1b5f38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1b5f3c:
    // 0x1b5f3c: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
label_1b5f40:
    // 0x1b5f40: 0x8e250608  lw          $a1, 0x608($s1)
    ctx->pc = 0x1b5f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
label_1b5f44:
    // 0x1b5f44: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1b5f48:
    if (ctx->pc == 0x1B5F48u) {
        ctx->pc = 0x1B5F4Cu;
        goto label_1b5f4c;
    }
    ctx->pc = 0x1B5F44u;
    {
        const bool branch_taken_0x1b5f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f44) {
            ctx->pc = 0x1B5F70u;
            goto label_1b5f70;
        }
    }
    ctx->pc = 0x1B5F4Cu;
label_1b5f4c:
    // 0x1b5f4c: 0x8ca2062c  lw          $v0, 0x62C($a1)
    ctx->pc = 0x1b5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1580)));
label_1b5f50:
    // 0x1b5f50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1b5f54:
    // 0x1b5f54: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b5f58:
    // 0x1b5f58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b5f5c:
    // 0x1b5f5c: 0xaca2062c  sw          $v0, 0x62C($a1)
    ctx->pc = 0x1b5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1580), GPR_U32(ctx, 2));
label_1b5f60:
    // 0x1b5f60: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
label_1b5f64:
    // 0x1b5f64: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
label_1b5f68:
    // 0x1b5f68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b5f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1b5f6c:
    // 0x1b5f6c: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
label_1b5f70:
    // 0x1b5f70: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1b5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b5f74:
    // 0x1b5f74: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1b5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1b5f78:
    // 0x1b5f78: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1b5f7c:
    // 0x1b5f7c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1b5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1b5f80:
    // 0x1b5f80: 0x40f809  jalr        $v0
label_1b5f84:
    if (ctx->pc == 0x1B5F84u) {
        ctx->pc = 0x1B5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F80u;
        // 0x1b5f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F88u;
        goto label_1b5f88;
    }
    ctx->pc = 0x1B5F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5F88u);
        ctx->pc = 0x1B5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F80u;
        // 0x1b5f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F80u, 0x1B5F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F88u;
label_1b5f88:
    // 0x1b5f88: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_1b5f8c:
    if (ctx->pc == 0x1B5F8Cu) {
        ctx->pc = 0x1B5F90u;
        goto label_1b5f90;
    }
    ctx->pc = 0x1B5F88u;
    {
        const bool branch_taken_0x1b5f88 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5f88) {
            ctx->pc = 0x1B5FA8u;
            goto label_1b5fa8;
        }
    }
    ctx->pc = 0x1B5F90u;
label_1b5f90:
    // 0x1b5f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b5f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5f94:
    // 0x1b5f94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b5f98:
    // 0x1b5f98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5f9c:
    // 0x1b5f9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b5f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b5fa0:
    // 0x1b5fa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5fa4:
    // 0x1b5fa4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5fa8:
    // 0x1b5fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b5fac:
    // 0x1b5fac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b5facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5fb0:
    // 0x1b5fb0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b5fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fb4:
    // 0x1b5fb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fb8:
    // 0x1b5fb8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1b5fbc:
    // 0x1b5fbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fc0:
    // 0x1b5fc0: 0xc0c1a0e  jal         func_306838
label_1b5fc4:
    if (ctx->pc == 0x1B5FC4u) {
        ctx->pc = 0x1B5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC0u;
        // 0x1b5fc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FC8u;
        goto label_1b5fc8;
    }
    ctx->pc = 0x1B5FC0u;
    SET_GPR_U32(ctx, 31, 0x1B5FC8u);
    ctx->pc = 0x1B5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FC0u;
    // 0x1b5fc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B5FC0u, 0x1B5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FC8u;
label_1b5fc8:
    // 0x1b5fc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1b5fcc:
    // 0x1b5fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b5fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fd0:
    // 0x1b5fd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b5fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fd4:
    // 0x1b5fd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b5fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fd8:
    // 0x1b5fd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b5fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5fdc:
    // 0x1b5fdc: 0x24060087  addiu       $a2, $zero, 0x87
    ctx->pc = 0x1b5fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_1b5fe0:
    // 0x1b5fe0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b5fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fe4:
    // 0x1b5fe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fe8:
    // 0x1b5fe8: 0xc0b2e92  jal         func_2CBA48
label_1b5fec:
    if (ctx->pc == 0x1B5FECu) {
        ctx->pc = 0x1B5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE8u;
        // 0x1b5fec: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FF0u;
        goto label_1b5ff0;
    }
    ctx->pc = 0x1B5FE8u;
    SET_GPR_U32(ctx, 31, 0x1B5FF0u);
    ctx->pc = 0x1B5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FE8u;
    // 0x1b5fec: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B5FE8u, 0x1B5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FF0u;
label_1b5ff0:
    // 0x1b5ff0: 0xc06d916  jal         func_1B6458
label_1b5ff4:
    if (ctx->pc == 0x1B5FF4u) {
        ctx->pc = 0x1B5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FF0u;
        // 0x1b5ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FF8u;
        goto label_1b5ff8;
    }
    ctx->pc = 0x1B5FF0u;
    SET_GPR_U32(ctx, 31, 0x1B5FF8u);
    ctx->pc = 0x1B5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FF0u;
    // 0x1b5ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6458u, 0x1B5FF0u, 0x1B5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FF8u;
label_1b5ff8:
    // 0x1b5ff8: 0xc06de42  jal         func_1B7908
label_1b5ffc:
    if (ctx->pc == 0x1B5FFCu) {
        ctx->pc = 0x1B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FF8u;
        // 0x1b5ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6000u;
        goto label_1b6000;
    }
    ctx->pc = 0x1B5FF8u;
    SET_GPR_U32(ctx, 31, 0x1B6000u);
    ctx->pc = 0x1B5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FF8u;
    // 0x1b5ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1B5FF8u, 0x1B6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6000u;
label_1b6000:
    // 0x1b6000: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b6000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b6004:
    // 0x1b6004: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x1b6004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_1b6008:
    // 0x1b6008: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x1b6008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_1b600c:
    // 0x1b600c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b600cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b6010:
    // 0x1b6010: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b6014:
    // 0x1b6014: 0x8e220850  lw          $v0, 0x850($s1)
    ctx->pc = 0x1b6014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2128)));
label_1b6018:
    // 0x1b6018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b601c:
    // 0x1b601c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
label_1b6020:
    if (ctx->pc == 0x1B6020u) {
        ctx->pc = 0x1B6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B601Cu;
        // 0x1b6020: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6024u;
        goto label_1b6024;
    }
    ctx->pc = 0x1B601Cu;
    {
        const bool branch_taken_0x1b601c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B601Cu;
        // 0x1b6020: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b601c) {
            ctx->pc = 0x1B6088u;
            goto label_1b6088;
        }
    }
    ctx->pc = 0x1B6024u;
label_1b6024:
    // 0x1b6024: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b6028:
    // 0x1b6028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b602c:
    // 0x1b602c: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x1b602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_1b6030:
    // 0x1b6030: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b6034:
    if (ctx->pc == 0x1B6034u) {
        ctx->pc = 0x1B6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6030u;
        // 0x1b6034: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6038u;
        goto label_1b6038;
    }
    ctx->pc = 0x1B6030u;
    {
        const bool branch_taken_0x1b6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6030u;
        // 0x1b6034: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6030) {
            ctx->pc = 0x1B6080u;
            goto label_1b6080;
        }
    }
    ctx->pc = 0x1B6038u;
label_1b6038:
    // 0x1b6038: 0x8e220850  lw          $v0, 0x850($s1)
    ctx->pc = 0x1b6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2128)));
label_1b603c:
    // 0x1b603c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1b603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1b6040:
    // 0x1b6040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6044:
    // 0x1b6044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6048:
    // 0x1b6048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b604c:
    // 0x1b604c: 0x0  nop
    ctx->pc = 0x1b604cu;
    // NOP
label_1b6050:
    // 0x1b6050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b6054:
    // 0x1b6054: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x1b6054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_1b6058:
    // 0x1b6058: 0x0  nop
    ctx->pc = 0x1b6058u;
    // NOP
label_1b605c:
    // 0x1b605c: 0x0  nop
    ctx->pc = 0x1b605cu;
    // NOP
label_1b6060:
    // 0x1b6060: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b6060u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1b6064:
    // 0x1b6064: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_1b6068:
    if (ctx->pc == 0x1B6068u) {
        ctx->pc = 0x1B6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6064u;
        // 0x1b6068: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B606Cu;
        goto label_1b606c;
    }
    ctx->pc = 0x1B6064u;
    {
        const bool branch_taken_0x1b6064 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6064u;
        // 0x1b6068: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6064) {
            ctx->pc = 0x1B6088u;
            goto label_1b6088;
        }
    }
    ctx->pc = 0x1B606Cu;
label_1b606c:
    // 0x1b606c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6070:
    // 0x1b6070: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b6070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b6074:
    // 0x1b6074: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b6078:
    if (ctx->pc == 0x1B6078u) {
        ctx->pc = 0x1B6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6074u;
        // 0x1b6078: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B607Cu;
        goto label_1b607c;
    }
    ctx->pc = 0x1B6074u;
    {
        const bool branch_taken_0x1b6074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6074u;
        // 0x1b6078: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6074) {
            ctx->pc = 0x1B6084u;
            goto label_1b6084;
        }
    }
    ctx->pc = 0x1B607Cu;
label_1b607c:
    // 0x1b607c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b607cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1b6080:
    // 0x1b6080: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b6080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b6084:
    // 0x1b6084: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b6088:
    // 0x1b6088: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b6088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b608c:
    // 0x1b608c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6090:
    // 0x1b6090: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
label_1b6094:
    if (ctx->pc == 0x1B6094u) {
        ctx->pc = 0x1B6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6090u;
        // 0x1b6094: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6098u;
        goto label_1b6098;
    }
    ctx->pc = 0x1B6090u;
    {
        const bool branch_taken_0x1b6090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1B6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6090u;
        // 0x1b6094: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6090) {
            ctx->pc = 0x1B61DCu;
            goto label_1b61dc;
        }
    }
    ctx->pc = 0x1B6098u;
label_1b6098:
    // 0x1b6098: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1b609c:
    // 0x1b609c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b609cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b60a0:
    // 0x1b60a0: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1b60a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b60a4:
    // 0x1b60a4: 0x263506b0  addiu       $s5, $s1, 0x6B0
    ctx->pc = 0x1b60a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
label_1b60a8:
    // 0x1b60a8: 0x26300680  addiu       $s0, $s1, 0x680
    ctx->pc = 0x1b60a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
label_1b60ac:
    // 0x1b60ac: 0x263406a0  addiu       $s4, $s1, 0x6A0
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
label_1b60b0:
    // 0x1b60b0: 0x26330690  addiu       $s3, $s1, 0x690
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_1b60b4:
    // 0x1b60b4: 0x26320670  addiu       $s2, $s1, 0x670
    ctx->pc = 0x1b60b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_1b60b8:
    // 0x1b60b8: 0xc05ce40  jal         func_173900
label_1b60bc:
    if (ctx->pc == 0x1B60BCu) {
        ctx->pc = 0x1B60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60B8u;
        // 0x1b60bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60C0u;
        goto label_1b60c0;
    }
    ctx->pc = 0x1B60B8u;
    SET_GPR_U32(ctx, 31, 0x1B60C0u);
    ctx->pc = 0x1B60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60B8u;
    // 0x1b60bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1B60B8u, 0x1B60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60C0u;
label_1b60c0:
    // 0x1b60c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b60c4:
    // 0x1b60c4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1b60c8:
    if (ctx->pc == 0x1B60C8u) {
        ctx->pc = 0x1B60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60C4u;
        // 0x1b60c8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60CCu;
        goto label_1b60cc;
    }
    ctx->pc = 0x1B60C4u;
    {
        const bool branch_taken_0x1b60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b60c4) {
            ctx->pc = 0x1B60C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60C4u;
            // 0x1b60c8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B61B4u;
            goto label_1b61b4;
        }
    }
    ctx->pc = 0x1B60CCu;
label_1b60cc:
    // 0x1b60cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1b60d0:
    // 0x1b60d0: 0xc0a4bd4  jal         func_292F50
label_1b60d4:
    if (ctx->pc == 0x1B60D4u) {
        ctx->pc = 0x1B60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60D0u;
        // 0x1b60d4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60D8u;
        goto label_1b60d8;
    }
    ctx->pc = 0x1B60D0u;
    SET_GPR_U32(ctx, 31, 0x1B60D8u);
    ctx->pc = 0x1B60D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60D0u;
    // 0x1b60d4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B60D0u, 0x1B60D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60D8u;
label_1b60d8:
    // 0x1b60d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b60d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b60dc:
    // 0x1b60dc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b60dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1b60e0:
    // 0x1b60e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b60e4:
    // 0x1b60e4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b60e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b60e8:
    // 0x1b60e8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b60e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1b60ec:
    // 0x1b60ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b60ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1b60f0:
    // 0x1b60f0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b60f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b60f4:
    // 0x1b60f4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b60f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b60f8:
    // 0x1b60f8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1b60f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1b60fc:
    // 0x1b60fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b60fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b6100:
    // 0x1b6100: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1b6100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1b6104:
    // 0x1b6104: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1b6104u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1b6108:
    // 0x1b6108: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b6108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b610c:
    // 0x1b610c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1b610cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b6110:
    // 0x1b6110: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b6110u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1b6114:
    // 0x1b6114: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b6114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b6118:
    // 0x1b6118: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b6118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b611c:
    // 0x1b611c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b611cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1b6120:
    // 0x1b6120: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b6120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1b6124:
    // 0x1b6124: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b6124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b6128:
    // 0x1b6128: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b6128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b612c:
    // 0x1b612c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1b612cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1b6130:
    // 0x1b6130: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b6130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b6134:
    // 0x1b6134: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b6134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6138:
    // 0x1b6138: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1b6138u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1b613c:
    // 0x1b613c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b613cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b6140:
    // 0x1b6140: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b6140u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b6144:
    // 0x1b6144: 0xc07df68  jal         func_1F7DA0
label_1b6148:
    if (ctx->pc == 0x1B6148u) {
        ctx->pc = 0x1B6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6144u;
        // 0x1b6148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B614Cu;
        goto label_1b614c;
    }
    ctx->pc = 0x1B6144u;
    SET_GPR_U32(ctx, 31, 0x1B614Cu);
    ctx->pc = 0x1B6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6144u;
    // 0x1b6148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1B6144u, 0x1B614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B614Cu;
label_1b614c:
    // 0x1b614c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b6150:
    // 0x1b6150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6154:
    // 0x1b6154: 0xc051dca  jal         func_147728
label_1b6158:
    if (ctx->pc == 0x1B6158u) {
        ctx->pc = 0x1B6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6154u;
        // 0x1b6158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B615Cu;
        goto label_1b615c;
    }
    ctx->pc = 0x1B6154u;
    SET_GPR_U32(ctx, 31, 0x1B615Cu);
    ctx->pc = 0x1B6158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6154u;
    // 0x1b6158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1B6154u, 0x1B615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B615Cu;
label_1b615c:
    // 0x1b615c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b6160:
    // 0x1b6160: 0xc051f10  jal         func_147C40
label_1b6164:
    if (ctx->pc == 0x1B6164u) {
        ctx->pc = 0x1B6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6160u;
        // 0x1b6164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6168u;
        goto label_1b6168;
    }
    ctx->pc = 0x1B6160u;
    SET_GPR_U32(ctx, 31, 0x1B6168u);
    ctx->pc = 0x1B6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6160u;
    // 0x1b6164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1B6160u, 0x1B6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6168u;
label_1b6168:
    // 0x1b6168: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b616c:
    // 0x1b616c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b616cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b6170:
    // 0x1b6170: 0xc051efe  jal         func_147BF8
label_1b6174:
    if (ctx->pc == 0x1B6174u) {
        ctx->pc = 0x1B6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6170u;
        // 0x1b6174: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6178u;
        goto label_1b6178;
    }
    ctx->pc = 0x1B6170u;
    SET_GPR_U32(ctx, 31, 0x1B6178u);
    ctx->pc = 0x1B6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6170u;
    // 0x1b6174: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1B6170u, 0x1B6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6178u;
label_1b6178:
    // 0x1b6178: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1b617c:
    // 0x1b617c: 0xc051d4a  jal         func_147528
label_1b6180:
    if (ctx->pc == 0x1B6180u) {
        ctx->pc = 0x1B6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B617Cu;
        // 0x1b6180: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6184u;
        goto label_1b6184;
    }
    ctx->pc = 0x1B617Cu;
    SET_GPR_U32(ctx, 31, 0x1B6184u);
    ctx->pc = 0x1B6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B617Cu;
    // 0x1b6180: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1B617Cu, 0x1B6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6184u;
label_1b6184:
    // 0x1b6184: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1b6184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6188:
    // 0x1b6188: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b618c:
    // 0x1b618c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b618cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b6190:
    // 0x1b6190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6194:
    // 0x1b6194: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1b6194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6198:
    // 0x1b6198: 0x0  nop
    ctx->pc = 0x1b6198u;
    // NOP
label_1b619c:
    // 0x1b619c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b61a0:
    if (ctx->pc == 0x1B61A0u) {
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61A4u;
        goto label_1b61a4;
    }
    ctx->pc = 0x1B619Cu;
    {
        const bool branch_taken_0x1b619c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b619c) {
            ctx->pc = 0x1B61B0u;
            goto label_1b61b0;
        }
    }
    ctx->pc = 0x1B61A4u;
label_1b61a4:
    // 0x1b61a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b61a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b61a8:
    // 0x1b61a8: 0xc05bd90  jal         func_16F640
label_1b61ac:
    if (ctx->pc == 0x1B61ACu) {
        ctx->pc = 0x1B61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61A8u;
        // 0x1b61ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61B0u;
        goto label_1b61b0;
    }
    ctx->pc = 0x1B61A8u;
    SET_GPR_U32(ctx, 31, 0x1B61B0u);
    ctx->pc = 0x1B61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61A8u;
    // 0x1b61ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B61A8u, 0x1B61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61B0u;
label_1b61b0:
    // 0x1b61b0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1b61b4:
    // 0x1b61b4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1b61b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1b61b8:
    // 0x1b61b8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1b61bc:
    // 0x1b61bc: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1b61c0:
    // 0x1b61c0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1b61c4:
    // 0x1b61c4: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b61c8:
    // 0x1b61c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b61cc:
    if (ctx->pc == 0x1B61CCu) {
        ctx->pc = 0x1B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61C8u;
        // 0x1b61cc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61D0u;
        goto label_1b61d0;
    }
    ctx->pc = 0x1B61C8u;
    {
        const bool branch_taken_0x1b61c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61C8u;
        // 0x1b61cc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61c8) {
            ctx->pc = 0x1B61DCu;
            goto label_1b61dc;
        }
    }
    ctx->pc = 0x1B61D0u;
label_1b61d0:
    // 0x1b61d0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b61d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b61d4:
    // 0x1b61d4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1b61d8:
    if (ctx->pc == 0x1B61D8u) {
        ctx->pc = 0x1B61DCu;
        goto label_1b61dc;
    }
    ctx->pc = 0x1B61D4u;
    {
        const bool branch_taken_0x1b61d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1b61d4) {
            ctx->pc = 0x1B60B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b60b8;
        }
    }
    ctx->pc = 0x1B61DCu;
label_1b61dc:
    // 0x1b61dc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1b61dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1b61e0:
    // 0x1b61e0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1b61e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1b61e4:
    // 0x1b61e4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1b61e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1b61e8:
    // 0x1b61e8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1b61e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1b61ec:
    // 0x1b61ec: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1b61ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b61f0:
    // 0x1b61f0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1b61f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b61f4:
    // 0x1b61f4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1b61f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b61f8:
    // 0x1b61f8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b61f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b61fc:
    // 0x1b61fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b61fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b6200:
    // 0x1b6200: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b6200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b6204:
    // 0x1b6204: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1b6204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b6208:
    // 0x1b6208: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1b6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b620c:
    // 0x1b620c: 0x3e00008  jr          $ra
label_1b6210:
    if (ctx->pc == 0x1B6210u) {
        ctx->pc = 0x1B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B620Cu;
        // 0x1b6210: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6214u;
        goto label_1b6214;
    }
    ctx->pc = 0x1B620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B620Cu;
        // 0x1b6210: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B620Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6214u;
label_1b6214:
    // 0x1b6214: 0x0  nop
    ctx->pc = 0x1b6214u;
    // NOP
    ctx->pc = 0x1b6218u;
}
