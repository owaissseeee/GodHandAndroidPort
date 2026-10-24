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

// Function: func_001F7BD8
// Address: 0x1f7bd8 - 0x1f7c60
void func_001F7BD8_0x1f7bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7BD8_0x1f7bd8");
#endif

    switch (ctx->pc) {
        case 0x1f7c18u: goto label_1f7c18;
        case 0x1f7c30u: goto label_1f7c30;
        case 0x1f7c44u: goto label_1f7c44;
        default: break;
    }

    ctx->pc = 0x1f7bd8u;

    // 0x1f7bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7bdc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x1f7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x1f7be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f7be4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f7be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f7be8: 0x24516198  addiu       $s1, $v0, 0x6198
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
    // 0x1f7bec: 0x8c436198  lw          $v1, 0x6198($v0)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x786198u));
    // 0x1f7bf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f7bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f7bf8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7BF8u;
    {
        const bool branch_taken_0x1f7bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BF8u;
        // 0x1f7bfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bf8) {
            ctx->pc = 0x1F7C44u;
            goto label_1f7c44;
        }
    }
    ctx->pc = 0x1F7C00u;
    // 0x1f7c00: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1f7c04: 0x8c626188  lw          $v0, 0x6188($v1)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786188u));
    // 0x1f7c08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7C08u;
    {
        const bool branch_taken_0x1f7c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C08u;
        // 0x1f7c0c: 0x24706188  addiu       $s0, $v1, 0x6188 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c08) {
            ctx->pc = 0x1F7C30u;
            goto label_1f7c30;
        }
    }
    ctx->pc = 0x1F7C10u;
    // 0x1f7c10: 0xc07df22  jal         func_1F7C88
    ctx->pc = 0x1F7C10u;
    SET_GPR_U32(ctx, 31, 0x1F7C18u);
    ctx->pc = 0x1F7C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C88u, 0x1F7C10u, 0x1F7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C18u;
label_1f7c18:
    // 0x1f7c18: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1f7c1c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f7c20: 0x24a5c300  addiu       $a1, $a1, -0x3D00
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951680));
    // 0x1f7c24: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x1f7c28: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1F7C28u;
    SET_GPR_U32(ctx, 31, 0x1F7C30u);
    ctx->pc = 0x1F7C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C28u;
    // 0x1f7c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1F7C28u, 0x1F7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C30u;
label_1f7c30:
    // 0x1f7c30: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1f7c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c38: 0x24a5c308  addiu       $a1, $a1, -0x3CF8
    ctx->pc = 0x1f7c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951688));
    // 0x1f7c3c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1F7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F7C44u);
    ctx->pc = 0x1F7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C3Cu;
    // 0x1f7c40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1F7C3Cu, 0x1F7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C44u;
label_1f7c44:
    // 0x1f7c44: 0x26426198  addiu       $v0, $s2, 0x6198
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24984));
    // 0x1f7c48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f7c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7c4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f7c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7c50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f7c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C58u;
        // 0x1f7c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7C60u;
}
