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

// Function: ColiseumBattle_DefeatAllEnemies
// Address: 0x1ef978 - 0x1efa50
void ColiseumBattle_DefeatAllEnemies_0x1ef978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_DefeatAllEnemies_0x1ef978");
#endif

    switch (ctx->pc) {
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef980u: goto label_1ef980;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef98cu: goto label_1ef98c;
        case 0x1ef990u: goto label_1ef990;
        case 0x1ef994u: goto label_1ef994;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9a4u: goto label_1ef9a4;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b0u: goto label_1ef9b0;
        case 0x1ef9b4u: goto label_1ef9b4;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9bcu: goto label_1ef9bc;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9c8u: goto label_1ef9c8;
        case 0x1ef9ccu: goto label_1ef9cc;
        case 0x1ef9d0u: goto label_1ef9d0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9d8u: goto label_1ef9d8;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1ef9f0u: goto label_1ef9f0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1ef9f8u: goto label_1ef9f8;
        case 0x1ef9fcu: goto label_1ef9fc;
        case 0x1efa00u: goto label_1efa00;
        case 0x1efa04u: goto label_1efa04;
        case 0x1efa08u: goto label_1efa08;
        case 0x1efa0cu: goto label_1efa0c;
        case 0x1efa10u: goto label_1efa10;
        case 0x1efa14u: goto label_1efa14;
        case 0x1efa18u: goto label_1efa18;
        case 0x1efa1cu: goto label_1efa1c;
        case 0x1efa20u: goto label_1efa20;
        case 0x1efa24u: goto label_1efa24;
        case 0x1efa28u: goto label_1efa28;
        case 0x1efa2cu: goto label_1efa2c;
        case 0x1efa30u: goto label_1efa30;
        case 0x1efa34u: goto label_1efa34;
        case 0x1efa38u: goto label_1efa38;
        case 0x1efa3cu: goto label_1efa3c;
        case 0x1efa40u: goto label_1efa40;
        case 0x1efa44u: goto label_1efa44;
        case 0x1efa48u: goto label_1efa48;
        case 0x1efa4cu: goto label_1efa4c;
        default: break;
    }

    ctx->pc = 0x1ef978u;

label_1ef978:
    // 0x1ef978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ef97c:
    // 0x1ef97c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1ef97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1ef980:
    // 0x1ef980: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ef980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1ef984:
    // 0x1ef984: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ef984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ef988:
    // 0x1ef988: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ef988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef98c:
    // 0x1ef98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef990:
    // 0x1ef990: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_1ef994:
    // 0x1ef994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ef998:
    // 0x1ef998: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ef99c:
    // 0x1ef99c: 0x8c510500  lw          $s1, 0x500($v0)
    ctx->pc = 0x1ef99cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
label_1ef9a0:
    // 0x1ef9a0: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_1ef9a4:
    if (ctx->pc == 0x1EF9A4u) {
        ctx->pc = 0x1EF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9A0u;
        // 0x1ef9a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9A8u;
        goto label_1ef9a8;
    }
    ctx->pc = 0x1EF9A0u;
    {
        const bool branch_taken_0x1ef9a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9A0u;
        // 0x1ef9a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9a0) {
            ctx->pc = 0x1EFA28u;
            goto label_1efa28;
        }
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef9ac:
    // 0x1ef9ac: 0x0  nop
    ctx->pc = 0x1ef9acu;
    // NOP
label_1ef9b0:
    // 0x1ef9b0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1ef9b4:
    if (ctx->pc == 0x1EF9B4u) {
        ctx->pc = 0x1EF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9B0u;
        // 0x1ef9b4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9B8u;
        goto label_1ef9b8;
    }
    ctx->pc = 0x1EF9B0u;
    {
        const bool branch_taken_0x1ef9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9b0) {
            ctx->pc = 0x1EF9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF9B0u;
            // 0x1ef9b4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA20u;
            goto label_1efa20;
        }
    }
    ctx->pc = 0x1EF9B8u;
label_1ef9b8:
    // 0x1ef9b8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1ef9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1ef9bc:
    // 0x1ef9bc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1ef9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1ef9c0:
    // 0x1ef9c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ef9c4:
    if (ctx->pc == 0x1EF9C4u) {
        ctx->pc = 0x1EF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9C0u;
        // 0x1ef9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9C8u;
        goto label_1ef9c8;
    }
    ctx->pc = 0x1EF9C0u;
    {
        const bool branch_taken_0x1ef9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9C0u;
        // 0x1ef9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9c0) {
            ctx->pc = 0x1EF9D0u;
            goto label_1ef9d0;
        }
    }
    ctx->pc = 0x1EF9C8u;
label_1ef9c8:
    // 0x1ef9c8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1ef9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1ef9cc:
    // 0x1ef9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9d0:
    // 0x1ef9d0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ef9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ef9d4:
    // 0x1ef9d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ef9d8:
    if (ctx->pc == 0x1EF9D8u) {
        ctx->pc = 0x1EF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9D4u;
        // 0x1ef9d8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9DCu;
        goto label_1ef9dc;
    }
    ctx->pc = 0x1EF9D4u;
    {
        const bool branch_taken_0x1ef9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9D4u;
        // 0x1ef9d8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9d4) {
            ctx->pc = 0x1EFA1Cu;
            goto label_1efa1c;
        }
    }
    ctx->pc = 0x1EF9DCu;
