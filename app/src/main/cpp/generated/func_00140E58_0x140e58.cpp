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

// Function: func_00140E58
// Address: 0x140e58 - 0x1410a8
void func_00140E58_0x140e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140E58_0x140e58");
#endif

    switch (ctx->pc) {
        case 0x140e58u: goto label_140e58;
        case 0x140e5cu: goto label_140e5c;
        case 0x140e60u: goto label_140e60;
        case 0x140e64u: goto label_140e64;
        case 0x140e68u: goto label_140e68;
        case 0x140e6cu: goto label_140e6c;
        case 0x140e70u: goto label_140e70;
        case 0x140e74u: goto label_140e74;
        case 0x140e78u: goto label_140e78;
        case 0x140e7cu: goto label_140e7c;
        case 0x140e80u: goto label_140e80;
        case 0x140e84u: goto label_140e84;
        case 0x140e88u: goto label_140e88;
        case 0x140e8cu: goto label_140e8c;
        case 0x140e90u: goto label_140e90;
        case 0x140e94u: goto label_140e94;
        case 0x140e98u: goto label_140e98;
        case 0x140e9cu: goto label_140e9c;
        case 0x140ea0u: goto label_140ea0;
        case 0x140ea4u: goto label_140ea4;
        case 0x140ea8u: goto label_140ea8;
        case 0x140eacu: goto label_140eac;
        case 0x140eb0u: goto label_140eb0;
        case 0x140eb4u: goto label_140eb4;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ebcu: goto label_140ebc;
        case 0x140ec0u: goto label_140ec0;
        case 0x140ec4u: goto label_140ec4;
        case 0x140ec8u: goto label_140ec8;
        case 0x140eccu: goto label_140ecc;
        case 0x140ed0u: goto label_140ed0;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ed8u: goto label_140ed8;
        case 0x140edcu: goto label_140edc;
        case 0x140ee0u: goto label_140ee0;
        case 0x140ee4u: goto label_140ee4;
        case 0x140ee8u: goto label_140ee8;
        case 0x140eecu: goto label_140eec;
        case 0x140ef0u: goto label_140ef0;
        case 0x140ef4u: goto label_140ef4;
        case 0x140ef8u: goto label_140ef8;
        case 0x140efcu: goto label_140efc;
        case 0x140f00u: goto label_140f00;
        case 0x140f04u: goto label_140f04;
        case 0x140f08u: goto label_140f08;
        case 0x140f0cu: goto label_140f0c;
        case 0x140f10u: goto label_140f10;
        case 0x140f14u: goto label_140f14;
        case 0x140f18u: goto label_140f18;
        case 0x140f1cu: goto label_140f1c;
        case 0x140f20u: goto label_140f20;
        case 0x140f24u: goto label_140f24;
        case 0x140f28u: goto label_140f28;
        case 0x140f2cu: goto label_140f2c;
        case 0x140f30u: goto label_140f30;
        case 0x140f34u: goto label_140f34;
        case 0x140f38u: goto label_140f38;
        case 0x140f3cu: goto label_140f3c;
        case 0x140f40u: goto label_140f40;
        case 0x140f44u: goto label_140f44;
        case 0x140f48u: goto label_140f48;
        case 0x140f4cu: goto label_140f4c;
        case 0x140f50u: goto label_140f50;
        case 0x140f54u: goto label_140f54;
        case 0x140f58u: goto label_140f58;
        case 0x140f5cu: goto label_140f5c;
        case 0x140f60u: goto label_140f60;
        case 0x140f64u: goto label_140f64;
        case 0x140f68u: goto label_140f68;
        case 0x140f6cu: goto label_140f6c;
        case 0x140f70u: goto label_140f70;
        case 0x140f74u: goto label_140f74;
        case 0x140f78u: goto label_140f78;
        case 0x140f7cu: goto label_140f7c;
        case 0x140f80u: goto label_140f80;
        case 0x140f84u: goto label_140f84;
        case 0x140f88u: goto label_140f88;
        case 0x140f8cu: goto label_140f8c;
        case 0x140f90u: goto label_140f90;
        case 0x140f94u: goto label_140f94;
        case 0x140f98u: goto label_140f98;
        case 0x140f9cu: goto label_140f9c;
        case 0x140fa0u: goto label_140fa0;
        case 0x140fa4u: goto label_140fa4;
        case 0x140fa8u: goto label_140fa8;
        case 0x140facu: goto label_140fac;
        case 0x140fb0u: goto label_140fb0;
        case 0x140fb4u: goto label_140fb4;
        case 0x140fb8u: goto label_140fb8;
        case 0x140fbcu: goto label_140fbc;
        case 0x140fc0u: goto label_140fc0;
        case 0x140fc4u: goto label_140fc4;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fccu: goto label_140fcc;
        case 0x140fd0u: goto label_140fd0;
        case 0x140fd4u: goto label_140fd4;
        case 0x140fd8u: goto label_140fd8;
        case 0x140fdcu: goto label_140fdc;
        case 0x140fe0u: goto label_140fe0;
        case 0x140fe4u: goto label_140fe4;
        case 0x140fe8u: goto label_140fe8;
        case 0x140fecu: goto label_140fec;
        case 0x140ff0u: goto label_140ff0;
        case 0x140ff4u: goto label_140ff4;
        case 0x140ff8u: goto label_140ff8;
        case 0x140ffcu: goto label_140ffc;
        case 0x141000u: goto label_141000;
        case 0x141004u: goto label_141004;
        case 0x141008u: goto label_141008;
        case 0x14100cu: goto label_14100c;
        case 0x141010u: goto label_141010;
        case 0x141014u: goto label_141014;
        case 0x141018u: goto label_141018;
        case 0x14101cu: goto label_14101c;
        case 0x141020u: goto label_141020;
        case 0x141024u: goto label_141024;
        case 0x141028u: goto label_141028;
        case 0x14102cu: goto label_14102c;
        case 0x141030u: goto label_141030;
        case 0x141034u: goto label_141034;
        case 0x141038u: goto label_141038;
        case 0x14103cu: goto label_14103c;
        case 0x141040u: goto label_141040;
        case 0x141044u: goto label_141044;
        case 0x141048u: goto label_141048;
        case 0x14104cu: goto label_14104c;
        case 0x141050u: goto label_141050;
        case 0x141054u: goto label_141054;
        case 0x141058u: goto label_141058;
        case 0x14105cu: goto label_14105c;
        case 0x141060u: goto label_141060;
        case 0x141064u: goto label_141064;
        case 0x141068u: goto label_141068;
        case 0x14106cu: goto label_14106c;
        case 0x141070u: goto label_141070;
        case 0x141074u: goto label_141074;
        case 0x141078u: goto label_141078;
        case 0x14107cu: goto label_14107c;
        case 0x141080u: goto label_141080;
        case 0x141084u: goto label_141084;
        case 0x141088u: goto label_141088;
        case 0x14108cu: goto label_14108c;
        case 0x141090u: goto label_141090;
        case 0x141094u: goto label_141094;
        case 0x141098u: goto label_141098;
        case 0x14109cu: goto label_14109c;
        case 0x1410a0u: goto label_1410a0;
        case 0x1410a4u: goto label_1410a4;
        default: break;
    }

    ctx->pc = 0x140e58u;

