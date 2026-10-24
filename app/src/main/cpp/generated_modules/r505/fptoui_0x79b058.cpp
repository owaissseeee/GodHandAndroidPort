#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: fptoui
// Address: 0x79b058 - 0x79b0f0
void fptoui_0x79b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x79b058");
#endif

    switch (ctx->pc) {
        case 0x79b070u: goto label_79b070;
        case 0x79b088u: goto label_79b088;
        default: break;
    }

    ctx->pc = 0x79b058u;

    // 0x79b058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b05c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b060: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b064: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79b064u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79b068: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79B068u;
    SET_GPR_U32(ctx, 31, 0x79B070u);
    ctx->pc = 0x79B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B068u;
    // 0x79b06c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79B068u, 0x79B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B070u;
label_79b070:
    // 0x79b070: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b074: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79b078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B078u;
    {
        const bool branch_taken_0x79b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B078u;
        // 0x79b07c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b078) {
            ctx->pc = 0x79B088u;
            goto label_79b088;
        }
    }
    ctx->pc = 0x79B080u;
    // 0x79b080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B080u;
    {
        const bool branch_taken_0x79b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B080u;
        // 0x79b084: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b080) {
            ctx->pc = 0x79B090u;
            goto label_79b090;
        }
    }
    ctx->pc = 0x79B088u;
label_79b088:
    // 0x79b088: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79B088u;
    {
        const bool branch_taken_0x79b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B088u;
        // 0x79b08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b088) {
            ctx->pc = 0x79B0E4u;
            goto label_79b0e4;
        }
    }
    ctx->pc = 0x79B090u;
label_79b090:
    // 0x79b090: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B090u;
    {
        const bool branch_taken_0x79b090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B090u;
        // 0x79b094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b090) {
            ctx->pc = 0x79B0E4u;
            goto label_79b0e4;
        }
    }
    ctx->pc = 0x79B098u;
    // 0x79b098: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79b09c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B09Cu;
    {
        const bool branch_taken_0x79b09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B09Cu;
        // 0x79b0a0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b09c) {
            ctx->pc = 0x79B0B4u;
            goto label_79b0b4;
        }
    }
    ctx->pc = 0x79B0A4u;
    // 0x79b0a4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B0A4u;
    {
        const bool branch_taken_0x79b0a4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A4u;
        // 0x79b0a8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0a4) {
            ctx->pc = 0x79B088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b088;
        }
    }
    ctx->pc = 0x79B0ACu;
    // 0x79b0ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B0ACu;
    {
        const bool branch_taken_0x79b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b0ac) {
            ctx->pc = 0x79B0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0ACu;
            // 0x79b0b0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B0C0u;
            goto label_79b0c0;
        }
    }
    ctx->pc = 0x79B0B4u;
label_79b0b4:
    // 0x79b0b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79b0b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B0B8u;
    {
        const bool branch_taken_0x79b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B8u;
        // 0x79b0bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b8) {
            ctx->pc = 0x79B0E4u;
            goto label_79b0e4;
        }
    }
    ctx->pc = 0x79B0C0u;
label_79b0c0:
    // 0x79b0c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B0C0u;
    {
        const bool branch_taken_0x79b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b0c0) {
            ctx->pc = 0x79B0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0C0u;
            // 0x79b0c4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B0D8u;
            goto label_79b0d8;
        }
    }
    ctx->pc = 0x79B0C8u;
    // 0x79b0c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79b0cc: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x79b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x79b0d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B0D0u;
    {
        const bool branch_taken_0x79b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0D0u;
        // 0x79b0d4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0d0) {
            ctx->pc = 0x79B0E4u;
            goto label_79b0e4;
        }
    }
    ctx->pc = 0x79B0D8u;
label_79b0d8:
    // 0x79b0d8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79b0dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x79b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79b0e0: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x79b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_79b0e4:
    // 0x79b0e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B0F0u;
}
} // namespace gh_r505
