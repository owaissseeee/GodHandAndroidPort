#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: moveGondola__5cR405UiPUiUib
// Address: 0x799e30 - 0x79a1a8
void moveGondola__5cR405UiPUiUib_0x799e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveGondola__5cR405UiPUiUib_0x799e30");
#endif

    switch (ctx->pc) {
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
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
        default: break;
    }

    ctx->pc = 0x799e30u;

label_799e30:
    // 0x799e30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_799e34:
    // 0x799e34: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_799e38:
    // 0x799e38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_799e3c:
    // 0x799e3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799e40:
    // 0x799e40: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x799e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_799e44:
    // 0x799e44: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_799e48:
    // 0x799e48: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x799e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_799e4c:
    // 0x799e4c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799e50:
    // 0x799e50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_799e54:
    // 0x799e54: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_799e58:
    // 0x799e58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x799e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_799e5c:
    // 0x799e5c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_799e60:
    // 0x799e60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_799e64:
    // 0x799e64: 0x14a0001c  bnez        $a1, . + 4 + (0x1C << 2)
label_799e68:
    if (ctx->pc == 0x799E68u) {
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E6Cu;
        goto label_799e6c;
    }
    ctx->pc = 0x799E64u;
    {
        const bool branch_taken_0x799e64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e64) {
            ctx->pc = 0x799ED8u;
            goto label_799ed8;
        }
    }
    ctx->pc = 0x799E6Cu;
label_799e6c:
    // 0x799e6c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799e70:
    // 0x799e70: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_799e74:
    // 0x799e74: 0x8c43a800  lw          $v1, -0x5800($v0)
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
label_799e78:
    // 0x799e78: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
label_799e7c:
    // 0x799e7c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799e80:
    // 0x799e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e84:
    // 0x799e84: 0x24a5a730  addiu       $a1, $a1, -0x58D0
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944560));
label_799e88:
    // 0x799e88: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799e8c:
    // 0x799e8c: 0xc04ccb4  jal         func_1332D0
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799e98:
    // 0x799e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e9c:
    // 0x799e9c: 0x24a5a738  addiu       $a1, $a1, -0x58C8
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944568));
label_799ea0:
    // 0x799ea0: 0xc04ccb4  jal         func_1332D0
label_799ea4:
    if (ctx->pc == 0x799EA4u) {
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EA8u;
        goto label_799ea8;
    }
    ctx->pc = 0x799EA0u;
    SET_GPR_U32(ctx, 31, 0x799EA8u);
    ctx->pc = 0x799EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA0u;
    // 0x799ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799EA0u, 0x799EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799eac:
    // 0x799eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799eb0:
    // 0x799eb0: 0x24a5a740  addiu       $a1, $a1, -0x58C0
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944576));
label_799eb4:
    // 0x799eb4: 0xc04ccb4  jal         func_1332D0
label_799eb8:
    if (ctx->pc == 0x799EB8u) {
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EBCu;
        goto label_799ebc;
    }
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x799EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB4u;
    // 0x799eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799ec0:
    // 0x799ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ec4:
    // 0x799ec4: 0x24a5a720  addiu       $a1, $a1, -0x58E0
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944544));
label_799ec8:
    // 0x799ec8: 0xc04ccb4  jal         func_1332D0
label_799ecc:
    if (ctx->pc == 0x799ECCu) {
        ctx->pc = 0x799ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC8u;
        // 0x799ecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ED0u;
        goto label_799ed0;
    }
    ctx->pc = 0x799EC8u;
    SET_GPR_U32(ctx, 31, 0x799ED0u);
    ctx->pc = 0x799ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC8u;
    // 0x799ecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799EC8u, 0x799ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED0u;
label_799ed0:
    // 0x799ed0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_799ed4:
    if (ctx->pc == 0x799ED4u) {
        ctx->pc = 0x799ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED0u;
        // 0x799ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ED8u;
        goto label_799ed8;
    }
    ctx->pc = 0x799ED0u;
    {
        const bool branch_taken_0x799ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED0u;
        // 0x799ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ed0) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799ED8u;
label_799ed8:
    // 0x799ed8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799edc:
    // 0x799edc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_799ee0:
    // 0x799ee0: 0x8c43a800  lw          $v1, -0x5800($v0)
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
label_799ee4:
    // 0x799ee4: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
label_799ee8:
    // 0x799ee8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799eec:
    // 0x799eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ef0:
    // 0x799ef0: 0x24a5a748  addiu       $a1, $a1, -0x58B8
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944584));
label_799ef4:
    // 0x799ef4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799ef8:
    // 0x799ef8: 0xc04ccb4  jal         func_1332D0