label_140e58:
    // 0x140e58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_140e5c:
    // 0x140e5c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x140e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_140e60:
    // 0x140e60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x140e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_140e64:
    // 0x140e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140e68:
    // 0x140e68: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_140e6c:
    // 0x140e6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x140e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_140e70:
    // 0x140e70: 0x24647a2c  addiu       $a0, $v1, 0x7A2C
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
label_140e74:
    // 0x140e74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x140e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_140e78:
    // 0x140e78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x140e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_140e7c:
    // 0x140e7c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x140e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_140e80:
    // 0x140e80: 0x4400081  bltz        $v0, . + 4 + (0x81 << 2)
label_140e84:
    if (ctx->pc == 0x140E84u) {
        ctx->pc = 0x140E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E80u;
        // 0x140e84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E88u;
        goto label_140e88;
    }
    ctx->pc = 0x140E80u;
    {
        const bool branch_taken_0x140e80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x140E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E80u;
        // 0x140e84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e80) {
            ctx->pc = 0x141088u;
            goto label_141088;
        }
    }
    ctx->pc = 0x140E88u;
label_140e88:
    // 0x140e88: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_140e8c:
    // 0x140e8c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_140e90:
    // 0x140e90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140e94:
    // 0x140e94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x140e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140e98:
    // 0x140e98: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_140e9c:
    if (ctx->pc == 0x140E9Cu) {
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E98u;
        // 0x140e9c: 0x26331dc0  addiu       $s3, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EA0u;
        goto label_140ea0;
    }
    ctx->pc = 0x140E98u;
    {
        const bool branch_taken_0x140e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E98u;
        // 0x140e9c: 0x26331dc0  addiu       $s3, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e98) {
            ctx->pc = 0x140F30u;
            goto label_140f30;
        }
    }
    ctx->pc = 0x140EA0u;
