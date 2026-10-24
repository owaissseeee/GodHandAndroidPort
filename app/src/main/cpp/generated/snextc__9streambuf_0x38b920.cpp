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

// Function: snextc__9streambuf
// Address: 0x38b920 - 0x38b9a0
void snextc__9streambuf_0x38b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("snextc__9streambuf_0x38b920");
#endif

    switch (ctx->pc) {
        case 0x38b94cu: goto label_38b94c;
        case 0x38b97cu: goto label_38b97c;
        default: break;
    }

    ctx->pc = 0x38b920u;

    // 0x38b920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38b924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b930: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38b930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38b934: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x38b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38b938: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x38b938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38b93c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38B93Cu;
    {
        const bool branch_taken_0x38b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B93Cu;
        // 0x38b940: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b93c) {
            ctx->pc = 0x38B968u;
            goto label_38b968;
        }
    }
    ctx->pc = 0x38B944u;
    // 0x38b944: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x38B944u;
    SET_GPR_U32(ctx, 31, 0x38B94Cu);
    ctx->pc = 0x38B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B944u;
    // 0x38b948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38B944u, 0x38B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B94Cu;
label_38b94c:
    // 0x38b94c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b950: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B950u;
    {
        const bool branch_taken_0x38b950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38b950) {
            ctx->pc = 0x38B954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B950u;
            // 0x38b954: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B960u;
            goto label_38b960;
        }
    }
    ctx->pc = 0x38B958u;
    // 0x38b958: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38B958u;
    {
        const bool branch_taken_0x38b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B958u;
        // 0x38b95c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b958) {
            ctx->pc = 0x38B990u;
            goto label_38b990;
        }
    }
    ctx->pc = 0x38B960u;
label_38b960:
    // 0x38b960: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x38b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38b964: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x38b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38b968:
    // 0x38b968: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x38b968u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38b96c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B96Cu;
    {
        const bool branch_taken_0x38b96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B96Cu;
        // 0x38b970: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b96c) {
            ctx->pc = 0x38B988u;
            goto label_38b988;
        }
    }
    ctx->pc = 0x38B974u;
    // 0x38b974: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x38B974u;
    SET_GPR_U32(ctx, 31, 0x38B97Cu);
    ctx->pc = 0x38B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B974u;
    // 0x38b978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38B974u, 0x38B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B97Cu;
label_38b97c:
    // 0x38b97c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b980: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B980u;
    {
        const bool branch_taken_0x38b980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x38b980) {
            ctx->pc = 0x38B984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B980u;
            // 0x38b984: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B990u;
            goto label_38b990;
        }
    }
    ctx->pc = 0x38B988u;
label_38b988:
    // 0x38b988: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38b98c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x38b98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38b990:
    // 0x38b990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b998: 0x3e00008  jr          $ra
    ctx->pc = 0x38B998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B998u;
        // 0x38b99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B9A0u;
}
