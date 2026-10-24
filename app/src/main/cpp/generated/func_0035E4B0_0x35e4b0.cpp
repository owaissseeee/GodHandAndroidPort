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

// Function: func_0035E4B0
// Address: 0x35e4b0 - 0x35e520
void func_0035E4B0_0x35e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E4B0_0x35e4b0");
#endif

    switch (ctx->pc) {
        case 0x35e4d8u: goto label_35e4d8;
        case 0x35e4ecu: goto label_35e4ec;
        case 0x35e500u: goto label_35e500;
        default: break;
    }

    ctx->pc = 0x35e4b0u;

    // 0x35e4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e4b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e4b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e4b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e4c0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e4c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e4c4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e4c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e4cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e4d0: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E4D0u;
    SET_GPR_U32(ctx, 31, 0x35E4D8u);
    ctx->pc = 0x35E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4D0u;
    // 0x35e4d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E4D0u, 0x35E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4D8u;
label_35e4d8:
    // 0x35e4d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e4dc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x35E4DCu;
    {
        const bool branch_taken_0x35e4dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4DCu;
        // 0x35e4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4dc) {
            ctx->pc = 0x35E508u;
            goto label_35e508;
        }
    }
    ctx->pc = 0x35E4E4u;
    // 0x35e4e4: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E4E4u;
    SET_GPR_U32(ctx, 31, 0x35E4ECu);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E4E4u, 0x35E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4ECu;
label_35e4ec:
    // 0x35e4ec: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e4f0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E4F0u;
    {
        const bool branch_taken_0x35e4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4F0u;
        // 0x35e4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4f0) {
            ctx->pc = 0x35E508u;
            goto label_35e508;
        }
    }
    ctx->pc = 0x35E4F8u;
    // 0x35e4f8: 0xc0d7a3e  jal         func_35E8F8
    ctx->pc = 0x35E4F8u;
    SET_GPR_U32(ctx, 31, 0x35E500u);
    ctx->pc = 0x35E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4F8u;
    // 0x35e4fc: 0x9224001f  lbu         $a0, 0x1F($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E8F8u, 0x35E4F8u, 0x35E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E500u;
label_35e500:
    // 0x35e500: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35e500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35e504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e508:
    // 0x35e508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e50c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e518: 0x3e00008  jr          $ra
    ctx->pc = 0x35E518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E518u;
        // 0x35e51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E520u;
}
