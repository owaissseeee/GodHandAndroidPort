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

// Function: __7filebufiPci
// Address: 0x38ec90 - 0x38ed40
void ps2___7filebufiPci_0x38ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7filebufiPci_0x38ec90");
#endif

    switch (ctx->pc) {
        case 0x38ecc0u: goto label_38ecc0;
        case 0x38ecd4u: goto label_38ecd4;
        case 0x38ece0u: goto label_38ece0;
        case 0x38ecf0u: goto label_38ecf0;
        case 0x38ecf8u: goto label_38ecf8;
        case 0x38ed00u: goto label_38ed00;
        case 0x38ed14u: goto label_38ed14;
        case 0x38ed24u: goto label_38ed24;
        default: break;
    }

    ctx->pc = 0x38ec90u;

    // 0x38ec90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38ec94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38ec98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ec9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38ec9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eca0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38eca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38eca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38ecac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38ecacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ecb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38ecb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ecb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38ecb8: 0xc0e2cea  jal         func_38B3A8
    ctx->pc = 0x38ECB8u;
    SET_GPR_U32(ctx, 31, 0x38ECC0u);
    ctx->pc = 0x38ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECB8u;
    // 0x38ecbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3A8u, 0x38ECB8u, 0x38ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECC0u;
label_38ecc0:
    // 0x38ecc0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38ecc4: 0x2463d220  addiu       $v1, $v1, -0x2DE0
    ctx->pc = 0x38ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955552));
    // 0x38ecc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eccc: 0xc0e49c6  jal         func_392718
    ctx->pc = 0x38ECCCu;
    SET_GPR_U32(ctx, 31, 0x38ECD4u);
    ctx->pc = 0x38ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECCCu;
    // 0x38ecd0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392718u, 0x38ECCCu, 0x38ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECD4u;
label_38ecd4:
    // 0x38ecd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ecd8: 0xc0e4a66  jal         func_392998
    ctx->pc = 0x38ECD8u;
    SET_GPR_U32(ctx, 31, 0x38ECE0u);
    ctx->pc = 0x38ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECD8u;
    // 0x38ecdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392998u, 0x38ECD8u, 0x38ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECE0u;
label_38ece0:
    // 0x38ece0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38ece0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ece4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38ece4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ece8: 0xc0e3bd8  jal         func_38EF60
    ctx->pc = 0x38ECE8u;
    SET_GPR_U32(ctx, 31, 0x38ECF0u);
    ctx->pc = 0x38ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECE8u;
    // 0x38ecec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EF60u, 0x38ECE8u, 0x38ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECF0u;
label_38ecf0:
    // 0x38ecf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38ECF0u;
    {
        const bool branch_taken_0x38ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECF0u;
        // 0x38ecf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ecf0) {
            ctx->pc = 0x38ED00u;
            goto label_38ed00;
        }
    }
    ctx->pc = 0x38ECF8u;
label_38ecf8:
    // 0x38ecf8: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x38ECF8u;
    SET_GPR_U32(ctx, 31, 0x38ED00u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x38ECF8u, 0x38ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED00u;
label_38ed00:
    // 0x38ed00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38ED00u;
    {
        const bool branch_taken_0x38ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED00u;
        // 0x38ed04: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed00) {
            ctx->pc = 0x38ED24u;
            goto label_38ed24;
        }
    }
    ctx->pc = 0x38ED08u;
    // 0x38ed08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ed0c: 0xc0e2cf8  jal         func_38B3E0
    ctx->pc = 0x38ED0Cu;
    SET_GPR_U32(ctx, 31, 0x38ED14u);
    ctx->pc = 0x38ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED0Cu;
    // 0x38ed10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3E0u, 0x38ED0Cu, 0x38ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED14u;
label_38ed14:
    // 0x38ed14: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x38ED14u;
    {
        const bool branch_taken_0x38ed14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ed14) {
            ctx->pc = 0x38ECF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ecf8;
        }
    }
    ctx->pc = 0x38ED1Cu;
    // 0x38ed1c: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x38ED1Cu;
    SET_GPR_U32(ctx, 31, 0x38ED24u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x38ED1Cu, 0x38ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED24u;
label_38ed24:
    // 0x38ed24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38ed24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ed28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38ed28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ed2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ed2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ed30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ed30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x38ED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED34u;
        // 0x38ed38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38ED3Cu;
    // 0x38ed3c: 0x0  nop
    ctx->pc = 0x38ed3cu;
    // NOP
    ctx->pc = 0x38ed40u;
}