label_799efc:
    if (ctx->pc == 0x799EFCu) {
        ctx->pc = 0x799EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF8u;
        // 0x799efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F00u;
        goto label_799f00;
    }
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f04:
    // 0x799f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f08:
    // 0x799f08: 0x24a5a750  addiu       $a1, $a1, -0x58B0
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944592));
label_799f0c:
    // 0x799f0c: 0xc04ccb4  jal         func_1332D0
label_799f10:
    if (ctx->pc == 0x799F10u) {
        ctx->pc = 0x799F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F0Cu;
        // 0x799f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F14u;
        goto label_799f14;
    }
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f18:
    // 0x799f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f1c:
    // 0x799f1c: 0x24a5a758  addiu       $a1, $a1, -0x58A8
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
label_799f20:
    // 0x799f20: 0xc04ccb4  jal         func_1332D0
label_799f24:
    if (ctx->pc == 0x799F24u) {
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F28u;
        goto label_799f28;
    }
    ctx->pc = 0x799F20u;
    SET_GPR_U32(ctx, 31, 0x799F28u);
    ctx->pc = 0x799F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F20u;
    // 0x799f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799F20u, 0x799F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f2c:
    // 0x799f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f30:
    // 0x799f30: 0x24a5a728  addiu       $a1, $a1, -0x58D8
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944552));
label_799f34:
    // 0x799f34: 0xc04ccb4  jal         func_1332D0
label_799f38:
    if (ctx->pc == 0x799F38u) {
        ctx->pc = 0x799F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F34u;
        // 0x799f38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F3Cu;
        goto label_799f3c;
    }
    ctx->pc = 0x799F34u;
    SET_GPR_U32(ctx, 31, 0x799F3Cu);
    ctx->pc = 0x799F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F34u;
    // 0x799f38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799F34u, 0x799F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799f40:
    // 0x799f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799f44:
    // 0x799f44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799f48:
    // 0x799f48: 0xc06dca0  jal         func_1B7280
label_799f4c:
    if (ctx->pc == 0x799F4Cu) {
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F50u;
        goto label_799f50;
    }
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x799F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F48u;
    // 0x799f4c: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f54:
    // 0x799f54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799f58:
    // 0x799f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799f5c:
    // 0x799f5c: 0xc06dca0  jal         func_1B7280
label_799f60:
    if (ctx->pc == 0x799F60u) {
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F64u;
        goto label_799f64;
    }
    ctx->pc = 0x799F5Cu;
    SET_GPR_U32(ctx, 31, 0x799F64u);
    ctx->pc = 0x799F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F5Cu;
    // 0x799f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799F5Cu, 0x799F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_799f68:
    // 0x799f68: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799f6c:
    // 0x799f6c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799f70:
    // 0x799f70: 0x40f809  jalr        $v0
label_799f74:
    if (ctx->pc == 0x799F74u) {
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F78u;
        goto label_799f78;
    }
    ctx->pc = 0x799F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799F78u);
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F70u, 0x799F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x799f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_799f7c:
    // 0x799f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799f80:
    // 0x799f80: 0x3c01c1d0  lui         $at, 0xC1D0
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49616 << 16));
label_799f84:
    // 0x799f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799f88:
    // 0x799f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f8c:
    // 0x799f8c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_799f90:
    // 0x799f90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799f94:
    // 0x799f94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799f98:
    // 0x799f98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799f9c:
    // 0x799f9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x799f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_799fa0:
    // 0x799fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799fa4:
    // 0x799fa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799fa8:
    // 0x799fa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799fa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_799fac:
    // 0x799fac: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_799fb0:
    // 0x799fb0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x799fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799fb4:
    // 0x799fb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_799fb8:
    // 0x799fb8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x799fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799fbc:
    // 0x799fbc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_799fc0:
    // 0x799fc0: 0xc071a26  jal         func_1C6898
