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

// Function: func_0028EB88
// Address: 0x28eb88 - 0x28ebf0
void func_0028EB88_0x28eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EB88_0x28eb88");
#endif

    switch (ctx->pc) {
        case 0x28ebbcu: goto label_28ebbc;
        case 0x28ebccu: goto label_28ebcc;
        case 0x28ebd8u: goto label_28ebd8;
        default: break;
    }

    ctx->pc = 0x28eb88u;

    // 0x28eb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28eb8c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28eb90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28eb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28eb94: 0x2442a660  addiu       $v0, $v0, -0x59A0
    ctx->pc = 0x28eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944352));
    // 0x28eb98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28eb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28eba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eba4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28eba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eba8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28ebac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x28ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x28ebb0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x28ebb4: 0xc07f8dc  jal         func_1FE370
    ctx->pc = 0x28EBB4u;
    SET_GPR_U32(ctx, 31, 0x28EBBCu);
    ctx->pc = 0x28EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBB4u;
    // 0x28ebb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE370u, 0x28EBB4u, 0x28EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBBCu;
label_28ebbc:
    // 0x28ebbc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x28ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28ebc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ebc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebc4: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x28EBC4u;
    SET_GPR_U32(ctx, 31, 0x28EBCCu);
    ctx->pc = 0x28EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBC4u;
    // 0x28ebc8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x28EBC4u, 0x28EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBCCu;
label_28ebcc:
    // 0x28ebcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebd0: 0xc0a9cf2  jal         func_2A73C8
    ctx->pc = 0x28EBD0u;
    SET_GPR_U32(ctx, 31, 0x28EBD8u);
    ctx->pc = 0x28EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBD0u;
    // 0x28ebd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73C8u, 0x28EBD0u, 0x28EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBD8u;
label_28ebd8:
    // 0x28ebd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ebdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ebdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ebe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBE4u;
        // 0x28ebe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBECu;
    // 0x28ebec: 0x0  nop
    ctx->pc = 0x28ebecu;
    // NOP
    ctx->pc = 0x28ebf0u;
}