label_140ea0:
    // 0x140ea0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_140ea4:
    // 0x140ea4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x140ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_140ea8:
    // 0x140ea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_140eac:
    if (ctx->pc == 0x140EACu) {
        ctx->pc = 0x140EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EA8u;
        // 0x140eac: 0x26221dc0  addiu       $v0, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EB0u;
        goto label_140eb0;
    }
    ctx->pc = 0x140EA8u;
    {
        const bool branch_taken_0x140ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EA8u;
        // 0x140eac: 0x26221dc0  addiu       $v0, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ea8) {
            ctx->pc = 0x140EBCu;
            goto label_140ebc;
        }
    }
    ctx->pc = 0x140EB0u;
label_140eb0:
    // 0x140eb0: 0xc050578  jal         func_1415E0
label_140eb4:
    if (ctx->pc == 0x140EB4u) {
        ctx->pc = 0x140EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB0u;
        // 0x140eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EB8u;
        goto label_140eb8;
    }
    ctx->pc = 0x140EB0u;
    SET_GPR_U32(ctx, 31, 0x140EB8u);
    ctx->pc = 0x140EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EB0u;
    // 0x140eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1415E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1415E0u, 0x140EB0u, 0x140EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EB8u;
label_140eb8:
    // 0x140eb8: 0x26221dc0  addiu       $v0, $s1, 0x1DC0
    ctx->pc = 0x140eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
label_140ebc:
    // 0x140ebc: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x140ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
label_140ec0:
    // 0x140ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140ec4:
    // 0x140ec4: 0xc04f254  jal         func_13C950
label_140ec8:
    if (ctx->pc == 0x140EC8u) {
        ctx->pc = 0x140EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EC4u;
        // 0x140ec8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ECCu;
        goto label_140ecc;
    }
    ctx->pc = 0x140EC4u;
    SET_GPR_U32(ctx, 31, 0x140ECCu);
    ctx->pc = 0x140EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EC4u;
    // 0x140ec8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C950u, 0x140EC4u, 0x140ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140ECCu;
label_140ecc:
    // 0x140ecc: 0x263022f4  addiu       $s0, $s1, 0x22F4
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8948));
label_140ed0:
    // 0x140ed0: 0x26241e90  addiu       $a0, $s1, 0x1E90
    ctx->pc = 0x140ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7824));
label_140ed4:
    // 0x140ed4: 0xc04fd74  jal         func_13F5D0
label_140ed8:
    if (ctx->pc == 0x140ED8u) {
        ctx->pc = 0x140ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ED4u;
        // 0x140ed8: 0x263223c0  addiu       $s2, $s1, 0x23C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EDCu;
        goto label_140edc;
    }
    ctx->pc = 0x140ED4u;
    SET_GPR_U32(ctx, 31, 0x140EDCu);
    ctx->pc = 0x140ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140ED4u;
    // 0x140ed8: 0x263223c0  addiu       $s2, $s1, 0x23C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F5D0u, 0x140ED4u, 0x140EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EDCu;