label_799fc4:
    if (ctx->pc == 0x799FC4u) {
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC8u;
        goto label_799fc8;
    }
    ctx->pc = 0x799FC0u;
    SET_GPR_U32(ctx, 31, 0x799FC8u);
    ctx->pc = 0x799FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC0u;
    // 0x799fc4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x799FC0u, 0x799FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_799fcc:
    // 0x799fcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799fd0:
    // 0x799fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799fd4:
    // 0x799fd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_799fd8:
    // 0x799fd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799fdc:
    // 0x799fdc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799fe0:
    // 0x799fe0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799fe4:
    // 0x799fe4: 0xc071f54  jal         func_1C7D50
label_799fe8:
    if (ctx->pc == 0x799FE8u) {
        ctx->pc = 0x799FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE4u;
        // 0x799fe8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FECu;
        goto label_799fec;
    }
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0x12c00029  beqz        $s6, . + 4 + (0x29 << 2)
label_799ff0:
    if (ctx->pc == 0x799FF0u) {
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF4u;
        goto label_799ff4;
    }
    ctx->pc = 0x799FECu;
    {
        const bool branch_taken_0x799fec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fec) {
            ctx->pc = 0x79A094u;
            goto label_79a094;
        }
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x12a00027  beqz        $s5, . + 4 + (0x27 << 2)
label_799ff8:
    if (ctx->pc == 0x799FF8u) {
        ctx->pc = 0x799FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF4u;
        // 0x799ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FFCu;
        goto label_799ffc;
    }
    ctx->pc = 0x799FF4u;
    {
        const bool branch_taken_0x799ff4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF4u;
        // 0x799ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ff4) {
            ctx->pc = 0x79A094u;
            goto label_79a094;
        }
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a000:
    // 0x79a000: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_79a004:
    // 0x79a004: 0x245364f0  addiu       $s3, $v0, 0x64F0
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_79a008:
    // 0x79a008: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_79a00c:
    // 0x79a00c: 0x0  nop
    ctx->pc = 0x79a00cu;
    // NOP
label_79a010:
    // 0x79a010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a014:
    // 0x79a014: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_79a018:
    // 0x79a018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_79a01c:
    // 0x79a01c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x79a01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a020:
    // 0x79a020: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a020u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a024:
    // 0x79a024: 0xc0a421a  jal         func_290868
label_79a028:
    if (ctx->pc == 0x79A028u) {
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A02Cu;
        goto label_79a02c;
    }
    ctx->pc = 0x79A024u;
    SET_GPR_U32(ctx, 31, 0x79A02Cu);
    ctx->pc = 0x79A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A024u;
    // 0x79a028: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A024u, 0x79A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A02Cu;
label_79a02c:
    // 0x79a02c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_79a030:
    if (ctx->pc == 0x79A030u) {
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A034u;
        goto label_79a034;
    }
    ctx->pc = 0x79A02Cu;
    {
        const bool branch_taken_0x79a02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a02c) {
            ctx->pc = 0x79A084u;
            goto label_79a084;
        }
    }
    ctx->pc = 0x79A034u;
label_79a034:
    // 0x79a034: 0xc0a421a  jal         func_290868
label_79a038:
    if (ctx->pc == 0x79A038u) {
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A03Cu;
        goto label_79a03c;
    }
    ctx->pc = 0x79A034u;
    SET_GPR_U32(ctx, 31, 0x79A03Cu);
    ctx->pc = 0x79A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A034u;
    // 0x79a038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A034u, 0x79A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a040:
    // 0x79a040: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_79a044:
    if (ctx->pc == 0x79A044u) {
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A048u;
        goto label_79a048;
    }
    ctx->pc = 0x79A040u;
    {
        const bool branch_taken_0x79a040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a040) {
            ctx->pc = 0x79A088u;
            goto label_79a088;
        }
    }
    ctx->pc = 0x79A048u;
