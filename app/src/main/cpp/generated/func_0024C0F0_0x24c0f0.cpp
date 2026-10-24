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

// Function: func_0024C0F0
// Address: 0x24c0f0 - 0x24c3c8
void func_0024C0F0_0x24c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024C0F0_0x24c0f0");
#endif

    switch (ctx->pc) {
        case 0x24c0f0u: goto label_24c0f0;
        case 0x24c0f4u: goto label_24c0f4;
        case 0x24c0f8u: goto label_24c0f8;
        case 0x24c0fcu: goto label_24c0fc;
        case 0x24c100u: goto label_24c100;
        case 0x24c104u: goto label_24c104;
        case 0x24c108u: goto label_24c108;
        case 0x24c10cu: goto label_24c10c;
        case 0x24c110u: goto label_24c110;
        case 0x24c114u: goto label_24c114;
        case 0x24c118u: goto label_24c118;
        case 0x24c11cu: goto label_24c11c;
        case 0x24c120u: goto label_24c120;
        case 0x24c124u: goto label_24c124;
        case 0x24c128u: goto label_24c128;
        case 0x24c12cu: goto label_24c12c;
        case 0x24c130u: goto label_24c130;
        case 0x24c134u: goto label_24c134;
        case 0x24c138u: goto label_24c138;
        case 0x24c13cu: goto label_24c13c;
        case 0x24c140u: goto label_24c140;
        case 0x24c144u: goto label_24c144;
        case 0x24c148u: goto label_24c148;
        case 0x24c14cu: goto label_24c14c;
        case 0x24c150u: goto label_24c150;
        case 0x24c154u: goto label_24c154;
        case 0x24c158u: goto label_24c158;
        case 0x24c15cu: goto label_24c15c;
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1a0u: goto label_24c1a0;
        case 0x24c1a4u: goto label_24c1a4;
        case 0x24c1a8u: goto label_24c1a8;
        case 0x24c1acu: goto label_24c1ac;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b4u: goto label_24c1b4;
        case 0x24c1b8u: goto label_24c1b8;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1c0u: goto label_24c1c0;
        case 0x24c1c4u: goto label_24c1c4;
        case 0x24c1c8u: goto label_24c1c8;
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1dcu: goto label_24c1dc;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1e4u: goto label_24c1e4;
        case 0x24c1e8u: goto label_24c1e8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f0u: goto label_24c1f0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c1f8u: goto label_24c1f8;
        case 0x24c1fcu: goto label_24c1fc;
        case 0x24c200u: goto label_24c200;
        case 0x24c204u: goto label_24c204;
        case 0x24c208u: goto label_24c208;
        case 0x24c20cu: goto label_24c20c;
        case 0x24c210u: goto label_24c210;
        case 0x24c214u: goto label_24c214;
        case 0x24c218u: goto label_24c218;
        case 0x24c21cu: goto label_24c21c;
        case 0x24c220u: goto label_24c220;
        case 0x24c224u: goto label_24c224;
        case 0x24c228u: goto label_24c228;
        case 0x24c22cu: goto label_24c22c;
        case 0x24c230u: goto label_24c230;
        case 0x24c234u: goto label_24c234;
        case 0x24c238u: goto label_24c238;
        case 0x24c23cu: goto label_24c23c;
        case 0x24c240u: goto label_24c240;
        case 0x24c244u: goto label_24c244;
        case 0x24c248u: goto label_24c248;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c250u: goto label_24c250;
        case 0x24c254u: goto label_24c254;
        case 0x24c258u: goto label_24c258;
        case 0x24c25cu: goto label_24c25c;
        case 0x24c260u: goto label_24c260;
        case 0x24c264u: goto label_24c264;
        case 0x24c268u: goto label_24c268;
        case 0x24c26cu: goto label_24c26c;
        case 0x24c270u: goto label_24c270;
        case 0x24c274u: goto label_24c274;
        case 0x24c278u: goto label_24c278;
        case 0x24c27cu: goto label_24c27c;
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        case 0x24c300u: goto label_24c300;
        case 0x24c304u: goto label_24c304;
        case 0x24c308u: goto label_24c308;
        case 0x24c30cu: goto label_24c30c;
        case 0x24c310u: goto label_24c310;
        case 0x24c314u: goto label_24c314;
        case 0x24c318u: goto label_24c318;
        case 0x24c31cu: goto label_24c31c;
        case 0x24c320u: goto label_24c320;
        case 0x24c324u: goto label_24c324;
        case 0x24c328u: goto label_24c328;
        case 0x24c32cu: goto label_24c32c;
        case 0x24c330u: goto label_24c330;
        case 0x24c334u: goto label_24c334;
        case 0x24c338u: goto label_24c338;
        case 0x24c33cu: goto label_24c33c;
        case 0x24c340u: goto label_24c340;
        case 0x24c344u: goto label_24c344;
        case 0x24c348u: goto label_24c348;
        case 0x24c34cu: goto label_24c34c;
        case 0x24c350u: goto label_24c350;
        case 0x24c354u: goto label_24c354;
        case 0x24c358u: goto label_24c358;
        case 0x24c35cu: goto label_24c35c;
        case 0x24c360u: goto label_24c360;
        case 0x24c364u: goto label_24c364;
        case 0x24c368u: goto label_24c368;
        case 0x24c36cu: goto label_24c36c;
        case 0x24c370u: goto label_24c370;
        case 0x24c374u: goto label_24c374;
        case 0x24c378u: goto label_24c378;
        case 0x24c37cu: goto label_24c37c;
        case 0x24c380u: goto label_24c380;
        case 0x24c384u: goto label_24c384;
        case 0x24c388u: goto label_24c388;
        case 0x24c38cu: goto label_24c38c;
        case 0x24c390u: goto label_24c390;
        case 0x24c394u: goto label_24c394;
        case 0x24c398u: goto label_24c398;
        case 0x24c39cu: goto label_24c39c;
        case 0x24c3a0u: goto label_24c3a0;
        case 0x24c3a4u: goto label_24c3a4;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3acu: goto label_24c3ac;
        case 0x24c3b0u: goto label_24c3b0;
        case 0x24c3b4u: goto label_24c3b4;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3bcu: goto label_24c3bc;
        case 0x24c3c0u: goto label_24c3c0;
        case 0x24c3c4u: goto label_24c3c4;
        default: break;
    }

    ctx->pc = 0x24c0f0u;

