#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BAA8
// Address: 0x79baa8 - 0x79bb68
void func_0079BAA8_0x79baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BAA8_0x79baa8");
#endif

    switch (ctx->pc) {
        case 0x79bb2cu: goto label_79bb2c;
        default: break;
    }

    ctx->pc = 0x79baa8u;

    // 0x79baa8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79baac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79baacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79bab0: 0x8c44c804  lw          $a0, -0x37FC($v0)
    ctx->pc = 0x79bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C804u));
    // 0x79bab4: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x79bab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79bab8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x79BAB8u;
    {
        const bool branch_taken_0x79bab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAB8u;
        // 0x79babc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bab8) {
            ctx->pc = 0x79BB54u;
            goto label_79bb54;
        }
    }
    ctx->pc = 0x79BAC0u;
    // 0x79bac0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79bac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79bac8: 0x2442c620  addiu       $v0, $v0, -0x39E0
    ctx->pc = 0x79bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952480));
    // 0x79bacc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79baccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79bad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79bad4: 0x800008  jr          $a0
    ctx->pc = 0x79BAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79BADCu: goto label_79badc;
            case 0x79BAF0u: goto label_79baf0;
            case 0x79BB04u: goto label_79bb04;
            case 0x79BB24u: goto label_79bb24;
            case 0x79BB3Cu: goto label_79bb3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79BADCu;
label_79badc:
    // 0x79badc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79bae0: 0x8c44c800  lw          $a0, -0x3800($v0)
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79bae4: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x79bae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79bae8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79BAE8u;
    {
        const bool branch_taken_0x79bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAE8u;
        // 0x79baec: 0x2c630004  sltiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bae8) {
            ctx->pc = 0x79BB14u;
            goto label_79bb14;
        }
    }
    ctx->pc = 0x79BAF0u;
label_79baf0:
    // 0x79baf0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79baf4: 0x8c44c800  lw          $a0, -0x3800($v0)
    ctx->pc = 0x79baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79baf8: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x79baf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79bafc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79BAFCu;
    {
        const bool branch_taken_0x79bafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAFCu;
        // 0x79bb00: 0x2c630002  sltiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bafc) {
            ctx->pc = 0x79BB14u;
            goto label_79bb14;
        }
    }
    ctx->pc = 0x79BB04u;
label_79bb04:
    // 0x79bb04: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79bb08: 0x8c44c800  lw          $a0, -0x3800($v0)
    ctx->pc = 0x79bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79bb0c: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x79bb0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79bb10: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x79bb10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_79bb14:
    // 0x79bb14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79BB14u;
    {
        const bool branch_taken_0x79bb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB14u;
        // 0x79bb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb14) {
            ctx->pc = 0x79BB58u;
            goto label_79bb58;
        }
    }
    ctx->pc = 0x79BB1Cu;
    // 0x79bb1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79BB1Cu;
    {
        const bool branch_taken_0x79bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB1Cu;
        // 0x79bb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb1c) {
            ctx->pc = 0x79BB58u;
            goto label_79bb58;
        }
    }
    ctx->pc = 0x79BB24u;
label_79bb24:
    // 0x79bb24: 0xc1e6eda  jal         func_79BB68
    ctx->pc = 0x79BB24u;
    SET_GPR_U32(ctx, 31, 0x79BB2Cu);
    ctx->pc = 0x79BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BB68u, 0x79BB24u, 0x79BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB2Cu;
label_79bb2c:
    // 0x79bb2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BB2Cu;
    {
        const bool branch_taken_0x79bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB2Cu;
        // 0x79bb30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb2c) {
            ctx->pc = 0x79BB54u;
            goto label_79bb54;
        }
    }
    ctx->pc = 0x79BB34u;
    // 0x79bb34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79BB34u;
    {
        const bool branch_taken_0x79bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb34) {
            ctx->pc = 0x79BB5Cu;
            goto label_79bb5c;
        }
    }
    ctx->pc = 0x79BB3Cu;
label_79bb3c:
    // 0x79bb3c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79bb40: 0x8ca4c800  lw          $a0, -0x3800($a1)
    ctx->pc = 0x79bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79bb44: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x79bb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79bb48: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x79bb48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bb4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79BB4Cu;
    {
        const bool branch_taken_0x79bb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB4Cu;
        // 0x79bb50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb4c) {
            ctx->pc = 0x79BB58u;
            goto label_79bb58;
        }
    }
    ctx->pc = 0x79BB54u;
label_79bb54:
    // 0x79bb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79bb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb58:
    // 0x79bb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bb5c:
    // 0x79bb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB5Cu;
        // 0x79bb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB64u;
    // 0x79bb64: 0x0  nop
    ctx->pc = 0x79bb64u;
    // NOP
    ctx->pc = 0x79bb68u;
}
} // namespace gh_r040