label_79a048:
    // 0x79a048: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_79a04c:
    // 0x79a04c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79a050:
    if (ctx->pc == 0x79A050u) {
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A054u;
        goto label_79a054;
    }
    ctx->pc = 0x79A04Cu;
    {
        const bool branch_taken_0x79a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a04c) {
            ctx->pc = 0x79A060u;
            goto label_79a060;
        }
    }
    ctx->pc = 0x79A054u;
label_79a054:
    // 0x79a054: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a058:
    if (ctx->pc == 0x79A058u) {
        ctx->pc = 0x79A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A054u;
        // 0x79a058: 0xae45002c  sw          $a1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A05Cu;
        goto label_79a05c;
    }
    ctx->pc = 0x79A054u;
    {
        const bool branch_taken_0x79a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A054u;
        // 0x79a058: 0xae45002c  sw          $a1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a054) {
            ctx->pc = 0x79A084u;
            goto label_79a084;
        }
    }
    ctx->pc = 0x79A05Cu;
label_79a05c:
    // 0x79a05c: 0x0  nop
    ctx->pc = 0x79a05cu;
    // NOP
label_79a060:
    // 0x79a060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79a064:
    // 0x79a064: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a068:
    // 0x79a068: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_79a06c:
    if (ctx->pc == 0x79A06Cu) {
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A070u;
        goto label_79a070;
    }
    ctx->pc = 0x79A068u;
    {
        const bool branch_taken_0x79a068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a068) {
            ctx->pc = 0x79A084u;
            goto label_79a084;
        }
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_79a074:
    // 0x79a074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a078:
    // 0x79a078: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_79a07c:
    if (ctx->pc == 0x79A07Cu) {
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A080u;
        goto label_79a080;
    }
    ctx->pc = 0x79A078u;
    {
        const bool branch_taken_0x79a078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a078) {
            ctx->pc = 0x79A07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A078u;
            // 0x79a07c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a064;
        }
    }
    ctx->pc = 0x79A080u;
label_79a080:
    // 0x79a080: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x79a080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_79a084:
    // 0x79a084: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_79a088:
    // 0x79a088: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_79a08c:
    if (ctx->pc == 0x79A08Cu) {
        ctx->pc = 0x79A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A088u;
        // 0x79a08c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A090u;
        goto label_79a090;
    }
    ctx->pc = 0x79A088u;
    {
        const bool branch_taken_0x79a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A088u;
        // 0x79a08c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a088) {
            ctx->pc = 0x79A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a010;
        }
    }
    ctx->pc = 0x79A090u;
label_79a090:
    // 0x79a090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a094:
    // 0x79a094: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_79a098:
    if (ctx->pc == 0x79A098u) {
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A09Cu;
        goto label_79a09c;
    }
    ctx->pc = 0x79A094u;
    {
        const bool branch_taken_0x79a094 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a094) {
            ctx->pc = 0x79A0ACu;
            goto label_79a0ac;
        }
    }
    ctx->pc = 0x79A09Cu;
label_79a09c:
    // 0x79a09c: 0xc071df6  jal         func_1C77D8
label_79a0a0:
    if (ctx->pc == 0x79A0A0u) {
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0A4u;
        goto label_79a0a4;
    }
    ctx->pc = 0x79A09Cu;
    SET_GPR_U32(ctx, 31, 0x79A0A4u);
    ctx->pc = 0x79A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A09Cu;
    // 0x79a0a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C77D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C77D8u, 0x79A09Cu, 0x79A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A4u;
label_79a0a4:
    // 0x79a0a4: 0x10000035  b           . + 4 + (0x35 << 2)
label_79a0a8:
    if (ctx->pc == 0x79A0A8u) {
        ctx->pc = 0x79A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A4u;
        // 0x79a0a8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0ACu;
        goto label_79a0ac;
    }
    ctx->pc = 0x79A0A4u;
    {
        const bool branch_taken_0x79a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A4u;
        // 0x79a0a8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0a4) {
            ctx->pc = 0x79A17Cu;
            goto label_79a17c;
        }
    }
    ctx->pc = 0x79A0ACu;
