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

// Function: sfhds_AnlySys
// Address: 0x34d6f0 - 0x34d7a8
void sfhds_AnlySys_0x34d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_AnlySys_0x34d6f0");
#endif

    switch (ctx->pc) {
        case 0x34d714u: goto label_34d714;
        case 0x34d728u: goto label_34d728;
        case 0x34d73cu: goto label_34d73c;
        case 0x34d750u: goto label_34d750;
        case 0x34d764u: goto label_34d764;
        case 0x34d778u: goto label_34d778;
        case 0x34d78cu: goto label_34d78c;
        default: break;
    }

    ctx->pc = 0x34d6f0u;

    // 0x34d6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d6f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x34d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x34d6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d6fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34d6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d700: 0x2445de38  addiu       $a1, $v0, -0x21C8
    ctx->pc = 0x34d700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958648));
    // 0x34d704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d70c: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D70Cu;
    SET_GPR_U32(ctx, 31, 0x34D714u);
    ctx->pc = 0x34D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D70Cu;
    // 0x34d710: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D70Cu, 0x34D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D714u;
label_34d714:
    // 0x34d714: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d718: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34d718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34d71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d720: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D720u;
    SET_GPR_U32(ctx, 31, 0x34D728u);
    ctx->pc = 0x34D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D720u;
    // 0x34d724: 0x24a5de88  addiu       $a1, $a1, -0x2178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D720u, 0x34D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D728u;
label_34d728:
    // 0x34d728: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d72c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34d730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d734: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D734u;
    SET_GPR_U32(ctx, 31, 0x34D73Cu);
    ctx->pc = 0x34D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D734u;
    // 0x34d738: 0x24a5ded8  addiu       $a1, $a1, -0x2128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D734u, 0x34D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D73Cu;
label_34d73c:
    // 0x34d73c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d740: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x34d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x34d744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d748: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D748u;
    SET_GPR_U32(ctx, 31, 0x34D750u);
    ctx->pc = 0x34D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D748u;
    // 0x34d74c: 0x24a5df28  addiu       $a1, $a1, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D748u, 0x34D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D750u;
label_34d750:
    // 0x34d750: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d754: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x34d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x34d758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d75c: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D75Cu;
    SET_GPR_U32(ctx, 31, 0x34D764u);
    ctx->pc = 0x34D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D75Cu;
    // 0x34d760: 0x24a5dfe0  addiu       $a1, $a1, -0x2020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D75Cu, 0x34D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D764u;
label_34d764:
    // 0x34d764: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d768: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x34d768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d770: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D770u;
    SET_GPR_U32(ctx, 31, 0x34D778u);
    ctx->pc = 0x34D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D770u;
    // 0x34d774: 0x24a5e030  addiu       $a1, $a1, -0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D770u, 0x34D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D778u;
label_34d778:
    // 0x34d778: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d77c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x34d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x34d780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d784: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D784u;
    SET_GPR_U32(ctx, 31, 0x34D78Cu);
    ctx->pc = 0x34D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D784u;
    // 0x34d788: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D784u, 0x34D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D78Cu;
label_34d78c:
    // 0x34d78c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x34d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x34d790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D79Cu;
        // 0x34d7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D7A4u;
    // 0x34d7a4: 0x0  nop
    ctx->pc = 0x34d7a4u;
    // NOP
    ctx->pc = 0x34d7a8u;
}
