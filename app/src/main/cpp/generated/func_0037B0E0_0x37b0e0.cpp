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

// Function: func_0037B0E0
// Address: 0x37b0e0 - 0x37b338
void func_0037B0E0_0x37b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B0E0_0x37b0e0");
#endif

    switch (ctx->pc) {
        case 0x37b0e0u: goto label_37b0e0;
        case 0x37b0e4u: goto label_37b0e4;
        case 0x37b0e8u: goto label_37b0e8;
        case 0x37b0ecu: goto label_37b0ec;
        case 0x37b0f0u: goto label_37b0f0;
        case 0x37b0f4u: goto label_37b0f4;
        case 0x37b0f8u: goto label_37b0f8;
        case 0x37b0fcu: goto label_37b0fc;
        case 0x37b100u: goto label_37b100;
        case 0x37b104u: goto label_37b104;
        case 0x37b108u: goto label_37b108;
        case 0x37b10cu: goto label_37b10c;
        case 0x37b110u: goto label_37b110;
        case 0x37b114u: goto label_37b114;
        case 0x37b118u: goto label_37b118;
        case 0x37b11cu: goto label_37b11c;
        case 0x37b120u: goto label_37b120;
        case 0x37b124u: goto label_37b124;
        case 0x37b128u: goto label_37b128;
        case 0x37b12cu: goto label_37b12c;
        case 0x37b130u: goto label_37b130;
        case 0x37b134u: goto label_37b134;
        case 0x37b138u: goto label_37b138;
        case 0x37b13cu: goto label_37b13c;
        case 0x37b140u: goto label_37b140;
        case 0x37b144u: goto label_37b144;
        case 0x37b148u: goto label_37b148;
        case 0x37b14cu: goto label_37b14c;
        case 0x37b150u: goto label_37b150;
        case 0x37b154u: goto label_37b154;
        case 0x37b158u: goto label_37b158;
        case 0x37b15cu: goto label_37b15c;
        case 0x37b160u: goto label_37b160;
        case 0x37b164u: goto label_37b164;
        case 0x37b168u: goto label_37b168;
        case 0x37b16cu: goto label_37b16c;
        case 0x37b170u: goto label_37b170;
        case 0x37b174u: goto label_37b174;
        case 0x37b178u: goto label_37b178;
        case 0x37b17cu: goto label_37b17c;
        case 0x37b180u: goto label_37b180;
        case 0x37b184u: goto label_37b184;
        case 0x37b188u: goto label_37b188;
        case 0x37b18cu: goto label_37b18c;
        case 0x37b190u: goto label_37b190;
        case 0x37b194u: goto label_37b194;
        case 0x37b198u: goto label_37b198;
        case 0x37b19cu: goto label_37b19c;
        case 0x37b1a0u: goto label_37b1a0;
        case 0x37b1a4u: goto label_37b1a4;
        case 0x37b1a8u: goto label_37b1a8;
        case 0x37b1acu: goto label_37b1ac;
        case 0x37b1b0u: goto label_37b1b0;
        case 0x37b1b4u: goto label_37b1b4;
        case 0x37b1b8u: goto label_37b1b8;
        case 0x37b1bcu: goto label_37b1bc;
        case 0x37b1c0u: goto label_37b1c0;
        case 0x37b1c4u: goto label_37b1c4;
        case 0x37b1c8u: goto label_37b1c8;
        case 0x37b1ccu: goto label_37b1cc;
        case 0x37b1d0u: goto label_37b1d0;
        case 0x37b1d4u: goto label_37b1d4;
        case 0x37b1d8u: goto label_37b1d8;
        case 0x37b1dcu: goto label_37b1dc;
        case 0x37b1e0u: goto label_37b1e0;
        case 0x37b1e4u: goto label_37b1e4;
        case 0x37b1e8u: goto label_37b1e8;
        case 0x37b1ecu: goto label_37b1ec;
        case 0x37b1f0u: goto label_37b1f0;
        case 0x37b1f4u: goto label_37b1f4;
        case 0x37b1f8u: goto label_37b1f8;
        case 0x37b1fcu: goto label_37b1fc;
        case 0x37b200u: goto label_37b200;
        case 0x37b204u: goto label_37b204;
        case 0x37b208u: goto label_37b208;
        case 0x37b20cu: goto label_37b20c;
        case 0x37b210u: goto label_37b210;
        case 0x37b214u: goto label_37b214;
        case 0x37b218u: goto label_37b218;
        case 0x37b21cu: goto label_37b21c;
        case 0x37b220u: goto label_37b220;
        case 0x37b224u: goto label_37b224;
        case 0x37b228u: goto label_37b228;
        case 0x37b22cu: goto label_37b22c;
        case 0x37b230u: goto label_37b230;
        case 0x37b234u: goto label_37b234;
        case 0x37b238u: goto label_37b238;
        case 0x37b23cu: goto label_37b23c;
        case 0x37b240u: goto label_37b240;
        case 0x37b244u: goto label_37b244;
        case 0x37b248u: goto label_37b248;
        case 0x37b24cu: goto label_37b24c;
        case 0x37b250u: goto label_37b250;
        case 0x37b254u: goto label_37b254;
        case 0x37b258u: goto label_37b258;
        case 0x37b25cu: goto label_37b25c;
        case 0x37b260u: goto label_37b260;
        case 0x37b264u: goto label_37b264;
        case 0x37b268u: goto label_37b268;
        case 0x37b26cu: goto label_37b26c;
        case 0x37b270u: goto label_37b270;
        case 0x37b274u: goto label_37b274;
        case 0x37b278u: goto label_37b278;
        case 0x37b27cu: goto label_37b27c;
        case 0x37b280u: goto label_37b280;
        case 0x37b284u: goto label_37b284;
        case 0x37b288u: goto label_37b288;
        case 0x37b28cu: goto label_37b28c;
        case 0x37b290u: goto label_37b290;
        case 0x37b294u: goto label_37b294;
        case 0x37b298u: goto label_37b298;
        case 0x37b29cu: goto label_37b29c;
        case 0x37b2a0u: goto label_37b2a0;
        case 0x37b2a4u: goto label_37b2a4;
        case 0x37b2a8u: goto label_37b2a8;
        case 0x37b2acu: goto label_37b2ac;
        case 0x37b2b0u: goto label_37b2b0;
        case 0x37b2b4u: goto label_37b2b4;
        case 0x37b2b8u: goto label_37b2b8;
        case 0x37b2bcu: goto label_37b2bc;
        case 0x37b2c0u: goto label_37b2c0;
        case 0x37b2c4u: goto label_37b2c4;
        case 0x37b2c8u: goto label_37b2c8;
        case 0x37b2ccu: goto label_37b2cc;
        case 0x37b2d0u: goto label_37b2d0;
        case 0x37b2d4u: goto label_37b2d4;
        case 0x37b2d8u: goto label_37b2d8;
        case 0x37b2dcu: goto label_37b2dc;
        case 0x37b2e0u: goto label_37b2e0;
        case 0x37b2e4u: goto label_37b2e4;
        case 0x37b2e8u: goto label_37b2e8;
        case 0x37b2ecu: goto label_37b2ec;
        case 0x37b2f0u: goto label_37b2f0;
        case 0x37b2f4u: goto label_37b2f4;
        case 0x37b2f8u: goto label_37b2f8;
        case 0x37b2fcu: goto label_37b2fc;
        case 0x37b300u: goto label_37b300;
        case 0x37b304u: goto label_37b304;
        case 0x37b308u: goto label_37b308;
        case 0x37b30cu: goto label_37b30c;
        case 0x37b310u: goto label_37b310;
        case 0x37b314u: goto label_37b314;
        case 0x37b318u: goto label_37b318;
        case 0x37b31cu: goto label_37b31c;
        case 0x37b320u: goto label_37b320;
        case 0x37b324u: goto label_37b324;
        case 0x37b328u: goto label_37b328;
        case 0x37b32cu: goto label_37b32c;
        case 0x37b330u: goto label_37b330;
        case 0x37b334u: goto label_37b334;
        default: break;
    }

    ctx->pc = 0x37b0e0u;