label_79a0ac:
    // 0x79a0ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a0b0:
    if (ctx->pc == 0x79A0B0u) {
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0B4u;
        goto label_79a0b4;
    }
    ctx->pc = 0x79A0ACu;
    {
        const bool branch_taken_0x79a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ac) {
            ctx->pc = 0x79A0C4u;
            goto label_79a0c4;
        }
    }
    ctx->pc = 0x79A0B4u;
label_79a0b4:
    // 0x79a0b4: 0x0  nop
    ctx->pc = 0x79a0b4u;
    // NOP
label_79a0b8:
    // 0x79a0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0bc:
    // 0x79a0bc: 0xc0b56a8  jal         func_2D5AA0
label_79a0c0:
    if (ctx->pc == 0x79A0C0u) {
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0C4u;
        goto label_79a0c4;
    }
    ctx->pc = 0x79A0BCu;
    SET_GPR_U32(ctx, 31, 0x79A0C4u);
    ctx->pc = 0x79A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0BCu;
    // 0x79a0c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0BCu, 0x79A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C4u;
label_79a0c4:
    // 0x79a0c4: 0xc070fce  jal         func_1C3F38
label_79a0c8:
    if (ctx->pc == 0x79A0C8u) {
        ctx->pc = 0x79A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C4u;
        // 0x79a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0CCu;
        goto label_79a0cc;
    }
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x5051fffa  beql        $v0, $s1, . + 4 + (-0x6 << 2)
label_79a0d0:
    if (ctx->pc == 0x79A0D0u) {
        ctx->pc = 0x79A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0CCu;
        // 0x79a0d0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D4u;
        goto label_79a0d4;
    }
    ctx->pc = 0x79A0CCu;
    {
        const bool branch_taken_0x79a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x79a0cc) {
            ctx->pc = 0x79A0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0CCu;
            // 0x79a0d0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0b8;
        }
    }
    ctx->pc = 0x79A0D4u;
label_79a0d4:
    // 0x79a0d4: 0x12c00029  beqz        $s6, . + 4 + (0x29 << 2)
label_79a0d8:
    if (ctx->pc == 0x79A0D8u) {
        ctx->pc = 0x79A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D4u;
        // 0x79a0d8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0DCu;
        goto label_79a0dc;
    }
    ctx->pc = 0x79A0D4u;
    {
        const bool branch_taken_0x79a0d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D4u;
        // 0x79a0d8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d4) {
            ctx->pc = 0x79A17Cu;
            goto label_79a17c;
        }
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
label_79a0e0:
    if (ctx->pc == 0x79A0E0u) {
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E4u;
        goto label_79a0e4;
    }
    ctx->pc = 0x79A0DCu;
    {
        const bool branch_taken_0x79a0dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0dc) {
            ctx->pc = 0x79A178u;
            goto label_79a178;
        }
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a0e8:
    // 0x79a0e8: 0x2691000c  addiu       $s1, $s4, 0xC
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_79a0ec:
    // 0x79a0ec: 0x245364f0  addiu       $s3, $v0, 0x64F0
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_79a0f0:
    // 0x79a0f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_79a0f4:
    // 0x79a0f4: 0x0  nop
    ctx->pc = 0x79a0f4u;
    // NOP
label_79a0f8:
    // 0x79a0f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a0fc:
    // 0x79a0fc: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_79a100:
    // 0x79a100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_79a104:
    // 0x79a104: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x79a104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a108:
    // 0x79a108: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a10c:
    // 0x79a10c: 0xc0a421a  jal         func_290868
label_79a110:
    if (ctx->pc == 0x79A110u) {
        ctx->pc = 0x79A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A10Cu;
        // 0x79a110: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A114u;
        goto label_79a114;
    }
    ctx->pc = 0x79A10Cu;
    SET_GPR_U32(ctx, 31, 0x79A114u);
    ctx->pc = 0x79A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A10Cu;
    // 0x79a110: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A10Cu, 0x79A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A114u;
