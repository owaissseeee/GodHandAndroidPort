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

// Function: AllocInitObj182888_317B90
// Address: 0x317b90 - 0x317c00
void AllocInitObj182888_317B90_0x317b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj182888_317B90_0x317b90");
#endif

    switch (ctx->pc) {
        case 0x317bc4u: goto label_317bc4;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be4u: goto label_317be4;
        default: break;
    }

    ctx->pc = 0x317b90u;

    // 0x317b90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317b94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317b98: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317b98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317b9c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317ba0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317ba4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317ba8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317BA8u;
    {
        const bool branch_taken_0x317ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BA8u;
        // 0x317bac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ba8) {
            ctx->pc = 0x317BECu;
            goto label_317bec;
        }
    }
    ctx->pc = 0x317BB0u;
    // 0x317bb0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317bb4: 0x24041b40  addiu       $a0, $zero, 0x1B40
    ctx->pc = 0x317bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6976));
    // 0x317bb8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317bbc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317BBCu;
    SET_GPR_U32(ctx, 31, 0x317BC4u);
    ctx->pc = 0x317BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BBCu;
    // 0x317bc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317BBCu, 0x317BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BC4u;
label_317bc4:
    // 0x317bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bc8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317BC8u;
    {
        const bool branch_taken_0x317bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC8u;
        // 0x317bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bc8) {
            ctx->pc = 0x317BECu;
            goto label_317bec;
        }
    }
    ctx->pc = 0x317BD0u;
    // 0x317bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bd4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317BD4u;
    SET_GPR_U32(ctx, 31, 0x317BDCu);
    ctx->pc = 0x317BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BD4u;
    // 0x317bd8: 0x24061b40  addiu       $a2, $zero, 0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317BD4u, 0x317BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BDCu;
label_317bdc:
    // 0x317bdc: 0xc060a22  jal         func_182888
    ctx->pc = 0x317BDCu;
    SET_GPR_U32(ctx, 31, 0x317BE4u);
    ctx->pc = 0x317BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BDCu;
    // 0x317be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182888u, 0x317BDCu, 0x317BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BE4u;
label_317be4:
    // 0x317be4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317BE4u;
    {
        const bool branch_taken_0x317be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BE4u;
        // 0x317be8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317be4) {
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317BECu;
label_317bec:
    // 0x317bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317bf4:
    // 0x317bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x317BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BF8u;
        // 0x317bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317C00u;
}
