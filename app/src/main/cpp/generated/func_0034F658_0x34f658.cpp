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

// Function: func_0034F658
// Address: 0x34f658 - 0x34f6c0
void func_0034F658_0x34f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F658_0x34f658");
#endif

    switch (ctx->pc) {
        case 0x34f684u: goto label_34f684;
        case 0x34f69cu: goto label_34f69c;
        default: break;
    }

    ctx->pc = 0x34f658u;

    // 0x34f658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f65c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34f668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f670: 0x26021f74  addiu       $v0, $s0, 0x1F74
    ctx->pc = 0x34f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8052));
    // 0x34f674: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34f678: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x34f678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34f67c: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x34F67Cu;
    SET_GPR_U32(ctx, 31, 0x34F684u);
    ctx->pc = 0x34F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F67Cu;
    // 0x34f680: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34F67Cu, 0x34F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F684u;
label_34f684:
    // 0x34f684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f68c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F68Cu;
    {
        const bool branch_taken_0x34f68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F68Cu;
        // 0x34f690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f68c) {
            ctx->pc = 0x34F6A0u;
            goto label_34f6a0;
        }
    }
    ctx->pc = 0x34F694u;
    // 0x34f694: 0xc0d3ce4  jal         func_34F390
    ctx->pc = 0x34F694u;
    SET_GPR_U32(ctx, 31, 0x34F69Cu);
    ctx->pc = 0x34F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F694u;
    // 0x34f698: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F390u, 0x34F694u, 0x34F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F69Cu;
label_34f69c:
    // 0x34f69c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f6a0:
    // 0x34f6a0: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34F6A0u;
    {
        const bool branch_taken_0x34f6a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f6a0) {
            ctx->pc = 0x34F6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F6A0u;
            // 0x34f6a4: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F6A8u;
            goto label_34f6a8;
        }
    }
    ctx->pc = 0x34F6A8u;
label_34f6a8:
    // 0x34f6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f6ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f6b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f6b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f6b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x34F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6B8u;
        // 0x34f6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F6C0u;
}
