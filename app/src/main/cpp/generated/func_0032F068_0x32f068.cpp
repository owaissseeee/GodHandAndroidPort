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

// Function: func_0032F068
// Address: 0x32f068 - 0x32f0d0
void func_0032F068_0x32f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F068_0x32f068");
#endif

    switch (ctx->pc) {
        case 0x32f08cu: goto label_32f08c;
        case 0x32f0a0u: goto label_32f0a0;
        case 0x32f0b0u: goto label_32f0b0;
        default: break;
    }

    ctx->pc = 0x32f068u;

    // 0x32f068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32f078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32f084: 0xc0cbd32  jal         func_32F4C8
    ctx->pc = 0x32F084u;
    SET_GPR_U32(ctx, 31, 0x32F08Cu);
    ctx->pc = 0x32F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F084u;
    // 0x32f088: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32F084u, 0x32F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F08Cu;
label_32f08c:
    // 0x32f08c: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32F08Cu;
    {
        const bool branch_taken_0x32f08c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x32f08c) {
            ctx->pc = 0x32F090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F08Cu;
            // 0x32f090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F0BCu;
            goto label_32f0bc;
        }
    }
    ctx->pc = 0x32F094u;
    // 0x32f094: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x32f094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x32f098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32f098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f09c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f0a0:
    // 0x32f0a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f0a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32f0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32f0a8: 0xc0cad98  jal         func_32B660
    ctx->pc = 0x32F0A8u;
    SET_GPR_U32(ctx, 31, 0x32F0B0u);
    ctx->pc = 0x32F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0A8u;
    // 0x32f0ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32F0A8u, 0x32F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0B0u;
label_32f0b0:
    // 0x32f0b0: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x32F0B0u;
    {
        const bool branch_taken_0x32f0b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f0b0) {
            ctx->pc = 0x32F0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F0B0u;
            // 0x32f0b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f0a0;
        }
    }
    ctx->pc = 0x32F0B8u;
    // 0x32f0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32f0bc:
    // 0x32f0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f0c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f0c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F0C8u;
        // 0x32f0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F0D0u;
}
