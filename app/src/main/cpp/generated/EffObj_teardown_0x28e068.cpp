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

// Function: EffObj_teardown
// Address: 0x28e068 - 0x28e0e0
void EffObj_teardown_0x28e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffObj_teardown_0x28e068");
#endif

    switch (ctx->pc) {
        case 0x28e090u: goto label_28e090;
        case 0x28e0a0u: goto label_28e0a0;
        case 0x28e0b4u: goto label_28e0b4;
        case 0x28e0bcu: goto label_28e0bc;
        case 0x28e0c8u: goto label_28e0c8;
        default: break;
    }

    ctx->pc = 0x28e068u;

    // 0x28e068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e06c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28e070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28e074: 0x2442a528  addiu       $v0, $v0, -0x5AD8
    ctx->pc = 0x28e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944040));
    // 0x28e078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e084: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28e084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e088: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x28E088u;
    SET_GPR_U32(ctx, 31, 0x28E090u);
    ctx->pc = 0x28E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E088u;
    // 0x28e08c: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x28E088u, 0x28E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E090u;
label_28e090:
    // 0x28e090: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x28e094: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x28e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x28e098: 0xc0c15de  jal         func_305778
    ctx->pc = 0x28E098u;
    SET_GPR_U32(ctx, 31, 0x28E0A0u);
    ctx->pc = 0x28E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E098u;
    // 0x28e09c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x28E098u, 0x28E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0A0u;
label_28e0a0:
    // 0x28e0a0: 0x8e051550  lw          $a1, 0x1550($s0)
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
    // 0x28e0a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E0A4u;
    {
        const bool branch_taken_0x28e0a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0A4u;
        // 0x28e0a8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0a4) {
            ctx->pc = 0x28E0B4u;
            goto label_28e0b4;
        }
    }
    ctx->pc = 0x28E0ACu;
    // 0x28e0ac: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x28E0ACu;
    SET_GPR_U32(ctx, 31, 0x28E0B4u);
    ctx->pc = 0x28E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0ACu;
    // 0x28e0b0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x28E0ACu, 0x28E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0B4u;
label_28e0b4:
    // 0x28e0b4: 0xc0a3906  jal         func_28E418
    ctx->pc = 0x28E0B4u;
    SET_GPR_U32(ctx, 31, 0x28E0BCu);
    ctx->pc = 0x28E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0B4u;
    // 0x28e0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E418u, 0x28E0B4u, 0x28E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0BCu;
label_28e0bc:
    // 0x28e0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0c0: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x28E0C0u;
    SET_GPR_U32(ctx, 31, 0x28E0C8u);
    ctx->pc = 0x28E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0C0u;
    // 0x28e0c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x28E0C0u, 0x28E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0C8u;
label_28e0c8:
    // 0x28e0c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28e0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0D4u;
        // 0x28e0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E0DCu;
    // 0x28e0dc: 0x0  nop
    ctx->pc = 0x28e0dcu;
    // NOP
    ctx->pc = 0x28e0e0u;
}
