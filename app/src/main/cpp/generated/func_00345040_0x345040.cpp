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

// Function: func_00345040
// Address: 0x345040 - 0x345090
void func_00345040_0x345040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345040_0x345040");
#endif

    switch (ctx->pc) {
        case 0x34506cu: goto label_34506c;
        default: break;
    }

    ctx->pc = 0x345040u;

    // 0x345040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345044: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x345044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x345048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34504c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34504cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345054: 0x24c65090  addiu       $a2, $a2, 0x5090
    ctx->pc = 0x345054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20624));
    // 0x345058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34505c: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x34505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x345060: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x345060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x345064: 0xc0d67b0  jal         func_359EC0
    ctx->pc = 0x345064u;
    SET_GPR_U32(ctx, 31, 0x34506Cu);
    ctx->pc = 0x345068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345064u;
    // 0x345068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EC0u, 0x345064u, 0x34506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34506Cu;
label_34506c:
    // 0x34506c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345070: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x345070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34507c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x34507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x345080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345084: 0x80d67b0  j           func_359EC0
    ctx->pc = 0x345084u;
    ctx->pc = 0x345088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345084u;
    // 0x345088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EC0u, 0x345084u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34508Cu;
    // 0x34508c: 0x0  nop
    ctx->pc = 0x34508cu;
    // NOP
    ctx->pc = 0x345090u;
}