label_24c0f0:
    // 0x24c0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24c0f4:
    // 0x24c0f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_24c0f8:
    // 0x24c0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24c0fc:
    // 0x24c0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c100:
    // 0x24c100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c104:
    // 0x24c104: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24c104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_24c108:
    // 0x24c108: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24c108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_24c10c:
    // 0x24c10c: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
label_24c110:
    if (ctx->pc == 0x24C110u) {
        ctx->pc = 0x24C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C10Cu;
        // 0x24c110: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C114u;
        goto label_24c114;
    }
    ctx->pc = 0x24C10Cu;
    {
        const bool branch_taken_0x24c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c10c) {
            ctx->pc = 0x24C110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C10Cu;
            // 0x24c110: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C114u;
label_24c114:
    // 0x24c114: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x24c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_24c118:
    // 0x24c118: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24c11c:
    // 0x24c11c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x24c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_24c120:
    // 0x24c120: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x24c120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_24c124:
    // 0x24c124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c128:
    // 0x24c128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24c128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24c12c:
    // 0x24c12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c130:
    // 0x24c130: 0xc09aa4e  jal         func_26A938
label_24c134:
    if (ctx->pc == 0x24C134u) {
        ctx->pc = 0x24C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C130u;
        // 0x24c134: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C138u;
        goto label_24c138;
    }
    ctx->pc = 0x24C130u;
    SET_GPR_U32(ctx, 31, 0x24C138u);
    ctx->pc = 0x24C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C130u;
    // 0x24c134: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x24C130u, 0x24C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C138u;
label_24c138:
    // 0x24c138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c13c:
    // 0x24c13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c140:
    // 0x24c140: 0xc09aa4e  jal         func_26A938
label_24c144:
    if (ctx->pc == 0x24C144u) {
        ctx->pc = 0x24C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C140u;
        // 0x24c144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C148u;
        goto label_24c148;
    }
    ctx->pc = 0x24C140u;
    SET_GPR_U32(ctx, 31, 0x24C148u);
    ctx->pc = 0x24C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C140u;
    // 0x24c144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x24C140u, 0x24C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C148u;
label_24c148:
    // 0x24c148: 0x8e04070c  lw          $a0, 0x70C($s0)
    ctx->pc = 0x24c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_24c14c:
    // 0x24c14c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_24c150:
    if (ctx->pc == 0x24C150u) {
        ctx->pc = 0x24C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C14Cu;
        // 0x24c150: 0x8e040730  lw          $a0, 0x730($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C154u;
        goto label_24c154;
    }
    ctx->pc = 0x24C14Cu;
    {
        const bool branch_taken_0x24c14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c14c) {
            ctx->pc = 0x24C150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C14Cu;
            // 0x24c150: 0x8e040730  lw          $a0, 0x730($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C164u;
            goto label_24c164;
        }
    }
    ctx->pc = 0x24C154u;
