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

// Function: InitVtableEntry_2B8AE0
// Address: 0x2b8ae0 - 0x2b8b20
void InitVtableEntry_2B8AE0_0x2b8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableEntry_2B8AE0_0x2b8ae0");
#endif

    switch (ctx->pc) {
        case 0x2b8afcu: goto label_2b8afc;
        default: break;
    }

    ctx->pc = 0x2b8ae0u;

    // 0x2b8ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8ae4: 0x2405026c  addiu       $a1, $zero, 0x26C
    ctx->pc = 0x2b8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x2b8ae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8aec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b8aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8af4: 0xc0ae85e  jal         func_2BA178
    ctx->pc = 0x2B8AF4u;
    SET_GPR_U32(ctx, 31, 0x2B8AFCu);
    ctx->pc = 0x2B8AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AF4u;
    // 0x2b8af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA178u, 0x2B8AF4u, 0x2B8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AFCu;
label_2b8afc:
    // 0x2b8afc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2b8b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b8b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b04: 0x2463ba68  addiu       $v1, $v1, -0x4598
    ctx->pc = 0x2b8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949480));
    // 0x2b8b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b0c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b8b10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b8b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B14u;
        // 0x2b8b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8B1Cu;
    // 0x2b8b1c: 0x0  nop
    ctx->pc = 0x2b8b1cu;
    // NOP
    ctx->pc = 0x2b8b20u;
}