label_140edc:
    // 0x140edc: 0xc04fa5c  jal         func_13E970
label_140ee0:
    if (ctx->pc == 0x140EE0u) {
        ctx->pc = 0x140EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EDCu;
        // 0x140ee0: 0x26242220  addiu       $a0, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EE4u;
        goto label_140ee4;
    }
    ctx->pc = 0x140EDCu;
    SET_GPR_U32(ctx, 31, 0x140EE4u);
    ctx->pc = 0x140EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EDCu;
    // 0x140ee0: 0x26242220  addiu       $a0, $s1, 0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E970u, 0x140EDCu, 0x140EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EE4u;
label_140ee4:
    // 0x140ee4: 0xc051c7c  jal         func_1471F0
label_140ee8:
    if (ctx->pc == 0x140EE8u) {
        ctx->pc = 0x140EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EE4u;
        // 0x140ee8: 0x26241a20  addiu       $a0, $s1, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EECu;
        goto label_140eec;
    }
    ctx->pc = 0x140EE4u;
    SET_GPR_U32(ctx, 31, 0x140EECu);
    ctx->pc = 0x140EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EE4u;
    // 0x140ee8: 0x26241a20  addiu       $a0, $s1, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1471F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1471F0u, 0x140EE4u, 0x140EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EECu;
label_140eec:
    // 0x140eec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140ef0:
    // 0x140ef0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_140ef4:
    if (ctx->pc == 0x140EF4u) {
        ctx->pc = 0x140EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EF0u;
        // 0x140ef4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EF8u;
        goto label_140ef8;
    }
    ctx->pc = 0x140EF0u;
    {
        const bool branch_taken_0x140ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ef0) {
            ctx->pc = 0x140EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140EF0u;
            // 0x140ef4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140F1Cu;
            goto label_140f1c;
        }
    }
    ctx->pc = 0x140EF8u;
label_140ef8:
    // 0x140ef8: 0x90a20077  lbu         $v0, 0x77($a1)
    ctx->pc = 0x140ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 119)));
label_140efc:
    // 0x140efc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_140f00:
    if (ctx->pc == 0x140F00u) {
        ctx->pc = 0x140F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EFCu;
        // 0x140f00: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F04u;
        goto label_140f04;
    }
    ctx->pc = 0x140EFCu;
    {
        const bool branch_taken_0x140efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140efc) {
            ctx->pc = 0x140F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140EFCu;
            // 0x140f00: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140F1Cu;
            goto label_140f1c;
        }
    }
    ctx->pc = 0x140F04u;
label_140f04:
    // 0x140f04: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_140f08:
    // 0x140f08: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x140f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_140f0c:
    // 0x140f0c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x140f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_140f10:
    // 0x140f10: 0x60f809  jalr        $v1
label_140f14:
    if (ctx->pc == 0x140F14u) {
        ctx->pc = 0x140F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F10u;
        // 0x140f14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F18u;
        goto label_140f18;
    }
    ctx->pc = 0x140F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140F18u);
        ctx->pc = 0x140F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F10u;
        // 0x140f14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F10u, 0x140F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140F18u;
label_140f18:
    // 0x140f18: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_140f1c:
    // 0x140f1c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x140f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_140f20:
    // 0x140f20: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_140f24:
    if (ctx->pc == 0x140F24u) {
        ctx->pc = 0x140F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F20u;
        // 0x140f24: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F28u;
        goto label_140f28;
    }
    ctx->pc = 0x140F20u;
    {
        const bool branch_taken_0x140f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140f20) {
            ctx->pc = 0x140F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140F20u;
            // 0x140f24: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140ef0;
        }
    }
    ctx->pc = 0x140F28u;
label_140f28:
    // 0x140f28: 0x10000006  b           . + 4 + (0x6 << 2)