label_37b0e0:
    // 0x37b0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37b0e4:
    // 0x37b0e4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_37b0e8:
    // 0x37b0e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_37b0ec:
    // 0x37b0ec: 0x246326c8  addiu       $v1, $v1, 0x26C8
    ctx->pc = 0x37b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9928));
label_37b0f0:
    // 0x37b0f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37b0f4:
    // 0x37b0f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37b0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b0f8:
    // 0x37b0f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_37b0fc:
    // 0x37b0fc: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x37b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
label_37b100:
    // 0x37b100: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x37b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_37b104:
    // 0x37b104: 0x2493a790  addiu       $s3, $a0, -0x5870
    ctx->pc = 0x37b104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
label_37b108:
    // 0x37b108: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_37b10c:
    // 0x37b10c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b10cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b110:
    // 0x37b110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37b114:
    // 0x37b114: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37b118:
    // 0x37b118: 0x24e7bcc8  addiu       $a3, $a3, -0x4338
    ctx->pc = 0x37b118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950088));
label_37b11c:
    // 0x37b11c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37b120:
    // 0x37b120: 0x82220007  lb          $v0, 0x7($s1)
    ctx->pc = 0x37b120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_37b124:
    // 0x37b124: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37b124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_37b128:
    // 0x37b128: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b12c:
    // 0x37b12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b130:
    // 0x37b130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37b134:
    // 0x37b134: 0xc0b837a  jal         func_2E0DE8
