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

// Function: func_0024B218
// Address: 0x24b218 - 0x24b3d0
void func_0024B218_0x24b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024B218_0x24b218");
#endif

    switch (ctx->pc) {
        case 0x24b274u: goto label_24b274;
        case 0x24b298u: goto label_24b298;
        case 0x24b2bcu: goto label_24b2bc;
        case 0x24b2d0u: goto label_24b2d0;
        case 0x24b2e4u: goto label_24b2e4;
        case 0x24b2fcu: goto label_24b2fc;
        case 0x24b310u: goto label_24b310;
        case 0x24b324u: goto label_24b324;
        case 0x24b344u: goto label_24b344;
        case 0x24b358u: goto label_24b358;
        case 0x24b384u: goto label_24b384;
        case 0x24b390u: goto label_24b390;
        case 0x24b3acu: goto label_24b3ac;
        default: break;
    }

    ctx->pc = 0x24b218u;

    // 0x24b218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24b21c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24b220: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24b224: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24b228: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x24b22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24b234: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x24b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x24b238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b23c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x24b23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24b240: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24b244: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24b244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24b248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b24c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B24Cu;
    {
        const bool branch_taken_0x24b24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B24Cu;
        // 0x24b250: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b24c) {
            ctx->pc = 0x24B268u;
            goto label_24b268;
        }
    }
    ctx->pc = 0x24B254u;
    // 0x24b254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b258: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24B258u;
    {
        const bool branch_taken_0x24b258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b258) {
            ctx->pc = 0x24B350u;
            goto label_24b350;
        }
    }
    ctx->pc = 0x24B260u;
    // 0x24b260: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x24B260u;
    {
        const bool branch_taken_0x24b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B260u;
        // 0x24b264: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b260) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B268u;
label_24b268:
    // 0x24b268: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24b268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b26c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B26Cu;
    SET_GPR_U32(ctx, 31, 0x24B274u);
    ctx->pc = 0x24B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B26Cu;
    // 0x24b270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B26Cu, 0x24B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B274u;
label_24b274:
    // 0x24b274: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x24b274u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b278: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24b27c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b280: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x24b284: 0x8c433da8  lw          $v1, 0x3DA8($v0)
    ctx->pc = 0x24b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15784)));
    // 0x24b288: 0x8c453da4  lw          $a1, 0x3DA4($v0)
    ctx->pc = 0x24b288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15780)));
    // 0x24b28c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x24b28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b290: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B290u;
    SET_GPR_U32(ctx, 31, 0x24B298u);
    ctx->pc = 0x24B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B290u;
    // 0x24b294: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B290u, 0x24B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B298u;
label_24b298:
    // 0x24b298: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24b29c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24B29Cu;
    {
        const bool branch_taken_0x24b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B29Cu;
        // 0x24b2a0: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b29c) {
            ctx->pc = 0x24B2ECu;
            goto label_24b2ec;
        }
    }
    ctx->pc = 0x24B2A4u;
    // 0x24b2a4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b2a8: 0x8c623dac  lw          $v0, 0x3DAC($v1)
    ctx->pc = 0x24b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15788)));
    // 0x24b2ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B2ACu;
    {
        const bool branch_taken_0x24b2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2ACu;
        // 0x24b2b0: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2ac) {
            ctx->pc = 0x24B2BCu;
            goto label_24b2bc;
        }
    }
    ctx->pc = 0x24B2B4u;
    // 0x24b2b4: 0xc0a04f0  jal         func_2813C0
    ctx->pc = 0x24B2B4u;
    SET_GPR_U32(ctx, 31, 0x24B2BCu);
    ctx->pc = 0x24B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2B4u;
    // 0x24b2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x24B2B4u, 0x24B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2BCu;
label_24b2bc:
    // 0x24b2bc: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24b2c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B2C0u;
    {
        const bool branch_taken_0x24b2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2c0) {
            ctx->pc = 0x24B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2C0u;
            // 0x24b2c4: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B2D4u;
            goto label_24b2d4;
        }
    }
    ctx->pc = 0x24B2C8u;
    // 0x24b2c8: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x24B2C8u;
    SET_GPR_U32(ctx, 31, 0x24B2D0u);
    ctx->pc = 0x24B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2C8u;
    // 0x24b2cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283270u, 0x24B2C8u, 0x24B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2D0u;
