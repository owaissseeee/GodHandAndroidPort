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

// Function: Slot2_introStage
// Address: 0x1e2fd0 - 0x1e3128
void Slot2_introStage_0x1e2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_introStage_0x1e2fd0");
#endif

    switch (ctx->pc) {
        case 0x1e3044u: goto label_1e3044;
        case 0x1e3060u: goto label_1e3060;
        case 0x1e3074u: goto label_1e3074;
        case 0x1e30b8u: goto label_1e30b8;
        case 0x1e30c8u: goto label_1e30c8;
        case 0x1e30d8u: goto label_1e30d8;
        case 0x1e30ecu: goto label_1e30ec;
        case 0x1e3100u: goto label_1e3100;
        default: break;
    }

    ctx->pc = 0x1e2fd0u;

    // 0x1e2fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e2fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fe4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2fe8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2FE8u;
    {
        const bool branch_taken_0x1e2fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE8u;
        // 0x1e2fec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fe8) {
            ctx->pc = 0x1E304Cu;
            goto label_1e304c;
        }
    }
    ctx->pc = 0x1E2FF0u;
    // 0x1e2ff0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2FF0u;
    {
        const bool branch_taken_0x1e2ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ff0) {
            ctx->pc = 0x1E2FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2FF0u;
            // 0x1e2ff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3008u;
            goto label_1e3008;
        }
    }
    ctx->pc = 0x1E2FF8u;
    // 0x1e2ff8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2FF8u;
    {
        const bool branch_taken_0x1e2ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ff8) {
            ctx->pc = 0x1E2FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2FF8u;
            // 0x1e2ffc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3020u;
            goto label_1e3020;
        }
    }
    ctx->pc = 0x1E3000u;
    // 0x1e3000: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1E3000u;
    {
        const bool branch_taken_0x1e3000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3000u;
        // 0x1e3004: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3000) {
            ctx->pc = 0x1E311Cu;
            goto label_1e311c;
        }
    }
    ctx->pc = 0x1E3008u;
label_1e3008:
    // 0x1e3008: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E3008u;
    {
        const bool branch_taken_0x1e3008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3008u;
        // 0x1e300c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3008) {
            ctx->pc = 0x1E3084u;
            goto label_1e3084;
        }
    }
    ctx->pc = 0x1E3010u;
    // 0x1e3010: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1E3010u;
    {
        const bool branch_taken_0x1e3010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3010) {
            ctx->pc = 0x1E3014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3010u;
            // 0x1e3014: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3110u;
            goto label_1e3110;
        }
    }
    ctx->pc = 0x1E3018u;
    // 0x1e3018: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1E3018u;
    {
        const bool branch_taken_0x1e3018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3018u;
        // 0x1e301c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3018) {
            ctx->pc = 0x1E311Cu;
            goto label_1e311c;
        }
    }
    ctx->pc = 0x1E3020u;
label_1e3020:
    // 0x1e3020: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1e3024: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e3028: 0xa60004c2  sh          $zero, 0x4C2($s0)
    ctx->pc = 0x1e3028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1218), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e302c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e3030: 0xae040490  sw          $a0, 0x490($s0)
    ctx->pc = 0x1e3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 4));
    // 0x1e3034: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e3034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1e3038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e303c: 0xc079148  jal         func_1E4520
    ctx->pc = 0x1E303Cu;
    SET_GPR_U32(ctx, 31, 0x1E3044u);
    ctx->pc = 0x1E3040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E303Cu;
    // 0x1e3040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4520u, 0x1E303Cu, 0x1E3044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3044u;
label_1e3044:
    // 0x1e3044: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E3044u;
    {
        const bool branch_taken_0x1e3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3044u;
        // 0x1e3048: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3044) {
            ctx->pc = 0x1E3104u;
            goto label_1e3104;
        }
    }
    ctx->pc = 0x1E304Cu;
label_1e304c:
    // 0x1e304c: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e304cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e3050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3058: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E3058u;
    SET_GPR_U32(ctx, 31, 0x1E3060u);
    ctx->pc = 0x1E305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3058u;
    // 0x1e305c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E3058u, 0x1E3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3060u;