label_140f2c:
    if (ctx->pc == 0x140F2Cu) {
        ctx->pc = 0x140F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F28u;
        // 0x140f2c: 0x8e62009c  lw          $v0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F30u;
        goto label_140f30;
    }
    ctx->pc = 0x140F28u;
    {
        const bool branch_taken_0x140f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F28u;
        // 0x140f2c: 0x8e62009c  lw          $v0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f28) {
            ctx->pc = 0x140F44u;
            goto label_140f44;
        }
    }
    ctx->pc = 0x140F30u;
label_140f30:
    // 0x140f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_140f34:
    if (ctx->pc == 0x140F34u) {
        ctx->pc = 0x140F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F30u;
        // 0x140f34: 0x3c140074  lui         $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F38u;
        goto label_140f38;
    }
    ctx->pc = 0x140F30u;
    {
        const bool branch_taken_0x140f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F30u;
        // 0x140f34: 0x3c140074  lui         $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f30) {
            ctx->pc = 0x140F40u;
            goto label_140f40;
        }
    }
    ctx->pc = 0x140F38u;
label_140f38:
    // 0x140f38: 0xc04fc70  jal         func_13F1C0
label_140f3c:
    if (ctx->pc == 0x140F3Cu) {
        ctx->pc = 0x140F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F38u;
        // 0x140f3c: 0x26241520  addiu       $a0, $s1, 0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F40u;
        goto label_140f40;
    }
    ctx->pc = 0x140F38u;
    SET_GPR_U32(ctx, 31, 0x140F40u);
    ctx->pc = 0x140F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F38u;
    // 0x140f3c: 0x26241520  addiu       $a0, $s1, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F1C0u, 0x140F38u, 0x140F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F40u;
label_140f40:
    // 0x140f40: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_140f44:
    // 0x140f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140f48:
    if (ctx->pc == 0x140F48u) {
        ctx->pc = 0x140F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F44u;
        // 0x140f48: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F4Cu;
        goto label_140f4c;
    }
    ctx->pc = 0x140F44u;
    {
        const bool branch_taken_0x140f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F44u;
        // 0x140f48: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f44) {
            ctx->pc = 0x140F5Cu;
            goto label_140f5c;
        }
    }
    ctx->pc = 0x140F4Cu;
label_140f4c:
    // 0x140f4c: 0x8e221e60  lw          $v0, 0x1E60($s1)
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7776)));
label_140f50:
    // 0x140f50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140f54:
    // 0x140f54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_140f58:
    if (ctx->pc == 0x140F58u) {
        ctx->pc = 0x140F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F54u;
        // 0x140f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F5Cu;
        goto label_140f5c;
    }
    ctx->pc = 0x140F54u;
    {
        const bool branch_taken_0x140f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F54u;
        // 0x140f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f54) {
            ctx->pc = 0x140F60u;
            goto label_140f60;
        }
    }
    ctx->pc = 0x140F5Cu;
label_140f5c:
    // 0x140f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140f60:
    // 0x140f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140f64:
    // 0x140f64: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_140f68:
    if (ctx->pc == 0x140F68u) {
        ctx->pc = 0x140F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F64u;
        // 0x140f68: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F6Cu;
        goto label_140f6c;
    }
    ctx->pc = 0x140F64u;
    {
        const bool branch_taken_0x140f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F64u;
        // 0x140f68: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f64) {
            ctx->pc = 0x140FC0u;
            goto label_140fc0;
        }
    }
    ctx->pc = 0x140F6Cu;
label_140f6c:
    // 0x140f6c: 0x922221e8  lbu         $v0, 0x21E8($s1)
    ctx->pc = 0x140f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8680)));
label_140f70:
    // 0x140f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140f74:
    if (ctx->pc == 0x140F74u) {
        ctx->pc = 0x140F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F70u;
        // 0x140f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F78u;
        goto label_140f78;
    }
    ctx->pc = 0x140F70u;
    {
        const bool branch_taken_0x140f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F70u;
        // 0x140f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f70) {
            ctx->pc = 0x140F88u;
            goto label_140f88;
        }
    }
    ctx->pc = 0x140F78u;
