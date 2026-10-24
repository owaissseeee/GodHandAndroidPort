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

// Function: cMessDrawFont_isListedCode
// Address: 0x2b0eb8 - 0x2b0f20
void cMessDrawFont_isListedCode_0x2b0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_isListedCode_0x2b0eb8");
#endif

    switch (ctx->pc) {
        case 0x2b0ed8u: goto label_2b0ed8;
        case 0x2b0ee8u: goto label_2b0ee8;
        default: break;
    }

    ctx->pc = 0x2b0eb8u;

    // 0x2b0eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0ebc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b0ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b0ec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b0ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ec8: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2b0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b0ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0ed0: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B0ED0u;
    SET_GPR_U32(ctx, 31, 0x2B0ED8u);
    ctx->pc = 0x2B0ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0ED0u;
    // 0x2b0ed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B0ED0u, 0x2B0ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0ED8u;
label_2b0ed8:
    // 0x2b0ed8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x2b0ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0edc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b0edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b0ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ee4: 0x0  nop
    ctx->pc = 0x2b0ee4u;
    // NOP
label_2b0ee8:
    // 0x2b0ee8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b0ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0eec: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0EECu;
    {
        const bool branch_taken_0x2b0eec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0eec) {
            ctx->pc = 0x2B0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0EECu;
            // 0x2b0ef0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0EFCu;
            goto label_2b0efc;
        }
    }
    ctx->pc = 0x2B0EF4u;
    // 0x2b0ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0EF4u;
    {
        const bool branch_taken_0x2b0ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EF4u;
        // 0x2b0ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ef4) {
            ctx->pc = 0x2B0F0Cu;
            goto label_2b0f0c;
        }
    }
    ctx->pc = 0x2B0EFCu;
label_2b0efc:
    // 0x2b0efc: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x2b0efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b0f00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B0F00u;
    {
        const bool branch_taken_0x2b0f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F00u;
        // 0x2b0f04: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f00) {
            ctx->pc = 0x2B0EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0ee8;
        }
    }
    ctx->pc = 0x2B0F08u;
    // 0x2b0f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b0f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0f0c:
    // 0x2b0f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b0f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F14u;
        // 0x2b0f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0F1Cu;
    // 0x2b0f1c: 0x0  nop
    ctx->pc = 0x2b0f1cu;
    // NOP
    ctx->pc = 0x2b0f20u;
}
