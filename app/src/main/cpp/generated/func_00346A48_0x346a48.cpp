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

// Function: func_00346A48
// Address: 0x346a48 - 0x346ae8
void func_00346A48_0x346a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346A48_0x346a48");
#endif

    switch (ctx->pc) {
        case 0x346a64u: goto label_346a64;
        case 0x346a98u: goto label_346a98;
        case 0x346aa4u: goto label_346aa4;
        default: break;
    }

    ctx->pc = 0x346a48u;

    // 0x346a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346a5c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x346A5Cu;
    SET_GPR_U32(ctx, 31, 0x346A64u);
    ctx->pc = 0x346A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A5Cu;
    // 0x346a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x346A5Cu, 0x346A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A64u;
label_346a64:
    // 0x346a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a6c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346A6Cu;
    {
        const bool branch_taken_0x346a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A6Cu;
        // 0x346a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a6c) {
            ctx->pc = 0x346A90u;
            goto label_346a90;
        }
    }
    ctx->pc = 0x346A74u;
    // 0x346a74: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x346a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346a80: 0x24848628  addiu       $a0, $a0, -0x79D8
    ctx->pc = 0x346a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936104));
    // 0x346a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346a88: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x346A88u;
    ctx->pc = 0x346A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A88u;
    // 0x346a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346A90u;
label_346a90:
    // 0x346a90: 0xc0db28e  jal         func_36CA38
    ctx->pc = 0x346A90u;
    SET_GPR_U32(ctx, 31, 0x346A98u);
    ctx->pc = 0x36CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CA38u, 0x346A90u, 0x346A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A98u;
label_346a98:
    // 0x346a98: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x346a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x346a9c: 0xc0d216c  jal         func_3485B0
    ctx->pc = 0x346A9Cu;
    SET_GPR_U32(ctx, 31, 0x346AA4u);
    ctx->pc = 0x346AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A9Cu;
    // 0x346aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3485B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3485B0u, 0x346A9Cu, 0x346AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AA4u;
label_346aa4:
    // 0x346aa4: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x346aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x346aa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346aac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346ab8: 0x80d216c  j           func_3485B0
    ctx->pc = 0x346AB8u;
    ctx->pc = 0x346ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AB8u;
    // 0x346abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3485B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3485B0u, 0x346AB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346AC0u;
    // 0x346ac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346ac4: 0x0  nop
    ctx->pc = 0x346ac4u;
    // NOP
    // 0x346ac8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346acc: 0x0  nop
    ctx->pc = 0x346accu;
    // NOP
    // 0x346ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346ad4: 0x0  nop
    ctx->pc = 0x346ad4u;
    // NOP
    // 0x346ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346adc: 0x0  nop
    ctx->pc = 0x346adcu;
    // NOP
    // 0x346ae0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x346ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346ae4: 0x0  nop
    ctx->pc = 0x346ae4u;
    // NOP
    ctx->pc = 0x346ae8u;
}
