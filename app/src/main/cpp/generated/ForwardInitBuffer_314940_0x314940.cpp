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

// Function: ForwardInitBuffer_314940
// Address: 0x314940 - 0x3149b0
void ForwardInitBuffer_314940_0x314940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314940_0x314940");
#endif

    switch (ctx->pc) {
        case 0x314974u: goto label_314974;
        case 0x31498cu: goto label_31498c;
        case 0x314994u: goto label_314994;
        default: break;
    }

    ctx->pc = 0x314940u;

    // 0x314940: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314944: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314948: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31494c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314954: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314958: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314958u;
    {
        const bool branch_taken_0x314958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314958u;
        // 0x31495c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314958) {
            ctx->pc = 0x31499Cu;
            goto label_31499c;
        }
    }
    ctx->pc = 0x314960u;
    // 0x314960: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314964: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x314964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x314968: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31496c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31496Cu;
    SET_GPR_U32(ctx, 31, 0x314974u);
    ctx->pc = 0x314970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31496Cu;
    // 0x314970: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31496Cu, 0x314974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314974u;
label_314974:
    // 0x314974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314978: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314978u;
    {
        const bool branch_taken_0x314978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314978u;
        // 0x31497c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314978) {
            ctx->pc = 0x31499Cu;
            goto label_31499c;
        }
    }
    ctx->pc = 0x314980u;
    // 0x314980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314984: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314984u;
    SET_GPR_U32(ctx, 31, 0x31498Cu);
    ctx->pc = 0x314988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314984u;
    // 0x314988: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314984u, 0x31498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31498Cu;
label_31498c:
    // 0x31498c: 0xc06632a  jal         func_198CA8
    ctx->pc = 0x31498Cu;
    SET_GPR_U32(ctx, 31, 0x314994u);
    ctx->pc = 0x314990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31498Cu;
    // 0x314990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198CA8u, 0x31498Cu, 0x314994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314994u;
label_314994:
    // 0x314994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314994u;
    {
        const bool branch_taken_0x314994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314994u;
        // 0x314998: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314994) {
            ctx->pc = 0x3149A4u;
            goto label_3149a4;
        }
    }
    ctx->pc = 0x31499Cu;
label_31499c:
    // 0x31499c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3149a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3149a4:
    // 0x3149a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3149a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3149a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3149A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149A8u;
        // 0x3149ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3149B0u;
}
