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

// Function: func_00334F90
// Address: 0x334f90 - 0x3350f0
void func_00334F90_0x334f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334F90_0x334f90");
#endif

    switch (ctx->pc) {
        case 0x334fc0u: goto label_334fc0;
        case 0x334fccu: goto label_334fcc;
        case 0x334fd4u: goto label_334fd4;
        case 0x334fe0u: goto label_334fe0;
        case 0x334fecu: goto label_334fec;
        case 0x335000u: goto label_335000;
        case 0x335010u: goto label_335010;
        case 0x33501cu: goto label_33501c;
        case 0x335030u: goto label_335030;
        case 0x335040u: goto label_335040;
        case 0x335050u: goto label_335050;
        case 0x335070u: goto label_335070;
        case 0x335084u: goto label_335084;
        case 0x335090u: goto label_335090;
        case 0x3350a0u: goto label_3350a0;
        case 0x3350a8u: goto label_3350a8;
        case 0x3350b0u: goto label_3350b0;
        case 0x3350c0u: goto label_3350c0;
        case 0x3350c8u: goto label_3350c8;
        case 0x3350d0u: goto label_3350d0;
        default: break;
    }

    ctx->pc = 0x334f90u;

    // 0x334f90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x334f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x334f94: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x334f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x334f98: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x334f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x334f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fa0: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x334fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x334fa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x334fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x334fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fac: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x334facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x334fb0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x334fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x334fb4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x334fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x334fb8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x334FB8u;
    SET_GPR_U32(ctx, 31, 0x334FC0u);
    ctx->pc = 0x334FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FB8u;
    // 0x334fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x334FB8u, 0x334FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FC0u;
label_334fc0:
    // 0x334fc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x334fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fc4: 0xc0cd35a  jal         func_334D68
    ctx->pc = 0x334FC4u;
    SET_GPR_U32(ctx, 31, 0x334FCCu);
    ctx->pc = 0x334FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FC4u;
    // 0x334fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334D68u, 0x334FC4u, 0x334FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FCCu;
label_334fcc:
    // 0x334fcc: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334FCCu;
    SET_GPR_U32(ctx, 31, 0x334FD4u);
    ctx->pc = 0x334FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FCCu;
    // 0x334fd0: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334FCCu, 0x334FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FD4u;
label_334fd4:
    // 0x334fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x334fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334fd8: 0xc0cc7ba  jal         func_331EE8
    ctx->pc = 0x334FD8u;
    SET_GPR_U32(ctx, 31, 0x334FE0u);
    ctx->pc = 0x334FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FD8u;
    // 0x334fdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331EE8u, 0x334FD8u, 0x334FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FE0u;
label_334fe0:
    // 0x334fe0: 0x24046001  addiu       $a0, $zero, 0x6001
    ctx->pc = 0x334fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24577));
    // 0x334fe4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334FE4u;
    SET_GPR_U32(ctx, 31, 0x334FECu);
    ctx->pc = 0x334FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FE4u;
    // 0x334fe8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334FE4u, 0x334FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FECu;
