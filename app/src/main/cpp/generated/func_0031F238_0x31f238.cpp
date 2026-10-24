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

// Function: func_0031F238
// Address: 0x31f238 - 0x31f288
void func_0031F238_0x31f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F238_0x31f238");
#endif

    switch (ctx->pc) {
        case 0x31f25cu: goto label_31f25c;
        case 0x31f274u: goto label_31f274;
        default: break;
    }

    ctx->pc = 0x31f238u;

    // 0x31f238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f23c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31f240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f244: 0x8c626658  lw          $v0, 0x6658($v1)
    ctx->pc = 0x31f244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786658u));
    // 0x31f248: 0x24706658  addiu       $s0, $v1, 0x6658
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26200));
    // 0x31f24c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F24Cu;
    {
        const bool branch_taken_0x31f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F24Cu;
        // 0x31f250: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f24c) {
            ctx->pc = 0x31F274u;
            goto label_31f274;
        }
    }
    ctx->pc = 0x31F254u;
    // 0x31f254: 0xc0c7cb0  jal         func_31F2C0
    ctx->pc = 0x31F254u;
    SET_GPR_U32(ctx, 31, 0x31F25Cu);
    ctx->pc = 0x31F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F2C0u, 0x31F254u, 0x31F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F25Cu;
label_31f25c:
    // 0x31f25c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f260: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x31f264: 0x24a51060  addiu       $a1, $a1, 0x1060
    ctx->pc = 0x31f264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
    // 0x31f268: 0x24c66648  addiu       $a2, $a2, 0x6648
    ctx->pc = 0x31f268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26184));
    // 0x31f26c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31F26Cu;
    SET_GPR_U32(ctx, 31, 0x31F274u);
    ctx->pc = 0x31F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F26Cu;
    // 0x31f270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31F26Cu, 0x31F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F274u;
label_31f274:
    // 0x31f274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f280: 0x3e00008  jr          $ra
    ctx->pc = 0x31F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F280u;
        // 0x31f284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F288u;
}
