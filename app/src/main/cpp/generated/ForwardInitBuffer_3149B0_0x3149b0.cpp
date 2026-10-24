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

// Function: ForwardInitBuffer_3149B0
// Address: 0x3149b0 - 0x314a20
void ForwardInitBuffer_3149B0_0x3149b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3149B0_0x3149b0");
#endif

    switch (ctx->pc) {
        case 0x3149e4u: goto label_3149e4;
        case 0x3149fcu: goto label_3149fc;
        case 0x314a04u: goto label_314a04;
        default: break;
    }

    ctx->pc = 0x3149b0u;

    // 0x3149b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3149b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3149b8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3149b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3149bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3149bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3149c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3149c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3149c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3149c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3149c8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3149C8u;
    {
        const bool branch_taken_0x3149c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C8u;
        // 0x3149cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149c8) {
            ctx->pc = 0x314A0Cu;
            goto label_314a0c;
        }
    }
    ctx->pc = 0x3149D0u;
    // 0x3149d0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3149d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3149d4: 0x240409c0  addiu       $a0, $zero, 0x9C0
    ctx->pc = 0x3149d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x3149d8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3149d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3149dc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3149DCu;
    SET_GPR_U32(ctx, 31, 0x3149E4u);
    ctx->pc = 0x3149E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149DCu;
    // 0x3149e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3149DCu, 0x3149E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3149E4u;
label_3149e4:
    // 0x3149e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3149e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3149E8u;
    {
        const bool branch_taken_0x3149e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E8u;
        // 0x3149ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149e8) {
            ctx->pc = 0x314A0Cu;
            goto label_314a0c;
        }
    }
    ctx->pc = 0x3149F0u;
    // 0x3149f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3149F4u;
    SET_GPR_U32(ctx, 31, 0x3149FCu);
    ctx->pc = 0x3149F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149F4u;
    // 0x3149f8: 0x240609c0  addiu       $a2, $zero, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3149F4u, 0x3149FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3149FCu;
label_3149fc:
    // 0x3149fc: 0xc0663ee  jal         func_198FB8
    ctx->pc = 0x3149FCu;
    SET_GPR_U32(ctx, 31, 0x314A04u);
    ctx->pc = 0x314A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149FCu;
    // 0x314a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FB8u, 0x3149FCu, 0x314A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A04u;
label_314a04:
    // 0x314a04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314A04u;
    {
        const bool branch_taken_0x314a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A04u;
        // 0x314a08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a04) {
            ctx->pc = 0x314A14u;
            goto label_314a14;
        }
    }
    ctx->pc = 0x314A0Cu;
label_314a0c:
    // 0x314a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314a14:
    // 0x314a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314a18: 0x3e00008  jr          $ra
    ctx->pc = 0x314A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A18u;
        // 0x314a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314A20u;
}