label_24c154:
    // 0x24c154: 0xc0708c6  jal         func_1C2318
label_24c158:
    if (ctx->pc == 0x24C158u) {
        ctx->pc = 0x24C15Cu;
        goto label_24c15c;
    }
    ctx->pc = 0x24C154u;
    SET_GPR_U32(ctx, 31, 0x24C15Cu);
    ctx->pc = 0x1C2318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2318u, 0x24C154u, 0x24C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C15Cu;
label_24c15c:
    // 0x24c15c: 0xae00070c  sw          $zero, 0x70C($s0)
    ctx->pc = 0x24c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
label_24c160:
    // 0x24c160: 0x8e040730  lw          $a0, 0x730($s0)
    ctx->pc = 0x24c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
label_24c164:
    // 0x24c164: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_24c168:
    if (ctx->pc == 0x24C168u) {
        ctx->pc = 0x24C16Cu;
        goto label_24c16c;
    }
    ctx->pc = 0x24C164u;
    {
        const bool branch_taken_0x24c164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c164) {
            ctx->pc = 0x24C178u;
            goto label_24c178;
        }
    }
    ctx->pc = 0x24C16Cu;
label_24c16c:
    // 0x24c16c: 0xc074042  jal         func_1D0108
label_24c170:
    if (ctx->pc == 0x24C170u) {
        ctx->pc = 0x24C174u;
        goto label_24c174;
    }
    ctx->pc = 0x24C16Cu;
    SET_GPR_U32(ctx, 31, 0x24C174u);
    ctx->pc = 0x1D0108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0108u, 0x24C16Cu, 0x24C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C174u;
label_24c174:
    // 0x24c174: 0xae000730  sw          $zero, 0x730($s0)
    ctx->pc = 0x24c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 0));
label_24c178:
    // 0x24c178: 0xc09aedc  jal         func_26BB70
label_24c17c:
    if (ctx->pc == 0x24C17Cu) {
        ctx->pc = 0x24C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C178u;
        // 0x24c17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C180u;
        goto label_24c180;
    }
    ctx->pc = 0x24C178u;
    SET_GPR_U32(ctx, 31, 0x24C180u);
    ctx->pc = 0x24C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C178u;
    // 0x24c17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB70u, 0x24C178u, 0x24C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C180u;
label_24c180:
    // 0x24c180: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x24c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_24c184:
    // 0x24c184: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_24c188:
    if (ctx->pc == 0x24C188u) {
        ctx->pc = 0x24C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C184u;
        // 0x24c188: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C18Cu;
        goto label_24c18c;
    }
    ctx->pc = 0x24C184u;
    {
        const bool branch_taken_0x24c184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c184) {
            ctx->pc = 0x24C188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C184u;
            // 0x24c188: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C19Cu;
            goto label_24c19c;
        }
    }
    ctx->pc = 0x24C18Cu;
label_24c18c:
    // 0x24c18c: 0xc074102  jal         func_1D0408
label_24c190:
    if (ctx->pc == 0x24C190u) {
        ctx->pc = 0x24C194u;
        goto label_24c194;
    }
    ctx->pc = 0x24C18Cu;
    SET_GPR_U32(ctx, 31, 0x24C194u);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x24C18Cu, 0x24C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C194u;
label_24c194:
    // 0x24c194: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x24c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_24c198:
    // 0x24c198: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_24c19c:
    // 0x24c19c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x24c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_24c1a0:
    // 0x24c1a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24c1a4:
    if (ctx->pc == 0x24C1A4u) {
        ctx->pc = 0x24C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A0u;
        // 0x24c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1A8u;
        goto label_24c1a8;
    }
    ctx->pc = 0x24C1A0u;
    {
        const bool branch_taken_0x24c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A0u;
        // 0x24c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1a0) {
            ctx->pc = 0x24C1C8u;
            goto label_24c1c8;
        }
    }
    ctx->pc = 0x24C1A8u;
