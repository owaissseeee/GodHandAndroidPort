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

// Function: __rs__7istreamRi
// Address: 0x388038 - 0x388098
void ps2___rs__7istreamRi_0x388038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRi_0x388038");
#endif

    switch (ctx->pc) {
        case 0x38805cu: goto label_38805c;
        default: break;
    }

    ctx->pc = 0x388038u;

    // 0x388038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38803c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x388040: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x388040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x388044: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x388044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x388048: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x388048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38804c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388050: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x388050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x388054: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x388054u;
    SET_GPR_U32(ctx, 31, 0x38805Cu);
    ctx->pc = 0x388058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388054u;
    // 0x388058: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x388054u, 0x38805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38805Cu;
label_38805c:
    // 0x38805c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38805Cu;
    {
        const bool branch_taken_0x38805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38805Cu;
        // 0x388060: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38805c) {
            ctx->pc = 0x38807Cu;
            goto label_38807c;
        }
    }
    ctx->pc = 0x388064u;
    // 0x388064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388064u;
    {
        const bool branch_taken_0x388064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388064u;
        // 0x388068: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388064) {
            ctx->pc = 0x388074u;
            goto label_388074;
        }
    }
    ctx->pc = 0x38806Cu;
    // 0x38806c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x38806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x388070: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x388070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_388074:
    // 0x388074: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x388074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388078: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x388078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38807c:
    // 0x38807c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38807cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x388080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388084: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388088: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38808c: 0x3e00008  jr          $ra
    ctx->pc = 0x38808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38808Cu;
        // 0x388090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388094u;
    // 0x388094: 0x0  nop
    ctx->pc = 0x388094u;
    // NOP
    ctx->pc = 0x388098u;
}
