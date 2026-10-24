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

// Function: MtxBuildTransRotScale
// Address: 0x147ab8 - 0x147b18
void MtxBuildTransRotScale_0x147ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxBuildTransRotScale_0x147ab8");
#endif

    switch (ctx->pc) {
        case 0x147adcu: goto label_147adc;
        case 0x147aecu: goto label_147aec;
        case 0x147afcu: goto label_147afc;
        default: break;
    }

    ctx->pc = 0x147ab8u;

    // 0x147ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x147abc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147ac8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x147ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x147acc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x147accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147ad4: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x147AD4u;
    SET_GPR_U32(ctx, 31, 0x147ADCu);
    ctx->pc = 0x147AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AD4u;
    // 0x147ad8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x147AD4u, 0x147ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147ADCu;
label_147adc:
    // 0x147adc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ae4: 0xc051eec  jal         func_147BB0
    ctx->pc = 0x147AE4u;
    SET_GPR_U32(ctx, 31, 0x147AECu);
    ctx->pc = 0x147AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AE4u;
    // 0x147ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BB0u, 0x147AE4u, 0x147AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AECu;
label_147aec:
    // 0x147aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147af0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x147af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147af4: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x147AF4u;
    SET_GPR_U32(ctx, 31, 0x147AFCu);
    ctx->pc = 0x147AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AF4u;
    // 0x147af8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x147AF4u, 0x147AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AFCu;
label_147afc:
    // 0x147afc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147b04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x147b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x147B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B0Cu;
        // 0x147b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147B14u;
    // 0x147b14: 0x0  nop
    ctx->pc = 0x147b14u;
    // NOP
    ctx->pc = 0x147b18u;
}
