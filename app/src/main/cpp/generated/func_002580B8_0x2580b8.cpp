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

// Function: func_002580B8
// Address: 0x2580b8 - 0x258c40
void func_002580B8_0x2580b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002580B8_0x2580b8");
#endif

    switch (ctx->pc) {
        case 0x258298u: goto label_258298;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582c0u: goto label_2582c0;
        case 0x2582e8u: goto label_2582e8;
        case 0x2582f4u: goto label_2582f4;
        case 0x258300u: goto label_258300;
        case 0x258308u: goto label_258308;
        case 0x2583d4u: goto label_2583d4;
        case 0x258420u: goto label_258420;
        case 0x258434u: goto label_258434;
        case 0x258448u: goto label_258448;
        case 0x258460u: goto label_258460;
        case 0x258468u: goto label_258468;
        case 0x258488u: goto label_258488;
        case 0x2584ecu: goto label_2584ec;
        case 0x2585a4u: goto label_2585a4;
        case 0x2585e8u: goto label_2585e8;
        case 0x2585fcu: goto label_2585fc;
        case 0x258610u: goto label_258610;
        case 0x258618u: goto label_258618;
        case 0x258638u: goto label_258638;
        case 0x258654u: goto label_258654;
        case 0x258660u: goto label_258660;
        case 0x25866cu: goto label_25866c;
        case 0x258674u: goto label_258674;
        case 0x258730u: goto label_258730;
        case 0x258774u: goto label_258774;
        case 0x258788u: goto label_258788;
        case 0x25879cu: goto label_25879c;
        case 0x2587a4u: goto label_2587a4;
        case 0x2587c4u: goto label_2587c4;
        case 0x258818u: goto label_258818;
        case 0x25883cu: goto label_25883c;
        case 0x258994u: goto label_258994;
        case 0x258a30u: goto label_258a30;
        case 0x258a58u: goto label_258a58;
        case 0x258a64u: goto label_258a64;
        case 0x258a70u: goto label_258a70;
        case 0x258aa0u: goto label_258aa0;
        case 0x258aa8u: goto label_258aa8;
        case 0x258accu: goto label_258acc;
        case 0x258aecu: goto label_258aec;
        case 0x258b10u: goto label_258b10;
        case 0x258b34u: goto label_258b34;
        case 0x258b54u: goto label_258b54;
        case 0x258b60u: goto label_258b60;
        case 0x258b84u: goto label_258b84;
        case 0x258ba4u: goto label_258ba4;
        case 0x258bb8u: goto label_258bb8;
        case 0x258bd4u: goto label_258bd4;
        case 0x258be0u: goto label_258be0;
        case 0x258be8u: goto label_258be8;
        default: break;
    }

    ctx->pc = 0x2580b8u;

    // 0x2580b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2580b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2580bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2580bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2580c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2580c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2580c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2580c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2580c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2580cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2580ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2580d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2580d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2580d4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2580d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2580d8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2580d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2580dc: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2580DCu;
    {
        const bool branch_taken_0x2580dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2580dc) {
            ctx->pc = 0x2580E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2580DCu;
            // 0x2580e0: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2581ACu;
            goto label_2581ac;
        }
    }
    ctx->pc = 0x2580E4u;
    // 0x2580e4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2580e8: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x2580e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2580ec: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2580ECu;
    {
        const bool branch_taken_0x2580ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2580F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580ECu;
        // 0x2580f0: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580ec) {
            ctx->pc = 0x258188u;
            goto label_258188;
        }
    }
    ctx->pc = 0x2580F4u;
    // 0x2580f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580F4u;
        // 0x2580f8: 0x24020241  addiu       $v0, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x258130u;
            goto label_258130;
        }
    }
    ctx->pc = 0x2580FCu;
    // 0x2580fc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2580FCu;
    {
        const bool branch_taken_0x2580fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580FCu;
        // 0x258100: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580fc) {
            ctx->pc = 0x258168u;
            goto label_258168;
        }
    }
    ctx->pc = 0x258104u;
    // 0x258104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258104u;
    {
        const bool branch_taken_0x258104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258104u;
        // 0x258108: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258104) {
            ctx->pc = 0x25811Cu;
            goto label_25811c;
        }
    }
    ctx->pc = 0x25810Cu;
    // 0x25810c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25810Cu;
    {
        const bool branch_taken_0x25810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25810Cu;
        // 0x258110: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25810c) {
            ctx->pc = 0x2581A4u;
            goto label_2581a4;
        }
    }
    ctx->pc = 0x258114u;
    // 0x258114: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x258114u;
    {
        const bool branch_taken_0x258114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258114u;
        // 0x258118: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258114) {
            ctx->pc = 0x2581ACu;
            goto label_2581ac;
        }
    }
    ctx->pc = 0x25811Cu;
label_25811c:
    // 0x25811c: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x258120: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x258120u;
    {
        const bool branch_taken_0x258120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258120u;
        // 0x258124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258120) {
            ctx->pc = 0x2581A4u;
            goto label_2581a4;
        }
    }
    ctx->pc = 0x258128u;
    // 0x258128: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x258128u;
    {
        const bool branch_taken_0x258128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258128u;
        // 0x25812c: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258128) {
            ctx->pc = 0x2581ACu;
            goto label_2581ac;
        }
    }
    ctx->pc = 0x258130u;
label_258130:
    // 0x258130: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x258130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x258134: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258134u;
    {
        const bool branch_taken_0x258134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258134u;
        // 0x258138: 0x2862026b  slti        $v0, $v1, 0x26B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)619) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258134) {
            ctx->pc = 0x258168u;
            goto label_258168;
        }
    }
    ctx->pc = 0x25813Cu;
    // 0x25813c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25813Cu;
    {
        const bool branch_taken_0x25813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25813Cu;
        // 0x258140: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25813c) {
            ctx->pc = 0x258154u;
            goto label_258154;
        }
    }
    ctx->pc = 0x258144u;
    // 0x258144: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258144u;
    {
        const bool branch_taken_0x258144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258144) {
            ctx->pc = 0x258148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258144u;
            // 0x258148: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258170u;
            goto label_258170;
        }
    }
    ctx->pc = 0x25814Cu;
    // 0x25814c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25814Cu;
    {
        const bool branch_taken_0x25814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25814Cu;
        // 0x258150: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25814c) {
            ctx->pc = 0x2581ACu;
            goto label_2581ac;
        }
    }
    ctx->pc = 0x258154u;
label_258154:
    // 0x258154: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x258154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x258158: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x258158u;
    {
        const bool branch_taken_0x258158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258158u;
        // 0x25815c: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258158) {
            ctx->pc = 0x2581A8u;
            goto label_2581a8;
        }
    }
    ctx->pc = 0x258160u;
    // 0x258160: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x258160u;
    {
        const bool branch_taken_0x258160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258160) {
            ctx->pc = 0x258164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258160u;
            // 0x258164: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2581ACu;
            goto label_2581ac;
        }
    }
    ctx->pc = 0x258168u;
label_258168:
    // 0x258168: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258168u;
    {
        const bool branch_taken_0x258168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258168u;
        // 0x25816c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258168) {
            ctx->pc = 0x2581A4u;
            goto label_2581a4;
        }
    }
    ctx->pc = 0x258170u;
label_258170:
    // 0x258170: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x258174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x258174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x258178: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258178u;
    {
        const bool branch_taken_0x258178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258178u;
        // 0x25817c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258178) {
            ctx->pc = 0x2581A8u;
            goto label_2581a8;
        }
    }
    ctx->pc = 0x258180u;
    // 0x258180: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x258180u;
    {
        const bool branch_taken_0x258180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258180u;
        // 0x258184: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258180) {
            ctx->pc = 0x2581A8u;
            goto label_2581a8;
        }
    }
    ctx->pc = 0x258188u;
