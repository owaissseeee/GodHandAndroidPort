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

// Function: SetStateEntry0x259_16F720
// Address: 0x16f720 - 0x16f790
void SetStateEntry0x259_16F720_0x16f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStateEntry0x259_16F720_0x16f720");
#endif

    switch (ctx->pc) {
        case 0x16f75cu: goto label_16f75c;
        case 0x16f770u: goto label_16f770;
        case 0x16f77cu: goto label_16f77c;
        default: break;
    }

    ctx->pc = 0x16f720u;

    // 0x16f720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f724: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16f728: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16f72c: 0x24420158  addiu       $v0, $v0, 0x158
    ctx->pc = 0x16f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x16f730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f73c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x16f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x16f740: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x16f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x16f744: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F744u;
    {
        const bool branch_taken_0x16f744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F744u;
        // 0x16f748: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f744) {
            ctx->pc = 0x16F760u;
            goto label_16f760;
        }
    }
    ctx->pc = 0x16F74Cu;
    // 0x16f74c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16f750: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16f750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f754: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x16F754u;
    SET_GPR_U32(ctx, 31, 0x16F75Cu);
    ctx->pc = 0x16F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F754u;
    // 0x16f758: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x16F754u, 0x16F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F75Cu;
label_16f75c:
    // 0x16f75c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x16f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_16f760:
    // 0x16f760: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16f764: 0x24050259  addiu       $a1, $zero, 0x259
    ctx->pc = 0x16f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x16f768: 0xc0c15de  jal         func_305778
    ctx->pc = 0x16F768u;
    SET_GPR_U32(ctx, 31, 0x16F770u);
    ctx->pc = 0x16F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F768u;
    // 0x16f76c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x16F768u, 0x16F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F770u;
label_16f770:
    // 0x16f770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f774: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x16F774u;
    SET_GPR_U32(ctx, 31, 0x16F77Cu);
    ctx->pc = 0x16F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F774u;
    // 0x16f778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x16F774u, 0x16F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F77Cu;
label_16f77c:
    // 0x16f77c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16f77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f788: 0x3e00008  jr          $ra
    ctx->pc = 0x16F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F788u;
        // 0x16f78c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F790u;
}