label_37b138:
    if (ctx->pc == 0x37B138u) {
        ctx->pc = 0x37B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B134u;
        // 0x37b138: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B13Cu;
        goto label_37b13c;
    }
    ctx->pc = 0x37B134u;
    SET_GPR_U32(ctx, 31, 0x37B13Cu);
    ctx->pc = 0x37B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B134u;
    // 0x37b138: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B134u, 0x37B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B13Cu;
label_37b13c:
    // 0x37b13c: 0x82230007  lb          $v1, 0x7($s1)
    ctx->pc = 0x37b13cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_37b140:
    // 0x37b140: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x37b140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_37b144:
    // 0x37b144: 0x24a526d8  addiu       $a1, $a1, 0x26D8
    ctx->pc = 0x37b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9944));
label_37b148:
    // 0x37b148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37b14c:
    // 0x37b14c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37b150:
    // 0x37b150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37b154:
    // 0x37b154: 0x40f809  jalr        $v0
label_37b158:
    if (ctx->pc == 0x37B158u) {
        ctx->pc = 0x37B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B154u;
        // 0x37b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B15Cu;
        goto label_37b15c;
    }
    ctx->pc = 0x37B154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37B15Cu);
        ctx->pc = 0x37B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B154u;
        // 0x37b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B154u, 0x37B15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B15Cu;
label_37b15c:
    // 0x37b15c: 0x82250007  lb          $a1, 0x7($s1)
    ctx->pc = 0x37b15cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_37b160:
    // 0x37b160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b164:
    // 0x37b164: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x37b164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_37b168:
    // 0x37b168: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x37b168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_37b16c:
    // 0x37b16c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37b16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b170:
    // 0x37b170: 0x8474001c  lh          $s4, 0x1C($v1)
    ctx->pc = 0x37b170u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_37b174:
    // 0x37b174: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
label_37b178:
    if (ctx->pc == 0x37B178u) {
        ctx->pc = 0x37B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B174u;
        // 0x37b178: 0x84480016  lh          $t0, 0x16($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B17Cu;
        goto label_37b17c;
    }
    ctx->pc = 0x37B174u;
    {
        const bool branch_taken_0x37b174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x37B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B174u;
        // 0x37b178: 0x84480016  lh          $t0, 0x16($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b174) {
            ctx->pc = 0x37B1C0u;
            goto label_37b1c0;
        }
    }
    ctx->pc = 0x37B17Cu;
label_37b17c:
    // 0x37b17c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x37b17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_37b180:
    // 0x37b180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_37b184:
    if (ctx->pc == 0x37B184u) {
        ctx->pc = 0x37B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B180u;
        // 0x37b184: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B188u;
        goto label_37b188;
    }
    ctx->pc = 0x37B180u;
    {
        const bool branch_taken_0x37b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B180u;
        // 0x37b184: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b180) {
            ctx->pc = 0x37B198u;
            goto label_37b198;
        }
    }
    ctx->pc = 0x37B188u;
