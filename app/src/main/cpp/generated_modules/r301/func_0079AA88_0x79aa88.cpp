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
// Function: func_0079AA88
// Address: 0x79aa88 - 0x79ab48
void func_0079AA88_0x79aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AA88_0x79aa88");
#endif

    switch (ctx->pc) {
        case 0x79aaacu: goto label_79aaac;
        case 0x79aad0u: goto label_79aad0;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab38u: goto label_79ab38;
        default: break;
    }

    ctx->pc = 0x79aa88u;

    // 0x79aa88: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79aa8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79aa90: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa94: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79aa98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79aa9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aaa0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79aaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaa4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AAA4u;
    SET_GPR_U32(ctx, 31, 0x79AAACu);
    ctx->pc = 0x79AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAA4u;
    // 0x79aaa8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AAA4u, 0x79AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAACu;
label_79aaac:
    // 0x79aaac: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79aab0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79aab4: 0x8064de18  lb          $a0, -0x21E8($v1)
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79DE18u));
    // 0x79aab8: 0x2466de18  addiu       $a2, $v1, -0x21E8
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958616));
    // 0x79aabc: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79aac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aac4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AAC4u;
    {
        const bool branch_taken_0x79aac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC4u;
        // 0x79aac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac4) {
            ctx->pc = 0x79AAF8u;
            goto label_79aaf8;
        }
    }
    ctx->pc = 0x79AACCu;
    // 0x79aacc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79aad0:
    // 0x79aad0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79aad4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79aadc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79aae0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79aae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79aae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AAE4u;
    {
        const bool branch_taken_0x79aae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE4u;
        // 0x79aae8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aae4) {
            ctx->pc = 0x79AAF8u;
            goto label_79aaf8;
        }
    }
    ctx->pc = 0x79AAECu;
    // 0x79aaec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aaf0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AAF0u;
    {
        const bool branch_taken_0x79aaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aaf0) {
            ctx->pc = 0x79AAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AAF0u;
            // 0x79aaf4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AAF8u;
label_79aaf8:
    // 0x79aaf8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AAF8u;
    SET_GPR_U32(ctx, 31, 0x79AB00u);
    ctx->pc = 0x79AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAF8u;
    // 0x79aafc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AAF8u, 0x79AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79AB00u;
    {
        const bool branch_taken_0x79ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB00u;
        // 0x79ab04: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab00) {
            ctx->pc = 0x79AB2Cu;
            goto label_79ab2c;
        }
    }
    ctx->pc = 0x79AB08u;
    // 0x79ab08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79ab08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab0c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ab10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ab14: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x79ab18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ab18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ab1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ab20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab24: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79AB24u;
    SET_GPR_U32(ctx, 31, 0x79AB2Cu);
    ctx->pc = 0x79AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB24u;
    // 0x79ab28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79AB24u, 0x79AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB2Cu;
label_79ab2c:
    // 0x79ab2c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79ab30: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AB30u;
    SET_GPR_U32(ctx, 31, 0x79AB38u);
    ctx->pc = 0x79AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB30u;
    // 0x79ab34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AB30u, 0x79AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB38u;
label_79ab38:
    // 0x79ab38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ab38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ab3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB40u;
        // 0x79ab44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB48u;
}
} // namespace gh_r301
