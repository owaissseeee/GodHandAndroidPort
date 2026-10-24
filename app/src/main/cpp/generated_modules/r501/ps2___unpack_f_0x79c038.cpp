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
// Function: __unpack_f
// Address: 0x79c038 - 0x79c0c8
void ps2___unpack_f_0x79c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x79c038");
#endif

    ctx->pc = 0x79c038u;

    // 0x79c038: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c03c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x79c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x79c040: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79c040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79c044: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x79c044u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x79c048: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x79c048u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x79c04c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79c04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79c050: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x79c050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79c054: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C054u;
    {
        const bool branch_taken_0x79c054 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C054u;
        // 0x79c058: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c054) {
            ctx->pc = 0x79C068u;
            goto label_79c068;
        }
    }
    ctx->pc = 0x79C05Cu;
    // 0x79c05c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c060: 0x3e00008  jr          $ra
    ctx->pc = 0x79C060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C060u;
        // 0x79c064: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C068u;
label_79c068:
    // 0x79c068: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x79c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79c06c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79C06Cu;
    {
        const bool branch_taken_0x79c06c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C06Cu;
        // 0x79c070: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c06c) {
            ctx->pc = 0x79C0A8u;
            goto label_79c0a8;
        }
    }
    ctx->pc = 0x79C074u;
    // 0x79c074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C074u;
    {
        const bool branch_taken_0x79c074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C074u;
        // 0x79c078: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c074) {
            ctx->pc = 0x79C088u;
            goto label_79c088;
        }
    }
    ctx->pc = 0x79C07Cu;
    // 0x79c07c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79c080: 0x3e00008  jr          $ra
    ctx->pc = 0x79C080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C080u;
        // 0x79c084: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C088u;
label_79c088:
    // 0x79c088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c08c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C08Cu;
    {
        const bool branch_taken_0x79c08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C08Cu;
        // 0x79c090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c08c) {
            ctx->pc = 0x79C09Cu;
            goto label_79c09c;
        }
    }
    ctx->pc = 0x79C094u;
    // 0x79c094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C094u;
    {
        const bool branch_taken_0x79c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C094u;
        // 0x79c098: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c094) {
            ctx->pc = 0x79C0A0u;
            goto label_79c0a0;
        }
    }
    ctx->pc = 0x79C09Cu;
label_79c09c:
    // 0x79c09c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79c0a0:
    // 0x79c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0A0u;
        // 0x79c0a4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0A8u;
label_79c0a8:
    // 0x79c0a8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x79c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x79c0ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79c0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79c0b0: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x79c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x79c0b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c0b8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x79c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x79c0bc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79c0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0C0u;
        // 0x79c0c4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0C8u;
}
} // namespace gh_r501