label_37b188:
    // 0x37b188: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_37b18c:
    if (ctx->pc == 0x37B18Cu) {
        ctx->pc = 0x37B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B188u;
        // 0x37b18c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B190u;
        goto label_37b190;
    }
    ctx->pc = 0x37B188u;
    {
        const bool branch_taken_0x37b188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B188u;
        // 0x37b18c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b188) {
            ctx->pc = 0x37B1A8u;
            goto label_37b1a8;
        }
    }
    ctx->pc = 0x37B190u;
label_37b190:
    // 0x37b190: 0x1000001b  b           . + 4 + (0x1B << 2)
label_37b194:
    if (ctx->pc == 0x37B194u) {
        ctx->pc = 0x37B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B190u;
        // 0x37b194: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B198u;
        goto label_37b198;
    }
    ctx->pc = 0x37B190u;
    {
        const bool branch_taken_0x37b190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B190u;
        // 0x37b194: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b190) {
            ctx->pc = 0x37B200u;
            goto label_37b200;
        }
    }
    ctx->pc = 0x37B198u;
label_37b198:
    // 0x37b198: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
label_37b19c:
    if (ctx->pc == 0x37B19Cu) {
        ctx->pc = 0x37B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B198u;
        // 0x37b19c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B1A0u;
        goto label_37b1a0;
    }
    ctx->pc = 0x37B198u;
    {
        const bool branch_taken_0x37b198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B198u;
        // 0x37b19c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b198) {
            ctx->pc = 0x37B1D8u;
            goto label_37b1d8;
        }
    }
    ctx->pc = 0x37B1A0u;
label_37b1a0:
    // 0x37b1a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_37b1a4:
    if (ctx->pc == 0x37B1A4u) {
        ctx->pc = 0x37B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1A0u;
        // 0x37b1a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B1A8u;
        goto label_37b1a8;
    }
    ctx->pc = 0x37B1A0u;
    {
        const bool branch_taken_0x37b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1A0u;
        // 0x37b1a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1a0) {
            ctx->pc = 0x37B200u;
            goto label_37b200;
        }
    }
    ctx->pc = 0x37B1A8u;
label_37b1a8:
    // 0x37b1a8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
label_37b1ac:
    // 0x37b1ac: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x37b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_37b1b0:
    // 0x37b1b0: 0x2442df10  addiu       $v0, $v0, -0x20F0
    ctx->pc = 0x37b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
label_37b1b4:
    // 0x37b1b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x37b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_37b1b8:
    // 0x37b1b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_37b1bc:
    if (ctx->pc == 0x37B1BCu) {
        ctx->pc = 0x37B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1B8u;
        // 0x37b1bc: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B1C0u;
        goto label_37b1c0;
    }
    ctx->pc = 0x37B1B8u;
    {
        const bool branch_taken_0x37b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1B8u;
        // 0x37b1bc: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1b8) {
            ctx->pc = 0x37B1ECu;
            goto label_37b1ec;
        }
    }
    ctx->pc = 0x37B1C0u;
label_37b1c0:
    // 0x37b1c0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
label_37b1c4:
    // 0x37b1c4: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x37b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_37b1c8:
    // 0x37b1c8: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x37b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
label_37b1cc:
    // 0x37b1cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x37b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_37b1d0:
    // 0x37b1d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_37b1d4:
    if (ctx->pc == 0x37B1D4u) {
        ctx->pc = 0x37B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1D0u;
        // 0x37b1d4: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B1D8u;
        goto label_37b1d8;
    }
    ctx->pc = 0x37B1D0u;
    {
        const bool branch_taken_0x37b1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1D0u;
        // 0x37b1d4: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1d0) {
            ctx->pc = 0x37B1ECu;
            goto label_37b1ec;
        }
    }
    ctx->pc = 0x37B1D8u;
label_37b1d8:
    // 0x37b1d8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