label_140f78:
    // 0x140f78: 0x8e221f20  lw          $v0, 0x1F20($s1)
    ctx->pc = 0x140f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7968)));
label_140f7c:
    // 0x140f7c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_140f80:
    if (ctx->pc == 0x140F80u) {
        ctx->pc = 0x140F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F7Cu;
        // 0x140f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F84u;
        goto label_140f84;
    }
    ctx->pc = 0x140F7Cu;
    {
        const bool branch_taken_0x140f7c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x140F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F7Cu;
        // 0x140f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f7c) {
            ctx->pc = 0x140F88u;
            goto label_140f88;
        }
    }
    ctx->pc = 0x140F84u;
label_140f84:
    // 0x140f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140f88:
    // 0x140f88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140f8c:
    // 0x140f8c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_140f90:
    if (ctx->pc == 0x140F90u) {
        ctx->pc = 0x140F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F8Cu;
        // 0x140f90: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F94u;
        goto label_140f94;
    }
    ctx->pc = 0x140F8Cu;
    {
        const bool branch_taken_0x140f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F8Cu;
        // 0x140f90: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f8c) {
            ctx->pc = 0x140FC0u;
            goto label_140fc0;
        }
    }
    ctx->pc = 0x140F94u;
label_140f94:
    // 0x140f94: 0x8e2222bc  lw          $v0, 0x22BC($s1)
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8892)));
label_140f98:
    // 0x140f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140f9c:
    if (ctx->pc == 0x140F9Cu) {
        ctx->pc = 0x140F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F98u;
        // 0x140f9c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FA0u;
        goto label_140fa0;
    }
    ctx->pc = 0x140F98u;
    {
        const bool branch_taken_0x140f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F98u;
        // 0x140f9c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f98) {
            ctx->pc = 0x140FB0u;
            goto label_140fb0;
        }
    }
    ctx->pc = 0x140FA0u;
label_140fa0:
    // 0x140fa0: 0x8e2222c0  lw          $v0, 0x22C0($s1)
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8896)));
label_140fa4:
    // 0x140fa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140fa8:
    // 0x140fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_140fac:
    if (ctx->pc == 0x140FACu) {
        ctx->pc = 0x140FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FA8u;
        // 0x140fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FB0u;
        goto label_140fb0;
    }
    ctx->pc = 0x140FA8u;
    {
        const bool branch_taken_0x140fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FA8u;
        // 0x140fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fa8) {
            ctx->pc = 0x140FB4u;
            goto label_140fb4;
        }
    }
    ctx->pc = 0x140FB0u;
label_140fb0:
    // 0x140fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140fb4:
    // 0x140fb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140fb8:
    // 0x140fb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_140fbc:
    if (ctx->pc == 0x140FBCu) {
        ctx->pc = 0x140FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FB8u;
        // 0x140fbc: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FC0u;
        goto label_140fc0;
    }
    ctx->pc = 0x140FB8u;
    {
        const bool branch_taken_0x140fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FB8u;
        // 0x140fbc: 0x26231ae0  addiu       $v1, $s1, 0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fb8) {
            ctx->pc = 0x140FCCu;
            goto label_140fcc;
        }
    }
    ctx->pc = 0x140FC0u;
label_140fc0:
    // 0x140fc0: 0x906201c0  lbu         $v0, 0x1C0($v1)
    ctx->pc = 0x140fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
label_140fc4:
    // 0x140fc4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_140fc8:
    // 0x140fc8: 0xa06201c0  sb          $v0, 0x1C0($v1)
    ctx->pc = 0x140fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 448), (uint8_t)GPR_U32(ctx, 2));
