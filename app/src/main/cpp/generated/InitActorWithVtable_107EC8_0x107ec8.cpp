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

// Function: InitActorWithVtable_107EC8
// Address: 0x107ec8 - 0x107f20
void InitActorWithVtable_107EC8_0x107ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorWithVtable_107EC8_0x107ec8");
#endif

    switch (ctx->pc) {
        case 0x107efcu: goto label_107efc;
        case 0x107f08u: goto label_107f08;
        default: break;
    }

    ctx->pc = 0x107ec8u;

    // 0x107ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107ecc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x107eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x107ed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107ed4: 0x2442d220  addiu       $v0, $v0, -0x2DE0
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955552));
    // 0x107ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107ee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x107ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ee8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x107eec: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x107eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x107ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ef4: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x107EF4u;
    SET_GPR_U32(ctx, 31, 0x107EFCu);
    ctx->pc = 0x107EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EF4u;
    // 0x107ef8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x107EF4u, 0x107EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EFCu;
label_107efc:
    // 0x107efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f00: 0xc0400b0  jal         func_1002C0
    ctx->pc = 0x107F00u;
    SET_GPR_U32(ctx, 31, 0x107F08u);
    ctx->pc = 0x107F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F00u;
    // 0x107f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002C0u, 0x107F00u, 0x107F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F08u;
label_107f08:
    // 0x107f08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f14: 0x3e00008  jr          $ra
    ctx->pc = 0x107F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F14u;
        // 0x107f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F1Cu;
    // 0x107f1c: 0x0  nop
    ctx->pc = 0x107f1cu;
    // NOP
    ctx->pc = 0x107f20u;
}