label_258188:
    // 0x258188: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x258188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x25818c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258190: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x258190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x258194: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x258194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x258198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258198u;
    {
        const bool branch_taken_0x258198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258198u;
        // 0x25819c: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258198) {
            ctx->pc = 0x2581A8u;
            goto label_2581a8;
        }
    }
    ctx->pc = 0x2581A0u;
    // 0x2581a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2581a4:
    // 0x2581a4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2581a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2581a8:
    // 0x2581a8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2581a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2581ac:
    // 0x2581ac: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x2581acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2581b0: 0x1040028b  beqz        $v0, . + 4 + (0x28B << 2)
    ctx->pc = 0x2581B0u;
    {
        const bool branch_taken_0x2581b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581B0u;
        // 0x2581b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581b0) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x2581B8u;
    // 0x2581b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2581b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2581bc: 0x24422630  addiu       $v0, $v0, 0x2630
    ctx->pc = 0x2581bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x2581c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2581c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2581c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2581c8: 0x800008  jr          $a0
    ctx->pc = 0x2581C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2581D0u: goto label_2581d0;
            case 0x2582D8u: goto label_2582d8;
            case 0x258318u: goto label_258318;
            case 0x2584B0u: goto label_2584b0;
            case 0x258500u: goto label_258500;
            case 0x258644u: goto label_258644;
            case 0x25868Cu: goto label_25868c;
            case 0x2587DCu: goto label_2587dc;
            case 0x258834u: goto label_258834;
            case 0x258A48u: goto label_258a48;
            case 0x258AB0u: goto label_258ab0;
            case 0x258B1Cu: goto label_258b1c;
            case 0x258B68u: goto label_258b68;
            case 0x258BB0u: goto label_258bb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2581D0u;
label_2581d0:
    // 0x2581d0: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x2581d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2581d4: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x2581d8: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x2581d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x2581dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2581DCu;
    {
        const bool branch_taken_0x2581dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581DCu;
        // 0x2581e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581dc) {
            ctx->pc = 0x2581FCu;
            goto label_2581fc;
        }
    }
    ctx->pc = 0x2581E4u;
    // 0x2581e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2581e8: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2581e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x2581ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2581ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2581f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2581f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2581f4: 0x800008  jr          $a0
    ctx->pc = 0x2581F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2581FCu: goto label_2581fc;
            case 0x25820Cu: goto label_25820c;
            case 0x25821Cu: goto label_25821c;
            case 0x25822Cu: goto label_25822c;
            case 0x25823Cu: goto label_25823c;
            case 0x25824Cu: goto label_25824c;
            case 0x25825Cu: goto label_25825c;
            case 0x25826Cu: goto label_25826c;
            case 0x25827Cu: goto label_25827c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2581FCu;
label_2581fc:
    // 0x2581fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258200: 0x8c4305f0  lw          $v1, 0x5F0($v0)
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x258204: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x258204u;
    {
        const bool branch_taken_0x258204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258204u;
        // 0x258208: 0x8c4405f4  lw          $a0, 0x5F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258204) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25820Cu;
label_25820c:
    // 0x25820c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258210: 0x8c432908  lw          $v1, 0x2908($v0)
    ctx->pc = 0x258210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10504)));
    // 0x258214: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x258214u;
    {
        const bool branch_taken_0x258214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258214u;
        // 0x258218: 0x8c44290c  lw          $a0, 0x290C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258214) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25821Cu;
label_25821c:
    // 0x25821c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258220: 0x8c430adc  lw          $v1, 0xADC($v0)
    ctx->pc = 0x258220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2780)));
    // 0x258224: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x258224u;
    {
        const bool branch_taken_0x258224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258224u;
        // 0x258228: 0x8c440ae0  lw          $a0, 0xAE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258224) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25822Cu;
label_25822c:
    // 0x25822c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258230: 0x8c431770  lw          $v1, 0x1770($v0)
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6000)));
    // 0x258234: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x258234u;
    {
        const bool branch_taken_0x258234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258234u;
        // 0x258238: 0x8c441774  lw          $a0, 0x1774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258234) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25823Cu;
label_25823c:
    // 0x25823c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258240: 0x8c431770  lw          $v1, 0x1770($v0)
    ctx->pc = 0x258240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6000)));
    // 0x258244: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x258244u;
    {
        const bool branch_taken_0x258244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258244u;
        // 0x258248: 0x8c441774  lw          $a0, 0x1774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258244) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25824Cu;
label_25824c:
    // 0x25824c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258250: 0x8c430f1c  lw          $v1, 0xF1C($v0)
    ctx->pc = 0x258250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3868)));
    // 0x258254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x258254u;
    {
        const bool branch_taken_0x258254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258254u;
        // 0x258258: 0x8c440f20  lw          $a0, 0xF20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258254) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25825Cu;
label_25825c:
    // 0x25825c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258260: 0x8c4305f0  lw          $v1, 0x5F0($v0)
    ctx->pc = 0x258260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x258264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x258264u;
    {
        const bool branch_taken_0x258264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258264u;
        // 0x258268: 0x8c4405f4  lw          $a0, 0x5F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258264) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25826Cu;
label_25826c:
    // 0x25826c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258270: 0x8c431348  lw          $v1, 0x1348($v0)
    ctx->pc = 0x258270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x258274: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258274u;
    {
        const bool branch_taken_0x258274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258274u;
        // 0x258278: 0x8c44134c  lw          $a0, 0x134C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258274) {
            ctx->pc = 0x258288u;
            goto label_258288;
        }
    }
    ctx->pc = 0x25827Cu;
label_25827c:
    // 0x25827c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258280: 0x8c4338a8  lw          $v1, 0x38A8($v0)
    ctx->pc = 0x258280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14504)));
    // 0x258284: 0x8c4438ac  lw          $a0, 0x38AC($v0)
    ctx->pc = 0x258284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14508)));
label_258288:
    // 0x258288: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25828c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25828cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258290: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x258290u;
    SET_GPR_U32(ctx, 31, 0x258298u);
    ctx->pc = 0x258294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258290u;
    // 0x258294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x258290u, 0x258298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258298u;
label_258298:
    // 0x258298: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258298u;
    SET_GPR_U32(ctx, 31, 0x2582A0u);
    ctx->pc = 0x25829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258298u;
    // 0x25829c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258298u, 0x2582A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582A0u;
label_2582a0:
    // 0x2582a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2582a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2582a4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2582a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2582a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2582a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2582acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2582b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2582b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2582B8u;
    SET_GPR_U32(ctx, 31, 0x2582C0u);
    ctx->pc = 0x2582BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582B8u;
    // 0x2582bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2582B8u, 0x2582C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582C0u;
label_2582c0:
    // 0x2582c0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2582c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2582c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2582c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2582c8: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x2582c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x2582cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2582ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2582d0: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x2582d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
    // 0x2582d4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2582d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2582d8:
    // 0x2582d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2582dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2582dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2582e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2582E0u;
    SET_GPR_U32(ctx, 31, 0x2582E8u);
    ctx->pc = 0x2582E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582E0u;
    // 0x2582e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2582E0u, 0x2582E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582E8u;
label_2582e8:
    // 0x2582e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2582e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582ec: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2582ECu;
    SET_GPR_U32(ctx, 31, 0x2582F4u);
    ctx->pc = 0x2582F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582ECu;
    // 0x2582f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2582ECu, 0x2582F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582F4u;
label_2582f4:
    // 0x2582f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2582f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582f8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2582F8u;
    SET_GPR_U32(ctx, 31, 0x258300u);
    ctx->pc = 0x2582FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582F8u;
    // 0x2582fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2582F8u, 0x258300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258300u;
label_258300:
    // 0x258300: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x258300u;
    SET_GPR_U32(ctx, 31, 0x258308u);
    ctx->pc = 0x258304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258300u;
    // 0x258304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x258300u, 0x258308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258308u;
