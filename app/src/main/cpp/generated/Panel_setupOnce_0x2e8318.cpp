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

// Function: Panel_setupOnce
// Address: 0x2e8318 - 0x2e83d8
void Panel_setupOnce_0x2e8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Panel_setupOnce_0x2e8318");
#endif

    switch (ctx->pc) {
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83c8u: goto label_2e83c8;
        default: break;
    }

    ctx->pc = 0x2e8318u;

    // 0x2e8318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e831c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2e831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2e8320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e832c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2e832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2e8330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e8334: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E8334u;
    {
        const bool branch_taken_0x2e8334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8334) {
            ctx->pc = 0x2E8338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8334u;
            // 0x2e8338: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83CCu;
            goto label_2e83cc;
        }
    }
    ctx->pc = 0x2E833Cu;
    // 0x2e833c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8340: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e8340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e8344: 0xc0ba602  jal         func_2E9808
    ctx->pc = 0x2E8344u;
    SET_GPR_U32(ctx, 31, 0x2E834Cu);
    ctx->pc = 0x2E8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8344u;
    // 0x2e8348: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9808u, 0x2E8344u, 0x2E834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E834Cu;
label_2e834c:
    // 0x2e834c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8350: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8354: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e8354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e8358: 0xc0ba602  jal         func_2E9808
    ctx->pc = 0x2E8358u;
    SET_GPR_U32(ctx, 31, 0x2E8360u);
    ctx->pc = 0x2E835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8358u;
    // 0x2e835c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9808u, 0x2E8358u, 0x2E8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8360u;
label_2e8360:
    // 0x2e8360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8368: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e836c: 0xc0ba602  jal         func_2E9808
    ctx->pc = 0x2E836Cu;
    SET_GPR_U32(ctx, 31, 0x2E8374u);
    ctx->pc = 0x2E8370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E836Cu;
    // 0x2e8370: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9808u, 0x2E836Cu, 0x2E8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8374u;
label_2e8374:
    // 0x2e8374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8378: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e837c: 0xc0ba2ce  jal         func_2E8B38
    ctx->pc = 0x2E837Cu;
    SET_GPR_U32(ctx, 31, 0x2E8384u);
    ctx->pc = 0x2E8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E837Cu;
    // 0x2e8380: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8B38u, 0x2E837Cu, 0x2E8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8384u;
label_2e8384:
    // 0x2e8384: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e8388: 0x24053b00  addiu       $a1, $zero, 0x3B00
    ctx->pc = 0x2e8388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2e838c: 0x24063a00  addiu       $a2, $zero, 0x3A00
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14848));
    // 0x2e8390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8394: 0xc0ba0f6  jal         func_2E83D8
    ctx->pc = 0x2E8394u;
    SET_GPR_U32(ctx, 31, 0x2E839Cu);
    ctx->pc = 0x2E8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8394u;
    // 0x2e8398: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D8u, 0x2E8394u, 0x2E839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E839Cu;
label_2e839c:
    // 0x2e839c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e839cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e83a0: 0x24053a00  addiu       $a1, $zero, 0x3A00
    ctx->pc = 0x2e83a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14848));
    // 0x2e83a4: 0x24063900  addiu       $a2, $zero, 0x3900
    ctx->pc = 0x2e83a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2e83a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e83ac: 0xc0ba0f6  jal         func_2E83D8
    ctx->pc = 0x2E83ACu;
    SET_GPR_U32(ctx, 31, 0x2E83B4u);
    ctx->pc = 0x2E83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83ACu;
    // 0x2e83b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D8u, 0x2E83ACu, 0x2E83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83B4u;
label_2e83b4:
    // 0x2e83b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e83b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e83bc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2e83bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e83c0: 0xc0ba3ba  jal         func_2E8EE8
    ctx->pc = 0x2E83C0u;
    SET_GPR_U32(ctx, 31, 0x2E83C8u);
    ctx->pc = 0x2E83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83C0u;
    // 0x2e83c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8EE8u, 0x2E83C0u, 0x2E83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83C8u;
label_2e83c8:
    // 0x2e83c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e83c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e83cc:
    // 0x2e83cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e83ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e83d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E83D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D0u;
        // 0x2e83d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E83D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E83D8u;
}