label_24c1a8:
    // 0x24c1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c1ac:
    // 0x24c1ac: 0xc0c1880  jal         func_306200
label_24c1b0:
    if (ctx->pc == 0x24C1B0u) {
        ctx->pc = 0x24C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1ACu;
        // 0x24c1b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1B4u;
        goto label_24c1b4;
    }
    ctx->pc = 0x24C1ACu;
    SET_GPR_U32(ctx, 31, 0x24C1B4u);
    ctx->pc = 0x24C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1ACu;
    // 0x24c1b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x24C1ACu, 0x24C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1B4u;
label_24c1b4:
    // 0x24c1b4: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x24c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_24c1b8:
    // 0x24c1b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24c1bc:
    // 0x24c1bc: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x24c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_24c1c0:
    // 0x24c1c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24c1c4:
    // 0x24c1c4: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x24c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
label_24c1c8:
    // 0x24c1c8: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x24c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_24c1cc:
    // 0x24c1cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_24c1d0:
    if (ctx->pc == 0x24C1D0u) {
        ctx->pc = 0x24C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1CCu;
        // 0x24c1d0: 0x920302f5  lbu         $v1, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1D4u;
        goto label_24c1d4;
    }
    ctx->pc = 0x24C1CCu;
    {
        const bool branch_taken_0x24c1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c1cc) {
            ctx->pc = 0x24C1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C1CCu;
            // 0x24c1d0: 0x920302f5  lbu         $v1, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C1E4u;
            goto label_24c1e4;
        }
    }
    ctx->pc = 0x24C1D4u;
label_24c1d4:
    // 0x24c1d4: 0xc074102  jal         func_1D0408
label_24c1d8:
    if (ctx->pc == 0x24C1D8u) {
        ctx->pc = 0x24C1DCu;
        goto label_24c1dc;
    }
    ctx->pc = 0x24C1D4u;
    SET_GPR_U32(ctx, 31, 0x24C1DCu);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x24C1D4u, 0x24C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1DCu;
label_24c1dc:
    // 0x24c1dc: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x24c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_24c1e0:
    // 0x24c1e0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x24c1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_24c1e4:
    // 0x24c1e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24c1e8:
    // 0x24c1e8: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_24c1ec:
    if (ctx->pc == 0x24C1ECu) {
        ctx->pc = 0x24C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1E8u;
        // 0x24c1ec: 0xa2001867  sb          $zero, 0x1867($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6247), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1F0u;
        goto label_24c1f0;
    }
    ctx->pc = 0x24C1E8u;
    {
        const bool branch_taken_0x24c1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c1e8) {
            ctx->pc = 0x24C1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C1E8u;
            // 0x24c1ec: 0xa2001867  sb          $zero, 0x1867($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6247), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C1F0u;
            goto label_24c1f0;
        }
    }
    ctx->pc = 0x24C1F0u;
label_24c1f0:
    // 0x24c1f0: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
label_24c1f4:
    // 0x24c1f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_24c1f8:
    if (ctx->pc == 0x24C1F8u) {
        ctx->pc = 0x24C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1F4u;
        // 0x24c1f8: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1FCu;
        goto label_24c1fc;
    }
    ctx->pc = 0x24C1F4u;
    {
        const bool branch_taken_0x24c1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c1f4) {
            ctx->pc = 0x24C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C1F4u;
            // 0x24c1f8: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C208u;
            goto label_24c208;
        }
    }
    ctx->pc = 0x24C1FCu;
label_24c1fc:
    // 0x24c1fc: 0xc074134  jal         func_1D04D0
label_24c200:
    if (ctx->pc == 0x24C200u) {
        ctx->pc = 0x24C204u;
        goto label_24c204;
    }
    ctx->pc = 0x24C1FCu;
    SET_GPR_U32(ctx, 31, 0x24C204u);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x24C1FCu, 0x24C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C204u;
label_24c204:
    // 0x24c204: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x24c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_24c208:
    // 0x24c208: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_24c20c:
    if (ctx->pc == 0x24C20Cu) {
        ctx->pc = 0x24C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C208u;
        // 0x24c20c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C210u;
        goto label_24c210;
    }
    ctx->pc = 0x24C208u;
    {
        const bool branch_taken_0x24c208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c208) {
            ctx->pc = 0x24C20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C208u;
            // 0x24c20c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C21Cu;
            goto label_24c21c;
        }
    }
    ctx->pc = 0x24C210u;