label_258308:
    // 0x258308: 0x14400235  bnez        $v0, . + 4 + (0x235 << 2)
    ctx->pc = 0x258308u;
    {
        const bool branch_taken_0x258308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258308u;
        // 0x25830c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258308) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258310u;
    // 0x258310: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x258310u;
    {
        const bool branch_taken_0x258310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258310u;
        // 0x258314: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258310) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258318u;
label_258318:
    // 0x258318: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x258318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x25831c: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x25831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x258320: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x258320u;
    {
        const bool branch_taken_0x258320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258320u;
        // 0x258324: 0xae000600  sw          $zero, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258320) {
            ctx->pc = 0x2583ACu;
            goto label_2583ac;
        }
    }
    ctx->pc = 0x258328u;
    // 0x258328: 0x28620265  slti        $v0, $v1, 0x265
    ctx->pc = 0x258328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
    // 0x25832c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25832Cu;
    {
        const bool branch_taken_0x25832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25832Cu;
        // 0x258330: 0x24020241  addiu       $v0, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25832c) {
            ctx->pc = 0x258368u;
            goto label_258368;
        }
    }
    ctx->pc = 0x258334u;
    // 0x258334: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x258334u;
    {
        const bool branch_taken_0x258334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258334u;
        // 0x258338: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258334) {
            ctx->pc = 0x2583E4u;
            goto label_2583e4;
        }
    }
    ctx->pc = 0x25833Cu;
    // 0x25833c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25833Cu;
    {
        const bool branch_taken_0x25833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25833Cu;
        // 0x258340: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25833c) {
            ctx->pc = 0x258354u;
            goto label_258354;
        }
    }
    ctx->pc = 0x258344u;
    // 0x258344: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258344u;
    {
        const bool branch_taken_0x258344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258344u;
        // 0x258348: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258344) {
            ctx->pc = 0x258380u;
            goto label_258380;
        }
    }
    ctx->pc = 0x25834Cu;
    // 0x25834c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25834Cu;
    {
        const bool branch_taken_0x25834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25834Cu;
        // 0x258350: 0x8c432390  lw          $v1, 0x2390($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25834c) {
            ctx->pc = 0x258378u;
            goto label_258378;
        }
    }
    ctx->pc = 0x258354u;
label_258354:
    // 0x258354: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x258358: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258358u;
    {
        const bool branch_taken_0x258358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258358u;
        // 0x25835c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258358) {
            ctx->pc = 0x25838Cu;
            goto label_25838c;
        }
    }
    ctx->pc = 0x258360u;
    // 0x258360: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x258360u;
    {
        const bool branch_taken_0x258360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258360u;
        // 0x258364: 0x8c432390  lw          $v1, 0x2390($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258360) {
            ctx->pc = 0x258378u;
            goto label_258378;
        }
    }
    ctx->pc = 0x258368u;
label_258368:
    // 0x258368: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x25836c: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25836Cu;
    {
        const bool branch_taken_0x25836c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25836Cu;
        // 0x258370: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25836c) {
            ctx->pc = 0x2583FCu;
            goto label_2583fc;
        }
    }
    ctx->pc = 0x258374u;
    // 0x258374: 0x8c432390  lw          $v1, 0x2390($v0)
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9104)));
label_258378:
    // 0x258378: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x258378u;
    {
        const bool branch_taken_0x258378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258378u;
        // 0x25837c: 0x8c442394  lw          $a0, 0x2394($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258378) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x258380u;
label_258380:
    // 0x258380: 0x8c432e54  lw          $v1, 0x2E54($v0)
    ctx->pc = 0x258380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
    // 0x258384: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x258384u;
    {
        const bool branch_taken_0x258384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258384u;
        // 0x258388: 0x8c442e58  lw          $a0, 0x2E58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258384) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x25838Cu;
label_25838c:
    // 0x25838c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x25838cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x258390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258394: 0x8c4331ac  lw          $v1, 0x31AC($v0)
    ctx->pc = 0x258394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12716)));
    // 0x258398: 0x8c4431b0  lw          $a0, 0x31B0($v0)
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12720)));
    // 0x25839c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2583a0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2583a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2583a4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2583A4u;
    {
        const bool branch_taken_0x2583a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583A4u;
        // 0x2583a8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583a4) {
            ctx->pc = 0x258458u;
            goto label_258458;
        }
    }
    ctx->pc = 0x2583ACu;
label_2583ac:
    // 0x2583ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2583b0: 0x8e070740  lw          $a3, 0x740($s0)
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x2583b4: 0x8c433380  lw          $v1, 0x3380($v0)
    ctx->pc = 0x2583b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13184)));
    // 0x2583b8: 0x8c443384  lw          $a0, 0x3384($v0)
    ctx->pc = 0x2583b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13188)));
    // 0x2583bc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2583bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2583c0: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2583C0u;
    {
        const bool branch_taken_0x2583c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583C0u;
        // 0x2583c4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583c0) {
            ctx->pc = 0x2583D4u;
            goto label_2583d4;
        }
    }
    ctx->pc = 0x2583C8u;
    // 0x2583c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2583c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583cc: 0xc09f6fe  jal         func_27DBF8
    ctx->pc = 0x2583CCu;
    SET_GPR_U32(ctx, 31, 0x2583D4u);
    ctx->pc = 0x2583D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583CCu;
    // 0x2583d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DBF8u, 0x2583CCu, 0x2583D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583D4u;
label_2583d4:
    // 0x2583d4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2583d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2583d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2583d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2583dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2583DCu;
    {
        const bool branch_taken_0x2583dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583DCu;
        // 0x2583e0: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583dc) {
            ctx->pc = 0x258458u;
            goto label_258458;
        }
    }
    ctx->pc = 0x2583E4u;
label_2583e4:
    // 0x2583e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2583e8: 0x8c433ab4  lw          $v1, 0x3AB4($v0)
    ctx->pc = 0x2583e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15028)));
    // 0x2583ec: 0x8c443ab8  lw          $a0, 0x3AB8($v0)
    ctx->pc = 0x2583ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15032)));
label_2583f0:
    // 0x2583f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2583f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2583F4u;
    {
        const bool branch_taken_0x2583f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583F4u;
        // 0x2583f8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583f4) {
            ctx->pc = 0x258458u;
            goto label_258458;
        }
    }
    ctx->pc = 0x2583FCu;
label_2583fc:
    // 0x2583fc: 0x8e070748  lw          $a3, 0x748($s0)
    ctx->pc = 0x2583fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x258400: 0x8c433dfc  lw          $v1, 0x3DFC($v0)
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15868)));
    // 0x258404: 0x8c443e00  lw          $a0, 0x3E00($v0)
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15872)));
    // 0x258408: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25840c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25840Cu;
    {
        const bool branch_taken_0x25840c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25840Cu;
        // 0x258410: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25840c) {
            ctx->pc = 0x258420u;
            goto label_258420;
        }
    }
    ctx->pc = 0x258414u;
    // 0x258414: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258418: 0xc0a0540  jal         func_281500
    ctx->pc = 0x258418u;
    SET_GPR_U32(ctx, 31, 0x258420u);
    ctx->pc = 0x25841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258418u;
    // 0x25841c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281500u, 0x258418u, 0x258420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258420u;
label_258420:
    // 0x258420: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x258420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x258424: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x258424u;
    {
        const bool branch_taken_0x258424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x258424) {
            ctx->pc = 0x258428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258424u;
            // 0x258428: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258438u;
            goto label_258438;
        }
    }
    ctx->pc = 0x25842Cu;
    // 0x25842c: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x25842Cu;
    SET_GPR_U32(ctx, 31, 0x258434u);
    ctx->pc = 0x258430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25842Cu;
    // 0x258430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x25842Cu, 0x258434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258434u;
