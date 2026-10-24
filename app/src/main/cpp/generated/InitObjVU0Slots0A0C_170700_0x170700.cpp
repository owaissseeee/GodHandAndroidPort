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

// Function: InitObjVU0Slots0A0C_170700
// Address: 0x170700 - 0x170778
void InitObjVU0Slots0A0C_170700_0x170700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVU0Slots0A0C_170700_0x170700");
#endif

    switch (ctx->pc) {
        case 0x170740u: goto label_170740;
        case 0x170764u: goto label_170764;
        default: break;
    }

    ctx->pc = 0x170700u;

    // 0x170700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170704: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170708: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17070c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x170710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170714: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x170714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x170718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17071c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x170720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170728: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17072c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17072cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170734: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170738: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x170738u;
    SET_GPR_U32(ctx, 31, 0x170740u);
    ctx->pc = 0x17073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170738u;
    // 0x17073c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x170738u, 0x170740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170740u;
label_170740:
    // 0x170740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170744: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17074c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x170750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170754: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17075c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17075Cu;
    SET_GPR_U32(ctx, 31, 0x170764u);
    ctx->pc = 0x170760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17075Cu;
    // 0x170760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17075Cu, 0x170764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170764u;
label_170764:
    // 0x170764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17076c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170770: 0x3e00008  jr          $ra
    ctx->pc = 0x170770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170770u;
        // 0x170774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170778u;
}