label_24c210:
    // 0x24c210: 0xc074170  jal         func_1D05C0
label_24c214:
    if (ctx->pc == 0x24C214u) {
        ctx->pc = 0x24C218u;
        goto label_24c218;
    }
    ctx->pc = 0x24C210u;
    SET_GPR_U32(ctx, 31, 0x24C218u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x24C210u, 0x24C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C218u;
label_24c218:
    // 0x24c218: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_24c21c:
    // 0x24c21c: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x24c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
label_24c220:
    // 0x24c220: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_24c224:
    if (ctx->pc == 0x24C224u) {
        ctx->pc = 0x24C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C220u;
        // 0x24c224: 0x920302f5  lbu         $v1, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C228u;
        goto label_24c228;
    }
    ctx->pc = 0x24C220u;
    {
        const bool branch_taken_0x24c220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c220) {
            ctx->pc = 0x24C224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C220u;
            // 0x24c224: 0x920302f5  lbu         $v1, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C234u;
            goto label_24c234;
        }
    }
    ctx->pc = 0x24C228u;
label_24c228:
    // 0x24c228: 0xc09ac7a  jal         func_26B1E8
label_24c22c:
    if (ctx->pc == 0x24C22Cu) {
        ctx->pc = 0x24C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C228u;
        // 0x24c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C230u;
        goto label_24c230;
    }
    ctx->pc = 0x24C228u;
    SET_GPR_U32(ctx, 31, 0x24C230u);
    ctx->pc = 0x24C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C228u;
    // 0x24c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24C228u, 0x24C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C230u;
label_24c230:
    // 0x24c230: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x24c230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_24c234:
    // 0x24c234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c238:
    // 0x24c238: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_24c23c:
    if (ctx->pc == 0x24C23Cu) {
        ctx->pc = 0x24C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C238u;
        // 0x24c23c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C240u;
        goto label_24c240;
    }
    ctx->pc = 0x24C238u;
    {
        const bool branch_taken_0x24c238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C238u;
        // 0x24c23c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c238) {
            ctx->pc = 0x24C288u;
            goto label_24c288;
        }
    }
    ctx->pc = 0x24C240u;
label_24c240:
    // 0x24c240: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24c240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_24c244:
    // 0x24c244: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24c248:
    if (ctx->pc == 0x24C248u) {
        ctx->pc = 0x24C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C244u;
        // 0x24c248: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C24Cu;
        goto label_24c24c;
    }
    ctx->pc = 0x24C244u;
    {
        const bool branch_taken_0x24c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C244u;
        // 0x24c248: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c244) {
            ctx->pc = 0x24C264u;
            goto label_24c264;
        }
    }
    ctx->pc = 0x24C24Cu;
label_24c24c:
    // 0x24c24c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24c250:
    if (ctx->pc == 0x24C250u) {
        ctx->pc = 0x24C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C24Cu;
        // 0x24c250: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C254u;
        goto label_24c254;
    }
    ctx->pc = 0x24C24Cu;
    {
        const bool branch_taken_0x24c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C24Cu;
        // 0x24c250: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c24c) {
            ctx->pc = 0x24C270u;
            goto label_24c270;
        }
    }
    ctx->pc = 0x24C254u;
label_24c254:
    // 0x24c254: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_24c258:
    if (ctx->pc == 0x24C258u) {
        ctx->pc = 0x24C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C254u;
        // 0x24c258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C25Cu;
        goto label_24c25c;
    }
    ctx->pc = 0x24C254u;
    {
        const bool branch_taken_0x24c254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c254) {
            ctx->pc = 0x24C258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C254u;
            // 0x24c258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C274u;
            goto label_24c274;
        }
    }
    ctx->pc = 0x24C25Cu;
label_24c25c:
    // 0x24c25c: 0x1000000b  b           . + 4 + (0xB << 2)
label_24c260:
    if (ctx->pc == 0x24C260u) {
        ctx->pc = 0x24C264u;
        goto label_24c264;
    }
    ctx->pc = 0x24C25Cu;
    {
        const bool branch_taken_0x24c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c25c) {
            ctx->pc = 0x24C28Cu;
            goto label_24c28c;
        }
    }
    ctx->pc = 0x24C264u;