label_79a114:
    // 0x79a114: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_79a118:
    if (ctx->pc == 0x79A118u) {
        ctx->pc = 0x79A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A114u;
        // 0x79a118: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A11Cu;
        goto label_79a11c;
    }
    ctx->pc = 0x79A114u;
    {
        const bool branch_taken_0x79a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A114u;
        // 0x79a118: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a114) {
            ctx->pc = 0x79A170u;
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A11Cu;
label_79a11c:
    // 0x79a11c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a11cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a120:
    // 0x79a120: 0xc0a421a  jal         func_290868
label_79a124:
    if (ctx->pc == 0x79A124u) {
        ctx->pc = 0x79A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A120u;
        // 0x79a124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A128u;
        goto label_79a128;
    }
    ctx->pc = 0x79A120u;
    SET_GPR_U32(ctx, 31, 0x79A128u);
    ctx->pc = 0x79A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A120u;
    // 0x79a124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A120u, 0x79A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A128u;
label_79a128:
    // 0x79a128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a12c:
    // 0x79a12c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_79a130:
    if (ctx->pc == 0x79A130u) {
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A134u;
        goto label_79a134;
    }
    ctx->pc = 0x79A12Cu;
    {
        const bool branch_taken_0x79a12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a12c) {
            ctx->pc = 0x79A170u;
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_79a138:
    // 0x79a138: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_79a13c:
    if (ctx->pc == 0x79A13Cu) {
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A140u;
        goto label_79a140;
    }
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A148u;
            goto label_79a148;
        }
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x1000000a  b           . + 4 + (0xA << 2)
label_79a144:
    if (ctx->pc == 0x79A144u) {
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A148u;
        goto label_79a148;
    }
    ctx->pc = 0x79A140u;
    {
        const bool branch_taken_0x79a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a140) {
            ctx->pc = 0x79A16Cu;
            goto label_79a16c;
        }
    }
    ctx->pc = 0x79A148u;
label_79a148:
    // 0x79a148: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79a14c:
    // 0x79a14c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a150:
    // 0x79a150: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_79a154:
    if (ctx->pc == 0x79A154u) {
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A158u;
        goto label_79a158;
    }
    ctx->pc = 0x79A150u;
    {
        const bool branch_taken_0x79a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a150) {
            ctx->pc = 0x79A16Cu;
            goto label_79a16c;
        }
    }
    ctx->pc = 0x79A158u;
label_79a158:
    // 0x79a158: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_79a15c:
    // 0x79a15c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a160:
    // 0x79a160: 0x5465fffa  bnel        $v1, $a1, . + 4 + (-0x6 << 2)
label_79a164:
    if (ctx->pc == 0x79A164u) {
        ctx->pc = 0x79A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A160u;
        // 0x79a164: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A168u;
        goto label_79a168;
    }
    ctx->pc = 0x79A160u;
    {
        const bool branch_taken_0x79a160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x79a160) {
            ctx->pc = 0x79A164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A160u;
            // 0x79a164: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A168u;
label_79a168:
    // 0x79a168: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79a168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_79a16c:
    // 0x79a16c: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x79a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_79a170:
    // 0x79a170: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_79a174:
    if (ctx->pc == 0x79A174u) {
        ctx->pc = 0x79A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A170u;
        // 0x79a174: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A178u;
        goto label_79a178;
    }
    ctx->pc = 0x79A170u;
    {
        const bool branch_taken_0x79a170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A170u;
        // 0x79a174: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a170) {
            ctx->pc = 0x79A0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0f8;
        }
    }
    ctx->pc = 0x79A178u;
label_79a178:
    // 0x79a178: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79a178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a17c:
    // 0x79a17c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79a17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a180:
    // 0x79a180: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79a180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a184:
    // 0x79a184: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79a184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a188:
    // 0x79a188: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x79a188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a18c:
    // 0x79a18c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79a18cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a190:
    // 0x79a190: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x79a190u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a194:
    // 0x79a194: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x79a194u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a198:
    // 0x79a198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a19c:
    // 0x79a19c: 0x3e00008  jr          $ra
label_79a1a0:
    if (ctx->pc == 0x79A1A0u) {
        ctx->pc = 0x79A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A19Cu;
        // 0x79a1a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A4u;
        goto label_79a1a4;
    }
    ctx->pc = 0x79A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A19Cu;
        // 0x79a1a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x0  nop
    ctx->pc = 0x79a1a4u;
    // NOP
    ctx->pc = 0x79a1a8u;
}
} // namespace gh_r405