label_1ef9dc:
    // 0x1ef9dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ef9e0:
    if (ctx->pc == 0x1EF9E0u) {
        ctx->pc = 0x1EF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9DCu;
        // 0x1ef9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9E4u;
        goto label_1ef9e4;
    }
    ctx->pc = 0x1EF9DCu;
    {
        const bool branch_taken_0x1ef9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9DCu;
        // 0x1ef9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9dc) {
            ctx->pc = 0x1EF9ECu;
            goto label_1ef9ec;
        }
    }
    ctx->pc = 0x1EF9E4u;
label_1ef9e4:
    // 0x1ef9e4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1ef9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1ef9e8:
    // 0x1ef9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9ec:
    // 0x1ef9ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ef9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ef9f0:
    // 0x1ef9f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1ef9f4:
    if (ctx->pc == 0x1EF9F4u) {
        ctx->pc = 0x1EF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9F0u;
        // 0x1ef9f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9F8u;
        goto label_1ef9f8;
    }
    ctx->pc = 0x1EF9F0u;
    {
        const bool branch_taken_0x1ef9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9f0) {
            ctx->pc = 0x1EF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF9F0u;
            // 0x1ef9f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA20u;
            goto label_1efa20;
        }
    }
    ctx->pc = 0x1EF9F8u;
label_1ef9f8:
    // 0x1ef9f8: 0xc0a3ece  jal         func_28FB38
label_1ef9fc:
    if (ctx->pc == 0x1EF9FCu) {
        ctx->pc = 0x1EF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9F8u;
        // 0x1ef9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA00u;
        goto label_1efa00;
    }
    ctx->pc = 0x1EF9F8u;
    SET_GPR_U32(ctx, 31, 0x1EFA00u);
    ctx->pc = 0x1EF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9F8u;
    // 0x1ef9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x1EF9F8u, 0x1EFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA00u;
label_1efa00:
    // 0x1efa00: 0x50520007  beql        $v0, $s2, . + 4 + (0x7 << 2)
label_1efa04:
    if (ctx->pc == 0x1EFA04u) {
        ctx->pc = 0x1EFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA00u;
        // 0x1efa04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA08u;
        goto label_1efa08;
    }
    ctx->pc = 0x1EFA00u;
    {
        const bool branch_taken_0x1efa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1efa00) {
            ctx->pc = 0x1EFA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFA00u;
            // 0x1efa04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA20u;
            goto label_1efa20;
        }
    }
    ctx->pc = 0x1EFA08u;
label_1efa08:
    // 0x1efa08: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1efa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1efa0c:
    // 0x1efa0c: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1efa10:
    // 0x1efa10: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1efa14:
    // 0x1efa14: 0x60f809  jalr        $v1
label_1efa18:
    if (ctx->pc == 0x1EFA18u) {
        ctx->pc = 0x1EFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA14u;
        // 0x1efa18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA1Cu;
        goto label_1efa1c;
    }
    ctx->pc = 0x1EFA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EFA1Cu);
        ctx->pc = 0x1EFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA14u;
        // 0x1efa18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA14u, 0x1EFA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFA1Cu;
label_1efa1c:
    // 0x1efa1c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1efa1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1efa20:
    // 0x1efa20: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
label_1efa24:
    if (ctx->pc == 0x1EFA24u) {
        ctx->pc = 0x1EFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA20u;
        // 0x1efa24: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA28u;
        goto label_1efa28;
    }
    ctx->pc = 0x1EFA20u;
    {
        const bool branch_taken_0x1efa20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efa20) {
            ctx->pc = 0x1EFA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFA20u;
            // 0x1efa24: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef9b0;
        }
    }
    ctx->pc = 0x1EFA28u;
label_1efa28:
    // 0x1efa28: 0x266264f0  addiu       $v0, $s3, 0x64F0
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
label_1efa2c:
    // 0x1efa2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1efa2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efa30:
    // 0x1efa30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1efa30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efa34:
    // 0x1efa34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efa34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efa38:
    // 0x1efa38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1efa38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efa3c:
    // 0x1efa3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efa40:
    // 0x1efa40: 0xa04005b5  sb          $zero, 0x5B5($v0)
    ctx->pc = 0x1efa40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1461), (uint8_t)GPR_U32(ctx, 0));
label_1efa44:
    // 0x1efa44: 0x3e00008  jr          $ra
label_1efa48:
    if (ctx->pc == 0x1EFA48u) {
        ctx->pc = 0x1EFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA44u;
        // 0x1efa48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA4Cu;
        goto label_1efa4c;
    }
    ctx->pc = 0x1EFA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA44u;
        // 0x1efa48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA4Cu;
label_1efa4c:
    // 0x1efa4c: 0x0  nop
    ctx->pc = 0x1efa4cu;
    // NOP
    ctx->pc = 0x1efa50u;
}
