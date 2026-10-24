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
// Function: func_0079BBA8
// Address: 0x79bba8 - 0x79bc60
void func_0079BBA8_0x79bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BBA8_0x79bba8");
#endif

    switch (ctx->pc) {
        case 0x79bbd0u: goto label_79bbd0;
        case 0x79bc2cu: goto label_79bc2c;
        default: break;
    }

    ctx->pc = 0x79bba8u;

    // 0x79bba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bbac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79bbb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bbb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bbb8: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79bbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79bbbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79bbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbc0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x79BBC0u;
    {
        const bool branch_taken_0x79bbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBC0u;
        // 0x79bbc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbc0) {
            ctx->pc = 0x79BC44u;
            goto label_79bc44;
        }
    }
    ctx->pc = 0x79BBC8u;
    // 0x79bbc8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79bbcc: 0x0  nop
    ctx->pc = 0x79bbccu;
    // NOP
label_79bbd0:
    // 0x79bbd0: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x79BBD0u;
    {
        const bool branch_taken_0x79bbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bbd0) {
            ctx->pc = 0x79BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BBD0u;
            // 0x79bbd4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC3Cu;
            goto label_79bc3c;
        }
    }
    ctx->pc = 0x79BBD8u;
    // 0x79bbd8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79bbd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79bbdc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79bbdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79bbe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBE0u;
    {
        const bool branch_taken_0x79bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBE0u;
        // 0x79bbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbe0) {
            ctx->pc = 0x79BBF0u;
            goto label_79bbf0;
        }
    }
    ctx->pc = 0x79BBE8u;
    // 0x79bbe8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bbec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bbf0:
    // 0x79bbf0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79bbf4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79BBF4u;
    {
        const bool branch_taken_0x79bbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBF4u;
        // 0x79bbf8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbf4) {
            ctx->pc = 0x79BC38u;
            goto label_79bc38;
        }
    }
    ctx->pc = 0x79BBFCu;
    // 0x79bbfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBFCu;
    {
        const bool branch_taken_0x79bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBFCu;
        // 0x79bc00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbfc) {
            ctx->pc = 0x79BC0Cu;
            goto label_79bc0c;
        }
    }
    ctx->pc = 0x79BC04u;
    // 0x79bc04: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bc08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bc0c:
    // 0x79bc0c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79bc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79bc10: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x79BC10u;
    {
        const bool branch_taken_0x79bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bc10) {
            ctx->pc = 0x79BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC10u;
            // 0x79bc14: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC3Cu;
            goto label_79bc3c;
        }
    }
    ctx->pc = 0x79BC18u;
    // 0x79bc18: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x79bc18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x79bc1c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BC1Cu;
    {
        const bool branch_taken_0x79bc1c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x79bc1c) {
            ctx->pc = 0x79BC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC1Cu;
            // 0x79bc20: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC3Cu;
            goto label_79bc3c;
        }
    }
    ctx->pc = 0x79BC24u;
    // 0x79bc24: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79BC24u;
    SET_GPR_U32(ctx, 31, 0x79BC2Cu);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79BC24u, 0x79BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC2Cu;
label_79bc2c:
    // 0x79bc2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79bc30: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79bc34: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79bc34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79bc38:
    // 0x79bc38: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79bc38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79bc3c:
    // 0x79bc3c: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x79BC3Cu;
    {
        const bool branch_taken_0x79bc3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bc3c) {
            ctx->pc = 0x79BC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC3Cu;
            // 0x79bc40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bbd0;
        }
    }
    ctx->pc = 0x79BC44u;
label_79bc44:
    // 0x79bc44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79bc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79bc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x79BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC54u;
        // 0x79bc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BC5Cu;
    // 0x79bc5c: 0x0  nop
    ctx->pc = 0x79bc5cu;
    // NOP
    ctx->pc = 0x79bc60u;
}
} // namespace gh_r040
