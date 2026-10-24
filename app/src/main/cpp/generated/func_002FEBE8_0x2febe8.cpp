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

// Function: func_002FEBE8
// Address: 0x2febe8 - 0x2fec30
void func_002FEBE8_0x2febe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FEBE8_0x2febe8");
#endif

    ctx->pc = 0x2febe8u;

    // 0x2febe8: 0x9482022c  lhu         $v0, 0x22C($a0)
    ctx->pc = 0x2febe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x2febec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEBECu;
    {
        const bool branch_taken_0x2febec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBECu;
        // 0x2febf0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febec) {
            ctx->pc = 0x2FEBFCu;
            goto label_2febfc;
        }
    }
    ctx->pc = 0x2FEBF4u;
    // 0x2febf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBF4u;
        // 0x2febf8: 0xa485022c  sh          $a1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEBFCu;
label_2febfc:
    // 0x2febfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fec00: 0x94870224  lhu         $a3, 0x224($a0)
    ctx->pc = 0x2fec00u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x2fec04: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEC04u;
    {
        const bool branch_taken_0x2fec04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC04u;
        // 0x2fec08: 0x471023  subu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec04) {
            ctx->pc = 0x2FEC1Cu;
            goto label_2fec1c;
        }
    }
    ctx->pc = 0x2FEC0Cu;
    // 0x2fec0c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEC0Cu;
    {
        const bool branch_taken_0x2fec0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC0Cu;
        // 0x2fec10: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec0c) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEC14u;
    // 0x2fec14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEC14u;
    {
        const bool branch_taken_0x2fec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fec14) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEC1Cu;
label_2fec1c:
    // 0x2fec1c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2fec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2fec20: 0xa482022c  sh          $v0, 0x22C($a0)
    ctx->pc = 0x2fec20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 2));
label_2fec24:
    // 0x2fec24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEC2Cu;
    // 0x2fec2c: 0x0  nop
    ctx->pc = 0x2fec2cu;
    // NOP
    ctx->pc = 0x2fec30u;
}
