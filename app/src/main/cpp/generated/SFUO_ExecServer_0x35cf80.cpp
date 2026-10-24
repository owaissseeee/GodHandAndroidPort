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

// Function: SFUO_ExecServer
// Address: 0x35cf80 - 0x35cfc8
void SFUO_ExecServer_0x35cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFUO_ExecServer_0x35cf80");
#endif

    switch (ctx->pc) {
        case 0x35cf98u: goto label_35cf98;
        case 0x35cfa0u: goto label_35cfa0;
        case 0x35cfacu: goto label_35cfac;
        default: break;
    }

    ctx->pc = 0x35cf80u;

    // 0x35cf80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35cf84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35cf88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35cf8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35cf90: 0xc0d73f2  jal         func_35CFC8
    ctx->pc = 0x35CF90u;
    SET_GPR_U32(ctx, 31, 0x35CF98u);
    ctx->pc = 0x35CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF90u;
    // 0x35cf94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFC8u, 0x35CF90u, 0x35CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF98u;
label_35cf98:
    // 0x35cf98: 0xc0d7436  jal         func_35D0D8
    ctx->pc = 0x35CF98u;
    SET_GPR_U32(ctx, 31, 0x35CFA0u);
    ctx->pc = 0x35CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF98u;
    // 0x35cf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0D8u, 0x35CF98u, 0x35CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFA0u;
label_35cfa0:
    // 0x35cfa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cfa4: 0xc0d7414  jal         func_35D050
    ctx->pc = 0x35CFA4u;
    SET_GPR_U32(ctx, 31, 0x35CFACu);
    ctx->pc = 0x35CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFA4u;
    // 0x35cfa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D050u, 0x35CFA4u, 0x35CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFACu;
label_35cfac:
    // 0x35cfac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35cfacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cfb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35cfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cfb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35cfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x35CFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFBCu;
        // 0x35cfc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CFC4u;
    // 0x35cfc4: 0x0  nop
    ctx->pc = 0x35cfc4u;
    // NOP
    ctx->pc = 0x35cfc8u;
}