label_24c264:
    // 0x24c264: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x24c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_24c268:
    // 0x24c268: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_24c26c:
    if (ctx->pc == 0x24C26Cu) {
        ctx->pc = 0x24C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C268u;
        // 0x24c26c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C270u;
        goto label_24c270;
    }
    ctx->pc = 0x24C268u;
    {
        const bool branch_taken_0x24c268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c268) {
            ctx->pc = 0x24C26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C268u;
            // 0x24c26c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C288u;
            goto label_24c288;
        }
    }
    ctx->pc = 0x24C270u;
label_24c270:
    // 0x24c270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c274:
    // 0x24c274: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24c274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_24c278:
    // 0x24c278: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24c278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_24c27c:
    // 0x24c27c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x24c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_24c280:
    // 0x24c280: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24c280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24c284:
    // 0x24c284: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_24c288:
    // 0x24c288: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x24c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_24c28c:
    // 0x24c28c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_24c290:
    if (ctx->pc == 0x24C290u) {
        ctx->pc = 0x24C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C28Cu;
        // 0x24c290: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C294u;
        goto label_24c294;
    }
    ctx->pc = 0x24C28Cu;
    {
        const bool branch_taken_0x24c28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C28Cu;
        // 0x24c290: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c28c) {
            ctx->pc = 0x24C2B0u;
            goto label_24c2b0;
        }
    }
    ctx->pc = 0x24C294u;
label_24c294:
    // 0x24c294: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_24c298:
    if (ctx->pc == 0x24C298u) {
        ctx->pc = 0x24C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C294u;
        // 0x24c298: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C29Cu;
        goto label_24c29c;
    }
    ctx->pc = 0x24C294u;
    {
        const bool branch_taken_0x24c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c294) {
            ctx->pc = 0x24C298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C294u;
            // 0x24c298: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C29Cu;
label_24c29c:
    // 0x24c29c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24c29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_24c2a0:
    // 0x24c2a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_24c2a4:
    if (ctx->pc == 0x24C2A4u) {
        ctx->pc = 0x24C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A0u;
        // 0x24c2a4: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2A8u;
        goto label_24c2a8;
    }
    ctx->pc = 0x24C2A0u;
    {
        const bool branch_taken_0x24c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A0u;
        // 0x24c2a4: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2a0) {
            ctx->pc = 0x24C2E4u;
            goto label_24c2e4;
        }
    }
    ctx->pc = 0x24C2A8u;