label_1e3060:
    // 0x1e3060: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e3060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e3064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e306c: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E306Cu;
    SET_GPR_U32(ctx, 31, 0x1E3074u);
    ctx->pc = 0x1E3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E306Cu;
    // 0x1e3070: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E306Cu, 0x1E3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3074u;
label_1e3074:
    // 0x1e3074: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3078: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e307c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E307Cu;
    {
        const bool branch_taken_0x1e307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E307Cu;
        // 0x1e3080: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e307c) {
            ctx->pc = 0x1E3104u;
            goto label_1e3104;
        }
    }
    ctx->pc = 0x1E3084u;
label_1e3084:
    // 0x1e3084: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e3084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e3088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3088u;
    {
        const bool branch_taken_0x1e3088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3088u;
        // 0x1e308c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3088) {
            ctx->pc = 0x1E309Cu;
            goto label_1e309c;
        }
    }
    ctx->pc = 0x1E3090u;
    // 0x1e3090: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e3090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3094u;
    {
        const bool branch_taken_0x1e3094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3094u;
        // 0x1e3098: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3094) {
            ctx->pc = 0x1E30A0u;
            goto label_1e30a0;
        }
    }
    ctx->pc = 0x1E309Cu;
label_1e309c:
    // 0x1e309c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e30a0:
    // 0x1e30a0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e30a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E30A4u;
    {
        const bool branch_taken_0x1e30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30A4u;
        // 0x1e30a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30a4) {
            ctx->pc = 0x1E3118u;
            goto label_1e3118;
        }
    }
    ctx->pc = 0x1E30ACu;
    // 0x1e30ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e30acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30b0: 0xc078e4a  jal         func_1E3928
    ctx->pc = 0x1E30B0u;
    SET_GPR_U32(ctx, 31, 0x1E30B8u);
    ctx->pc = 0x1E30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30B0u;
    // 0x1e30b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3928u, 0x1E30B0u, 0x1E30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30B8u;
label_1e30b8:
    // 0x1e30b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e30b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e30bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30c0: 0xc078ea6  jal         func_1E3A98
    ctx->pc = 0x1E30C0u;
    SET_GPR_U32(ctx, 31, 0x1E30C8u);
    ctx->pc = 0x1E30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30C0u;
    // 0x1e30c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A98u, 0x1E30C0u, 0x1E30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30C8u;
label_1e30c8:
    // 0x1e30c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e30c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30d0: 0xc078f02  jal         func_1E3C08
    ctx->pc = 0x1E30D0u;
    SET_GPR_U32(ctx, 31, 0x1E30D8u);
    ctx->pc = 0x1E30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30D0u;
    // 0x1e30d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3C08u, 0x1E30D0u, 0x1E30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30D8u;
label_1e30d8:
    // 0x1e30d8: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e30d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e30dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e30e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30e4: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E30E4u;
    SET_GPR_U32(ctx, 31, 0x1E30ECu);
    ctx->pc = 0x1E30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30E4u;
    // 0x1e30e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E30E4u, 0x1E30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30ECu;
label_1e30ec:
    // 0x1e30ec: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e30ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e30f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e30f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e30f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30f8: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E30F8u;
    SET_GPR_U32(ctx, 31, 0x1E3100u);
    ctx->pc = 0x1E30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30F8u;
    // 0x1e30fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E30F8u, 0x1E3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3100u;
label_1e3100:
    // 0x1e3100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e3104:
    // 0x1e3104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3108u;
    {
        const bool branch_taken_0x1e3108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3108u;
        // 0x1e310c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3108) {
            ctx->pc = 0x1E3118u;
            goto label_1e3118;
        }
    }
    ctx->pc = 0x1E3110u;
label_1e3110:
    // 0x1e3110: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e3110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e3114: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e3114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e3118:
    // 0x1e3118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e311c:
    // 0x1e311c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3120: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3120u;
        // 0x1e3124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3128u;
}