label_334fec:
    // 0x334fec: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x334fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x334ff0: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x334FF0u;
    {
        const bool branch_taken_0x334ff0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x334FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FF0u;
        // 0x334ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ff0) {
            ctx->pc = 0x3350D4u;
            goto label_3350d4;
        }
    }
    ctx->pc = 0x334FF8u;
    // 0x334ff8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334FF8u;
    SET_GPR_U32(ctx, 31, 0x335000u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334FF8u, 0x335000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335000u;
label_335000:
    // 0x335000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335008: 0xc0cc76e  jal         func_331DB8
    ctx->pc = 0x335008u;
    SET_GPR_U32(ctx, 31, 0x335010u);
    ctx->pc = 0x33500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335008u;
    // 0x33500c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DB8u, 0x335008u, 0x335010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335010u;
label_335010:
    // 0x335010: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x335010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x335014: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335014u;
    SET_GPR_U32(ctx, 31, 0x33501Cu);
    ctx->pc = 0x335018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335014u;
    // 0x335018: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335014u, 0x33501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33501Cu;
label_33501c:
    // 0x33501c: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x33501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x335020: 0x620002c  bltz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x335020u;
    {
        const bool branch_taken_0x335020 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x335024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335020u;
        // 0x335024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335020) {
            ctx->pc = 0x3350D4u;
            goto label_3350d4;
        }
    }
    ctx->pc = 0x335028u;
    // 0x335028: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335028u;
    SET_GPR_U32(ctx, 31, 0x335030u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335028u, 0x335030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335030u;
label_335030:
    // 0x335030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335038: 0xc0cc76e  jal         func_331DB8
    ctx->pc = 0x335038u;
    SET_GPR_U32(ctx, 31, 0x335040u);
    ctx->pc = 0x33503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335038u;
    // 0x33503c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DB8u, 0x335038u, 0x335040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335040u;
label_335040:
    // 0x335040: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x335040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335044: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x335044u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x335048: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335048u;
    SET_GPR_U32(ctx, 31, 0x335050u);
    ctx->pc = 0x33504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335048u;
    // 0x33504c: 0x24046201  addiu       $a0, $zero, 0x6201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335048u, 0x335050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335050u;
label_335050:
    // 0x335050: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x335050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x335054: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x335054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x335058: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x335058u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x33505c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33505cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335060: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x335060u;
    {
        const bool branch_taken_0x335060 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x335064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335060u;
        // 0x335064: 0x24046300  addiu       $a0, $zero, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335060) {
            ctx->pc = 0x3350D4u;
            goto label_3350d4;
        }
    }
    ctx->pc = 0x335068u;
    // 0x335068: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335068u;
    SET_GPR_U32(ctx, 31, 0x335070u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335068u, 0x335070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335070u;
label_335070:
    // 0x335070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335074: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x335074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x335078: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x335078u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x33507c: 0xc0cc7ea  jal         func_331FA8
    ctx->pc = 0x33507Cu;
    SET_GPR_U32(ctx, 31, 0x335084u);
    ctx->pc = 0x335080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33507Cu;
    // 0x335080: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331FA8u, 0x33507Cu, 0x335084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335084u;
label_335084:
    // 0x335084: 0x24046301  addiu       $a0, $zero, 0x6301
    ctx->pc = 0x335084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25345));
    // 0x335088: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335088u;
    SET_GPR_U32(ctx, 31, 0x335090u);
    ctx->pc = 0x33508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335088u;
    // 0x33508c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335088u, 0x335090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335090u;
label_335090:
    // 0x335090: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335090u;
    {
        const bool branch_taken_0x335090 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x335094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335090u;
        // 0x335094: 0x24046500  addiu       $a0, $zero, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335090) {
            ctx->pc = 0x3350B8u;
            goto label_3350b8;
        }
    }
    ctx->pc = 0x335098u;
    // 0x335098: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x335098u;
    SET_GPR_U32(ctx, 31, 0x3350A0u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x335098u, 0x3350A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350A0u;
label_3350a0:
    // 0x3350a0: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x3350A0u;
    SET_GPR_U32(ctx, 31, 0x3350A8u);
    ctx->pc = 0x3350A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350A0u;
    // 0x3350a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x3350A0u, 0x3350A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350A8u;
label_3350a8:
    // 0x3350a8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3350A8u;
    SET_GPR_U32(ctx, 31, 0x3350B0u);
    ctx->pc = 0x3350ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350A8u;
    // 0x3350ac: 0x24046501  addiu       $a0, $zero, 0x6501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25857));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3350A8u, 0x3350B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350B0u;
label_3350b0:
    // 0x3350b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3350B0u;
    {
        const bool branch_taken_0x3350b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3350B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350B0u;
        // 0x3350b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350b0) {
            ctx->pc = 0x3350D4u;
            goto label_3350d4;
        }
    }
    ctx->pc = 0x3350B8u;
label_3350b8:
    // 0x3350b8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3350B8u;
    SET_GPR_U32(ctx, 31, 0x3350C0u);
    ctx->pc = 0x3350BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350B8u;
    // 0x3350bc: 0x24046400  addiu       $a0, $zero, 0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3350B8u, 0x3350C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350C0u;
label_3350c0:
    // 0x3350c0: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x3350C0u;
    SET_GPR_U32(ctx, 31, 0x3350C8u);
    ctx->pc = 0x3350C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350C0u;
    // 0x3350c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x3350C0u, 0x3350C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350C8u;
label_3350c8:
    // 0x3350c8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3350C8u;
    SET_GPR_U32(ctx, 31, 0x3350D0u);
    ctx->pc = 0x3350CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350C8u;
    // 0x3350cc: 0x24046401  addiu       $a0, $zero, 0x6401 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25601));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3350C8u, 0x3350D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350D0u;
label_3350d0:
    // 0x3350d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3350d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3350d4:
    // 0x3350d4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3350d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3350d8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3350d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3350dc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3350dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3350e0: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3350e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3350e4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3350e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3350e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3350E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3350ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350E8u;
        // 0x3350ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3350F0u;
}
