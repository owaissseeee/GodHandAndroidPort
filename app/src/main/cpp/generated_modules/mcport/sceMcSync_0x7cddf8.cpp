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
// Function: sceMcSync
// Address: 0x7cddf8 - 0x7cdec0
void sceMcSync_0x7cddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcSync_0x7cddf8");
#endif

    switch (ctx->pc) {
        case 0x7cde44u: goto label_7cde44;
        case 0x7cde5cu: goto label_7cde5c;
        case 0x7cde94u: goto label_7cde94;
        default: break;
    }

    ctx->pc = 0x7cddf8u;

    // 0x7cddf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7cddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7cddfc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7cddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x7cde00: 0x3c13007d  lui         $s3, 0x7D
    ctx->pc = 0x7cde00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
    // 0x7cde04: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x7cde04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x7cde08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x7cde08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x7cde0c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x7cde0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cde10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cde10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cde14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7cde14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cde18: 0x8e6207b0  lw          $v0, 0x7B0($s3)
    ctx->pc = 0x7cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D07B0u));
    // 0x7cde1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7cde1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cde20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7cde20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x7cde24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cde24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cde28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDE28u;
    {
        const bool branch_taken_0x7cde28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE28u;
        // 0x7cde2c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde28) {
            ctx->pc = 0x7CDE38u;
            goto label_7cde38;
        }
    }
    ctx->pc = 0x7CDE30u;
    // 0x7cde30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x7CDE30u;
    {
        const bool branch_taken_0x7cde30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE30u;
        // 0x7cde34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde30) {
            ctx->pc = 0x7CDE98u;
            goto label_7cde98;
        }
    }
    ctx->pc = 0x7CDE38u;
label_7cde38:
    // 0x7cde38: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cde38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cde3c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CDE3Cu;
    SET_GPR_U32(ctx, 31, 0x7CDE44u);
    ctx->pc = 0x7CDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDE3Cu;
    // 0x7cde40: 0x8e2407b8  lw          $a0, 0x7B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CDE3Cu, 0x7CDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDE44u;
label_7cde44:
    // 0x7cde44: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CDE44u;
    {
        const bool branch_taken_0x7cde44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE44u;
        // 0x7cde48: 0x28500000  slti        $s0, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde44) {
            ctx->pc = 0x7CDE5Cu;
            goto label_7cde5c;
        }
    }
    ctx->pc = 0x7CDE4Cu;
    // 0x7cde4c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDE4Cu;
    {
        const bool branch_taken_0x7cde4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE4Cu;
        // 0x7cde50: 0x8e2407b8  lw          $a0, 0x7B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde4c) {
            ctx->pc = 0x7CDE5Cu;
            goto label_7cde5c;
        }
    }
    ctx->pc = 0x7CDE54u;
    // 0x7cde54: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x7CDE54u;
    SET_GPR_U32(ctx, 31, 0x7CDE5Cu);
    ctx->pc = 0x7CDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDE54u;
    // 0x7cde58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x7CDE54u, 0x7CDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDE5Cu;
label_7cde5c:
    // 0x7cde5c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDE5Cu;
    {
        const bool branch_taken_0x7cde5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE5Cu;
        // 0x7cde60: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde5c) {
            ctx->pc = 0x7CDE6Cu;
            goto label_7cde6c;
        }
    }
    ctx->pc = 0x7CDE64u;
    // 0x7cde64: 0x8e6207b0  lw          $v0, 0x7B0($s3)
    ctx->pc = 0x7cde64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1968)));
    // 0x7cde68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x7cde68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_7cde6c:
    // 0x7cde6c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x7CDE6Cu;
    {
        const bool branch_taken_0x7cde6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE6Cu;
        // 0x7cde70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde6c) {
            ctx->pc = 0x7CDE98u;
            goto label_7cde98;
        }
    }
    ctx->pc = 0x7CDE74u;
    // 0x7cde74: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDE74u;
    {
        const bool branch_taken_0x7cde74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDE74u;
        // 0x7cde78: 0xae6007b0  sw          $zero, 0x7B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cde74) {
            ctx->pc = 0x7CDE88u;
            goto label_7cde88;
        }
    }
    ctx->pc = 0x7CDE7Cu;
    // 0x7cde7c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cde80: 0x8c432f40  lw          $v1, 0x2F40($v0)
    ctx->pc = 0x7cde80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D2F40u));
    // 0x7cde84: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x7cde84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_7cde88:
    // 0x7cde88: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cde88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cde8c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CDE8Cu;
    SET_GPR_U32(ctx, 31, 0x7CDE94u);
    ctx->pc = 0x7CDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDE8Cu;
    // 0x7cde90: 0x8c4407b4  lw          $a0, 0x7B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CDE8Cu, 0x7CDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDE94u;
label_7cde94:
    // 0x7cde94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cde94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cde98:
    // 0x7cde98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7cde98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cde9c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x7cde9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cdea0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x7cdea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cdea4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7cdea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cdea8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cdea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cdeac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cdeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cdeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cdeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cdeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CDEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDEB4u;
        // 0x7cdeb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CDEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CDEBCu;
    // 0x7cdebc: 0x0  nop
    ctx->pc = 0x7cdebcu;
    // NOP
    ctx->pc = 0x7cdec0u;
}
} // namespace gh_mcport
