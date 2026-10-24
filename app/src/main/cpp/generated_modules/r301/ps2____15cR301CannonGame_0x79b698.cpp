#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: _$_15cR301CannonGame
// Address: 0x79b698 - 0x79b728
void ps2____15cR301CannonGame_0x79b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____15cR301CannonGame_0x79b698");
#endif

    switch (ctx->pc) {
        case 0x79b6c4u: goto label_79b6c4;
        case 0x79b6e0u: goto label_79b6e0;
        case 0x79b6ecu: goto label_79b6ec;
        case 0x79b70cu: goto label_79b70c;
        default: break;
    }

    ctx->pc = 0x79b698u;

    // 0x79b698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b69c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b6a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79b6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79b6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b6b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b6b4: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x79b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x79b6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b6bc: 0xc1e748e  jal         func_79D238
    ctx->pc = 0x79B6BCu;
    SET_GPR_U32(ctx, 31, 0x79B6C4u);
    ctx->pc = 0x79B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6BCu;
    // 0x79b6c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D238u, 0x79B6BCu, 0x79B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6C4u;
label_79b6c4:
    // 0x79b6c4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x79b6c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79B6C8u;
    {
        const bool branch_taken_0x79b6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C8u;
        // 0x79b6cc: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6c8) {
            ctx->pc = 0x79B6F8u;
            goto label_79b6f8;
        }
    }
    ctx->pc = 0x79B6D0u;
    // 0x79b6d0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B6D0u;
    {
        const bool branch_taken_0x79b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6D0u;
        // 0x79b6d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6d0) {
            ctx->pc = 0x79B6F8u;
            goto label_79b6f8;
        }
    }
    ctx->pc = 0x79B6D8u;
    // 0x79b6d8: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x79b6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x79b6dc: 0x0  nop
    ctx->pc = 0x79b6dcu;
    // NOP
label_79b6e0:
    // 0x79b6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6e4: 0xc1e6c3c  jal         func_79B0F0
    ctx->pc = 0x79B6E4u;
    SET_GPR_U32(ctx, 31, 0x79B6ECu);
    ctx->pc = 0x79B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6E4u;
    // 0x79b6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B0F0u, 0x79B6E4u, 0x79B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6ECu;
label_79b6ec:
    // 0x79b6ec: 0x0  nop
    ctx->pc = 0x79b6ecu;
    // NOP
    // 0x79b6f0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B6F0u;
    {
        const bool branch_taken_0x79b6f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F0u;
        // 0x79b6f4: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6f0) {
            ctx->pc = 0x79B6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b6e0;
        }
    }
    ctx->pc = 0x79B6F8u;
label_79b6f8:
    // 0x79b6f8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x79b6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x79b6fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B6FCu;
    {
        const bool branch_taken_0x79b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6FCu;
        // 0x79b700: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6fc) {
            ctx->pc = 0x79B710u;
            goto label_79b710;
        }
    }
    ctx->pc = 0x79B704u;
    // 0x79b704: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x79B704u;
    SET_GPR_U32(ctx, 31, 0x79B70Cu);
    ctx->pc = 0x79B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B704u;
    // 0x79b708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79B704u, 0x79B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B70Cu;
label_79b70c:
    // 0x79b70c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79b710:
    // 0x79b710: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79b710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79b714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b718: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79b718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b720: 0x3e00008  jr          $ra
    ctx->pc = 0x79B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B720u;
        // 0x79b724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B728u;
}
} // namespace gh_r301
