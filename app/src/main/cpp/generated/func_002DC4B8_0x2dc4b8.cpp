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

// Function: func_002DC4B8
// Address: 0x2dc4b8 - 0x2dc548
void func_002DC4B8_0x2dc4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC4B8_0x2dc4b8");
#endif

    switch (ctx->pc) {
        case 0x2dc4ccu: goto label_2dc4cc;
        case 0x2dc4e4u: goto label_2dc4e4;
        case 0x2dc508u: goto label_2dc508;
        case 0x2dc538u: goto label_2dc538;
        default: break;
    }

    ctx->pc = 0x2dc4b8u;

    // 0x2dc4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc4bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc4c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC4C4u;
    SET_GPR_U32(ctx, 31, 0x2DC4CCu);
    ctx->pc = 0x2DC4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4C4u;
    // 0x2dc4c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC4C4u, 0x2DC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4CCu;
label_2dc4cc:
    // 0x2dc4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4d0: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dc4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dc4d4: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC4D4u;
    {
        const bool branch_taken_0x2dc4d4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc4d4) {
            ctx->pc = 0x2DC4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC4D4u;
            // 0x2dc4d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC53Cu;
            goto label_2dc53c;
        }
    }
    ctx->pc = 0x2DC4DCu;
    // 0x2dc4dc: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC4DCu;
    SET_GPR_U32(ctx, 31, 0x2DC4E4u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC4DCu, 0x2DC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4E4u;
label_2dc4e4:
    // 0x2dc4e4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC4E4u;
    {
        const bool branch_taken_0x2dc4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4e4) {
            ctx->pc = 0x2DC4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC4E4u;
            // 0x2dc4e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC53Cu;
            goto label_2dc53c;
        }
    }
    ctx->pc = 0x2DC4ECu;
    // 0x2dc4ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc4f0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc4f4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc4f8: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC4F8u;
    {
        const bool branch_taken_0x2dc4f8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc4f8) {
            ctx->pc = 0x2DC4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC4F8u;
            // 0x2dc4fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC53Cu;
            goto label_2dc53c;
        }
    }
    ctx->pc = 0x2DC500u;
    // 0x2dc500: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC500u;
    SET_GPR_U32(ctx, 31, 0x2DC508u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC500u, 0x2DC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC508u;
label_2dc508:
    // 0x2dc508: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC508u;
    {
        const bool branch_taken_0x2dc508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc508) {
            ctx->pc = 0x2DC50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC508u;
            // 0x2dc50c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC53Cu;
            goto label_2dc53c;
        }
    }
    ctx->pc = 0x2DC510u;
    // 0x2dc510: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dc514: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc518: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc51c: 0x2508c548  addiu       $t0, $t0, -0x3AB8
    ctx->pc = 0x2dc51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952264));
    // 0x2dc520: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dc520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc524: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dc524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dc528: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dc528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc530: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC530u;
    SET_GPR_U32(ctx, 31, 0x2DC538u);
    ctx->pc = 0x2DC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC530u;
    // 0x2dc534: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC530u, 0x2DC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC538u;
label_2dc538:
    // 0x2dc538: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc53c:
    // 0x2dc53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc540: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC540u;
        // 0x2dc544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC548u;
}