label_24c2a8:
    // 0x24c2a8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_24c2ac:
    if (ctx->pc == 0x24C2ACu) {
        ctx->pc = 0x24C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A8u;
        // 0x24c2ac: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2B0u;
        goto label_24c2b0;
    }
    ctx->pc = 0x24C2A8u;
    {
        const bool branch_taken_0x24c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c2a8) {
            ctx->pc = 0x24C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2A8u;
            // 0x24c2ac: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C2B0u;
label_24c2b0:
    // 0x24c2b0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x24c2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_24c2b4:
    // 0x24c2b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24c2b8:
    // 0x24c2b8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_24c2bc:
    if (ctx->pc == 0x24C2BCu) {
        ctx->pc = 0x24C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2B8u;
        // 0x24c2bc: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2C0u;
        goto label_24c2c0;
    }
    ctx->pc = 0x24C2B8u;
    {
        const bool branch_taken_0x24c2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c2b8) {
            ctx->pc = 0x24C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2B8u;
            // 0x24c2bc: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C2C0u;
label_24c2c0:
    // 0x24c2c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_24c2c4:
    // 0x24c2c4: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_24c2c8:
    if (ctx->pc == 0x24C2C8u) {
        ctx->pc = 0x24C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2C4u;
        // 0x24c2c8: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2CCu;
        goto label_24c2cc;
    }
    ctx->pc = 0x24C2C4u;
    {
        const bool branch_taken_0x24c2c4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x24c2c4) {
            ctx->pc = 0x24C2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2C4u;
            // 0x24c2c8: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C2CCu;
label_24c2cc:
    // 0x24c2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c2d0:
    // 0x24c2d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24c2d4:
    // 0x24c2d4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x24c2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_24c2d8:
    // 0x24c2d8: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x24c2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_24c2dc:
    // 0x24c2dc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24c2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_24c2e0:
    // 0x24c2e0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24c2e4:
    // 0x24c2e4: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x24c2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_24c2e8:
    // 0x24c2e8: 0x2c420028  sltiu       $v0, $v0, 0x28
    ctx->pc = 0x24c2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_24c2ec:
    // 0x24c2ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24c2f0:
    if (ctx->pc == 0x24C2F0u) {
        ctx->pc = 0x24C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2ECu;
        // 0x24c2f0: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2F4u;
        goto label_24c2f4;
    }
    ctx->pc = 0x24C2ECu;
    {
        const bool branch_taken_0x24c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2ec) {
            ctx->pc = 0x24C2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2ECu;
            // 0x24c2f0: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2F4u;
            goto label_24c2f4;
        }
    }
    ctx->pc = 0x24C2F4u;
label_24c2f4:
    // 0x24c2f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x24c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_24c2f8:
    // 0x24c2f8: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x24c2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_24c2fc:
    // 0x24c2fc: 0x2446f738  addiu       $a2, $v0, -0x8C8
    ctx->pc = 0x24c2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
label_24c300:
    // 0x24c300: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24c300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c304:
    // 0x24c304: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x24c304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24c308:
    // 0x24c308: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x24c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24c30c:
    // 0x24c30c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x24c30cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_24c310:
    // 0x24c310: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_24c314:
    if (ctx->pc == 0x24C314u) {
        ctx->pc = 0x24C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C310u;
        // 0x24c314: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C318u;
        goto label_24c318;
    }
    ctx->pc = 0x24C310u;
    {
        const bool branch_taken_0x24c310 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x24C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C310u;
        // 0x24c314: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c310) {
            ctx->pc = 0x24C33Cu;
            goto label_24c33c;
        }
    }
    ctx->pc = 0x24C318u;
label_24c318:
    // 0x24c318: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x24c318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_24c31c:
    // 0x24c31c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x24c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_24c320:
    // 0x24c320: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24c324:
    // 0x24c324: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c328:
    // 0x24c328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24c32c:
    // 0x24c32c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x24c32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_24c330:
    // 0x24c330: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x24c330u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_24c334:
    // 0x24c334: 0x10000004  b           . + 4 + (0x4 << 2)
label_24c338:
    if (ctx->pc == 0x24C338u) {
        ctx->pc = 0x24C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C334u;
        // 0x24c338: 0x2503f738  addiu       $v1, $t0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C33Cu;
        goto label_24c33c;
    }
    ctx->pc = 0x24C334u;
    {
        const bool branch_taken_0x24c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C334u;
        // 0x24c338: 0x2503f738  addiu       $v1, $t0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c334) {
            ctx->pc = 0x24C348u;
            goto label_24c348;
        }
    }
    ctx->pc = 0x24C33Cu;
label_24c33c:
    // 0x24c33c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24c340:
    // 0x24c340: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x24c340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24c344:
    // 0x24c344: 0x2503f738  addiu       $v1, $t0, -0x8C8
    ctx->pc = 0x24c344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965048));
label_24c348:
    // 0x24c348: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x24c348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_24c34c:
    // 0x24c34c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c350:
    // 0x24c350: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_24c354:
    if (ctx->pc == 0x24C354u) {
        ctx->pc = 0x24C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C350u;
        // 0x24c354: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C358u;
        goto label_24c358;
    }
    ctx->pc = 0x24C350u;
    {
        const bool branch_taken_0x24c350 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x24C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C350u;
        // 0x24c354: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c350) {
            ctx->pc = 0x24C36Cu;
            goto label_24c36c;
        }
    }
    ctx->pc = 0x24C358u;
label_24c358:
    // 0x24c358: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x24c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_24c35c:
    // 0x24c35c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_24c360:
    // 0x24c360: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24c360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_24c364:
    // 0x24c364: 0x10000002  b           . + 4 + (0x2 << 2)
label_24c368:
    if (ctx->pc == 0x24C368u) {
        ctx->pc = 0x24C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C364u;
        // 0x24c368: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C36Cu;
        goto label_24c36c;
    }
    ctx->pc = 0x24C364u;
    {
        const bool branch_taken_0x24c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C364u;
        // 0x24c368: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c364) {
            ctx->pc = 0x24C370u;
            goto label_24c370;
        }
    }
    ctx->pc = 0x24C36Cu;