label_258434:
    // 0x258434: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x258434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_258438:
    // 0x258438: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258438u;
    {
        const bool branch_taken_0x258438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x258438) {
            ctx->pc = 0x258448u;
            goto label_258448;
        }
    }
    ctx->pc = 0x258440u;
    // 0x258440: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x258440u;
    SET_GPR_U32(ctx, 31, 0x258448u);
    ctx->pc = 0x258444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258440u;
    // 0x258444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x258440u, 0x258448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258448u;
label_258448:
    // 0x258448: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x258448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25844c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25844cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258450: 0x0  nop
    ctx->pc = 0x258450u;
    // NOP
    // 0x258454: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x258454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_258458:
    // 0x258458: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x258458u;
    SET_GPR_U32(ctx, 31, 0x258460u);
    ctx->pc = 0x25845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258458u;
    // 0x25845c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x258458u, 0x258460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258460u;
label_258460:
    // 0x258460: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258460u;
    SET_GPR_U32(ctx, 31, 0x258468u);
    ctx->pc = 0x258464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258460u;
    // 0x258464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258460u, 0x258468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258468u;
label_258468:
    // 0x258468: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25846c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25846cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258470: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x258470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258478: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25847c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25847cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258480: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258480u;
    SET_GPR_U32(ctx, 31, 0x258488u);
    ctx->pc = 0x258484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258480u;
    // 0x258484: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258480u, 0x258488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258488u;
label_258488:
    // 0x258488: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x258488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x25848c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x25848cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x258490: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x258494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258498: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x258498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x25849c: 0xae0405f0  sw          $a0, 0x5F0($s0)
    ctx->pc = 0x25849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 4));
    // 0x2584a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2584a4: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x2584a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x2584a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2584a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2584ac: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x2584acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_2584b0:
    // 0x2584b0: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x2584b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2584b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2584b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2584b8: 0x0  nop
    ctx->pc = 0x2584b8u;
    // NOP
    // 0x2584bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2584bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2584c0: 0x0  nop
    ctx->pc = 0x2584c0u;
    // NOP
    // 0x2584c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2584C4u;
    {
        const bool branch_taken_0x2584c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2584C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C4u;
        // 0x2584c8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584c4) {
            ctx->pc = 0x2584E4u;
            goto label_2584e4;
        }
    }
    ctx->pc = 0x2584CCu;
    // 0x2584cc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2584ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2584d0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2584d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2584d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2584d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2584d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2584d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2584dc: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x2584dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x2584e0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2584e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_2584e4:
    // 0x2584e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2584E4u;
    SET_GPR_U32(ctx, 31, 0x2584ECu);
    ctx->pc = 0x2584E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2584E4u;
    // 0x2584e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2584E4u, 0x2584ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584ECu;
label_2584ec:
    // 0x2584ec: 0x10400194  beqz        $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x2584ECu;
    {
        const bool branch_taken_0x2584ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2584ec) {
            ctx->pc = 0x258B40u;
            goto label_258b40;
        }
    }
    ctx->pc = 0x2584F4u;
    // 0x2584f4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2584f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2584f8: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x2584F8u;
    {
        const bool branch_taken_0x2584f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584F8u;
        // 0x2584fc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584f8) {
            ctx->pc = 0x258B3Cu;
            goto label_258b3c;
        }
    }
    ctx->pc = 0x258500u;
label_258500:
    // 0x258500: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x258500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x258504: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x258504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x258508: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x258508u;
    {
        const bool branch_taken_0x258508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258508u;
        // 0x25850c: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258508) {
            ctx->pc = 0x25857Cu;
            goto label_25857c;
        }
    }
    ctx->pc = 0x258510u;
    // 0x258510: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258510u;
    {
        const bool branch_taken_0x258510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258510u;
        // 0x258514: 0x24020241  addiu       $v0, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258510) {
            ctx->pc = 0x25854Cu;
            goto label_25854c;
        }
    }
    ctx->pc = 0x258518u;
    // 0x258518: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x258518u;
    {
        const bool branch_taken_0x258518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258518u;
        // 0x25851c: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258518) {
            ctx->pc = 0x2585ACu;
            goto label_2585ac;
        }
    }
    ctx->pc = 0x258520u;
    // 0x258520: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258520u;
    {
        const bool branch_taken_0x258520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258520u;
        // 0x258524: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258520) {
            ctx->pc = 0x258538u;
            goto label_258538;
        }
    }
    ctx->pc = 0x258528u;
    // 0x258528: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258528u;
    {
        const bool branch_taken_0x258528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258528u;
        // 0x25852c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258528) {
            ctx->pc = 0x258564u;
            goto label_258564;
        }
    }
    ctx->pc = 0x258530u;
    // 0x258530: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x258530u;
    {
        const bool branch_taken_0x258530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258530u;
        // 0x258534: 0x8c432398  lw          $v1, 0x2398($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258530) {
            ctx->pc = 0x25855Cu;
            goto label_25855c;
        }
    }
    ctx->pc = 0x258538u;
label_258538:
    // 0x258538: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x258538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x25853c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25853Cu;
    {
        const bool branch_taken_0x25853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25853Cu;
        // 0x258540: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25853c) {
            ctx->pc = 0x258570u;
            goto label_258570;
        }
    }
    ctx->pc = 0x258544u;
    // 0x258544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x258544u;
    {
        const bool branch_taken_0x258544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258544u;
        // 0x258548: 0x8c432398  lw          $v1, 0x2398($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258544) {
            ctx->pc = 0x25855Cu;
            goto label_25855c;
        }
    }
    ctx->pc = 0x25854Cu;
label_25854c:
    // 0x25854c: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x25854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x258550: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x258550u;
    {
        const bool branch_taken_0x258550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258550u;
        // 0x258554: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258550) {
            ctx->pc = 0x2585C4u;
            goto label_2585c4;
        }
    }
    ctx->pc = 0x258558u;
    // 0x258558: 0x8c432398  lw          $v1, 0x2398($v0)
    ctx->pc = 0x258558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9112)));
label_25855c:
    // 0x25855c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25855Cu;
    {
        const bool branch_taken_0x25855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25855Cu;
        // 0x258560: 0x8c44239c  lw          $a0, 0x239C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25855c) {
            ctx->pc = 0x2585B8u;
            goto label_2585b8;
        }
    }
    ctx->pc = 0x258564u;
label_258564:
    // 0x258564: 0x8c432e5c  lw          $v1, 0x2E5C($v0)
    ctx->pc = 0x258564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11868)));
    // 0x258568: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x258568u;
    {
        const bool branch_taken_0x258568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258568u;
        // 0x25856c: 0x8c442e60  lw          $a0, 0x2E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258568) {
            ctx->pc = 0x2585B8u;
            goto label_2585b8;
        }
    }
    ctx->pc = 0x258570u;
label_258570:
    // 0x258570: 0x8c4331b4  lw          $v1, 0x31B4($v0)
    ctx->pc = 0x258570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12724)));
    // 0x258574: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x258574u;
    {
        const bool branch_taken_0x258574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258574u;
        // 0x258578: 0x8c4431b8  lw          $a0, 0x31B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258574) {
            ctx->pc = 0x2585B8u;
            goto label_2585b8;
        }
    }
    ctx->pc = 0x25857Cu;
label_25857c:
    // 0x25857c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258580: 0x8e070740  lw          $a3, 0x740($s0)
    ctx->pc = 0x258580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x258584: 0x8c433388  lw          $v1, 0x3388($v0)
    ctx->pc = 0x258584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13192)));
    // 0x258588: 0x8c44338c  lw          $a0, 0x338C($v0)
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13196)));
    // 0x25858c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25858cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258590: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x258590u;
    {
        const bool branch_taken_0x258590 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258590u;
        // 0x258594: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258590) {
            ctx->pc = 0x258610u;
            goto label_258610;
        }
    }
    ctx->pc = 0x258598u;
    // 0x258598: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25859c: 0xc09f6fe  jal         func_27DBF8
    ctx->pc = 0x25859Cu;
    SET_GPR_U32(ctx, 31, 0x2585A4u);
    ctx->pc = 0x2585A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25859Cu;
    // 0x2585a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DBF8u, 0x25859Cu, 0x2585A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585A4u;