label_140fcc:
    // 0x140fcc: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_140fd0:
    // 0x140fd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140fd4:
    if (ctx->pc == 0x140FD4u) {
        ctx->pc = 0x140FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FD0u;
        // 0x140fd4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FD8u;
        goto label_140fd8;
    }
    ctx->pc = 0x140FD0u;
    {
        const bool branch_taken_0x140fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FD0u;
        // 0x140fd4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fd0) {
            ctx->pc = 0x140FE8u;
            goto label_140fe8;
        }
    }
    ctx->pc = 0x140FD8u;
label_140fd8:
    // 0x140fd8: 0x8e221e60  lw          $v0, 0x1E60($s1)
    ctx->pc = 0x140fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7776)));
label_140fdc:
    // 0x140fdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140fe0:
    // 0x140fe0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_140fe4:
    if (ctx->pc == 0x140FE4u) {
        ctx->pc = 0x140FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FE0u;
        // 0x140fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FE8u;
        goto label_140fe8;
    }
    ctx->pc = 0x140FE0u;
    {
        const bool branch_taken_0x140fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FE0u;
        // 0x140fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fe0) {
            ctx->pc = 0x140FECu;
            goto label_140fec;
        }
    }
    ctx->pc = 0x140FE8u;
label_140fe8:
    // 0x140fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140fec:
    // 0x140fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140ff0:
    // 0x140ff0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_140ff4:
    if (ctx->pc == 0x140FF4u) {
        ctx->pc = 0x140FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF0u;
        // 0x140ff4: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FF8u;
        goto label_140ff8;
    }
    ctx->pc = 0x140FF0u;
    {
        const bool branch_taken_0x140ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF0u;
        // 0x140ff4: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ff0) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x922221e8  lbu         $v0, 0x21E8($s1)
    ctx->pc = 0x140ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8680)));
label_140ffc:
    // 0x140ffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_141000:
    if (ctx->pc == 0x141000u) {
        ctx->pc = 0x141000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FFCu;
        // 0x141000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141004u;
        goto label_141004;
    }
    ctx->pc = 0x140FFCu;
    {
        const bool branch_taken_0x140ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FFCu;
        // 0x141000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ffc) {
            ctx->pc = 0x141014u;
            goto label_141014;
        }
    }
    ctx->pc = 0x141004u;
label_141004:
    // 0x141004: 0x8e221f20  lw          $v0, 0x1F20($s1)
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7968)));
label_141008:
    // 0x141008: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_14100c:
    if (ctx->pc == 0x14100Cu) {
        ctx->pc = 0x14100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141008u;
        // 0x14100c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141010u;
        goto label_141010;
    }
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x14100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141008u;
        // 0x14100c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141008) {
            ctx->pc = 0x141014u;
            goto label_141014;
        }
    }
    ctx->pc = 0x141010u;
label_141010:
    // 0x141010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141014:
    // 0x141014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141018:
    // 0x141018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14101c:
    if (ctx->pc == 0x14101Cu) {
        ctx->pc = 0x14101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141018u;
        // 0x14101c: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141020u;
        goto label_141020;
    }
    ctx->pc = 0x141018u;
    {
        const bool branch_taken_0x141018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141018u;
        // 0x14101c: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141018) {
            ctx->pc = 0x14102Cu;
            goto label_14102c;
        }
    }
    ctx->pc = 0x141020u;
label_141020:
    // 0x141020: 0x90620104  lbu         $v0, 0x104($v1)
    ctx->pc = 0x141020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 260)));
label_141024:
    // 0x141024: 0x1000000e  b           . + 4 + (0xE << 2)
label_141028:
    if (ctx->pc == 0x141028u) {
        ctx->pc = 0x141028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141024u;
        // 0x141028: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14102Cu;
        goto label_14102c;
    }
    ctx->pc = 0x141024u;
    {
        const bool branch_taken_0x141024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141024u;
        // 0x141028: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141024) {
            ctx->pc = 0x141060u;
            goto label_141060;
        }
    }
    ctx->pc = 0x14102Cu;
label_14102c:
    // 0x14102c: 0x8e2222bc  lw          $v0, 0x22BC($s1)
    ctx->pc = 0x14102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8892)));