label_37b1dc:
    // 0x37b1dc: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x37b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_37b1e0:
    // 0x37b1e0: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x37b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_37b1e4:
    // 0x37b1e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b1e8:
    // 0x37b1e8: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x37b1e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_37b1ec:
    // 0x37b1ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b1f0:
    // 0x37b1f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x37b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_37b1f4:
    // 0x37b1f4: 0x39403  sra         $s2, $v1, 16
    ctx->pc = 0x37b1f4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 16));
label_37b1f8:
    // 0x37b1f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x37b1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37b1fc:
    // 0x37b1fc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b200:
    // 0x37b200: 0x24e7bcd8  addiu       $a3, $a3, -0x4328
    ctx->pc = 0x37b200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950104));
label_37b204:
    // 0x37b204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b208:
    // 0x37b208: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37b20c:
    // 0x37b20c: 0xc0b837a  jal         func_2E0DE8
label_37b210:
    if (ctx->pc == 0x37B210u) {
        ctx->pc = 0x37B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B20Cu;
        // 0x37b210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B214u;
        goto label_37b214;
    }
    ctx->pc = 0x37B20Cu;
    SET_GPR_U32(ctx, 31, 0x37B214u);
    ctx->pc = 0x37B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B20Cu;
    // 0x37b210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B20Cu, 0x37B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B214u;
label_37b214:
    // 0x37b214: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b218:
    // 0x37b218: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x37b218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b21c:
    // 0x37b21c: 0x24e7bce8  addiu       $a3, $a3, -0x4318
    ctx->pc = 0x37b21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950120));
label_37b220:
    // 0x37b220: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x37b220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37b224:
    // 0x37b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b228:
    // 0x37b228: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_37b22c:
    // 0x37b22c: 0xc0b837a  jal         func_2E0DE8
label_37b230:
    if (ctx->pc == 0x37B230u) {
        ctx->pc = 0x37B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B22Cu;
        // 0x37b230: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B234u;
        goto label_37b234;
    }
    ctx->pc = 0x37B22Cu;
    SET_GPR_U32(ctx, 31, 0x37B234u);
    ctx->pc = 0x37B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B22Cu;
    // 0x37b230: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B22Cu, 0x37B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B234u;
label_37b234:
    // 0x37b234: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x37b234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37b238:
    // 0x37b238: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b23c:
    // 0x37b23c: 0x24e7bd00  addiu       $a3, $a3, -0x4300
    ctx->pc = 0x37b23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950144));
label_37b240:
    // 0x37b240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b244:
    // 0x37b244: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_37b248:
    // 0x37b248: 0xc0b837a  jal         func_2E0DE8
label_37b24c:
    if (ctx->pc == 0x37B24Cu) {
        ctx->pc = 0x37B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B248u;
        // 0x37b24c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B250u;
        goto label_37b250;
    }
    ctx->pc = 0x37B248u;
    SET_GPR_U32(ctx, 31, 0x37B250u);
    ctx->pc = 0x37B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B248u;
    // 0x37b24c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B248u, 0x37B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B250u;
label_37b250:
    // 0x37b250: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b250u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b254:
    // 0x37b254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b258:
    // 0x37b258: 0x24e7bd18  addiu       $a3, $a3, -0x42E8
    ctx->pc = 0x37b258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950168));
label_37b25c:
    // 0x37b25c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37b260:
    // 0x37b260: 0xc0b837a  jal         func_2E0DE8
label_37b264:
    if (ctx->pc == 0x37B264u) {
        ctx->pc = 0x37B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B260u;
        // 0x37b264: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B268u;
        goto label_37b268;
    }
    ctx->pc = 0x37B260u;
    SET_GPR_U32(ctx, 31, 0x37B268u);
    ctx->pc = 0x37B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B260u;
    // 0x37b264: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B260u, 0x37B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B268u;
label_37b268:
    // 0x37b268: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b26c:
    // 0x37b26c: 0x86680028  lh          $t0, 0x28($s3)
    ctx->pc = 0x37b26cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_37b270:
    // 0x37b270: 0x8669002a  lh          $t1, 0x2A($s3)
    ctx->pc = 0x37b270u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_37b274:
    // 0x37b274: 0x24e7bd30  addiu       $a3, $a3, -0x42D0
    ctx->pc = 0x37b274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950192));
label_37b278:
    // 0x37b278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b27c:
    // 0x37b27c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37b280:
    // 0x37b280: 0xc0b837a  jal         func_2E0DE8
