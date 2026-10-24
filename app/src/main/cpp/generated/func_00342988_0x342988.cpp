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

// Function: func_00342988
// Address: 0x342988 - 0x342a08
void func_00342988_0x342988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342988_0x342988");
#endif

    switch (ctx->pc) {
        case 0x3429b4u: goto label_3429b4;
        case 0x3429c0u: goto label_3429c0;
        case 0x3429ecu: goto label_3429ec;
        default: break;
    }

    ctx->pc = 0x342988u;

    // 0x342988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34298c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x342990: 0x24b1e800  addiu       $s1, $a1, -0x1800
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
    // 0x342994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x342994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x342998: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x342998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34299c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3429a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3429a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3429a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3429a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3429ac: 0xc0ca50e  jal         func_329438
    ctx->pc = 0x3429ACu;
    SET_GPR_U32(ctx, 31, 0x3429B4u);
    ctx->pc = 0x3429B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429ACu;
    // 0x3429b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329438u, 0x3429ACu, 0x3429B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429B4u;
label_3429b4:
    // 0x3429b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3429b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429b8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3429B8u;
    {
        const bool branch_taken_0x3429b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3429BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429B8u;
        // 0x3429bc: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429b8) {
            ctx->pc = 0x3429E0u;
            goto label_3429e0;
        }
    }
    ctx->pc = 0x3429C0u;
label_3429c0:
    // 0x3429c0: 0x0  nop
    ctx->pc = 0x3429c0u;
    // NOP
    // 0x3429c4: 0x0  nop
    ctx->pc = 0x3429c4u;
    // NOP
    // 0x3429c8: 0x0  nop
    ctx->pc = 0x3429c8u;
    // NOP
    // 0x3429cc: 0x0  nop
    ctx->pc = 0x3429ccu;
    // NOP
    // 0x3429d0: 0x0  nop
    ctx->pc = 0x3429d0u;
    // NOP
    // 0x3429d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3429D4u;
    {
        const bool branch_taken_0x3429d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3429d4) {
            ctx->pc = 0x3429C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3429c0;
        }
    }
    ctx->pc = 0x3429DCu;
    // 0x3429dc: 0x0  nop
    ctx->pc = 0x3429dcu;
    // NOP
label_3429e0:
    // 0x3429e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3429e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429e4: 0xc0ee666  jal         func_3B9998
    ctx->pc = 0x3429E4u;
    SET_GPR_U32(ctx, 31, 0x3429ECu);
    ctx->pc = 0x3429E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429E4u;
    // 0x3429e8: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9998u, 0x3429E4u, 0x3429ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429ECu;
label_3429ec:
    // 0x3429ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3429ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3429f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3429f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3429f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3429f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3429f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3429fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3429fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x342a00: 0x3e00008  jr          $ra
    ctx->pc = 0x342A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A00u;
        // 0x342a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A08u;
}
