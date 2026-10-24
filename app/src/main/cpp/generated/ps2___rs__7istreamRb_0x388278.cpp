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

// Function: __rs__7istreamRb
// Address: 0x388278 - 0x3882d8
void ps2___rs__7istreamRb_0x388278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRb_0x388278");
#endif

    switch (ctx->pc) {
        case 0x38829cu: goto label_38829c;
        default: break;
    }

    ctx->pc = 0x388278u;

    // 0x388278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38827c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x388280: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x388280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x388284: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x388284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x388288: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x388288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38828c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38828cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388290: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x388290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x388294: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x388294u;
    SET_GPR_U32(ctx, 31, 0x38829Cu);
    ctx->pc = 0x388298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388294u;
    // 0x388298: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x388294u, 0x38829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38829Cu;
label_38829c:
    // 0x38829c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38829Cu;
    {
        const bool branch_taken_0x38829c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38829Cu;
        // 0x3882a0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38829c) {
            ctx->pc = 0x3882C0u;
            goto label_3882c0;
        }
    }
    ctx->pc = 0x3882A4u;
    // 0x3882a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3882A4u;
    {
        const bool branch_taken_0x3882a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882A4u;
        // 0x3882a8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882a4) {
            ctx->pc = 0x3882B4u;
            goto label_3882b4;
        }
    }
    ctx->pc = 0x3882ACu;
    // 0x3882ac: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x3882acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x3882b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3882b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3882b4:
    // 0x3882b4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3882b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3882b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3882b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3882bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3882bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3882c0:
    // 0x3882c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3882c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3882c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3882c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3882c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3882c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3882cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3882ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3882d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3882D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3882D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882D0u;
        // 0x3882d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3882D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3882D8u;
}
