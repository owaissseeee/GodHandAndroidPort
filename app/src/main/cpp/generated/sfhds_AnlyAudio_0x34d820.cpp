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

// Function: sfhds_AnlyAudio
// Address: 0x34d820 - 0x34d8b8
void sfhds_AnlyAudio_0x34d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_AnlyAudio_0x34d820");
#endif

    switch (ctx->pc) {
        case 0x34d850u: goto label_34d850;
        case 0x34d868u: goto label_34d868;
        case 0x34d880u: goto label_34d880;
        case 0x34d898u: goto label_34d898;
        default: break;
    }

    ctx->pc = 0x34d820u;

    // 0x34d820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d828: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34d828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d82c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34d830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34d838: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34d838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d83c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34D83Cu;
    {
        const bool branch_taken_0x34d83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D83Cu;
        // 0x34d840: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d83c) {
            ctx->pc = 0x34D89Cu;
            goto label_34d89c;
        }
    }
    ctx->pc = 0x34D844u;
    // 0x34d844: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d848: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D848u;
    SET_GPR_U32(ctx, 31, 0x34D850u);
    ctx->pc = 0x34D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D848u;
    // 0x34d84c: 0x24c6e148  addiu       $a2, $a2, -0x1EB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D848u, 0x34D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D850u;
label_34d850:
    // 0x34d850: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d854: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34d854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x34d858: 0x24c6e1b8  addiu       $a2, $a2, -0x1E48
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959544));
    // 0x34d85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d860: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D860u;
    SET_GPR_U32(ctx, 31, 0x34D868u);
    ctx->pc = 0x34D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D860u;
    // 0x34d864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D860u, 0x34D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D868u;
label_34d868:
    // 0x34d868: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d86c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x34d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x34d870: 0x24c6e238  addiu       $a2, $a2, -0x1DC8
    ctx->pc = 0x34d870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959672));
    // 0x34d874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d878: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D878u;
    SET_GPR_U32(ctx, 31, 0x34D880u);
    ctx->pc = 0x34D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D878u;
    // 0x34d87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D878u, 0x34D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D880u;
label_34d880:
    // 0x34d880: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d884: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x34d884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x34d888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d88c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d890: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D890u;
    SET_GPR_U32(ctx, 31, 0x34D898u);
    ctx->pc = 0x34D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D890u;
    // 0x34d894: 0x24c6e2a8  addiu       $a2, $a2, -0x1D58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D890u, 0x34D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D898u;
label_34d898:
    // 0x34d898: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x34d898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_34d89c:
    // 0x34d89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d8a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d8a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34d8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d8a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34d8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8ACu;
        // 0x34d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D8B4u;
    // 0x34d8b4: 0x0  nop
    ctx->pc = 0x34d8b4u;
    // NOP
    ctx->pc = 0x34d8b8u;
}