label_24b2d0:
    // 0x24b2d0: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b2d4:
    // 0x24b2d4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24B2D4u;
    {
        const bool branch_taken_0x24b2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2d4) {
            ctx->pc = 0x24B324u;
            goto label_24b324;
        }
    }
    ctx->pc = 0x24B2DCu;
    // 0x24b2dc: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24B2DCu;
    SET_GPR_U32(ctx, 31, 0x24B2E4u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24B2DCu, 0x24B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2E4u;
label_24b2e4:
    // 0x24b2e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24B2E4u;
    {
        const bool branch_taken_0x24b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2e4) {
            ctx->pc = 0x24B324u;
            goto label_24b324;
        }
    }
    ctx->pc = 0x24B2ECu;
label_24b2ec:
    // 0x24b2ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B2ECu;
    {
        const bool branch_taken_0x24b2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2ec) {
            ctx->pc = 0x24B2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2ECu;
            // 0x24b2f0: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B300u;
            goto label_24b300;
        }
    }
    ctx->pc = 0x24B2F4u;
    // 0x24b2f4: 0xc0a04f0  jal         func_2813C0
    ctx->pc = 0x24B2F4u;
    SET_GPR_U32(ctx, 31, 0x24B2FCu);
    ctx->pc = 0x24B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2F4u;
    // 0x24b2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x24B2F4u, 0x24B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2FCu;
label_24b2fc:
    // 0x24b2fc: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24b300:
    // 0x24b300: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B300u;
    {
        const bool branch_taken_0x24b300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b300) {
            ctx->pc = 0x24B304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B300u;
            // 0x24b304: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B308u;
    // 0x24b308: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x24B308u;
    SET_GPR_U32(ctx, 31, 0x24B310u);
    ctx->pc = 0x24B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B308u;
    // 0x24b30c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283270u, 0x24B308u, 0x24B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B310u;
label_24b310:
    // 0x24b310: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b314:
    // 0x24b314: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B314u;
    {
        const bool branch_taken_0x24b314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b314) {
            ctx->pc = 0x24B324u;
            goto label_24b324;
        }
    }
    ctx->pc = 0x24B31Cu;
    // 0x24b31c: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24B31Cu;
    SET_GPR_U32(ctx, 31, 0x24B324u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24B31Cu, 0x24B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B324u;
label_24b324:
    // 0x24b324: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b32c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b330: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24b330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b338: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b33c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B33Cu;
    SET_GPR_U32(ctx, 31, 0x24B344u);
    ctx->pc = 0x24B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B33Cu;
    // 0x24b340: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B33Cu, 0x24B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B344u;
label_24b344:
    // 0x24b344: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24b344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24b348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b34c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24b350:
    // 0x24b350: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24B350u;
    SET_GPR_U32(ctx, 31, 0x24B358u);
    ctx->pc = 0x24B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B350u;
    // 0x24b354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24B350u, 0x24B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B358u;
label_24b358:
    // 0x24b358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B358u;
    {
        const bool branch_taken_0x24b358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B358u;
        // 0x24b35c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b358) {
            ctx->pc = 0x24B370u;
            goto label_24b370;
        }
    }
    ctx->pc = 0x24B360u;
    // 0x24b360: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24b360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b364: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24b364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b368: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b36c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24b36cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24b370:
    // 0x24b370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b374: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b37c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24B37Cu;
    SET_GPR_U32(ctx, 31, 0x24B384u);
    ctx->pc = 0x24B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B37Cu;
    // 0x24b380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24B37Cu, 0x24B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B384u;
label_24b384:
    // 0x24b384: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b388: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24B388u;
    SET_GPR_U32(ctx, 31, 0x24B390u);
    ctx->pc = 0x24B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B388u;
    // 0x24b38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24B388u, 0x24B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B390u;
label_24b390:
    // 0x24b390: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24b390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24b394:
    // 0x24b394: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B398u;
    {
        const bool branch_taken_0x24b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B398u;
        // 0x24b39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b398) {
            ctx->pc = 0x24B3ACu;
            goto label_24b3ac;
        }
    }
    ctx->pc = 0x24B3A0u;
    // 0x24b3a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b3a4: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24B3A4u;
    SET_GPR_U32(ctx, 31, 0x24B3ACu);
    ctx->pc = 0x24B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B3A4u;
    // 0x24b3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24B3A4u, 0x24B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3ACu;
label_24b3ac:
    // 0x24b3ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24b3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b3b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24b3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b3b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x24b3b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b3c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x24b3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3C4u;
        // 0x24b3c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B3CCu;
    // 0x24b3cc: 0x0  nop
    ctx->pc = 0x24b3ccu;
    // NOP
    ctx->pc = 0x24b3d0u;
}
