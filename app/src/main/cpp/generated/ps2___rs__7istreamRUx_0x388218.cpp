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

// Function: __rs__7istreamRUx
// Address: 0x388218 - 0x388278
void ps2___rs__7istreamRUx_0x388218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRUx_0x388218");
#endif

    switch (ctx->pc) {
        case 0x38823cu: goto label_38823c;
        default: break;
    }

    ctx->pc = 0x388218u;

    // 0x388218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38821c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x388220: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x388220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x388224: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x388224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x388228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x388228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38822c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38822cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x388230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x388234: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x388234u;
    SET_GPR_U32(ctx, 31, 0x38823Cu);
    ctx->pc = 0x388238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388234u;
    // 0x388238: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x388234u, 0x38823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38823Cu;
label_38823c:
    // 0x38823c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38823Cu;
    {
        const bool branch_taken_0x38823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38823Cu;
        // 0x388240: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38823c) {
            ctx->pc = 0x38825Cu;
            goto label_38825c;
        }
    }
    ctx->pc = 0x388244u;
    // 0x388244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388244u;
    {
        const bool branch_taken_0x388244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388244u;
        // 0x388248: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388244) {
            ctx->pc = 0x388254u;
            goto label_388254;
        }
    }
    ctx->pc = 0x38824Cu;
    // 0x38824c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x38824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x388250: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x388250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_388254:
    // 0x388254: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x388254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388258: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x388258u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_38825c:
    // 0x38825c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38825cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388260: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x388260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388264: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388268: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38826c: 0x3e00008  jr          $ra
    ctx->pc = 0x38826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38826Cu;
        // 0x388270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388274u;
    // 0x388274: 0x0  nop
    ctx->pc = 0x388274u;
    // NOP
    ctx->pc = 0x388278u;
}