label_24c36c:
    // 0x24c36c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24c36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24c370:
    // 0x24c370: 0xc0f809  jalr        $a2
label_24c374:
    if (ctx->pc == 0x24C374u) {
        ctx->pc = 0x24C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C370u;
        // 0x24c374: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C378u;
        goto label_24c378;
    }
    ctx->pc = 0x24C370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24C378u);
        ctx->pc = 0x24C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C370u;
        // 0x24c374: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C370u, 0x24C378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C378u;
label_24c378:
    // 0x24c378: 0xc09ba94  jal         func_26EA50
label_24c37c:
    if (ctx->pc == 0x24C37Cu) {
        ctx->pc = 0x24C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C378u;
        // 0x24c37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C380u;
        goto label_24c380;
    }
    ctx->pc = 0x24C378u;
    SET_GPR_U32(ctx, 31, 0x24C380u);
    ctx->pc = 0x24C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C378u;
    // 0x24c37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA50u, 0x24C378u, 0x24C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C380u;
label_24c380:
    // 0x24c380: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_24c384:
    if (ctx->pc == 0x24C384u) {
        ctx->pc = 0x24C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C380u;
        // 0x24c384: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C388u;
        goto label_24c388;
    }
    ctx->pc = 0x24C380u;
    {
        const bool branch_taken_0x24c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c380) {
            ctx->pc = 0x24C384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C380u;
            // 0x24c384: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C3B4u;
            goto label_24c3b4;
        }
    }
    ctx->pc = 0x24C388u;
label_24c388:
    // 0x24c388: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_24c38c:
    // 0x24c38c: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x24c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_24c390:
    // 0x24c390: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_24c394:
    if (ctx->pc == 0x24C394u) {
        ctx->pc = 0x24C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C390u;
        // 0x24c394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C398u;
        goto label_24c398;
    }
    ctx->pc = 0x24C390u;
    {
        const bool branch_taken_0x24c390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C390u;
        // 0x24c394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c390) {
            ctx->pc = 0x24C3A8u;
            goto label_24c3a8;
        }
    }
    ctx->pc = 0x24C398u;
label_24c398:
    // 0x24c398: 0xc09d91e  jal         func_276478
label_24c39c:
    if (ctx->pc == 0x24C39Cu) {
        ctx->pc = 0x24C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C398u;
        // 0x24c39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3A0u;
        goto label_24c3a0;
    }
    ctx->pc = 0x24C398u;
    SET_GPR_U32(ctx, 31, 0x24C3A0u);
    ctx->pc = 0x24C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C398u;
    // 0x24c39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276478u, 0x24C398u, 0x24C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3A0u;
label_24c3a0:
    // 0x24c3a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_24c3a4:
    if (ctx->pc == 0x24C3A4u) {
        ctx->pc = 0x24C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A0u;
        // 0x24c3a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3A8u;
        goto label_24c3a8;
    }
    ctx->pc = 0x24C3A0u;
    {
        const bool branch_taken_0x24c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A0u;
        // 0x24c3a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3a0) {
            ctx->pc = 0x24C3B4u;
            goto label_24c3b4;
        }
    }
    ctx->pc = 0x24C3A8u;
label_24c3a8:
    // 0x24c3a8: 0xc0aa1fa  jal         func_2A87E8
label_24c3ac:
    if (ctx->pc == 0x24C3ACu) {
        ctx->pc = 0x24C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A8u;
        // 0x24c3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3B0u;
        goto label_24c3b0;
    }
    ctx->pc = 0x24C3A8u;
    SET_GPR_U32(ctx, 31, 0x24C3B0u);
    ctx->pc = 0x24C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3A8u;
    // 0x24c3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x24C3A8u, 0x24C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3B0u;
label_24c3b0:
    // 0x24c3b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c3b4:
    // 0x24c3b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c3b8:
    // 0x24c3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c3bc:
    // 0x24c3bc: 0x3e00008  jr          $ra
label_24c3c0:
    if (ctx->pc == 0x24C3C0u) {
        ctx->pc = 0x24C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3BCu;
        // 0x24c3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3C4u;
        goto label_24c3c4;
    }
    ctx->pc = 0x24C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3BCu;
        // 0x24c3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C3C4u;
label_24c3c4:
    // 0x24c3c4: 0x0  nop
    ctx->pc = 0x24c3c4u;
    // NOP
    ctx->pc = 0x24c3c8u;
}