label_141030:
    // 0x141030: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_141034:
    if (ctx->pc == 0x141034u) {
        ctx->pc = 0x141034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141030u;
        // 0x141034: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141038u;
        goto label_141038;
    }
    ctx->pc = 0x141030u;
    {
        const bool branch_taken_0x141030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141030u;
        // 0x141034: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141030) {
            ctx->pc = 0x141048u;
            goto label_141048;
        }
    }
    ctx->pc = 0x141038u;
label_141038:
    // 0x141038: 0x8e2222c0  lw          $v0, 0x22C0($s1)
    ctx->pc = 0x141038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8896)));
label_14103c:
    // 0x14103c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_141040:
    // 0x141040: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_141044:
    if (ctx->pc == 0x141044u) {
        ctx->pc = 0x141044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141040u;
        // 0x141044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141048u;
        goto label_141048;
    }
    ctx->pc = 0x141040u;
    {
        const bool branch_taken_0x141040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141040u;
        // 0x141044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141040) {
            ctx->pc = 0x14104Cu;
            goto label_14104c;
        }
    }
    ctx->pc = 0x141048u;
label_141048:
    // 0x141048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14104c:
    // 0x14104c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141050:
    // 0x141050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_141054:
    if (ctx->pc == 0x141054u) {
        ctx->pc = 0x141054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141050u;
        // 0x141054: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141058u;
        goto label_141058;
    }
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141050u;
        // 0x141054: 0x26231cb0  addiu       $v1, $s1, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141050) {
            ctx->pc = 0x141064u;
            goto label_141064;
        }
    }
    ctx->pc = 0x141058u;
label_141058:
    // 0x141058: 0x90620104  lbu         $v0, 0x104($v1)
    ctx->pc = 0x141058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 260)));
label_14105c:
    // 0x14105c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_141060:
    // 0x141060: 0xa0620104  sb          $v0, 0x104($v1)
    ctx->pc = 0x141060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 260), (uint8_t)GPR_U32(ctx, 2));
label_141064:
    // 0x141064: 0x8e827a24  lw          $v0, 0x7A24($s4)
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
label_141068:
    // 0x141068: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_14106c:
    // 0x14106c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_141070:
    // 0x141070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_141074:
    if (ctx->pc == 0x141074u) {
        ctx->pc = 0x141074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141070u;
        // 0x141074: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141078u;
        goto label_141078;
    }
    ctx->pc = 0x141070u;
    {
        const bool branch_taken_0x141070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141070u;
        // 0x141074: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141070) {
            ctx->pc = 0x141088u;
            goto label_141088;
        }
    }
    ctx->pc = 0x141078u;
label_141078:
    // 0x141078: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14107c:
    // 0x14107c: 0x8c442fb0  lw          $a0, 0x2FB0($v0)
    ctx->pc = 0x14107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
label_141080:
    // 0x141080: 0xc0b1e14  jal         func_2C7850
label_141084:
    if (ctx->pc == 0x141084u) {
        ctx->pc = 0x141084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141080u;
        // 0x141084: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141088u;
        goto label_141088;
    }
    ctx->pc = 0x141080u;
    SET_GPR_U32(ctx, 31, 0x141088u);
    ctx->pc = 0x141084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141080u;
    // 0x141084: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7850u, 0x141080u, 0x141088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141088u;
label_141088:
    // 0x141088: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x141088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14108c:
    // 0x14108c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14108cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_141090:
    // 0x141090: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x141090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_141094:
    // 0x141094: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x141094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_141098:
    // 0x141098: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x141098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14109c:
    // 0x14109c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1410a0:
    // 0x1410a0: 0x3e00008  jr          $ra
label_1410a4:
    if (ctx->pc == 0x1410A4u) {
        ctx->pc = 0x1410A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410A0u;
        // 0x1410a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410A8u;
        goto label_fallthrough_0x1410a0;
    }
    ctx->pc = 0x1410A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1410A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410A0u;
        // 0x1410a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1410A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1410a0:
    ctx->pc = 0x1410A8u;
}