label_37b284:
    if (ctx->pc == 0x37B284u) {
        ctx->pc = 0x37B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B280u;
        // 0x37b284: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B288u;
        goto label_37b288;
    }
    ctx->pc = 0x37B280u;
    SET_GPR_U32(ctx, 31, 0x37B288u);
    ctx->pc = 0x37B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B280u;
    // 0x37b284: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B280u, 0x37B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B288u;
label_37b288:
    // 0x37b288: 0x82230007  lb          $v1, 0x7($s1)
    ctx->pc = 0x37b288u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_37b28c:
    // 0x37b28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b290:
    // 0x37b290: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_37b294:
    if (ctx->pc == 0x37B294u) {
        ctx->pc = 0x37B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B290u;
        // 0x37b294: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B298u;
        goto label_37b298;
    }
    ctx->pc = 0x37B290u;
    {
        const bool branch_taken_0x37b290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B290u;
        // 0x37b294: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b290) {
            ctx->pc = 0x37B2D4u;
            goto label_37b2d4;
        }
    }
    ctx->pc = 0x37B298u;
label_37b298:
    // 0x37b298: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_37b29c:
    if (ctx->pc == 0x37B29Cu) {
        ctx->pc = 0x37B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B298u;
        // 0x37b29c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2A0u;
        goto label_37b2a0;
    }
    ctx->pc = 0x37B298u;
    {
        const bool branch_taken_0x37b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b298) {
            ctx->pc = 0x37B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B298u;
            // 0x37b29c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B2B0u;
            goto label_37b2b0;
        }
    }
    ctx->pc = 0x37B2A0u;
label_37b2a0:
    // 0x37b2a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_37b2a4:
    if (ctx->pc == 0x37B2A4u) {
        ctx->pc = 0x37B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A0u;
        // 0x37b2a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2A8u;
        goto label_37b2a8;
    }
    ctx->pc = 0x37B2A0u;
    {
        const bool branch_taken_0x37b2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A0u;
        // 0x37b2a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2a0) {
            ctx->pc = 0x37B2C0u;
            goto label_37b2c0;
        }
    }
    ctx->pc = 0x37B2A8u;
label_37b2a8:
    // 0x37b2a8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_37b2ac:
    if (ctx->pc == 0x37B2ACu) {
        ctx->pc = 0x37B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A8u;
        // 0x37b2ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2B0u;
        goto label_37b2b0;
    }
    ctx->pc = 0x37B2A8u;
    {
        const bool branch_taken_0x37b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A8u;
        // 0x37b2ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2a8) {
            ctx->pc = 0x37B31Cu;
            goto label_37b31c;
        }
    }
    ctx->pc = 0x37B2B0u;
label_37b2b0:
    // 0x37b2b0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_37b2b4:
    if (ctx->pc == 0x37B2B4u) {
        ctx->pc = 0x37B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2B0u;
        // 0x37b2b4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2B8u;
        goto label_37b2b8;
    }
    ctx->pc = 0x37B2B0u;
    {
        const bool branch_taken_0x37b2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2B0u;
        // 0x37b2b4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2b0) {
            ctx->pc = 0x37B2FCu;
            goto label_37b2fc;
        }
    }
    ctx->pc = 0x37B2B8u;
label_37b2b8:
    // 0x37b2b8: 0x10000018  b           . + 4 + (0x18 << 2)
label_37b2bc:
    if (ctx->pc == 0x37B2BCu) {
        ctx->pc = 0x37B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2B8u;
        // 0x37b2bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2C0u;
        goto label_37b2c0;
    }
    ctx->pc = 0x37B2B8u;
    {
        const bool branch_taken_0x37b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2B8u;
        // 0x37b2bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2b8) {
            ctx->pc = 0x37B31Cu;
            goto label_37b31c;
        }
    }
    ctx->pc = 0x37B2C0u;
label_37b2c0:
    // 0x37b2c0: 0x8669002e  lh          $t1, 0x2E($s3)
    ctx->pc = 0x37b2c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
label_37b2c4:
    // 0x37b2c4: 0x8668002c  lh          $t0, 0x2C($s3)
    ctx->pc = 0x37b2c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
