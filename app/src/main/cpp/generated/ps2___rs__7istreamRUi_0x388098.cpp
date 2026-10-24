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

// Function: __rs__7istreamRUi
// Address: 0x388098 - 0x3880f8
void ps2___rs__7istreamRUi_0x388098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRUi_0x388098");
#endif

    switch (ctx->pc) {
        case 0x3880bcu: goto label_3880bc;
        default: break;
    }

    ctx->pc = 0x388098u;

    // 0x388098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38809c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3880a0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x3880a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3880a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3880a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3880a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3880a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3880ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3880acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3880b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3880b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3880b4: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x3880B4u;
    SET_GPR_U32(ctx, 31, 0x3880BCu);
    ctx->pc = 0x3880B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3880B4u;
    // 0x3880b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x3880B4u, 0x3880BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3880BCu;
label_3880bc:
    // 0x3880bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3880BCu;
    {
        const bool branch_taken_0x3880bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3880C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880BCu;
        // 0x3880c0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880bc) {
            ctx->pc = 0x3880DCu;
            goto label_3880dc;
        }
    }
    ctx->pc = 0x3880C4u;
    // 0x3880c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3880C4u;
    {
        const bool branch_taken_0x3880c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3880C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880C4u;
        // 0x3880c8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880c4) {
            ctx->pc = 0x3880D4u;
            goto label_3880d4;
        }
    }
    ctx->pc = 0x3880CCu;
    // 0x3880cc: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x3880ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x3880d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3880d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3880d4:
    // 0x3880d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3880d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3880d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3880d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3880dc:
    // 0x3880dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3880dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3880e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3880e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3880e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3880e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3880e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3880e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3880ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3880ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880ECu;
        // 0x3880f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3880ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3880F4u;
    // 0x3880f4: 0x0  nop
    ctx->pc = 0x3880f4u;
    // NOP
    ctx->pc = 0x3880f8u;
}