label_2585a4:
    // 0x2585a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2585A4u;
    {
        const bool branch_taken_0x2585a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2585a4) {
            ctx->pc = 0x258610u;
            goto label_258610;
        }
    }
    ctx->pc = 0x2585ACu;
label_2585ac:
    // 0x2585ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2585b0: 0x8c433abc  lw          $v1, 0x3ABC($v0)
    ctx->pc = 0x2585b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15036)));
    // 0x2585b4: 0x8c443ac0  lw          $a0, 0x3AC0($v0)
    ctx->pc = 0x2585b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15040)));
label_2585b8:
    // 0x2585b8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2585b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2585bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2585BCu;
    {
        const bool branch_taken_0x2585bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585BCu;
        // 0x2585c0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585bc) {
            ctx->pc = 0x258610u;
            goto label_258610;
        }
    }
    ctx->pc = 0x2585C4u;
label_2585c4:
    // 0x2585c4: 0x8e070748  lw          $a3, 0x748($s0)
    ctx->pc = 0x2585c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x2585c8: 0x8c433e04  lw          $v1, 0x3E04($v0)
    ctx->pc = 0x2585c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15876)));
    // 0x2585cc: 0x8c443e08  lw          $a0, 0x3E08($v0)
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15880)));
    // 0x2585d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2585d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2585d4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2585D4u;
    {
        const bool branch_taken_0x2585d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D4u;
        // 0x2585d8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585d4) {
            ctx->pc = 0x2585E8u;
            goto label_2585e8;
        }
    }
    ctx->pc = 0x2585DCu;
    // 0x2585dc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2585dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585e0: 0xc0a0540  jal         func_281500
    ctx->pc = 0x2585E0u;
    SET_GPR_U32(ctx, 31, 0x2585E8u);
    ctx->pc = 0x2585E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585E0u;
    // 0x2585e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281500u, 0x2585E0u, 0x2585E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585E8u;
label_2585e8:
    // 0x2585e8: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x2585ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2585ECu;
    {
        const bool branch_taken_0x2585ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2585ec) {
            ctx->pc = 0x2585F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2585ECu;
            // 0x2585f0: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258600u;
            goto label_258600;
        }
    }
    ctx->pc = 0x2585F4u;
    // 0x2585f4: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x2585F4u;
    SET_GPR_U32(ctx, 31, 0x2585FCu);
    ctx->pc = 0x2585F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585F4u;
    // 0x2585f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x2585F4u, 0x2585FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585FCu;
label_2585fc:
    // 0x2585fc: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x2585fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_258600:
    // 0x258600: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258600u;
    {
        const bool branch_taken_0x258600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x258600) {
            ctx->pc = 0x258610u;
            goto label_258610;
        }
    }
    ctx->pc = 0x258608u;
    // 0x258608: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x258608u;
    SET_GPR_U32(ctx, 31, 0x258610u);
    ctx->pc = 0x25860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258608u;
    // 0x25860c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x258608u, 0x258610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258610u;
label_258610:
    // 0x258610: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258610u;
    SET_GPR_U32(ctx, 31, 0x258618u);
    ctx->pc = 0x258614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258610u;
    // 0x258614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258610u, 0x258618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25861c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25861cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258620: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25862c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25862cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258630: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258630u;
    SET_GPR_U32(ctx, 31, 0x258638u);
    ctx->pc = 0x258634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258630u;
    // 0x258634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258630u, 0x258638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258638u;
label_258638:
    // 0x258638: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25863c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258640: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258644:
    // 0x258644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258648: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25864c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25864Cu;
    SET_GPR_U32(ctx, 31, 0x258654u);
    ctx->pc = 0x258650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25864Cu;
    // 0x258650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25864Cu, 0x258654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258654u;
label_258654:
    // 0x258654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258658: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258658u;
    SET_GPR_U32(ctx, 31, 0x258660u);
    ctx->pc = 0x25865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258658u;
    // 0x25865c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258658u, 0x258660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258660u;
label_258660:
    // 0x258660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258664: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x258664u;
    SET_GPR_U32(ctx, 31, 0x25866Cu);
    ctx->pc = 0x258668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258664u;
    // 0x258668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x258664u, 0x25866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25866Cu;
label_25866c:
    // 0x25866c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x25866Cu;
    SET_GPR_U32(ctx, 31, 0x258674u);
    ctx->pc = 0x258670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25866Cu;
    // 0x258670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x25866Cu, 0x258674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258674u;
label_258674:
    // 0x258674: 0x1440015a  bnez        $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x258674u;
    {
        const bool branch_taken_0x258674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258674) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x25867Cu;
    // 0x25867c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25867cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258684: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x258684u;
    {
        const bool branch_taken_0x258684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258684u;
        // 0x258688: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258684) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x25868Cu;
label_25868c:
    // 0x25868c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x25868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x258690: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x258690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x258694: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x258694u;
    {
        const bool branch_taken_0x258694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258694u;
        // 0x258698: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258694) {
            ctx->pc = 0x258708u;
            goto label_258708;
        }
    }
    ctx->pc = 0x25869Cu;
    // 0x25869c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25869Cu;
    {
        const bool branch_taken_0x25869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25869Cu;
        // 0x2586a0: 0x24020241  addiu       $v0, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25869c) {
            ctx->pc = 0x2586D8u;
            goto label_2586d8;
        }
    }
    ctx->pc = 0x2586A4u;
    // 0x2586a4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2586A4u;
    {
        const bool branch_taken_0x2586a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2586A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586A4u;
        // 0x2586a8: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586a4) {
            ctx->pc = 0x258738u;
            goto label_258738;
        }
    }
    ctx->pc = 0x2586ACu;
    // 0x2586ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2586ACu;
    {
        const bool branch_taken_0x2586ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586ACu;
        // 0x2586b0: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586ac) {
            ctx->pc = 0x2586C4u;
            goto label_2586c4;
        }
    }
    ctx->pc = 0x2586B4u;
    // 0x2586b4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2586B4u;
    {
        const bool branch_taken_0x2586b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2586B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586B4u;
        // 0x2586b8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586b4) {
            ctx->pc = 0x2586F0u;
            goto label_2586f0;
        }
    }
    ctx->pc = 0x2586BCu;
    // 0x2586bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2586BCu;
    {
        const bool branch_taken_0x2586bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586BCu;
        // 0x2586c0: 0x8c4323a0  lw          $v1, 0x23A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586bc) {
            ctx->pc = 0x2586E8u;
            goto label_2586e8;
        }
    }
    ctx->pc = 0x2586C4u;
label_2586c4:
    // 0x2586c4: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x2586c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x2586c8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2586C8u;
    {
        const bool branch_taken_0x2586c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2586CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586C8u;
        // 0x2586cc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586c8) {
            ctx->pc = 0x2586FCu;
            goto label_2586fc;
        }
    }
    ctx->pc = 0x2586D0u;
    // 0x2586d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2586D0u;
    {
        const bool branch_taken_0x2586d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586D0u;
        // 0x2586d4: 0x8c4323a0  lw          $v1, 0x23A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586d0) {
            ctx->pc = 0x2586E8u;
            goto label_2586e8;
        }
    }
    ctx->pc = 0x2586D8u;
label_2586d8:
    // 0x2586d8: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2586d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x2586dc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2586DCu;
    {
        const bool branch_taken_0x2586dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2586E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586DCu;
        // 0x2586e0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586dc) {
            ctx->pc = 0x258750u;
            goto label_258750;
        }
    }
    ctx->pc = 0x2586E4u;
    // 0x2586e4: 0x8c4323a0  lw          $v1, 0x23A0($v0)
    ctx->pc = 0x2586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9120)));
