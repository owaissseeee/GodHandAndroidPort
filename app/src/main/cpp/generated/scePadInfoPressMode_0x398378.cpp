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

// Function: scePadInfoPressMode
// Address: 0x398378 - 0x3983f8
void scePadInfoPressMode_0x398378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadInfoPressMode_0x398378");
#endif

    switch (ctx->pc) {
        case 0x3983b8u: goto label_3983b8;
        case 0x3983c8u: goto label_3983c8;
        default: break;
    }

    ctx->pc = 0x398378u;

    // 0x398378: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x398378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39837c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x39837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x398380: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x398380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x398384: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x398384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x398388: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x398388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39838c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39838cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x398390: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x398390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x398394: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x398394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x398398: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x398398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x39839c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x39839cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3983a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3983a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3983a4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3983a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3983a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3983A8u;
    {
        const bool branch_taken_0x3983a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983A8u;
        // 0x3983ac: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983a8) {
            ctx->pc = 0x3983C8u;
            goto label_3983c8;
        }
    }
    ctx->pc = 0x3983B0u;
    // 0x3983b0: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x3983B0u;
    SET_GPR_U32(ctx, 31, 0x3983B8u);
    ctx->pc = 0x3983B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3983B0u;
    // 0x3983b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x3983B0u, 0x3983B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983B8u;
label_3983b8:
    // 0x3983b8: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x3983b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x3983bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3983bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3983c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3983C0u;
    {
        const bool branch_taken_0x3983c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3983C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983C0u;
        // 0x3983c4: 0x93a20064  lbu         $v0, 0x64($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983c0) {
            ctx->pc = 0x3983D0u;
            goto label_3983d0;
        }
    }
    ctx->pc = 0x3983C8u;
label_3983c8:
    // 0x3983c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3983C8u;
    {
        const bool branch_taken_0x3983c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983C8u;
        // 0x3983cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983c8) {
            ctx->pc = 0x3983ECu;
            goto label_3983ec;
        }
    }
    ctx->pc = 0x3983D0u;
label_3983d0:
    // 0x3983d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3983d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3983d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3983D4u;
    {
        const bool branch_taken_0x3983d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3983D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983D4u;
        // 0x3983d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983d4) {
            ctx->pc = 0x3983ECu;
            goto label_3983ec;
        }
    }
    ctx->pc = 0x3983DCu;
    // 0x3983dc: 0x93a20066  lbu         $v0, 0x66($sp)
    ctx->pc = 0x3983dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x3983e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3983e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3983e4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3983E4u;
    {
        const bool branch_taken_0x3983e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983E4u;
        // 0x3983e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983e4) {
            ctx->pc = 0x3983C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3983c8;
        }
    }
    ctx->pc = 0x3983ECu;
label_3983ec:
    // 0x3983ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3983ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3983f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3983F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3983F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983F0u;
        // 0x3983f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3983F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3983F8u;
}
