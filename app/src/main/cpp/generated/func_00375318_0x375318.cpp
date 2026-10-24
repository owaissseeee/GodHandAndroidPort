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

// Function: func_00375318
// Address: 0x375318 - 0x375380
void func_00375318_0x375318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375318_0x375318");
#endif

    switch (ctx->pc) {
        case 0x375334u: goto label_375334;
        case 0x37533cu: goto label_37533c;
        case 0x375344u: goto label_375344;
        case 0x375364u: goto label_375364;
        case 0x37536cu: goto label_37536c;
        default: break;
    }

    ctx->pc = 0x375318u;

    // 0x375318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37531c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375324: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x375324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x375328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37532c: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x37532Cu;
    SET_GPR_U32(ctx, 31, 0x375334u);
    ctx->pc = 0x375330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37532Cu;
    // 0x375330: 0x2610a880  addiu       $s0, $s0, -0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x37532Cu, 0x375334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375334u;
label_375334:
    // 0x375334: 0xc0ddef2  jal         func_377BC8
    ctx->pc = 0x375334u;
    SET_GPR_U32(ctx, 31, 0x37533Cu);
    ctx->pc = 0x377BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377BC8u, 0x375334u, 0x37533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37533Cu;
label_37533c:
    // 0x37533c: 0xc0dd618  jal         func_375860
    ctx->pc = 0x37533Cu;
    SET_GPR_U32(ctx, 31, 0x375344u);
    ctx->pc = 0x375860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375860u, 0x37533Cu, 0x375344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375344u;
label_375344:
    // 0x375344: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x375344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x375348: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x375348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37534c: 0x2463a9c0  addiu       $v1, $v1, -0x5640
    ctx->pc = 0x37534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945216));
    // 0x375350: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x375350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x375354: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x375354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x375358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x375358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37535c: 0xc0dd63a  jal         func_3758E8
    ctx->pc = 0x37535Cu;
    SET_GPR_U32(ctx, 31, 0x375364u);
    ctx->pc = 0x375360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37535Cu;
    // 0x375360: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758E8u, 0x37535Cu, 0x375364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375364u;
label_375364:
    // 0x375364: 0xc0dd63a  jal         func_3758E8
    ctx->pc = 0x375364u;
    SET_GPR_U32(ctx, 31, 0x37536Cu);
    ctx->pc = 0x375368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375364u;
    // 0x375368: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758E8u, 0x375364u, 0x37536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37536Cu;
label_37536c:
    // 0x37536c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375374: 0x3e00008  jr          $ra
    ctx->pc = 0x375374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375374u;
        // 0x375378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37537Cu;
    // 0x37537c: 0x0  nop
    ctx->pc = 0x37537cu;
    // NOP
    ctx->pc = 0x375380u;
}
