#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fptosi
// Address: 0x79bbc8 - 0x79bc58
void fptosi_0x79bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptosi_0x79bbc8");
#endif

    switch (ctx->pc) {
        case 0x79bbe0u: goto label_79bbe0;
        case 0x79bbf8u: goto label_79bbf8;
        default: break;
    }

    ctx->pc = 0x79bbc8u;

    // 0x79bbc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bbcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79bbd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bbd4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79bbd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79bbd8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BBD8u;
    SET_GPR_U32(ctx, 31, 0x79BBE0u);
    ctx->pc = 0x79BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBD8u;
    // 0x79bbdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BBD8u, 0x79BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBE0u;
label_79bbe0:
    // 0x79bbe0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bbe4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79bbe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBE8u;
    {
        const bool branch_taken_0x79bbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBE8u;
        // 0x79bbec: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbe8) {
            ctx->pc = 0x79BBF8u;
            goto label_79bbf8;
        }
    }
    ctx->pc = 0x79BBF0u;
    // 0x79bbf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBF0u;
    {
        const bool branch_taken_0x79bbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBF0u;
        // 0x79bbf4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbf0) {
            ctx->pc = 0x79BC00u;
            goto label_79bc00;
        }
    }
    ctx->pc = 0x79BBF8u;
label_79bbf8:
    // 0x79bbf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79BBF8u;
    {
        const bool branch_taken_0x79bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBF8u;
        // 0x79bbfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbf8) {
            ctx->pc = 0x79BC48u;
            goto label_79bc48;
        }
    }
    ctx->pc = 0x79BC00u;
label_79bc00:
    // 0x79bc00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BC00u;
    {
        const bool branch_taken_0x79bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC00u;
        // 0x79bc04: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc00) {
            ctx->pc = 0x79BC18u;
            goto label_79bc18;
        }
    }
    ctx->pc = 0x79BC08u;
    // 0x79bc08: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79BC08u;
    {
        const bool branch_taken_0x79bc08 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC08u;
        // 0x79bc0c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc08) {
            ctx->pc = 0x79BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bbf8;
        }
    }
    ctx->pc = 0x79BC10u;
    // 0x79bc10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BC10u;
    {
        const bool branch_taken_0x79bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC10u;
        // 0x79bc14: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc10) {
            ctx->pc = 0x79BC30u;
            goto label_79bc30;
        }
    }
    ctx->pc = 0x79BC18u;
label_79bc18:
    // 0x79bc18: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bc1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79bc20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bc24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79bc28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79BC28u;
    {
        const bool branch_taken_0x79bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC28u;
        // 0x79bc2c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc28) {
            ctx->pc = 0x79BC48u;
            goto label_79bc48;
        }
    }
    ctx->pc = 0x79BC30u;
label_79bc30:
    // 0x79bc30: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79bc34: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79bc38: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bc3c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x79bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x79bc40: 0x22023  negu        $a0, $v0
    ctx->pc = 0x79bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79bc44: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x79bc44u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_79bc48:
    // 0x79bc48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC4Cu;
        // 0x79bc50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BC54u;
    // 0x79bc54: 0x0  nop
    ctx->pc = 0x79bc54u;
    // NOP
    ctx->pc = 0x79bc58u;
}
} // namespace gh_r022
