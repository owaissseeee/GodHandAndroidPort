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

// Function: func_00271410
// Address: 0x271410 - 0x2714b0
void func_00271410_0x271410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271410_0x271410");
#endif

    switch (ctx->pc) {
        case 0x271454u: goto label_271454;
        case 0x271460u: goto label_271460;
        case 0x2714a0u: goto label_2714a0;
        default: break;
    }

    ctx->pc = 0x271410u;

    // 0x271410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x271414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27141c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27141cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271420: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x271420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x271424: 0x2444fdec  addiu       $a0, $v0, -0x214
    ctx->pc = 0x271424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966764));
    // 0x271428: 0x2c830061  sltiu       $v1, $a0, 0x61
    ctx->pc = 0x271428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x27142c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x27142Cu;
    {
        const bool branch_taken_0x27142c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27142Cu;
        // 0x271430: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27142c) {
            ctx->pc = 0x2714A0u;
            goto label_2714a0;
        }
    }
    ctx->pc = 0x271434u;
    // 0x271434: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x271438: 0x244261d0  addiu       $v0, $v0, 0x61D0
    ctx->pc = 0x271438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
    // 0x27143c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271440: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271444: 0x800008  jr          $a0
    ctx->pc = 0x271444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27144Cu: goto label_27144c;
            case 0x2714A0u: goto label_2714a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271444u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27144Cu;
label_27144c:
    // 0x27144c: 0xc0c3d5e  jal         func_30F578
    ctx->pc = 0x27144Cu;
    SET_GPR_U32(ctx, 31, 0x271454u);
    ctx->pc = 0x271450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27144Cu;
    // 0x271450: 0x24041b80  addiu       $a0, $zero, 0x1B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F578u, 0x27144Cu, 0x271454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271454u;
label_271454:
    // 0x271454: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x271454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271458: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x271458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27145c: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x27145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_271460:
    // 0x271460: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x271460u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271464: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x271464u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271468: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x271468u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27146c: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x27146cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271470: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x271470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271474: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x271474u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271478: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x271478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x27147c: 0x1485fff8  bne         $a0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27147Cu;
    {
        const bool branch_taken_0x27147c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x271480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27147Cu;
        // 0x271480: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27147c) {
            ctx->pc = 0x271460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271460;
        }
    }
    ctx->pc = 0x271484u;
    // 0x271484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271484u;
    {
        const bool branch_taken_0x271484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271484u;
        // 0x271488: 0xae021860  sw          $v0, 0x1860($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271484) {
            ctx->pc = 0x2714A0u;
            goto label_2714a0;
        }
    }
    ctx->pc = 0x27148Cu;
    // 0x27148c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271490: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x271490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x271494: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x271494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271498: 0xc0b7a60  jal         func_2DE980
    ctx->pc = 0x271498u;
    SET_GPR_U32(ctx, 31, 0x2714A0u);
    ctx->pc = 0x27149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271498u;
    // 0x27149c: 0x24a717e0  addiu       $a3, $a1, 0x17E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE980u, 0x271498u, 0x2714A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714A0u;
label_2714a0:
    // 0x2714a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2714a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2714a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2714a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2714A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714A8u;
        // 0x2714ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714B0u;
}
