#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Unformat__7cMcPortb
// Address: 0x7c3930 - 0x7c3980
void Unformat__7cMcPortb_0x7c3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Unformat__7cMcPortb_0x7c3930");
#endif

    switch (ctx->pc) {
        case 0x7c3954u: goto label_7c3954;
        case 0x7c396cu: goto label_7c396c;
        default: break;
    }

    ctx->pc = 0x7c3930u;

    // 0x7c3930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3934: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c393c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7c393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c3948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c394c: 0xc1f3a80  jal         func_7CEA00
    ctx->pc = 0x7C394Cu;
    SET_GPR_U32(ctx, 31, 0x7C3954u);
    ctx->pc = 0x7C3950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C394Cu;
    // 0x7c3950: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CEA00u, 0x7C394Cu, 0x7C3954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3954u;
label_7c3954:
    // 0x7c3954: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3954u;
    {
        const bool branch_taken_0x7c3954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3954u;
        // 0x7c3958: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3954) {
            ctx->pc = 0x7C3970u;
            goto label_7c3970;
        }
    }
    ctx->pc = 0x7C395Cu;
    // 0x7c395c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C395Cu;
    {
        const bool branch_taken_0x7c395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c395c) {
            ctx->pc = 0x7C3960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C395Cu;
            // 0x7c3960: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3974u;
            goto label_7c3974;
        }
    }
    ctx->pc = 0x7C3964u;
    // 0x7c3964: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3964u;
    SET_GPR_U32(ctx, 31, 0x7C396Cu);
    ctx->pc = 0x7C3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3964u;
    // 0x7c3968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3964u, 0x7C396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C396Cu;
label_7c396c:
    // 0x7c396c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c396cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3970:
    // 0x7c3970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3974:
    // 0x7c3974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3978: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3978u;
        // 0x7c397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3980u;
}
} // namespace gh_mcport
