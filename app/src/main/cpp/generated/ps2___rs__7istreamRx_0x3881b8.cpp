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

// Function: __rs__7istreamRx
// Address: 0x3881b8 - 0x388218
void ps2___rs__7istreamRx_0x3881b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRx_0x3881b8");
#endif

    switch (ctx->pc) {
        case 0x3881dcu: goto label_3881dc;
        default: break;
    }

    ctx->pc = 0x3881b8u;

    // 0x3881b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3881b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3881bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3881bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3881c0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x3881c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3881c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3881c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3881c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3881c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3881cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3881ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3881d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3881d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3881d4: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x3881D4u;
    SET_GPR_U32(ctx, 31, 0x3881DCu);
    ctx->pc = 0x3881D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3881D4u;
    // 0x3881d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x3881D4u, 0x3881DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3881DCu;
label_3881dc:
    // 0x3881dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3881DCu;
    {
        const bool branch_taken_0x3881dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3881E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881DCu;
        // 0x3881e0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3881dc) {
            ctx->pc = 0x3881FCu;
            goto label_3881fc;
        }
    }
    ctx->pc = 0x3881E4u;
    // 0x3881e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3881E4u;
    {
        const bool branch_taken_0x3881e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3881E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881E4u;
        // 0x3881e8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3881e4) {
            ctx->pc = 0x3881F4u;
            goto label_3881f4;
        }
    }
    ctx->pc = 0x3881ECu;
    // 0x3881ec: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x3881ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x3881f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3881f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3881f4:
    // 0x3881f4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3881f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3881f8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x3881f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_3881fc:
    // 0x3881fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3881fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x388200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388204: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388208: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38820c: 0x3e00008  jr          $ra
    ctx->pc = 0x38820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38820Cu;
        // 0x388210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388214u;
    // 0x388214: 0x0  nop
    ctx->pc = 0x388214u;
    // NOP
    ctx->pc = 0x388218u;
}