label_2586e8:
    // 0x2586e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2586E8u;
    {
        const bool branch_taken_0x2586e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586E8u;
        // 0x2586ec: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586e8) {
            ctx->pc = 0x258744u;
            goto label_258744;
        }
    }
    ctx->pc = 0x2586F0u;
label_2586f0:
    // 0x2586f0: 0x8c432e64  lw          $v1, 0x2E64($v0)
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11876)));
    // 0x2586f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2586F4u;
    {
        const bool branch_taken_0x2586f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586F4u;
        // 0x2586f8: 0x8c442e68  lw          $a0, 0x2E68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586f4) {
            ctx->pc = 0x258744u;
            goto label_258744;
        }
    }
    ctx->pc = 0x2586FCu;
label_2586fc:
    // 0x2586fc: 0x8c4331bc  lw          $v1, 0x31BC($v0)
    ctx->pc = 0x2586fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x258700: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x258700u;
    {
        const bool branch_taken_0x258700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258700u;
        // 0x258704: 0x8c4431c0  lw          $a0, 0x31C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258700) {
            ctx->pc = 0x258744u;
            goto label_258744;
        }
    }
    ctx->pc = 0x258708u;
label_258708:
    // 0x258708: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x258708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25870c: 0x8e070740  lw          $a3, 0x740($s0)
    ctx->pc = 0x25870cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x258710: 0x8c433390  lw          $v1, 0x3390($v0)
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13200)));
    // 0x258714: 0x8c443394  lw          $a0, 0x3394($v0)
    ctx->pc = 0x258714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13204)));
    // 0x258718: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25871c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x25871Cu;
    {
        const bool branch_taken_0x25871c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25871Cu;
        // 0x258720: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25871c) {
            ctx->pc = 0x25879Cu;
            goto label_25879c;
        }
    }
    ctx->pc = 0x258724u;
    // 0x258724: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258728: 0xc09f6fe  jal         func_27DBF8
    ctx->pc = 0x258728u;
    SET_GPR_U32(ctx, 31, 0x258730u);
    ctx->pc = 0x25872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258728u;
    // 0x25872c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DBF8u, 0x258728u, 0x258730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258730u;
label_258730:
    // 0x258730: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x258730u;
    {
        const bool branch_taken_0x258730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258730) {
            ctx->pc = 0x25879Cu;
            goto label_25879c;
        }
    }
    ctx->pc = 0x258738u;
label_258738:
    // 0x258738: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x258738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25873c: 0x8c433ac4  lw          $v1, 0x3AC4($v0)
    ctx->pc = 0x25873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15044)));
    // 0x258740: 0x8c443ac8  lw          $a0, 0x3AC8($v0)
    ctx->pc = 0x258740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15048)));
label_258744:
    // 0x258744: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258748: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x258748u;
    {
        const bool branch_taken_0x258748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258748u;
        // 0x25874c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258748) {
            ctx->pc = 0x25879Cu;
            goto label_25879c;
        }
    }
    ctx->pc = 0x258750u;
label_258750:
    // 0x258750: 0x8e070748  lw          $a3, 0x748($s0)
    ctx->pc = 0x258750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x258754: 0x8c433e0c  lw          $v1, 0x3E0C($v0)
    ctx->pc = 0x258754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15884)));
    // 0x258758: 0x8c443e10  lw          $a0, 0x3E10($v0)
    ctx->pc = 0x258758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15888)));
    // 0x25875c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258760: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x258760u;
    {
        const bool branch_taken_0x258760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258760u;
        // 0x258764: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258760) {
            ctx->pc = 0x258774u;
            goto label_258774;
        }
    }
    ctx->pc = 0x258768u;
    // 0x258768: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25876c: 0xc0a0540  jal         func_281500
    ctx->pc = 0x25876Cu;
    SET_GPR_U32(ctx, 31, 0x258774u);
    ctx->pc = 0x258770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25876Cu;
    // 0x258770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281500u, 0x25876Cu, 0x258774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258774u;
label_258774:
    // 0x258774: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x258774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x258778: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x258778u;
    {
        const bool branch_taken_0x258778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x258778) {
            ctx->pc = 0x25877Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258778u;
            // 0x25877c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25878Cu;
            goto label_25878c;
        }
    }
    ctx->pc = 0x258780u;
    // 0x258780: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x258780u;
    SET_GPR_U32(ctx, 31, 0x258788u);
    ctx->pc = 0x258784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258780u;
    // 0x258784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x258780u, 0x258788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258788u;
label_258788:
    // 0x258788: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x258788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25878c:
    // 0x25878c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25878Cu;
    {
        const bool branch_taken_0x25878c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25878c) {
            ctx->pc = 0x25879Cu;
            goto label_25879c;
        }
    }
    ctx->pc = 0x258794u;
    // 0x258794: 0xc0a0cf6  jal         func_2833D8
    ctx->pc = 0x258794u;
    SET_GPR_U32(ctx, 31, 0x25879Cu);
    ctx->pc = 0x258798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258794u;
    // 0x258798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833D8u, 0x258794u, 0x25879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25879Cu;
label_25879c:
    // 0x25879c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25879Cu;
    SET_GPR_U32(ctx, 31, 0x2587A4u);
    ctx->pc = 0x2587A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25879Cu;
    // 0x2587a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25879Cu, 0x2587A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587A4u;
label_2587a4:
    // 0x2587a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2587a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2587a8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2587a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2587ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2587acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2587b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2587b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2587bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2587BCu;
    SET_GPR_U32(ctx, 31, 0x2587C4u);
    ctx->pc = 0x2587C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587BCu;
    // 0x2587c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2587BCu, 0x2587C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587C4u;
label_2587c4:
    // 0x2587c4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2587c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2587c8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2587c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2587cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2587ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2587d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2587d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2587d4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2587d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2587d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2587d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2587dc:
    // 0x2587dc: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x2587dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2587e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2587e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2587e4: 0x0  nop
    ctx->pc = 0x2587e4u;
    // NOP
    // 0x2587e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2587e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2587ec: 0x0  nop
    ctx->pc = 0x2587ecu;
    // NOP
    // 0x2587f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2587F0u;
    {
        const bool branch_taken_0x2587f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2587F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587F0u;
        // 0x2587f4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587f0) {
            ctx->pc = 0x258810u;
            goto label_258810;
        }
    }
    ctx->pc = 0x2587F8u;
    // 0x2587f8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2587f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2587fc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2587fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x258800: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x258800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x258804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x258808: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x258808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x25880c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x25880cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_258810:
    // 0x258810: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258810u;
    SET_GPR_U32(ctx, 31, 0x258818u);
    ctx->pc = 0x258814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258810u;
    // 0x258814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258810u, 0x258818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258818u;
label_258818:
    // 0x258818: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x258818u;
    {
        const bool branch_taken_0x258818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258818u;
        // 0x25881c: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258818) {
            ctx->pc = 0x258B40u;
            goto label_258b40;
        }
    }
    ctx->pc = 0x258820u;
    // 0x258820: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x258820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x258824: 0x1062009e  beq         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x258824u;
    {
        const bool branch_taken_0x258824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258824u;
        // 0x258828: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258824) {
            ctx->pc = 0x258AA0u;
            goto label_258aa0;
        }
    }
    ctx->pc = 0x25882Cu;
    // 0x25882c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x25882Cu;
    {
        const bool branch_taken_0x25882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25882Cu;
        // 0x258830: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25882c) {
            ctx->pc = 0x258B40u;
            goto label_258b40;
        }
    }
    ctx->pc = 0x258834u;
label_258834:
    // 0x258834: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258834u;
    SET_GPR_U32(ctx, 31, 0x25883Cu);
    ctx->pc = 0x258838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258834u;
    // 0x258838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258834u, 0x25883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25883Cu;
