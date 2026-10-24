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

// Function: cCoreSave_systemInit
// Address: 0x1f9848 - 0x1f98d0
void cCoreSave_systemInit_0x1f9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_systemInit_0x1f9848");
#endif

    switch (ctx->pc) {
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98bcu: goto label_1f98bc;
        default: break;
    }

    ctx->pc = 0x1f9848u;

    // 0x1f9848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f984c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f984cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f9850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f9854: 0x240614a0  addiu       $a2, $zero, 0x14A0
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5280));
    // 0x1f9858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f985c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1f985cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1f9860: 0x261086d0  addiu       $s0, $s0, -0x7930
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936272));
    // 0x1f9864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f986c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1F986Cu;
    SET_GPR_U32(ctx, 31, 0x1F9874u);
    ctx->pc = 0x1F9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F986Cu;
    // 0x1f9870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1F986Cu, 0x1F9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9874u;
label_1f9874:
    // 0x1f9874: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f9874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f9878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f987c: 0xc07ebea  jal         func_1FAFA8
    ctx->pc = 0x1F987Cu;
    SET_GPR_U32(ctx, 31, 0x1F9884u);
    ctx->pc = 0x1F9880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F987Cu;
    // 0x1f9880: 0xac709b70  sw          $s0, -0x6490($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941552), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFA8u, 0x1F987Cu, 0x1F9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9884u;
label_1f9884:
    // 0x1f9884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f988c: 0x0  nop
    ctx->pc = 0x1f988cu;
    // NOP
label_1f9890:
    // 0x1f9890: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9894: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f989c: 0x2c830080  sltiu       $v1, $a0, 0x80
    ctx->pc = 0x1f989cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f98a0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F98A0u;
    {
        const bool branch_taken_0x1f98a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98A0u;
        // 0x1f98a4: 0xa04500b0  sb          $a1, 0xB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98a0) {
            ctx->pc = 0x1F9890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9890;
        }
    }
    ctx->pc = 0x1F98A8u;
    // 0x1f98a8: 0xc07f04e  jal         func_1FC138
    ctx->pc = 0x1F98A8u;
    SET_GPR_U32(ctx, 31, 0x1F98B0u);
    ctx->pc = 0x1F98ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98A8u;
    // 0x1f98ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC138u, 0x1F98A8u, 0x1F98B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98B0u;
label_1f98b0:
    // 0x1f98b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98b4: 0xc07e996  jal         func_1FA658
    ctx->pc = 0x1F98B4u;
    SET_GPR_U32(ctx, 31, 0x1F98BCu);
    ctx->pc = 0x1F98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98B4u;
    // 0x1f98b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA658u, 0x1F98B4u, 0x1F98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98BCu;
label_1f98bc:
    // 0x1f98bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f98bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f98c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f98c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f98c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f98c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f98c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98C8u;
        // 0x1f98cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98D0u;
}
