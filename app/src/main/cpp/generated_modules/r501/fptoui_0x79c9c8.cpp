#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: fptoui
// Address: 0x79c9c8 - 0x79ca60
void fptoui_0x79c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x79c9c8");
#endif

    switch (ctx->pc) {
        case 0x79c9e0u: goto label_79c9e0;
        case 0x79c9f8u: goto label_79c9f8;
        default: break;
    }

    ctx->pc = 0x79c9c8u;

    // 0x79c9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c9cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79c9d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c9d4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79c9d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79c9d8: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C9D8u;
    SET_GPR_U32(ctx, 31, 0x79C9E0u);
    ctx->pc = 0x79C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C9D8u;
    // 0x79c9dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C9D8u, 0x79C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C9E0u;
label_79c9e0:
    // 0x79c9e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c9e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C9E8u;
    {
        const bool branch_taken_0x79c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9E8u;
        // 0x79c9ec: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9e8) {
            ctx->pc = 0x79C9F8u;
            goto label_79c9f8;
        }
    }
    ctx->pc = 0x79C9F0u;
    // 0x79c9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C9F0u;
    {
        const bool branch_taken_0x79c9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9F0u;
        // 0x79c9f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9f0) {
            ctx->pc = 0x79CA00u;
            goto label_79ca00;
        }
    }
    ctx->pc = 0x79C9F8u;
label_79c9f8:
    // 0x79c9f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79C9F8u;
    {
        const bool branch_taken_0x79c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9F8u;
        // 0x79c9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9f8) {
            ctx->pc = 0x79CA54u;
            goto label_79ca54;
        }
    }
    ctx->pc = 0x79CA00u;
label_79ca00:
    // 0x79ca00: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79CA00u;
    {
        const bool branch_taken_0x79ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA00u;
        // 0x79ca04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca00) {
            ctx->pc = 0x79CA54u;
            goto label_79ca54;
        }
    }
    ctx->pc = 0x79CA08u;
    // 0x79ca08: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79ca0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79CA0Cu;
    {
        const bool branch_taken_0x79ca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA0Cu;
        // 0x79ca10: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca0c) {
            ctx->pc = 0x79CA24u;
            goto label_79ca24;
        }
    }
    ctx->pc = 0x79CA14u;
    // 0x79ca14: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79CA14u;
    {
        const bool branch_taken_0x79ca14 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA14u;
        // 0x79ca18: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca14) {
            ctx->pc = 0x79C9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c9f8;
        }
    }
    ctx->pc = 0x79CA1Cu;
    // 0x79ca1c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79CA1Cu;
    {
        const bool branch_taken_0x79ca1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ca1c) {
            ctx->pc = 0x79CA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CA1Cu;
            // 0x79ca20: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CA30u;
            goto label_79ca30;
        }
    }
    ctx->pc = 0x79CA24u;
label_79ca24:
    // 0x79ca24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79ca28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79CA28u;
    {
        const bool branch_taken_0x79ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA28u;
        // 0x79ca2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca28) {
            ctx->pc = 0x79CA54u;
            goto label_79ca54;
        }
    }
    ctx->pc = 0x79CA30u;
label_79ca30:
    // 0x79ca30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79CA30u;
    {
        const bool branch_taken_0x79ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ca30) {
            ctx->pc = 0x79CA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CA30u;
            // 0x79ca34: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CA48u;
            goto label_79ca48;
        }
    }
    ctx->pc = 0x79CA38u;
    // 0x79ca38: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79ca3c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x79ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x79ca40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79CA40u;
    {
        const bool branch_taken_0x79ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA40u;
        // 0x79ca44: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca40) {
            ctx->pc = 0x79CA54u;
            goto label_79ca54;
        }
    }
    ctx->pc = 0x79CA48u;
label_79ca48:
    // 0x79ca48: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79ca4c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x79ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79ca50: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x79ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_79ca54:
    // 0x79ca54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ca58: 0x3e00008  jr          $ra
    ctx->pc = 0x79CA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA58u;
        // 0x79ca5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CA60u;
}
} // namespace gh_r501