label_25883c:
    // 0x25883c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x25883cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258840: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x258840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x258844: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x258844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x258848: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x258848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x25884c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25884Cu;
    {
        const bool branch_taken_0x25884c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25884Cu;
        // 0x258850: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25884c) {
            ctx->pc = 0x25886Cu;
            goto label_25886c;
        }
    }
    ctx->pc = 0x258854u;
    // 0x258854: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x258854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x258858: 0x24422860  addiu       $v0, $v0, 0x2860
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10336));
    // 0x25885c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258860: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258864: 0x800008  jr          $a0
    ctx->pc = 0x258864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25886Cu: goto label_25886c;
            case 0x25887Cu: goto label_25887c;
            case 0x25888Cu: goto label_25888c;
            case 0x25889Cu: goto label_25889c;
            case 0x2588ACu: goto label_2588ac;
            case 0x2588BCu: goto label_2588bc;
            case 0x2588CCu: goto label_2588cc;
            case 0x2588DCu: goto label_2588dc;
            case 0x2588ECu: goto label_2588ec;
            case 0x2588FCu: goto label_2588fc;
            case 0x25890Cu: goto label_25890c;
            case 0x25891Cu: goto label_25891c;
            case 0x25892Cu: goto label_25892c;
            case 0x25893Cu: goto label_25893c;
            case 0x25894Cu: goto label_25894c;
            case 0x25895Cu: goto label_25895c;
            case 0x25896Cu: goto label_25896c;
            case 0x25899Cu: goto label_25899c;
            case 0x2589ACu: goto label_2589ac;
            case 0x2589BCu: goto label_2589bc;
            case 0x2589CCu: goto label_2589cc;
            case 0x2589DCu: goto label_2589dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25886Cu;