label_37b2c8:
    // 0x37b2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b2cc:
    // 0x37b2cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_37b2d0:
    if (ctx->pc == 0x37B2D0u) {
        ctx->pc = 0x37B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2CCu;
        // 0x37b2d0: 0x24e7bd48  addiu       $a3, $a3, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2D4u;
        goto label_37b2d4;
    }
    ctx->pc = 0x37B2CCu;
    {
        const bool branch_taken_0x37b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2CCu;
        // 0x37b2d0: 0x24e7bd48  addiu       $a3, $a3, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2cc) {
            ctx->pc = 0x37B2E8u;
            goto label_37b2e8;
        }
    }
    ctx->pc = 0x37B2D4u;
label_37b2d4:
    // 0x37b2d4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b2d8:
    // 0x37b2d8: 0x86690032  lh          $t1, 0x32($s3)
    ctx->pc = 0x37b2d8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_37b2dc:
    // 0x37b2dc: 0x86680030  lh          $t0, 0x30($s3)
    ctx->pc = 0x37b2dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_37b2e0:
    // 0x37b2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b2e4:
    // 0x37b2e4: 0x24e7bd60  addiu       $a3, $a3, -0x42A0
    ctx->pc = 0x37b2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950240));
label_37b2e8:
    // 0x37b2e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x37b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_37b2ec:
    // 0x37b2ec: 0xc0b837a  jal         func_2E0DE8
label_37b2f0:
    if (ctx->pc == 0x37B2F0u) {
        ctx->pc = 0x37B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2ECu;
        // 0x37b2f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2F4u;
        goto label_37b2f4;
    }
    ctx->pc = 0x37B2ECu;
    SET_GPR_U32(ctx, 31, 0x37B2F4u);
    ctx->pc = 0x37B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2ECu;
    // 0x37b2f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B2ECu, 0x37B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B2F4u;
label_37b2f4:
    // 0x37b2f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_37b2f8:
    if (ctx->pc == 0x37B2F8u) {
        ctx->pc = 0x37B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2F4u;
        // 0x37b2f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2FCu;
        goto label_37b2fc;
    }
    ctx->pc = 0x37B2F4u;
    {
        const bool branch_taken_0x37b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2F4u;
        // 0x37b2f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2f4) {
            ctx->pc = 0x37B31Cu;
            goto label_37b31c;
        }
    }
    ctx->pc = 0x37B2FCu;
label_37b2fc:
    // 0x37b2fc: 0x86690036  lh          $t1, 0x36($s3)
    ctx->pc = 0x37b2fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
label_37b300:
    // 0x37b300: 0x86680034  lh          $t0, 0x34($s3)
    ctx->pc = 0x37b300u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_37b304:
    // 0x37b304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b308:
    // 0x37b308: 0x24e7bd78  addiu       $a3, $a3, -0x4288
    ctx->pc = 0x37b308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950264));
label_37b30c:
    // 0x37b30c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x37b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_37b310:
    // 0x37b310: 0xc0b837a  jal         func_2E0DE8
label_37b314:
    if (ctx->pc == 0x37B314u) {
        ctx->pc = 0x37B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B310u;
        // 0x37b314: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B318u;
        goto label_37b318;
    }
    ctx->pc = 0x37B310u;
    SET_GPR_U32(ctx, 31, 0x37B318u);
    ctx->pc = 0x37B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B310u;
    // 0x37b314: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B310u, 0x37B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B318u;
label_37b318:
    // 0x37b318: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37b318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37b31c:
    // 0x37b31c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37b31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37b320:
    // 0x37b320: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37b320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37b324:
    // 0x37b324: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37b324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37b328:
    // 0x37b328: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x37b328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b32c:
    // 0x37b32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37b330:
    // 0x37b330: 0x3e00008  jr          $ra
label_37b334:
    if (ctx->pc == 0x37B334u) {
        ctx->pc = 0x37B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B330u;
        // 0x37b334: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B338u;
        goto label_fallthrough_0x37b330;
    }
    ctx->pc = 0x37B330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B330u;
        // 0x37b334: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37b330:
    ctx->pc = 0x37B338u;
}
