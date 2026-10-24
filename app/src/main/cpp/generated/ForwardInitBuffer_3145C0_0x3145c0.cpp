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

// Function: ForwardInitBuffer_3145C0
// Address: 0x3145c0 - 0x314630
void ForwardInitBuffer_3145C0_0x3145c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3145C0_0x3145c0");
#endif

    switch (ctx->pc) {
        case 0x3145f4u: goto label_3145f4;
        case 0x31460cu: goto label_31460c;
        case 0x314614u: goto label_314614;
        default: break;
    }

    ctx->pc = 0x3145c0u;

    // 0x3145c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3145c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3145c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3145c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3145c8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3145c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3145cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3145ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3145d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3145d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3145d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3145d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3145d8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3145D8u;
    {
        const bool branch_taken_0x3145d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145D8u;
        // 0x3145dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145d8) {
            ctx->pc = 0x31461Cu;
            goto label_31461c;
        }
    }
    ctx->pc = 0x3145E0u;
    // 0x3145e0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3145e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3145e4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3145e8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3145ec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3145ECu;
    SET_GPR_U32(ctx, 31, 0x3145F4u);
    ctx->pc = 0x3145F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145ECu;
    // 0x3145f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3145ECu, 0x3145F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145F4u;
label_3145f4:
    // 0x3145f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3145f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3145F8u;
    {
        const bool branch_taken_0x3145f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145F8u;
        // 0x3145fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145f8) {
            ctx->pc = 0x31461Cu;
            goto label_31461c;
        }
    }
    ctx->pc = 0x314600u;
    // 0x314600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314604: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314604u;
    SET_GPR_U32(ctx, 31, 0x31460Cu);
    ctx->pc = 0x314608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314604u;
    // 0x314608: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314604u, 0x31460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31460Cu;
label_31460c:
    // 0x31460c: 0xc064d1a  jal         func_193468
    ctx->pc = 0x31460Cu;
    SET_GPR_U32(ctx, 31, 0x314614u);
    ctx->pc = 0x314610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31460Cu;
    // 0x314610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193468u, 0x31460Cu, 0x314614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314614u;
label_314614:
    // 0x314614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314614u;
    {
        const bool branch_taken_0x314614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314614u;
        // 0x314618: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314614) {
            ctx->pc = 0x314624u;
            goto label_314624;
        }
    }
    ctx->pc = 0x31461Cu;
label_31461c:
    // 0x31461c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31461cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314624:
    // 0x314624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314628: 0x3e00008  jr          $ra
    ctx->pc = 0x314628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314628u;
        // 0x31462c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314630u;
}