label_25886c:
    // 0x25886c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258870: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x258870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x258874: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x258874u;
    {
        const bool branch_taken_0x258874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258874u;
        // 0x258878: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258874) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258880: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x258880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x258884: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x258884u;
    {
        const bool branch_taken_0x258884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258884u;
        // 0x258888: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258884) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25888Cu;
label_25888c:
    // 0x25888c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258890: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x258890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x258894: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x258894u;
    {
        const bool branch_taken_0x258894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258894u;
        // 0x258898: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258894) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25889Cu;
label_25889c:
    // 0x25889c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588a0: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x2588a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x2588a4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2588A4u;
    {
        const bool branch_taken_0x2588a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588A4u;
        // 0x2588a8: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588a4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588ACu;
label_2588ac:
    // 0x2588ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588b0: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x2588b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x2588b4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2588B4u;
    {
        const bool branch_taken_0x2588b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B4u;
        // 0x2588b8: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588b4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588BCu;
label_2588bc:
    // 0x2588bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588c0: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x2588c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x2588c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2588C4u;
    {
        const bool branch_taken_0x2588c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588C4u;
        // 0x2588c8: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588c4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588CCu;
label_2588cc:
    // 0x2588cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588d0: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x2588d4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2588D4u;
    {
        const bool branch_taken_0x2588d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588D4u;
        // 0x2588d8: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588d4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588DCu;
label_2588dc:
    // 0x2588dc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588e0: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x2588e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x2588e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2588E4u;
    {
        const bool branch_taken_0x2588e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588E4u;
        // 0x2588e8: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588e4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588ECu;
label_2588ec:
    // 0x2588ec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2588f0: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x2588f4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2588F4u;
    {
        const bool branch_taken_0x2588f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588F4u;
        // 0x2588f8: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588f4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2588FCu;
label_2588fc:
    // 0x2588fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2588fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258900: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x258900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x258904: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x258904u;
    {
        const bool branch_taken_0x258904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258904u;
        // 0x258908: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258904) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25890Cu;
label_25890c:
    // 0x25890c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258910: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x258910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x258914: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x258914u;
    {
        const bool branch_taken_0x258914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258914u;
        // 0x258918: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258914) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25891Cu;
label_25891c:
    // 0x25891c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258920: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x258920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x258924: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x258924u;
    {
        const bool branch_taken_0x258924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258924u;
        // 0x258928: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258924) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25892Cu;
label_25892c:
    // 0x25892c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258930: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x258934: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x258934u;
    {
        const bool branch_taken_0x258934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258934u;
        // 0x258938: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258934) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25893Cu;
label_25893c:
    // 0x25893c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258940: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x258940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x258944: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x258944u;
    {
        const bool branch_taken_0x258944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258944u;
        // 0x258948: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258944) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25894Cu;
label_25894c:
    // 0x25894c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258950: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x258954: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x258954u;
    {
        const bool branch_taken_0x258954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258954u;
        // 0x258958: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258954) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25895Cu;
label_25895c:
    // 0x25895c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258960: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x258964: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x258964u;
    {
        const bool branch_taken_0x258964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258964u;
        // 0x258968: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258964) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x25896Cu;
label_25896c:
    // 0x25896c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258970: 0x8e070744  lw          $a3, 0x744($s0)
    ctx->pc = 0x258970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x258974: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x258974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x258978: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x25897c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25897cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258980: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x258980u;
    {
        const bool branch_taken_0x258980 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258980u;
        // 0x258984: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258980) {
            ctx->pc = 0x2589F0u;
            goto label_2589f0;
        }
    }
    ctx->pc = 0x258988u;
    // 0x258988: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25898c: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x25898Cu;
    SET_GPR_U32(ctx, 31, 0x258994u);
    ctx->pc = 0x258990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25898Cu;
    // 0x258990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x25898Cu, 0x258994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258994u;
label_258994:
    // 0x258994: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x258994u;
    {
        const bool branch_taken_0x258994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258994u;
        // 0x258998: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258994) {
            ctx->pc = 0x2589F4u;
            goto label_2589f4;
        }
    }
    ctx->pc = 0x25899Cu;
label_25899c:
    // 0x25899c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2589a0: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x2589a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x2589a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2589A4u;
    {
        const bool branch_taken_0x2589a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589A4u;
        // 0x2589a8: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589a4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589ACu;
label_2589ac:
    // 0x2589ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2589acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2589b0: 0x8c43244c  lw          $v1, 0x244C($v0)
    ctx->pc = 0x2589b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9292)));
    // 0x2589b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2589B4u;
    {
        const bool branch_taken_0x2589b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589B4u;
        // 0x2589b8: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589b4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589BCu;
label_2589bc:
    // 0x2589bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2589bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2589c0: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x2589c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x2589c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2589C4u;
    {
        const bool branch_taken_0x2589c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589C4u;
        // 0x2589c8: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589c4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589CCu;
label_2589cc:
    // 0x2589cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2589ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2589d0: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x2589d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x2589d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2589D4u;
    {
        const bool branch_taken_0x2589d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589D4u;
        // 0x2589d8: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589d4) {
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589DCu;
label_2589dc:
    // 0x2589dc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2589dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2589e0: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x2589e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x2589e4: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x2589e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_2589e8:
    // 0x2589e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2589e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2589ec: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2589ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2589f0:
    // 0x2589f0: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x2589f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
label_2589f4:
    // 0x2589f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2589F4u;
    {
        const bool branch_taken_0x2589f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2589f4) {
            ctx->pc = 0x258A10u;
            goto label_258a10;
        }
    }
    ctx->pc = 0x2589FCu;
    // 0x2589fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258a00: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x258a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x258a04: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x258a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x258a08: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258a0c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x258a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_258a10:
    // 0x258a10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258a14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a1c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x258a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a24: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x258a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x258a28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258A28u;
    SET_GPR_U32(ctx, 31, 0x258A30u);
    ctx->pc = 0x258A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A28u;
    // 0x258a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258A28u, 0x258A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A30u;
label_258a30:
    // 0x258a30: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258a34: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x258a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258a3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258a40: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x258a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x258a44: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258a48:
    // 0x258a48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258a4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x258a50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258A50u;
    SET_GPR_U32(ctx, 31, 0x258A58u);
    ctx->pc = 0x258A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A50u;
    // 0x258a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258A50u, 0x258A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A58u;
label_258a58:
    // 0x258a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a5c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258A5Cu;
    SET_GPR_U32(ctx, 31, 0x258A64u);
    ctx->pc = 0x258A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A5Cu;
    // 0x258a60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258A5Cu, 0x258A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A64u;
label_258a64:
    // 0x258a64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x258a64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258a68: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x258A68u;
    SET_GPR_U32(ctx, 31, 0x258A70u);
    ctx->pc = 0x258A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A68u;
    // 0x258a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x258A68u, 0x258A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A70u;
label_258a70:
    // 0x258a70: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x258a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a74: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x258a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258a78: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x258a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x258a7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x258a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x258a80: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x258a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258a84: 0x0  nop
    ctx->pc = 0x258a84u;
    // NOP
    // 0x258a88: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x258A88u;
    {
        const bool branch_taken_0x258a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A88u;
        // 0x258a8c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a88) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258A90u;
    // 0x258a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a98: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x258A98u;
    SET_GPR_U32(ctx, 31, 0x258AA0u);
    ctx->pc = 0x258A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A98u;
    // 0x258a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x258A98u, 0x258AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AA0u;
label_258aa0:
    // 0x258aa0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x258AA0u;
    SET_GPR_U32(ctx, 31, 0x258AA8u);
    ctx->pc = 0x258AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AA0u;
    // 0x258aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x258AA0u, 0x258AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AA8u;
label_258aa8:
    // 0x258aa8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x258AA8u;
    {
        const bool branch_taken_0x258aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258aa8) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258AB0u;
label_258ab0:
    // 0x258ab0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ab8: 0x8c433978  lw          $v1, 0x3978($v0)
    ctx->pc = 0x258ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14712)));
    // 0x258abc: 0x8c45397c  lw          $a1, 0x397C($v0)
    ctx->pc = 0x258abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14716)));
    // 0x258ac0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258ac4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258AC4u;
    SET_GPR_U32(ctx, 31, 0x258ACCu);
    ctx->pc = 0x258AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AC4u;
    // 0x258ac8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258AC4u, 0x258ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258ACCu;
label_258acc:
    // 0x258acc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258ad0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x258ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ae0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x258ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258ae4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258AE4u;
    SET_GPR_U32(ctx, 31, 0x258AECu);
    ctx->pc = 0x258AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AE4u;
    // 0x258ae8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258AE4u, 0x258AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AECu;
label_258aec:
    // 0x258aec: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x258aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x258af0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x258af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x258af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x258af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258afc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x258afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x258b00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258b04: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x258b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x258b08: 0xc0c1880  jal         func_306200
    ctx->pc = 0x258B08u;
    SET_GPR_U32(ctx, 31, 0x258B10u);
    ctx->pc = 0x258B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B08u;
    // 0x258b0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x258B08u, 0x258B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B10u;
label_258b10:
    // 0x258b10: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258b14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258b18: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258b1c:
    // 0x258b1c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x258b20: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x258b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x258b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x258b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x258b2c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258B2Cu;
    SET_GPR_U32(ctx, 31, 0x258B34u);
    ctx->pc = 0x258B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B2Cu;
    // 0x258b30: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258B2Cu, 0x258B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B34u;
label_258b34:
    // 0x258b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258B34u;
    {
        const bool branch_taken_0x258b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B34u;
        // 0x258b38: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b34) {
            ctx->pc = 0x258B40u;
            goto label_258b40;
        }
    }
    ctx->pc = 0x258B3Cu;
label_258b3c:
    // 0x258b3c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258b40:
    // 0x258b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x258b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b4c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258B4Cu;
    SET_GPR_U32(ctx, 31, 0x258B54u);
    ctx->pc = 0x258B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B4Cu;
    // 0x258b50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258B4Cu, 0x258B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x258b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258b58: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x258B58u;
    SET_GPR_U32(ctx, 31, 0x258B60u);
    ctx->pc = 0x258B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B58u;
    // 0x258b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x258B58u, 0x258B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B60u;
label_258b60:
    // 0x258b60: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x258B60u;
    {
        const bool branch_taken_0x258b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b60) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258B68u;
label_258b68:
    // 0x258b68: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x258b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x258b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b70: 0x8c433980  lw          $v1, 0x3980($v0)
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14720)));
    // 0x258b74: 0x8c453984  lw          $a1, 0x3984($v0)
    ctx->pc = 0x258b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14724)));
    // 0x258b78: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258b7c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258B7Cu;
    SET_GPR_U32(ctx, 31, 0x258B84u);
    ctx->pc = 0x258B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B7Cu;
    // 0x258b80: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258B7Cu, 0x258B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B84u;
label_258b84:
    // 0x258b84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258b88: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x258b88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b98: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258b9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258B9Cu;
    SET_GPR_U32(ctx, 31, 0x258BA4u);
    ctx->pc = 0x258BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B9Cu;
    // 0x258ba0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258B9Cu, 0x258BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BA4u;
label_258ba4:
    // 0x258ba4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258bac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258bb0:
    // 0x258bb0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258BB0u;
    SET_GPR_U32(ctx, 31, 0x258BB8u);
    ctx->pc = 0x258BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BB0u;
    // 0x258bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258BB0u, 0x258BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BB8u;
label_258bb8:
    // 0x258bb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258BB8u;
    {
        const bool branch_taken_0x258bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258bb8) {
            ctx->pc = 0x258BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258BB8u;
            // 0x258bbc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258BC0u;
            goto label_258bc0;
        }
    }
    ctx->pc = 0x258BC0u;
label_258bc0:
    // 0x258bc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x258bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258bcc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258BCCu;
    SET_GPR_U32(ctx, 31, 0x258BD4u);
    ctx->pc = 0x258BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BCCu;
    // 0x258bd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258BCCu, 0x258BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BD4u;
label_258bd4:
    // 0x258bd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x258bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258bd8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x258BD8u;
    SET_GPR_U32(ctx, 31, 0x258BE0u);
    ctx->pc = 0x258BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BD8u;
    // 0x258bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x258BD8u, 0x258BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BE0u;
label_258be0:
    // 0x258be0: 0xc09d054  jal         func_274150
    ctx->pc = 0x258BE0u;
    SET_GPR_U32(ctx, 31, 0x258BE8u);
    ctx->pc = 0x258BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BE0u;
    // 0x258be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274150u, 0x258BE0u, 0x258BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BE8u;
label_258be8:
    // 0x258be8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258BE8u;
    {
        const bool branch_taken_0x258be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BE8u;
        // 0x258bec: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258be8) {
            ctx->pc = 0x258C0Cu;
            goto label_258c0c;
        }
    }
    ctx->pc = 0x258BF0u;
    // 0x258bf0: 0xc6011734  lwc1        $f1, 0x1734($s0)
    ctx->pc = 0x258bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x258bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258bf8: 0x0  nop
    ctx->pc = 0x258bf8u;
    // NOP
    // 0x258bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x258bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258c00: 0x0  nop
    ctx->pc = 0x258c00u;
    // NOP
    // 0x258c04: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x258C04u;
    {
        const bool branch_taken_0x258c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258c04) {
            ctx->pc = 0x258C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258C04u;
            // 0x258c08: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258C20u;
            goto label_258c20;
        }
    }
    ctx->pc = 0x258C0Cu;
label_258c0c:
    // 0x258c0c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x258c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x258c10: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x258c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x258c14: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x258c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x258c18: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x258c18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x258c1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x258c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258c20:
    // 0x258c20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x258c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258c24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258c28: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x258c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258c30: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x258c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258c34: 0x3e00008  jr          $ra
    ctx->pc = 0x258C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C34u;
        // 0x258c38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258C3Cu;
    // 0x258c3c: 0x0  nop
    ctx->pc = 0x258c3cu;
    // NOP
    ctx->pc = 0x258c40u;
}
